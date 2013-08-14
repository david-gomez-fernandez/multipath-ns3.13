/*
    globaliser -- programmatically replace globals in C source code
    Copyright (C) 2003-2006 Sam Jansen

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
 * Simple lexer, probably originally based on some example C/ISO C lexer found
 * on the 'net somewhere.
 */

%{
#include <ctype.h>
#include <stdio.h>
#include <sstream>

#include "parser.tab.hh"

/* This is what perry had in http://coders.meta.net.nz/~perry/lex.l
   Good stuff. This will give us an intermediate step to allow "whitespace"
   chewing of compiler stuff, for instance.
 */
#define YY_DECL int lexscan(void)

int lineno;
int charno;

static void skip_comment(void);
static void chew_compiler(int); 
static void count_newlines(const char *s);
%}
	/* edited: intsuffix to allow LL */
intsuffix               (([uU][lL]?[lL]?)|([lL][uU]?))([lL]?)
fracconst               ([0-9]*\.[0-9]+)|([0-9]+\.)
exppart                 [eE][-+]?[0-9]+
floatsuffix             [fFlL]
chartext                ([^\\'])|(\\.)
stringtext              ([^"])|(\\.)
preproc                 ^[ \t\n]*#.*
asm2                    (__)?asm(__)?


%%

"\n"			{ ++lineno; ++charno; return WS; }
[\t\f\v\r ]+		{ charno += yyleng; return WS; }
(__)?inline(__)?	{ charno += yyleng; return STATIC; }
"__extension__"		{ charno += yyleng; return WS; }
"__restrict"		{ charno += yyleng; return CONST; }
"restrict"		{ charno += yyleng; return CONST; }
__attribute(__)?        { charno += yyleng; return ATTRIBUTE; }
(__)?typeof(__)?        { charno += yyleng; return TYPEOF; }
__alignof__             { charno += yyleng; return ALIGNOF; }
__builtin_types_compatible_p { charno += yyleng; return GCC_BUILTIN_TYPES_COMPATIBLE; }
__builtin_va_list	{ charno += yyleng; return INT;  } 
__builtin_va_arg        { charno += yyleng; chew_compiler(0); return INTEGER; }
__builtin_offsetof      { charno += yyleng; return OFFSETOF; }
"__BEGIN_NAMESPACE_STD" { charno += yyleng; return WS; }
"__END_NAMESPACE_STD"   { charno += yyleng; return WS; }
"__THROW"               { charno += yyleng; return WS; }
"__FUNCTION__"          { charno += yyleng; return STRING; }
"__func__"              { charno += yyleng; return STRING; }
"__USING_NAMESPACE_STD" { charno += yyleng; chew_compiler(0); return WS; }
{preproc}               { charno += yyleng; count_newlines(yytext); return WS; }
{asm2}                  { charno += yyleng; return ASM; }
"/*"			{ charno += yyleng; skip_comment(); }
"{"			{ charno += yyleng; return '{'; }
"<%"			{ charno += yyleng; return '{'; }
"}"			{ charno += yyleng; return '}'; }
"%>"			{ charno += yyleng; return '}'; }
"["			{ charno += yyleng; return '['; }
"<:"			{ charno += yyleng; return '['; }
"]"			{ charno += yyleng; return ']'; }
":>"			{ charno += yyleng; return ']'; }
"("			{ charno += yyleng; return '('; }
")"			{ charno += yyleng; return ')'; }
";"			{ charno += yyleng; return ';'; }
":"			{ charno += yyleng; return ':'; }
"..."			{ charno += yyleng; return ELLIPSIS; }
"?"			{ charno += yyleng; return '?'; }
"."			{ charno += yyleng; return '.'; }
"+"			{ charno += yyleng; return '+'; }
"-"			{ charno += yyleng; return '-'; }
"*"			{ charno += yyleng; return '*'; }
"/"			{ charno += yyleng; return '/'; }
"%"			{ charno += yyleng; return '%'; }
"^"			{ charno += yyleng; return '^'; }
"&"			{ charno += yyleng; return '&'; }
"|"			{ charno += yyleng; return '|'; }
"~"			{ charno += yyleng; return '~'; }
"!"			{ charno += yyleng; return '!'; }
"="			{ charno += yyleng; return '='; }
"<"			{ charno += yyleng; return '<'; }
">"			{ charno += yyleng; return '>'; }
"+="			{ charno += yyleng; return ADDEQ; }
"-="			{ charno += yyleng; return SUBEQ; }
"*="			{ charno += yyleng; return MULEQ; }
"/="			{ charno += yyleng; return DIVEQ; }
"%="			{ charno += yyleng; return MODEQ; }
"^="			{ charno += yyleng; return XOREQ; }
"&="			{ charno += yyleng; return ANDEQ; }
"|="			{ charno += yyleng; return OREQ; }
"<<"			{ charno += yyleng; return SL; }
">>"			{ charno += yyleng; return SR; }
"<<="			{ charno += yyleng; return SLEQ; }
">>="			{ charno += yyleng; return SREQ; }
"=="			{ charno += yyleng; return EQ; }
"!="			{ charno += yyleng; return NOTEQ; }
"<="			{ charno += yyleng; return LTEQ; }
">="			{ charno += yyleng; return GTEQ; }
"&&"			{ charno += yyleng; return ANDAND; }
"||"			{ charno += yyleng; return OROR; }
"++"			{ charno += yyleng; return PLUSPLUS; }
"--"			{ charno += yyleng; return MINUSMINUS; }
","			{ charno += yyleng; return ','; }
"->"			{ charno += yyleng; return ARROW; }
"auto"			{ charno += yyleng; return AUTO; }
"break"			{ charno += yyleng; return BREAK; }
"case"			{ charno += yyleng; return CASE; }
"char"			{ charno += yyleng; return CHAR; }
(__)?const(__)?         { charno += yyleng; return CONST; }
"continue"		{ charno += yyleng; return CONTINUE; }
"default"		{ charno += yyleng; return DEFAULT; }
"do"			{ charno += yyleng; return DO; }
"double"		{ charno += yyleng; return DOUBLE; }
"else"			{ charno += yyleng; return ELSE; }
"enum"			{ charno += yyleng; return ENUM; }
"extern"		{ charno += yyleng; return EXTERN; }
"float"			{ charno += yyleng; return FLOAT; }
"for"			{ charno += yyleng; return FOR; }
"goto"			{ charno += yyleng; return GOTO; }
"if"			{ charno += yyleng; return IF; }
"int"			{ charno += yyleng; return INT; }
__u?int32_t		{ charno += yyleng; return INT;  }
__u?int16_t		{ charno += yyleng; return INT;  }
__u?int8_t		{ charno += yyleng; return INT;  }
"long"			{ charno += yyleng; return LONG; }
"register"		{ charno += yyleng; return REGISTER; }
"return"		{ charno += yyleng; return RETURN; }
"short"			{ charno += yyleng; return SHORT; }
"_Bool"			{ charno += yyleng; return INT; /* C9x boolean type is "_Bool" */ } 
"signed"|"__signed__"	{ charno += yyleng; return SIGNED; }
"sizeof"		{ charno += yyleng; return SIZEOF; }
"static"		{ charno += yyleng; return STATIC; }
"struct"		{ charno += yyleng; return STRUCT; }
"switch"		{ charno += yyleng; return SWITCH; }
"typedef"		{ charno += yyleng; return TYPEDEF; }
"union"			{ charno += yyleng; return UNION; }
"unsigned"		{ charno += yyleng; return UNSIGNED; }
"void"			{ charno += yyleng; return VOID; }
(__)?volatile(__)?	{ charno += yyleng; return VOLATILE; }
"while"			{ charno += yyleng; return WHILE; }
[a-zA-Z_][a-zA-Z_0-9]*	{ charno += yyleng; return IDENTIFIER; }

"0"[xX][0-9a-fA-F]+{intsuffix}?		{ charno += yyleng; return INTEGER; }
"0"[0-7]+{intsuffix}?			{ charno += yyleng; return INTEGER; }
[0-9]+{intsuffix}?			{ charno += yyleng; return INTEGER; }

{fracconst}{exppart}?{floatsuffix}?	{ charno += yyleng; return FLOATING; }
[0-9]+{exppart}{floatsuffix}?		{ charno += yyleng; return FLOATING; }

"'"{chartext}*"'"			{ charno += yyleng; return CHARACTER; }
"L'"{chartext}*"'"			{ charno += yyleng; return CHARACTER; }

"\""{stringtext}*"\""			{ charno += yyleng; return STRING; }
"L\""{stringtext}*"\""			{ charno += yyleng; return STRING; }

.					{ charno += yyleng; 
    fprintf(stderr, "%d: unexpected character `%c'\n", lineno, yytext[0]); }

%%



/*
 * We use this routine instead a lex pattern because we don't need
 * to save the matched comment in the `yytext' buffer.
 */
static void
skip_comment(void)
{
	int c1, c2;

	c1 = yyinput(); charno++;
	c2 = yyinput(); charno++;

	while (c2 != EOF && !(c1 == '*' && c2 == '/')) {
		if (c1 == '\n')
			++lineno;
		c1 = c2;
		c2 = yyinput(); charno++;
	}
}

static void
chew_compiler(int s)
{
    std::ostringstream os;
    static char buf[65536];
    int c, start = charno;

    os << yytext;

    do {
chew_character:
        c = yyinput(); charno++;
        os.put(c);

        if(c == ' ' || c == '\r' || c == '\n' || c == '\t') {
            if(c == '\n') ++lineno;
            goto chew_character;
        }

        if(c == '(') s++;
        else if(c == ')') s--;
    } while(c != EOF && s > 0);

    if(c != ')') {
        char cc = (char)c;
        charno--;
        yyunput(1, &cc);
    }

    memcpy(buf, os.str().c_str(), strlen(yytext) + (charno - start) + 1);
    yytext = buf;

    //fprintf(stderr, "COMPILER: chewed: '%s'\n", yytext);
}

static void count_newlines(const char *s)
{
    while((s = strchr(s, '\n'))) 
    { 
        lineno++; 
        s++; 
    }
}

/*  vim:syn=lex
*/
