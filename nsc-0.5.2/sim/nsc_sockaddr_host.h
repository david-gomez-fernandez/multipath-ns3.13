#ifndef NSC_SIM_SOCKADDR_HOST_H_
#define NSC_SIM_SOCKADDR_HOST_H_

#include "nsc_sockaddr.h"
#ifdef __cplusplus
extern "C" {
#endif
/*
 * must only be called from glue code (sim_support.cpp) with the
 * HOST definition of struct sockaddr and friends.
 */
#include <sys/socket.h>
#include <netinet/in.h>
#include <string.h>

static void nsc_convert_nscsockaddr_in(const struct nsc_sockaddr_in *from, struct sockaddr_in *res, size_t *len)
{
	*len = sizeof(*res);
	res->sin_addr.s_addr = from->sin_addr;
	res->sin_port = from->sin_port;
}


/*
 * convert a nsc_sockaddr_* struct to a matching host struct sockaddr* type.
 * *res_len is updated to hold the size of the actual sockaddr, ie. sizeof(sockaddr_in) for AF_INET.
 */
static void nsc_convert_nscsockaddr(const struct nsc_sockaddr *from, struct sockaddr *res, size_t *len)
{
	/*
	 * we could use a struct sockaddr_storage here, but to ease
	 * porting to stacks without sockaddr_storage we just use
	 * long[]. This is only temporary scratch space to store
	 * a sockaddr_in (or whatever AF_ aequivalent is required).
	 */
	unsigned long data[sizeof(*from)/sizeof(unsigned long)];
	size_t datalen = sizeof(data);
	struct sockaddr *sa;
	unsigned short af = from->sa_family;

	sa = (struct sockaddr*) data;
	sa->sa_family = af;

	switch (af) {
	case AF_INET:
		nsc_convert_nscsockaddr_in((const struct nsc_sockaddr_in*) from, (struct sockaddr_in*) data, &datalen);
		break;
	default:
		assert(0);
	}

	*len = datalen < *len ? datalen : *len;
	if (*len)
		memcpy(res, data, *len);
}

#ifdef __cplusplus
} //extern "C"
#endif
#endif

