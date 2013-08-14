/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison interface for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IDENTIFIER = 258,
     TYPEDEF_NAME = 259,
     INTEGER = 260,
     FLOATING = 261,
     CHARACTER = 262,
     STRING = 263,
     WS = 264,
     ELLIPSIS = 265,
     ADDEQ = 266,
     SUBEQ = 267,
     MULEQ = 268,
     DIVEQ = 269,
     MODEQ = 270,
     XOREQ = 271,
     ANDEQ = 272,
     OREQ = 273,
     SL = 274,
     SR = 275,
     SLEQ = 276,
     SREQ = 277,
     EQ = 278,
     NOTEQ = 279,
     LTEQ = 280,
     GTEQ = 281,
     ANDAND = 282,
     OROR = 283,
     PLUSPLUS = 284,
     MINUSMINUS = 285,
     ARROW = 286,
     AUTO = 287,
     BREAK = 288,
     CASE = 289,
     CHAR = 290,
     CONST = 291,
     CONTINUE = 292,
     DEFAULT = 293,
     DO = 294,
     DOUBLE = 295,
     ELSE = 296,
     ENUM = 297,
     EXTERN = 298,
     FLOAT = 299,
     FOR = 300,
     GOTO = 301,
     IF = 302,
     INT = 303,
     LONG = 304,
     REGISTER = 305,
     RETURN = 306,
     SHORT = 307,
     SIGNED = 308,
     SIZEOF = 309,
     STATIC = 310,
     STRUCT = 311,
     SWITCH = 312,
     TYPEDEF = 313,
     UNION = 314,
     UNSIGNED = 315,
     VOID = 316,
     VOLATILE = 317,
     WHILE = 318,
     ATTRIBUTE = 319,
     TYPEOF = 320,
     ALIGNOF = 321,
     ASM = 322,
     GCC_BUILTIN_TYPES_COMPATIBLE = 323,
     OFFSETOF = 324
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


