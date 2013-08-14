/*
  Network Simulation Cradle
  Copyright (C) 2003-2005 Sam Jansen

  This program is free software; you can redistribute it and/or modify it
  under the terms of the GNU General Public License as published by the Free
  Software Foundation; either version 2 of the License, or (at your option)
  any later version.

  This program is distributed in the hope that it will be useful, but WITHOUT
  ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
  FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
  more details.

  You should have received a copy of the GNU General Public License along
  with this program; if not, write to the Free Software Foundation, Inc., 59
  Temple Place, Suite 330, Boston, MA 02111-1307 USA
*/
/* $Id$ 
 * Useful functions to decode packets so we can print them out for debugging.
 */
#include <machine/param.h>

#include <sys/types.h>
#include <sys/socket.h>
#include <sys/param.h>
#include <sys/proc.h>

#include <netinet/in_systm.h> /* for n_long */
#include <netinet/in.h>
#include <netinet/ip.h>
#include <netinet/tcp.h>

#include "support/support.h"
#include "num_stacks.h"

#if 0
struct ip {
        u_int   ip_v:4,                 /* version */
                ip_hl:4;                /* header length */
        u_char  ip_tos;                 /* type of service */
        u_short ip_len;                 /* total length */
        u_short ip_id;                  /* identification */
        u_short ip_off;                 /* fragment offset field */
        u_char  ip_ttl;                 /* time to live */
        u_char  ip_p;                   /* protocol */
        u_short ip_sum;                 /* checksum */
        struct  in_addr ip_src,ip_dst;  /* source and dest address */
} __attribute__((__packed__));
#endif

extern int get_stack_id();

char *tos2str(unsigned char ip_tos)
{
	static char tosp[] = "00000000";
	int i;

	for(i = 0; i < 8; i++)
		if(ip_tos & (1 << i))
			tosp[i] = '1';
		else
			tosp[i] = '0';

	return tosp;
}

char *protocol2str(unsigned char ip_p)
{
	switch(ip_p) {
	case 1: return "ICMP";
	case 2: return "IGMP";
	case 6: return "TCP";
	case 9: return "IGRP";
	case 17: return "UDP";
	case 47: return "GRE";
	case 50: return "ESP";
	case 51: return "AH";
	case 88: return "EIGRP";
	case 89: return "OSPF";
	case 115: return "L2TP";
	};
	return "(Unknown Protocol)";
}

void decode_tcp(void *packet_data, int hdr_len);

void decode_packet(void *packet_data)
{
	struct ip *ip_hdr = (struct ip *)packet_data;

	// hd short int
	// hhd char
	printf("%d] "
		"IPv%hd HL:%hhd TOS:%s TL:%hu ID:%hu Off:%hu TTL:%hhu %s\n"
		"Sum:%hu ",
		get_stack_id(),
		(short)ip_hdr->ip_v, (short)ip_hdr->ip_hl, tos2str(ip_hdr->ip_tos),
		ntohs(ip_hdr->ip_len), ntohs(ip_hdr->ip_id), ntohs(ip_hdr->ip_off),
		ip_hdr->ip_ttl, protocol2str(ip_hdr->ip_p), ntohs(ip_hdr->ip_sum)
		);
	printf("%s -> ", inet_ntoa(ip_hdr->ip_src));
	printf("%s\n", inet_ntoa(ip_hdr->ip_dst));

	if(ip_hdr->ip_p == 6)
		decode_tcp((unsigned char *)packet_data + (ip_hdr->ip_hl * 4), 
				ntohs(ip_hdr->ip_len) - (ip_hdr->ip_hl * 4));
}

void short_decode(void *p)
{
	struct ip *ip_hdr = (struct ip *)p;

    printf(" id:%4d %s -> ",
            ntohs(ip_hdr->ip_id),
            inet_ntoa(ip_hdr->ip_src));
    printf("%s\n", inet_ntoa(ip_hdr->ip_dst));
}

