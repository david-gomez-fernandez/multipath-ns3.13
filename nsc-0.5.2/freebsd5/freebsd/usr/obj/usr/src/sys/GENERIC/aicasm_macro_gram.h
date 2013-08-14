#ifndef YYERRCODE
#define YYERRCODE 256
#endif

#define T_ARG 257
#define T_SYMBOL 258
typedef union {
	int		value;
	char		*str;
	symbol_t	*sym;
} YYSTYPE;
extern YYSTYPE mmlval;
