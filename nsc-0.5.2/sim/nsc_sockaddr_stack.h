#ifndef NSC_SIM_SOCKADDR_STACK_H_
#define NSC_SIM_SOCKADDR_STACK_H_

#include "nsc_sockaddr.h"

#ifdef __cplusplus
extern "C" {
#endif
/*
 * stack struct sockaddr -> nsc_sockaddr conversion.
 * This must only be used in -nostdinc code with 'struct sockaddr' as defined
 * by the NSC network stack.
 */
static void nsc_convert_sockaddr_in(const struct sockaddr_in *from, struct nsc_sockaddr_in *res)
{
	res->sin_addr = from->sin_addr.s_addr;
	res->sin_port = from->sin_port;
}

/*
 * covert a stack sockaddr* representation to the nsc_* equivalent.
 * this is required because the host operating system and the kernel network stack
 * that is being simulated by NSC may have different sockaddr representations.
 *
 * nsc_sockaddr is an intermediate format to handle converting between
 * host operating system and simulated network stack.
 *
 * unlinke struct sockaddr, struct nsc_sockaddr is guaranteed to be large enough to hold
 * the result, so the *len argument is not needed.
 */
static void nsc_convert_sockaddr(const struct sockaddr *from, struct nsc_sockaddr *res)
{
	memset(res, 0, sizeof(*res));

	res->sa_family = from->sa_family;
	switch (res->sa_family) {
	case AF_INET:
		nsc_convert_sockaddr_in((const struct sockaddr_in*) from, (struct nsc_sockaddr_in*) res);
		return;
	}
}

#ifdef __cplusplus
} //extern "C"
#endif
#endif

