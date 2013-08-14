/*
 * Linux 2.6.29:
 * #define DCCPF_SEQ_WMAX          0x3FFFFFFFFFFFull
 * the problem is use of "ull" instead of ULL.
 */

int irrelevant(unsigned long long foo)
{
	if (foo <= 42ull)
		return foo <= 42ULL;
}
