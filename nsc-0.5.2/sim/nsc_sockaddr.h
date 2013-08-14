#if defined (NSC_SIM_SOCKADDR_HOST_H_) || defined(NSC_SIM_SOCKADDR_STACK_H_)

#ifdef __cplusplus
extern "C" {
#endif
/*
 * meant for internal nsc use only.
 * can't include libc headers here, this part is used from
 * both host glue and stack context (-nostdinc) too.
 */

#define NSC_SA_COMMON_DEF(prefix)	unsigned short prefix ## _family
#define NSC_SA_COMMON_SIZEOF	(sizeof (unsigned short))

// nsc_sockaddr must be large enough to hold _ALL_ nsc_sockaddr* types.
struct nsc_sockaddr {
  NSC_SA_COMMON_DEF(sa);
  char sa_data[128 - NSC_SA_COMMON_SIZEOF];
};

struct nsc_sockaddr_in {
  NSC_SA_COMMON_DEF(sin);
  unsigned int sin_port;
  unsigned int sin_addr;
  unsigned char pad[sizeof(struct nsc_sockaddr)
	  - NSC_SA_COMMON_SIZEOF
	  - sizeof(unsigned int) - sizeof(unsigned int)];
};

#undef NSC_SA_COMMON_SIZEOF
#undef NSC_SA_COMMON_DEF

#ifdef __cplusplus
} //extern "C"
#endif
#endif

