#ifndef NSC_SYSCTL_H
#define NSC_SYSCTL_H

#ifdef __cplusplus
extern "C" {
#endif

/* set name to value */
int nsc_sysctl_util_set(const char *name, const char *value);

/* get current result for name and store result (converted to a string) in *value) */
int nsc_sysctl_util_get(const char *name, char *value, size_t value_len);

/* put name of sysctl number 'idx' into buf */
int nsc_sysctl_util_getnum(size_t idx, char *buf, size_t buflen);

#ifdef __cplusplus
}
#endif
#endif /* NSC_SYSCTL_H */
