#ifndef YYERRCODE
#define YYERRCODE 256
#endif

#define T_REGISTER 257
#define T_CONST 258
#define T_EXPORT 259
#define T_DOWNLOAD 260
#define T_SCB 261
#define T_SRAM 262
#define T_ALIAS 263
#define T_SIZE 264
#define T_EXPR_LSHIFT 265
#define T_EXPR_RSHIFT 266
#define T_ADDRESS 267
#define T_ACCESS_MODE 268
#define T_MODES 269
#define T_DEFINE 270
#define T_SET_SRC_MODE 271
#define T_SET_DST_MODE 272
#define T_MODE 273
#define T_BEGIN_CS 274
#define T_END_CS 275
#define T_FIELD 276
#define T_ENUM 277
#define T_MASK 278
#define T_NUMBER 279
#define T_PATH 280
#define T_STRING 281
#define T_ARG 282
#define T_MACROBODY 283
#define T_CEXPR 284
#define T_EOF 285
#define T_INCLUDE 286
#define T_VERSION 287
#define T_PREFIX 288
#define T_PATCH_ARG_LIST 289
#define T_SHR 290
#define T_SHL 291
#define T_ROR 292
#define T_ROL 293
#define T_MVI 294
#define T_MOV 295
#define T_CLR 296
#define T_BMOV 297
#define T_JMP 298
#define T_JC 299
#define T_JNC 300
#define T_JE 301
#define T_JNE 302
#define T_JNZ 303
#define T_JZ 304
#define T_CALL 305
#define T_ADD 306
#define T_ADC 307
#define T_INC 308
#define T_DEC 309
#define T_STC 310
#define T_CLC 311
#define T_CMP 312
#define T_NOT 313
#define T_XOR 314
#define T_TEST 315
#define T_AND 316
#define T_OR 317
#define T_RET 318
#define T_NOP 319
#define T_ACCUM 320
#define T_ALLONES 321
#define T_ALLZEROS 322
#define T_NONE 323
#define T_SINDEX 324
#define T_MODE_PTR 325
#define T_A 326
#define T_SYMBOL 327
#define T_NL 328
#define T_IF 329
#define T_ELSE 330
#define T_ELSE_IF 331
#define T_ENDIF 332
#define UMINUS 333
typedef union {
	u_int		value;
	char		*str;
	symbol_t	*sym;
	symbol_ref_t	sym_ref;
	expression_t	expression;
} YYSTYPE;
extern YYSTYPE yylval;