/*
struct tcphdr {
        u_short th_sport;               
        u_short th_dport;        
        tcp_seq th_seq;           
 		tcp_seq th_ack;             
#if BYTE_ORDER == LITTLE_ENDIAN
        u_int   th_x2:4,            
                th_off:4;           
#endif
#if BYTE_ORDER == BIG_ENDIAN
        u_int   th_off:4,          
                th_x2:4;       
#endif
        u_char  th_flags;
#define TH_FIN  0x01
#define TH_SYN  0x02
#define TH_RST  0x04
#define TH_PUSH 0x08
#define TH_ACK  0x10
#define TH_URG  0x20
#define TH_ECE  0x40
#define TH_CWR  0x80
#define TH_FLAGS        (TH_FIN|TH_SYN|TH_RST|TH_ACK|TH_URG|TH_ECE|TH_CWR)

        u_short th_win;              
        u_short th_sum;             
        u_short th_urp;             
};
*/
char *flags2str(unsigned char flags)
{
	static char buf[512];
	buf[0]='\0';
	if(flags & TH_FIN) strcat(buf, " FIN");
	if(flags & TH_SYN) strcat(buf, " SYN");
	if(flags & TH_RST) strcat(buf, " RST");
	if(flags & TH_PUSH) strcat(buf, " PUSH");
	if(flags & TH_ACK) strcat(buf, " ACK");
	if(flags & TH_URG) strcat(buf, " URG");
	if(flags & TH_ECE) strcat(buf, " ECE");
	if(flags & TH_CWR) strcat(buf, " CWR");
	
	return buf;
}

void decode_tcp(void *packet_data, int hdr_len)
{
	struct tcphdr *tcp = (struct tcphdr *)packet_data;

	printf("Src port:%hu Dst port:%hu Seq:%u Ack:%u Off:%hhu %s\n",
		ntohs(tcp->th_sport), ntohs(tcp->th_dport), ntohl(tcp->th_seq),
		ntohl(tcp->th_ack), (unsigned char)tcp->th_off, 
		flags2str(tcp->th_flags)
		);
	printf("Win:%hu Sum:%hu Urg:%hu\n",
		ntohs(tcp->th_win), ntohs(tcp->th_sum), ntohs(tcp->th_urp));

	if(hdr_len > 20) {
		unsigned char *opt = (unsigned char *)packet_data + 20;

		printf("Options: ");
		while(
				(*opt != 0) && 
				((unsigned int)opt - (unsigned int)packet_data < tcp->th_off*4)
				) {
			unsigned char len = opt[1];
			if(len == 0 && opt[0] != 1) {
				printf("0-length option(%u)\n", opt[0]);
				break;
			}

			len -= 2;

			switch(*opt) {
			case 1: printf("No-Op "); opt++; break;
			case 2: {	unsigned short mss = 0;
						//assert(len == 2);
						if(len == 2) {
							mss = (opt[2] << 8) + (opt[3]);
							printf("MSS(%u) ", mss);
						} else {
							printf("MSS:l:%u ", len);
						}
						opt += opt[1];
						break;
					}
			case 3: {	unsigned char ws = 0;
						assert(len == 1);
						ws = opt[2];
						printf("WS(%u) ", ws);
						opt += opt[1];
						break;
					}
			case 4: {	printf("SACK-Permitted "); 
						opt += opt[1];
						break; 
					}
			case 5: {	printf("SACK "); 
						opt += opt[1];
						break; 
					}
			case 8: {	
						int i;
						printf("Timestamp(");
						for(i = 0; i < len; i++)
							printf("%02x", opt[2+i]);
						printf(") ");
						opt += opt[1];
						break;
					}
			default:{	printf("%u:%u ", opt[0], opt[1]); 
						opt += opt[1];
						break;
					}
			};

		}
		printf("\n");
	}

}
