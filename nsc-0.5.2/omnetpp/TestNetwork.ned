
import
    "TcpTestClient.ned",
    "NSC_TCP.ned";


module TestNetwork
    submodules:
        app1: TcpTestClient;
            display: "p=95,95;i=block/app";
        tcp1: NSC_TCP;
            display: "p=95,178;i=block/wheelbarrow";
        tcp2: NSC_TCP;
            display: "p=302,178;i=block/wheelbarrow";
        app2: TcpTestClient;
            display: "p=303,96;i=block/app";
    connections nocheck:
        app1.tcpOut --> tcp1.from_appl++;
        app1.tcpIn <-- tcp1.to_appl++;
        app2.tcpOut --> tcp2.from_appl++;
        app2.tcpIn <-- tcp2.to_appl++;

        tcp1.to_ip --> delay 1ms --> tcp2.from_ip;
        tcp1.from_ip <-- delay 1ms <-- tcp2.to_ip;
endmodule

network testNetwork : TestNetwork
endnetwork

