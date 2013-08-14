# A simple example script of using NSC. As this example shows, they are a
# drop-in replacement for other TCP models in ns-2.

# The different NSC stacks available:
# Or use normal ns-2 stacks
set stacks { 
    Agent/TCP/NSC/Linux24 
    Agent/TCP/NSC/FreeBSD5 
    Agent/TCP/NSC/lwIP 
    Agent/TCP/NSC/OpenBSD3 
    Agent/TCP/NSC/Linux26 
    Agent/TCP/Sack1
    Agent/TCPSink/Sack1/DelAck
}

set opt(stack0)     [lindex $stacks 0]      ;# The type of TCP for agents(0)
set opt(stack1)     [lindex $stacks 1]      ;# The type of TCP for agents(1)
set opt(pdump0)     0   ;# Whether to generate a PCAP packet dump for agents(0)
set opt(pdump1)     0   ;# Whether to generate a PCAP packet dump for agents(1)
set opt(time)       40  ;# How long to simulate for
set opt(mtu)        1500 ;# Maximum Transfer Unit for the stacks
set opt(router_buf) 10  ;# Size of the buffer on the router in this sim
set opt(nam_trace)  0   ;# Whether to enable NAM tracing
set opt(ns_trace)   0   ;# Whether to turn on tracing

# ---------------------------------------------------------------------------

# The following code taken from the simulation script:
# # Simulation scenarios for modeling wireless links for transport protocols
# # Andrei Gurtov
# # ICSI/University of Helsinki
#
proc getopt {argc argv} {
        global opt
        for {set i 0} {$i < $argc} {incr i} {
                set arg [lindex $argv $i]
                if {[string range $arg 0 0] != "-"} continue
                set name [string range $arg 1 end]
                set opt($name) [lindex $argv [expr $i+1]]
                puts "opt($name): $opt($name)" 
        }
}

getopt $argc $argv


# Don't want to use ns-2's default of an MTU of 1000
Agent/TCP set packetSize_ $opt(mtu)

set ns [new Simulator]

if {$opt(nam_trace)} { 
    global nam_fd
    set nam_fd [open trace.nam w]
    $ns namtrace-all $nam_fd 
}
if {$opt(ns_trace)} { 
    global tr_fd
    set tr_fd [open trace.tr w]
    $ns trace-all $tr_fd 
}


for {set i 0} {$i < 4} {incr i} {
    set nodes($i) [$ns node]
}

$ns duplex-link $nodes(0) $nodes(1) 100Mb 0.0001ms DropTail
$ns simplex-link $nodes(1) $nodes(2) 2Mb 40ms DropTail
$ns simplex-link $nodes(2) $nodes(1) 128Kb 40ms DropTail
$ns duplex-link $nodes(2) $nodes(3) 100Mb 0.0001ms DropTail

$ns queue-limit $nodes(1) $nodes(2) $opt(router_buf)

set agents(0) [new $opt(stack0)]
set agents(1) [new $opt(stack1)]

# If we generate packet dumps, files named such as
#    node-linux24-0.pcap
# will be created. They will be in PCAP format, readable by programs such as
# tcpdump, ethereal and tcptrace. You can view it by eg.
#    /usr/sbin/tcpdump -nr ./node-linux24-0.pcap | less
if {$opt(pdump0)} {catch {$agents(0) enable-packet-dump}}
if {$opt(pdump1)} {catch {$agents(1) enable-packet-dump}}

$ns attach-agent $nodes(0) $agents(0)
$ns attach-agent $nodes(3) $agents(1)

$ns connect $agents(0) $agents(1)

# Generally works without this. However, having this here means we can use
# FullTcp models in this simulation
catch { $agents(1) listen }

set app [new Application/Traffic/CBR]
$app set rate_ 10Mb
# The following doesn't matter too much, our real TCP stacks do proper
# segmentation of course!
$app set packetSize_ [expr $opt(mtu) - 40]
$app attach-agent $agents(0)

$ns at 0.0 "$app start"
$ns at $opt(time) "$app stop"
$ns after $opt(time) "finish; exit"

proc finish {} {
    global agents opt ns

    $ns flush-trace

    if {$opt(nam_trace)} {
        global nam_fd
        close $nam_fd
    }
    if {$opt(ns_trace)} {
        global tr_fd
        close $tr_fd
    }

    puts "$opt(stack0) -> $opt(stack1)"
    # The following might fail because FullTcp doesn't implement bytes_
    catch {
    puts "[$agents(1) set bytes_] B in $opt(time) s ([expr [$agents(1) set bytes_] / $opt(time)] B/s)"
    }
}

$ns run
