/* A Bison parser, made by GNU Bison 3.6.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.6.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 2

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         gwion_parse
#define yylex           gwion_lex
#define yyerror         gwion_error
#define yydebug         gwion_debug
#define yynerrs         gwion_nerrs

/* First part of user prologue.  */
#line 7 "src/gwion.y"

#include <math.h>
#include "gwion_util.h"
#include "gwion_ast.h"
#include "bison_compat.h"
#include "parser.h"
#include "lexer.h"

#define YYERROR_VERBOSE
#define YYMALLOC xmalloc
#define scan arg->scanner
#define mpool(arg) arg->st->p
#define insert_symbol(a) insert_symbol(arg->st, (a))
#define GET_LOC(a) loc_cpy(mpool(arg), a)
ANN void gwion_error(loc_t, const Scanner*, const char *);
ANN Symbol lambda_name(const Scanner*);

#line 94 "src/parser.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_GWION_INCLUDE_PARSER_H_INCLUDED
# define YY_GWION_INCLUDE_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int gwion_debug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    SEMICOLON = 258,               /* ";"  */
    COMMA = 259,                   /* ","  */
    LPAREN = 260,                  /* "("  */
    RPAREN = 261,                  /* ")"  */
    LBRACK = 262,                  /* "["  */
    RBRACK = 263,                  /* "]"  */
    LBRACE = 264,                  /* "{"  */
    RBRACE = 265,                  /* "}"  */
    FUNCTION = 266,                /* "fun"  */
    IF = 267,                      /* "if"  */
    ELSE = 268,                    /* "else"  */
    WHILE = 269,                   /* "while"  */
    DO = 270,                      /* "do"  */
    UNTIL = 271,                   /* "until"  */
    LOOP = 272,                    /* "repeat"  */
    FOR = 273,                     /* "for"  */
    GOTO = 274,                    /* "goto"  */
    MATCH = 275,                   /* "match"  */
    CASE = 276,                    /* "case"  */
    WHEN = 277,                    /* "when"  */
    WHERE = 278,                   /* "where"  */
    ENUM = 279,                    /* "enum"  */
    TRETURN = 280,                 /* "return"  */
    BREAK = 281,                   /* "break"  */
    CONTINUE = 282,                /* "continue"  */
    CLASS = 283,                   /* "class"  */
    STRUCT = 284,                  /* "struct"  */
    STATIC = 285,                  /* "static"  */
    GLOBAL = 286,                  /* "global"  */
    PRIVATE = 287,                 /* "private"  */
    PROTECT = 288,                 /* "protect"  */
    EXTENDS = 289,                 /* "extends"  */
    DOT = 290,                     /* "."  */
    OPERATOR = 291,                /* "operator"  */
    TYPEDEF = 292,                 /* "typedef"  */
    NOELSE = 293,                  /* NOELSE  */
    UNION = 294,                   /* "union"  */
    CONSTT = 295,                  /* "const"  */
    AUTO = 296,                    /* "auto"  */
    PASTE = 297,                   /* "##"  */
    ELLIPSE = 298,                 /* "..."  */
    VARLOOP = 299,                 /* "varloop"  */
    RARROW = 300,                  /* "->"  */
    BACKSLASH = 301,               /* "\\"  */
    BACKTICK = 302,                /* "`"  */
    OPID = 303,                    /* OPID  */
    REF = 304,                     /* "ref"  */
    NONNULL = 305,                 /* "nonnull"  */
    NUM = 306,                     /* "<integer>"  */
    FLOATT = 307,                  /* FLOATT  */
    ID = 308,                      /* "<identifier>"  */
    STRING_LIT = 309,              /* "<litteral string>"  */
    CHAR_LIT = 310,                /* "<litteral char>"  */
    INTERP_LIT = 311,              /* "<interp string>"  */
    INTERP_EXP = 312,              /* INTERP_EXP  */
    PP_COMMENT = 313,              /* "<comment>"  */
    PP_INCLUDE = 314,              /* "#include"  */
    PP_DEFINE = 315,               /* "#define"  */
    PP_PRAGMA = 316,               /* "#pragma"  */
    PP_UNDEF = 317,                /* "#undef"  */
    PP_IFDEF = 318,                /* "#ifdef"  */
    PP_IFNDEF = 319,               /* "#ifndef"  */
    PP_ELSE = 320,                 /* "#else"  */
    PP_ENDIF = 321,                /* "#if"  */
    PP_NL = 322,                   /* "\n"  */
    PLUS = 324,                    /* "+"  */
    PLUSPLUS = 325,                /* "++"  */
    MINUS = 326,                   /* "-"  */
    MINUSMINUS = 327,              /* "--"  */
    TIMES = 328,                   /* "*"  */
    DIVIDE = 329,                  /* "/"  */
    PERCENT = 330,                 /* "%"  */
    DOLLAR = 331,                  /* "$"  */
    QUESTION = 332,                /* "?"  */
    COLON = 333,                   /* ":"  */
    COLONCOLON = 334,              /* "::"  */
    QUESTIONCOLON = 335,           /* "?:"  */
    NEW = 336,                     /* "new"  */
    SPORK = 337,                   /* "spork"  */
    FORK = 338,                    /* "fork"  */
    TYPEOF = 339,                  /* "typeof"  */
    L_HACK = 340,                  /* "<<<"  */
    R_HACK = 341,                  /* ">>>"  */
    AND = 342,                     /* "&&"  */
    EQ = 343,                      /* "=="  */
    GE = 344,                      /* ">="  */
    GT = 345,                      /* ">"  */
    LE = 346,                      /* "<="  */
    LT = 347,                      /* "<"  */
    NEQ = 348,                     /* "!="  */
    SHIFT_LEFT = 349,              /* "<<"  */
    SHIFT_RIGHT = 350,             /* ">>"  */
    S_AND = 351,                   /* "&"  */
    S_OR = 352,                    /* "|"  */
    S_XOR = 353,                   /* "^"  */
    OR = 354,                      /* "||"  */
    LTMPL = 355,                   /* "<~"  */
    RTMPL = 356,                   /* "~>"  */
    TILDA = 357,                   /* "~"  */
    EXCLAMATION = 358,             /* "!"  */
    DYNOP = 359,                   /* "<dynamic_operator>"  */
    UMINUS = 360,                  /* UMINUS  */
    UTIMES = 361                   /* UTIMES  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define SEMICOLON 258
#define COMMA 259
#define LPAREN 260
#define RPAREN 261
#define LBRACK 262
#define RBRACK 263
#define LBRACE 264
#define RBRACE 265
#define FUNCTION 266
#define IF 267
#define ELSE 268
#define WHILE 269
#define DO 270
#define UNTIL 271
#define LOOP 272
#define FOR 273
#define GOTO 274
#define MATCH 275
#define CASE 276
#define WHEN 277
#define WHERE 278
#define ENUM 279
#define TRETURN 280
#define BREAK 281
#define CONTINUE 282
#define CLASS 283
#define STRUCT 284
#define STATIC 285
#define GLOBAL 286
#define PRIVATE 287
#define PROTECT 288
#define EXTENDS 289
#define DOT 290
#define OPERATOR 291
#define TYPEDEF 292
#define NOELSE 293
#define UNION 294
#define CONSTT 295
#define AUTO 296
#define PASTE 297
#define ELLIPSE 298
#define VARLOOP 299
#define RARROW 300
#define BACKSLASH 301
#define BACKTICK 302
#define OPID 303
#define REF 304
#define NONNULL 305
#define NUM 306
#define FLOATT 307
#define ID 308
#define STRING_LIT 309
#define CHAR_LIT 310
#define INTERP_LIT 311
#define INTERP_EXP 312
#define PP_COMMENT 313
#define PP_INCLUDE 314
#define PP_DEFINE 315
#define PP_PRAGMA 316
#define PP_UNDEF 317
#define PP_IFDEF 318
#define PP_IFNDEF 319
#define PP_ELSE 320
#define PP_ENDIF 321
#define PP_NL 322
#define PLUS 324
#define PLUSPLUS 325
#define MINUS 326
#define MINUSMINUS 327
#define TIMES 328
#define DIVIDE 329
#define PERCENT 330
#define DOLLAR 331
#define QUESTION 332
#define COLON 333
#define COLONCOLON 334
#define QUESTIONCOLON 335
#define NEW 336
#define SPORK 337
#define FORK 338
#define TYPEOF 339
#define L_HACK 340
#define R_HACK 341
#define AND 342
#define EQ 343
#define GE 344
#define GT 345
#define LE 346
#define LT 347
#define NEQ 348
#define SHIFT_LEFT 349
#define SHIFT_RIGHT 350
#define S_AND 351
#define S_OR 352
#define S_XOR 353
#define OR 354
#define LTMPL 355
#define RTMPL 356
#define TILDA 357
#define EXCLAMATION 358
#define DYNOP 359
#define UMINUS 360
#define UTIMES 361

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 25 "src/gwion.y"

  char* sval;
  int ival;
  long unsigned int lval;
  ae_flag flag;
  m_float fval;
  Symbol sym;
  Array_Sub array_sub;
  Range* range;
  Var_Decl var_decl;
  Var_Decl_List var_decl_list;
  Type_Decl* type_decl;
  Exp   exp;
  struct Func_Base_ *func_base;
  Stmt stmt;
  Stmt_List stmt_list;
  Arg_List arg_list;
  Decl_List decl_list;
  Func_Def func_def;
  Enum_Def enum_def;
  Union_Def union_def;
  Fptr_Def fptr_def;
  Type_Def type_def;
  Section* section;
  ID_List id_list;
  Type_List type_list;
  Class_Def class_def;
  Ast ast;

#line 386 "src/parser.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif



int gwion_parse (Scanner* arg);

#endif /* !YY_GWION_INCLUDE_PARSER_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_SEMICOLON = 3,                  /* ";"  */
  YYSYMBOL_COMMA = 4,                      /* ","  */
  YYSYMBOL_LPAREN = 5,                     /* "("  */
  YYSYMBOL_RPAREN = 6,                     /* ")"  */
  YYSYMBOL_LBRACK = 7,                     /* "["  */
  YYSYMBOL_RBRACK = 8,                     /* "]"  */
  YYSYMBOL_LBRACE = 9,                     /* "{"  */
  YYSYMBOL_RBRACE = 10,                    /* "}"  */
  YYSYMBOL_FUNCTION = 11,                  /* "fun"  */
  YYSYMBOL_IF = 12,                        /* "if"  */
  YYSYMBOL_ELSE = 13,                      /* "else"  */
  YYSYMBOL_WHILE = 14,                     /* "while"  */
  YYSYMBOL_DO = 15,                        /* "do"  */
  YYSYMBOL_UNTIL = 16,                     /* "until"  */
  YYSYMBOL_LOOP = 17,                      /* "repeat"  */
  YYSYMBOL_FOR = 18,                       /* "for"  */
  YYSYMBOL_GOTO = 19,                      /* "goto"  */
  YYSYMBOL_MATCH = 20,                     /* "match"  */
  YYSYMBOL_CASE = 21,                      /* "case"  */
  YYSYMBOL_WHEN = 22,                      /* "when"  */
  YYSYMBOL_WHERE = 23,                     /* "where"  */
  YYSYMBOL_ENUM = 24,                      /* "enum"  */
  YYSYMBOL_TRETURN = 25,                   /* "return"  */
  YYSYMBOL_BREAK = 26,                     /* "break"  */
  YYSYMBOL_CONTINUE = 27,                  /* "continue"  */
  YYSYMBOL_CLASS = 28,                     /* "class"  */
  YYSYMBOL_STRUCT = 29,                    /* "struct"  */
  YYSYMBOL_STATIC = 30,                    /* "static"  */
  YYSYMBOL_GLOBAL = 31,                    /* "global"  */
  YYSYMBOL_PRIVATE = 32,                   /* "private"  */
  YYSYMBOL_PROTECT = 33,                   /* "protect"  */
  YYSYMBOL_EXTENDS = 34,                   /* "extends"  */
  YYSYMBOL_DOT = 35,                       /* "."  */
  YYSYMBOL_OPERATOR = 36,                  /* "operator"  */
  YYSYMBOL_TYPEDEF = 37,                   /* "typedef"  */
  YYSYMBOL_NOELSE = 38,                    /* NOELSE  */
  YYSYMBOL_UNION = 39,                     /* "union"  */
  YYSYMBOL_CONSTT = 40,                    /* "const"  */
  YYSYMBOL_AUTO = 41,                      /* "auto"  */
  YYSYMBOL_PASTE = 42,                     /* "##"  */
  YYSYMBOL_ELLIPSE = 43,                   /* "..."  */
  YYSYMBOL_VARLOOP = 44,                   /* "varloop"  */
  YYSYMBOL_RARROW = 45,                    /* "->"  */
  YYSYMBOL_BACKSLASH = 46,                 /* "\\"  */
  YYSYMBOL_BACKTICK = 47,                  /* "`"  */
  YYSYMBOL_OPID = 48,                      /* OPID  */
  YYSYMBOL_REF = 49,                       /* "ref"  */
  YYSYMBOL_NONNULL = 50,                   /* "nonnull"  */
  YYSYMBOL_NUM = 51,                       /* "<integer>"  */
  YYSYMBOL_FLOATT = 52,                    /* FLOATT  */
  YYSYMBOL_ID = 53,                        /* "<identifier>"  */
  YYSYMBOL_STRING_LIT = 54,                /* "<litteral string>"  */
  YYSYMBOL_CHAR_LIT = 55,                  /* "<litteral char>"  */
  YYSYMBOL_INTERP_LIT = 56,                /* "<interp string>"  */
  YYSYMBOL_INTERP_EXP = 57,                /* INTERP_EXP  */
  YYSYMBOL_PP_COMMENT = 58,                /* "<comment>"  */
  YYSYMBOL_PP_INCLUDE = 59,                /* "#include"  */
  YYSYMBOL_PP_DEFINE = 60,                 /* "#define"  */
  YYSYMBOL_PP_PRAGMA = 61,                 /* "#pragma"  */
  YYSYMBOL_PP_UNDEF = 62,                  /* "#undef"  */
  YYSYMBOL_PP_IFDEF = 63,                  /* "#ifdef"  */
  YYSYMBOL_PP_IFNDEF = 64,                 /* "#ifndef"  */
  YYSYMBOL_PP_ELSE = 65,                   /* "#else"  */
  YYSYMBOL_PP_ENDIF = 66,                  /* "#if"  */
  YYSYMBOL_PP_NL = 67,                     /* "\n"  */
  YYSYMBOL_68_operator_id_ = 68,           /* "@<operator id>"  */
  YYSYMBOL_PLUS = 69,                      /* "+"  */
  YYSYMBOL_PLUSPLUS = 70,                  /* "++"  */
  YYSYMBOL_MINUS = 71,                     /* "-"  */
  YYSYMBOL_MINUSMINUS = 72,                /* "--"  */
  YYSYMBOL_TIMES = 73,                     /* "*"  */
  YYSYMBOL_DIVIDE = 74,                    /* "/"  */
  YYSYMBOL_PERCENT = 75,                   /* "%"  */
  YYSYMBOL_DOLLAR = 76,                    /* "$"  */
  YYSYMBOL_QUESTION = 77,                  /* "?"  */
  YYSYMBOL_COLON = 78,                     /* ":"  */
  YYSYMBOL_COLONCOLON = 79,                /* "::"  */
  YYSYMBOL_QUESTIONCOLON = 80,             /* "?:"  */
  YYSYMBOL_NEW = 81,                       /* "new"  */
  YYSYMBOL_SPORK = 82,                     /* "spork"  */
  YYSYMBOL_FORK = 83,                      /* "fork"  */
  YYSYMBOL_TYPEOF = 84,                    /* "typeof"  */
  YYSYMBOL_L_HACK = 85,                    /* "<<<"  */
  YYSYMBOL_R_HACK = 86,                    /* ">>>"  */
  YYSYMBOL_AND = 87,                       /* "&&"  */
  YYSYMBOL_EQ = 88,                        /* "=="  */
  YYSYMBOL_GE = 89,                        /* ">="  */
  YYSYMBOL_GT = 90,                        /* ">"  */
  YYSYMBOL_LE = 91,                        /* "<="  */
  YYSYMBOL_LT = 92,                        /* "<"  */
  YYSYMBOL_NEQ = 93,                       /* "!="  */
  YYSYMBOL_SHIFT_LEFT = 94,                /* "<<"  */
  YYSYMBOL_SHIFT_RIGHT = 95,               /* ">>"  */
  YYSYMBOL_S_AND = 96,                     /* "&"  */
  YYSYMBOL_S_OR = 97,                      /* "|"  */
  YYSYMBOL_S_XOR = 98,                     /* "^"  */
  YYSYMBOL_OR = 99,                        /* "||"  */
  YYSYMBOL_LTMPL = 100,                    /* "<~"  */
  YYSYMBOL_RTMPL = 101,                    /* "~>"  */
  YYSYMBOL_TILDA = 102,                    /* "~"  */
  YYSYMBOL_EXCLAMATION = 103,              /* "!"  */
  YYSYMBOL_DYNOP = 104,                    /* "<dynamic_operator>"  */
  YYSYMBOL_UMINUS = 105,                   /* UMINUS  */
  YYSYMBOL_UTIMES = 106,                   /* UTIMES  */
  YYSYMBOL_107_ = 107,                     /* "="  */
  YYSYMBOL_YYACCEPT = 108,                 /* $accept  */
  YYSYMBOL_prg = 109,                      /* prg  */
  YYSYMBOL_ast = 110,                      /* ast  */
  YYSYMBOL_section = 111,                  /* section  */
  YYSYMBOL_class_type = 112,               /* class_type  */
  YYSYMBOL_class_def = 113,                /* class_def  */
  YYSYMBOL_class_ext = 114,                /* class_ext  */
  YYSYMBOL_class_body = 115,               /* class_body  */
  YYSYMBOL_id_list = 116,                  /* id_list  */
  YYSYMBOL_stmt_list = 117,                /* stmt_list  */
  YYSYMBOL_fptr_base = 118,                /* fptr_base  */
  YYSYMBOL_fdef_base = 119,                /* fdef_base  */
  YYSYMBOL_fptr_def = 120,                 /* fptr_def  */
  YYSYMBOL_type_def = 121,                 /* type_def  */
  YYSYMBOL_type_decl_array = 122,          /* type_decl_array  */
  YYSYMBOL_type_decl_exp = 123,            /* type_decl_exp  */
  YYSYMBOL_type_decl_empty = 124,          /* type_decl_empty  */
  YYSYMBOL_arg = 125,                      /* arg  */
  YYSYMBOL_arg_list = 126,                 /* arg_list  */
  YYSYMBOL_fptr_arg = 127,                 /* fptr_arg  */
  YYSYMBOL_fptr_list = 128,                /* fptr_list  */
  YYSYMBOL_code_stmt = 129,                /* code_stmt  */
  YYSYMBOL_stmt_pp = 130,                  /* stmt_pp  */
  YYSYMBOL_stmt = 131,                     /* stmt  */
  YYSYMBOL_id = 132,                       /* id  */
  YYSYMBOL_opt_id = 133,                   /* opt_id  */
  YYSYMBOL_enum_def = 134,                 /* enum_def  */
  YYSYMBOL_label_stmt = 135,               /* label_stmt  */
  YYSYMBOL_goto_stmt = 136,                /* goto_stmt  */
  YYSYMBOL_when_exp = 137,                 /* when_exp  */
  YYSYMBOL_match_case_stmt = 138,          /* match_case_stmt  */
  YYSYMBOL_match_list = 139,               /* match_list  */
  YYSYMBOL_where_stmt = 140,               /* where_stmt  */
  YYSYMBOL_match_stmt = 141,               /* match_stmt  */
  YYSYMBOL_flow = 142,                     /* flow  */
  YYSYMBOL_loop_stmt = 143,                /* loop_stmt  */
  YYSYMBOL_varloop_stmt = 144,             /* varloop_stmt  */
  YYSYMBOL_selection_stmt = 145,           /* selection_stmt  */
  YYSYMBOL_breaks = 146,                   /* breaks  */
  YYSYMBOL_jump_stmt = 147,                /* jump_stmt  */
  YYSYMBOL__exp_stmt = 148,                /* _exp_stmt  */
  YYSYMBOL_exp_stmt = 149,                 /* exp_stmt  */
  YYSYMBOL_exp = 150,                      /* exp  */
  YYSYMBOL_binary_exp = 151,               /* binary_exp  */
  YYSYMBOL_call_template = 152,            /* call_template  */
  YYSYMBOL_op = 153,                       /* op  */
  YYSYMBOL_array_exp = 154,                /* array_exp  */
  YYSYMBOL_array_empty = 155,              /* array_empty  */
  YYSYMBOL_range = 156,                    /* range  */
  YYSYMBOL_array = 157,                    /* array  */
  YYSYMBOL_decl_exp2 = 158,                /* decl_exp2  */
  YYSYMBOL_decl_exp = 159,                 /* decl_exp  */
  YYSYMBOL_union_exp = 160,                /* union_exp  */
  YYSYMBOL_decl_exp3 = 161,                /* decl_exp3  */
  YYSYMBOL_func_args = 162,                /* func_args  */
  YYSYMBOL_fptr_args = 163,                /* fptr_args  */
  YYSYMBOL_arg_type = 164,                 /* arg_type  */
  YYSYMBOL_decl_template = 165,            /* decl_template  */
  YYSYMBOL_storage_flag = 166,             /* storage_flag  */
  YYSYMBOL_access_flag = 167,              /* access_flag  */
  YYSYMBOL_flag = 168,                     /* flag  */
  YYSYMBOL_opt_flag = 169,                 /* opt_flag  */
  YYSYMBOL_func_def_base = 170,            /* func_def_base  */
  YYSYMBOL_op_op = 171,                    /* op_op  */
  YYSYMBOL_func_def = 172,                 /* func_def  */
  YYSYMBOL_ref = 173,                      /* ref  */
  YYSYMBOL_decl_flag = 174,                /* decl_flag  */
  YYSYMBOL_type_decl_tmpl = 175,           /* type_decl_tmpl  */
  YYSYMBOL_type_decl_next = 176,           /* type_decl_next  */
  YYSYMBOL_type_decl_noflag = 177,         /* type_decl_noflag  */
  YYSYMBOL_type_decl0 = 178,               /* type_decl0  */
  YYSYMBOL_type_decl = 179,                /* type_decl  */
  YYSYMBOL_decl_list = 180,                /* decl_list  */
  YYSYMBOL_union_def = 181,                /* union_def  */
  YYSYMBOL_var_decl_list = 182,            /* var_decl_list  */
  YYSYMBOL_var_decl = 183,                 /* var_decl  */
  YYSYMBOL_arg_decl = 184,                 /* arg_decl  */
  YYSYMBOL_fptr_arg_decl = 185,            /* fptr_arg_decl  */
  YYSYMBOL_eq_op = 186,                    /* eq_op  */
  YYSYMBOL_rel_op = 187,                   /* rel_op  */
  YYSYMBOL_shift_op = 188,                 /* shift_op  */
  YYSYMBOL_add_op = 189,                   /* add_op  */
  YYSYMBOL_mul_op = 190,                   /* mul_op  */
  YYSYMBOL_opt_exp = 191,                  /* opt_exp  */
  YYSYMBOL_con_exp = 192,                  /* con_exp  */
  YYSYMBOL_log_or_exp = 193,               /* log_or_exp  */
  YYSYMBOL_log_and_exp = 194,              /* log_and_exp  */
  YYSYMBOL_inc_or_exp = 195,               /* inc_or_exp  */
  YYSYMBOL_exc_or_exp = 196,               /* exc_or_exp  */
  YYSYMBOL_and_exp = 197,                  /* and_exp  */
  YYSYMBOL_eq_exp = 198,                   /* eq_exp  */
  YYSYMBOL_rel_exp = 199,                  /* rel_exp  */
  YYSYMBOL_shift_exp = 200,                /* shift_exp  */
  YYSYMBOL_add_exp = 201,                  /* add_exp  */
  YYSYMBOL_mul_exp = 202,                  /* mul_exp  */
  YYSYMBOL_dur_exp = 203,                  /* dur_exp  */
  YYSYMBOL_cast_exp = 204,                 /* cast_exp  */
  YYSYMBOL_unary_op = 205,                 /* unary_op  */
  YYSYMBOL_unary_exp = 206,                /* unary_exp  */
  YYSYMBOL_lambda_list = 207,              /* lambda_list  */
  YYSYMBOL_lambda_arg = 208,               /* lambda_arg  */
  YYSYMBOL_type_list = 209,                /* type_list  */
  YYSYMBOL_call_paren = 210,               /* call_paren  */
  YYSYMBOL_post_op = 211,                  /* post_op  */
  YYSYMBOL_dot_exp = 212,                  /* dot_exp  */
  YYSYMBOL_post_exp = 213,                 /* post_exp  */
  YYSYMBOL_interp_exp = 214,               /* interp_exp  */
  YYSYMBOL_interp = 215,                   /* interp  */
  YYSYMBOL_typeof_exp = 216,               /* typeof_exp  */
  YYSYMBOL_prim_exp = 217                  /* prim_exp  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  195
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1762

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  108
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  110
/* YYNRULES -- Number of rules.  */
#define YYNRULES  266
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  439

#define YYMAXUTOK   362


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   140,   140,   141,   144,   145,   149,   150,   151,   152,
     153,   154,   155,   158,   158,   160,   169,   169,   171,   171,
     173,   173,   175,   175,   177,   179,   182,   189,   196,   196,
     198,   202,   207,   208,   210,   211,   220,   221,   221,   228,
     229,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   259,   260,   267,   267,   270,   273,   275,   277,   277,
     280,   288,   289,   291,   291,   293,   301,   302,   305,   307,
     309,   311,   313,   315,   319,   322,   324,   329,   330,   331,
     334,   335,   338,   338,   341,   342,   345,   345,   347,   347,
     349,   349,   351,   351,   351,   354,   355,   356,   360,   361,
     362,   366,   367,   368,   371,   371,   372,   372,   373,   375,
     376,   377,   377,   379,   379,   380,   380,   381,   381,   383,
     383,   385,   386,   389,   390,   393,   394,   395,   398,   398,
     401,   404,   404,   404,   404,   404,   407,   408,   410,   412,
     414,   419,   419,   420,   420,   423,   424,   428,   429,   433,
     434,   438,   441,   442,   443,   445,   446,   449,   469,   470,
     473,   474,   476,   477,   478,   479,   480,   481,   483,   483,
     484,   484,   484,   484,   485,   485,   486,   486,   487,   487,
     487,   489,   489,   490,   491,   493,   496,   496,   497,   497,
     498,   498,   499,   499,   500,   500,   501,   501,   502,   502,
     503,   503,   504,   504,   505,   505,   506,   506,   508,   508,
     511,   511,   511,   512,   512,   512,   512,   515,   515,   516,
     517,   518,   521,   522,   523,   523,   526,   527,   530,   530,
     532,   532,   534,   535,   536,   538,   540,   543,   544,   547,
     548,   550,   559,   561,   564,   565,   566,   567,   568,   569,
     570,   571,   572,   573,   574,   575,   576
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "\";\"", "\",\"",
  "\"(\"", "\")\"", "\"[\"", "\"]\"", "\"{\"", "\"}\"", "\"fun\"",
  "\"if\"", "\"else\"", "\"while\"", "\"do\"", "\"until\"", "\"repeat\"",
  "\"for\"", "\"goto\"", "\"match\"", "\"case\"", "\"when\"", "\"where\"",
  "\"enum\"", "\"return\"", "\"break\"", "\"continue\"", "\"class\"",
  "\"struct\"", "\"static\"", "\"global\"", "\"private\"", "\"protect\"",
  "\"extends\"", "\".\"", "\"operator\"", "\"typedef\"", "NOELSE",
  "\"union\"", "\"const\"", "\"auto\"", "\"##\"", "\"...\"", "\"varloop\"",
  "\"->\"", "\"\\\\\"", "\"`\"", "OPID", "\"ref\"", "\"nonnull\"",
  "\"<integer>\"", "FLOATT", "\"<identifier>\"", "\"<litteral string>\"",
  "\"<litteral char>\"", "\"<interp string>\"", "INTERP_EXP",
  "\"<comment>\"", "\"#include\"", "\"#define\"", "\"#pragma\"",
  "\"#undef\"", "\"#ifdef\"", "\"#ifndef\"", "\"#else\"", "\"#if\"",
  "\"\\n\"", "\"@<operator id>\"", "\"+\"", "\"++\"", "\"-\"", "\"--\"",
  "\"*\"", "\"/\"", "\"%\"", "\"$\"", "\"?\"", "\":\"", "\"::\"", "\"?:\"",
  "\"new\"", "\"spork\"", "\"fork\"", "\"typeof\"", "\"<<<\"", "\">>>\"",
  "\"&&\"", "\"==\"", "\">=\"", "\">\"", "\"<=\"", "\"<\"", "\"!=\"",
  "\"<<\"", "\">>\"", "\"&\"", "\"|\"", "\"^\"", "\"||\"", "\"<~\"",
  "\"~>\"", "\"~\"", "\"!\"", "\"<dynamic_operator>\"", "UMINUS", "UTIMES",
  "\"=\"", "$accept", "prg", "ast", "section", "class_type", "class_def",
  "class_ext", "class_body", "id_list", "stmt_list", "fptr_base",
  "fdef_base", "fptr_def", "type_def", "type_decl_array", "type_decl_exp",
  "type_decl_empty", "arg", "arg_list", "fptr_arg", "fptr_list",
  "code_stmt", "stmt_pp", "stmt", "id", "opt_id", "enum_def", "label_stmt",
  "goto_stmt", "when_exp", "match_case_stmt", "match_list", "where_stmt",
  "match_stmt", "flow", "loop_stmt", "varloop_stmt", "selection_stmt",
  "breaks", "jump_stmt", "_exp_stmt", "exp_stmt", "exp", "binary_exp",
  "call_template", "op", "array_exp", "array_empty", "range", "array",
  "decl_exp2", "decl_exp", "union_exp", "decl_exp3", "func_args",
  "fptr_args", "arg_type", "decl_template", "storage_flag", "access_flag",
  "flag", "opt_flag", "func_def_base", "op_op", "func_def", "ref",
  "decl_flag", "type_decl_tmpl", "type_decl_next", "type_decl_noflag",
  "type_decl0", "type_decl", "decl_list", "union_def", "var_decl_list",
  "var_decl", "arg_decl", "fptr_arg_decl", "eq_op", "rel_op", "shift_op",
  "add_op", "mul_op", "opt_exp", "con_exp", "log_or_exp", "log_and_exp",
  "inc_or_exp", "exc_or_exp", "and_exp", "eq_exp", "rel_exp", "shift_exp",
  "add_exp", "mul_exp", "dur_exp", "cast_exp", "unary_op", "unary_exp",
  "lambda_list", "lambda_arg", "type_list", "call_paren", "post_op",
  "dot_exp", "post_exp", "interp_exp", "interp", "typeof_exp", "prim_exp", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362
};
#endif

#define YYPACT_NINF (-345)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-161)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     687,    25,  1137,  1079,   788,   125,    37,  -345,   880,  -345,
      45,    78,    54,  1601,   125,  1601,  -345,  -345,  -345,  -345,
    -345,  -345,  -345,  -345,   456,   125,   125,   -31,    63,  1601,
      54,  1195,   -31,  -345,  -345,    26,  -345,  -345,  -345,  -345,
    -345,  -345,  -345,  -345,  -345,  -345,  -345,  -345,  -345,  -345,
    -345,  -345,    -9,   112,   112,   105,  1601,    -9,  -345,  -345,
     134,  -345,   687,   125,  -345,  -345,  -345,  -345,  -345,  -345,
     880,   101,  -345,  -345,  -345,  -345,   139,  -345,  -345,  -345,
     136,  -345,  -345,  -345,   156,    12,  -345,   153,  -345,  -345,
    -345,  -345,  -345,   115,  -345,    -9,  -345,  -345,   117,  -345,
      63,  -345,    54,  -345,  -345,    21,    76,    67,    75,    85,
     -27,    80,    58,   -23,    57,    95,   100,   566,  -345,   112,
    -345,  -345,    14,    44,  -345,  -345,  -345,    88,   172,  1659,
    -345,  1601,    10,  -345,   173,  -345,    -9,  1601,    65,  1601,
     963,   179,   176,    54,   183,    -9,  -345,  -345,  -345,  -345,
    -345,  -345,  -345,  -345,  -345,  -345,  -345,  -345,  -345,  -345,
    -345,    -9,  -345,  -345,  -345,  -345,    -9,    -9,    87,  -345,
    -345,  -345,  -345,  -345,  -345,    54,    15,    54,  -345,  -345,
     131,  -345,  1195,  -345,    54,  -345,  -345,   182,  -345,  -345,
    1601,   106,  -345,   187,    92,  -345,  -345,    87,  -345,  -345,
    1601,  -345,  -345,  1601,  1601,  1253,  -345,  -345,  -345,   -18,
    -345,   182,  -345,   190,  1601,  1659,  1659,  1659,  1659,  1659,
    1659,  -345,  -345,  1659,  1659,  1659,  1659,  1659,  1659,    -9,
      -9,  -345,  -345,  -345,  -345,  1311,    54,    -9,   191,  -345,
    -345,  -345,  -345,   189,   182,  1369,  -345,    31,    54,   192,
    1601,   194,    63,  1021,  -345,   174,  -345,   193,  -345,   196,
     198,   199,    31,    54,    54,    54,  -345,  -345,  -345,  -345,
    -345,  -345,  1427,  -345,   200,  -345,    -9,    54,    54,   201,
    -345,  -345,  -345,   197,  -345,  -345,    54,  -345,   130,  -345,
      76,    67,    75,    85,   -27,    80,    58,   -23,    57,    95,
     100,  -345,   205,  -345,   110,  1485,  -345,  -345,  -345,   153,
    -345,   204,  -345,   207,   112,    87,   880,   211,   880,    54,
    1543,  1601,   174,   212,    54,    -9,   225,    -9,    -9,   218,
      87,   132,   228,   226,  -345,  -345,  -345,   206,   880,  -345,
    1659,    -9,  -345,  -345,   232,  -345,  -345,  -345,   196,   221,
    -345,  -345,   161,   880,   235,   222,  -345,   220,   236,  -345,
     245,    54,   112,   246,   247,  -345,    82,  -345,    54,   -31,
      -9,   242,  -345,  -345,   248,  -345,  -345,   880,  1601,  -345,
     880,  1601,   177,   880,  -345,  -345,    -9,   182,   178,  -345,
      -9,   112,  -345,    -9,  -345,  -345,   249,    54,   250,  -345,
     687,   112,  -345,    11,  -345,  -345,   880,  -345,  -345,  -345,
     153,  1601,   251,  -345,   254,  -345,    54,   -31,  -345,    54,
    -345,   252,  -345,   880,  -345,   -48,   112,    -9,   182,  -345,
    -345,   256,  -345,  -345,  -345,  -345,  -345,   153,  -345
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       3,    93,     0,     0,     0,   138,     0,    76,     0,    77,
       0,     0,     0,     0,   138,    87,    88,    89,    13,    14,
     131,   132,   133,   134,     0,   138,   138,     0,   151,     0,
     235,     0,     0,   255,   256,    61,   257,   258,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,   240,   220,
     241,   221,     0,   224,   225,     0,     0,     0,   226,   223,
       0,     2,     4,   138,     8,     6,    11,    12,    54,    59,
      22,   254,     9,    55,    56,    57,     0,    52,    60,    53,
       0,    58,    95,    51,     0,    96,   114,   115,   260,   259,
      98,   121,   117,   136,   135,     0,   146,     7,   157,   159,
     151,   162,     0,    10,   116,   193,   196,   198,   200,   202,
     204,   206,   208,   210,   212,   214,   216,     0,   218,     0,
     222,   248,   227,   266,   243,    92,   264,   254,     0,     0,
     108,     0,     0,    39,     0,   139,     0,     0,     0,     0,
       0,     0,     0,    64,     0,     0,   186,   187,   188,   189,
     190,   102,   183,   181,   182,   180,   103,   184,   185,   104,
     141,     0,   143,   142,   145,   144,     0,     0,   130,   155,
     163,   160,   152,   153,   154,     0,     0,   232,   234,   249,
       0,   252,   265,   164,     0,    30,   229,    28,   230,   231,
       0,     0,    31,   236,     0,     1,     5,   130,    23,    66,
       0,    91,    94,     0,     0,     0,   110,   137,   122,     0,
     161,   170,   119,   168,   192,     0,     0,     0,     0,     0,
       0,   178,   179,     0,     0,     0,     0,     0,     0,     0,
       0,   254,   228,   266,   263,     0,     0,     0,     0,   244,
     245,   247,   262,     0,   105,     0,    40,     0,     0,     0,
       0,     0,   151,     0,    67,     0,    63,     0,    90,     0,
       0,     0,     0,     0,     0,    64,   118,    84,   233,   250,
     251,    62,     0,    29,     0,   261,     0,     0,     0,     0,
      97,    99,   109,     0,   158,   171,     0,   191,     0,   195,
     197,   199,   201,   203,   205,   207,   209,   211,   213,   215,
     217,   219,     0,   242,     0,     0,   246,   113,   106,   107,
     112,     0,   128,     0,     0,   130,     0,     0,     0,     0,
       0,     0,    71,     0,     0,   124,     0,     0,     0,     0,
     130,     0,    20,     0,   253,   237,   156,    17,     0,   169,
       0,     0,   100,   239,     0,   111,   127,   140,     0,    85,
      79,    83,     0,     0,     0,    69,    72,    74,     0,    34,
     123,     0,     0,     0,     0,    26,     0,   129,     0,     0,
       0,     0,    78,   194,     0,   238,    25,     0,     0,    80,
       0,     0,     0,     0,    75,    65,     0,   172,    33,   150,
       0,     0,    27,   126,    24,    21,     0,     0,     0,    16,
      19,     0,    86,     0,    81,    68,     0,    73,    35,   174,
     173,     0,     0,   148,    37,   125,    64,   165,   120,    64,
      18,     0,   149,     0,    70,    32,     0,     0,   175,    36,
     166,     0,    15,    82,   147,    38,   177,   176,   167
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -345,  -345,   -53,  -345,  -345,  -345,  -345,  -345,  -288,    -3,
    -345,  -345,  -345,  -345,   -41,  -109,  -107,  -294,  -345,  -345,
    -161,    23,  -345,    -5,     0,  -251,  -345,  -345,  -345,  -345,
    -345,   -54,  -345,  -345,   133,  -345,  -345,  -345,  -345,  -345,
     268,  -125,   289,   -24,  -345,   255,   -64,  -238,   148,  -148,
      69,   180,  -345,  -345,   -68,  -345,    19,  -190,  -345,   181,
      46,    64,  -345,  -345,  -345,    30,   184,    74,  -345,  -344,
      79,   339,  -132,  -345,  -162,  -345,  -110,  -345,  -345,   264,
     265,   266,   269,  -345,  -205,  -345,    81,    77,    83,    84,
      86,    72,    90,    71,    73,    94,    70,     2,   -74,   123,
    -345,  -211,  -345,    -4,  -345,  -345,   126,  -345,   215,  -345
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    60,    61,    62,    63,    64,   371,   421,   331,    65,
     262,   247,    66,    67,   192,   186,   193,   359,   360,   414,
     415,    68,    69,    70,   127,   257,    72,    73,    74,   382,
     322,   323,   384,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,   238,   204,    86,    87,    88,    89,
      90,    91,   396,    92,   326,   394,   314,   265,    93,    94,
      95,   136,    96,   161,    97,   174,   175,    98,    99,   100,
     101,   102,   398,   103,   212,   213,   388,   429,   223,   224,
     225,   226,   227,   288,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   129,   118,   178,
     119,   194,   306,   120,   121,   122,   181,   182,   123,   124
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      71,   134,   117,   138,    71,   176,   309,   278,    71,   196,
     289,   185,   141,   266,   333,   253,   203,   423,   244,  -101,
     166,   235,    35,   206,     4,   397,   304,   169,     1,   248,
     177,    27,   169,   363,   364,    35,   358,   312,   259,   273,
     151,    32,   137,   232,    35,   156,   146,   374,   147,   236,
     139,   135,   169,    55,   260,   232,   159,   169,   239,   261,
     135,   221,    71,   285,   117,   335,   222,   198,   184,    57,
      71,   135,   135,   397,   313,    55,   188,   189,   143,     7,
     395,     9,    57,   140,    48,   392,    50,   393,   245,   167,
     168,    57,   408,  -160,  -160,   169,   412,  -160,   214,   151,
     151,   215,   211,   151,   156,   156,   170,    35,   156,   135,
     190,   183,   172,   173,   237,   159,   159,   231,   241,   159,
     216,     4,   301,   302,   339,   348,   263,   197,   320,   231,
     148,   149,   150,  -155,   195,   373,   169,  -155,  -155,   201,
     366,  -155,   234,   256,   200,   169,  -155,    22,    23,   410,
    -155,  -155,   157,   158,  -155,    20,    21,    22,    23,   202,
     205,   169,   209,   217,   218,   428,   169,   169,   431,   152,
     153,   154,   155,   219,   228,   211,   229,   177,   242,   199,
     308,   220,   254,   246,   271,   255,   258,   264,   269,   272,
     437,   276,   275,   277,   286,   321,   305,   307,   316,   267,
     318,   325,   324,   327,   328,   244,   334,   338,   340,   169,
     341,   342,   345,   346,   350,   231,   231,   231,   231,   231,
     231,   365,   357,   231,   231,   231,   231,   231,   231,   169,
     169,   362,   368,   367,   377,   369,   303,   169,   375,   378,
     370,   380,   171,   383,   381,   206,   385,   171,   315,   386,
     390,   400,   417,   391,   401,   406,   411,   426,   427,   438,
     419,   399,   432,   330,   332,   256,   435,   171,   356,   125,
     240,   250,   171,   281,   207,   208,   169,   336,   337,   160,
     376,   329,   319,   284,   210,   430,   211,   418,   162,   163,
     164,   128,   132,   165,   291,   295,   297,   290,   300,   298,
     268,   292,   142,   293,   144,     0,   294,     0,   270,     0,
     171,   349,     0,   351,   296,     0,    71,     0,    71,   352,
     180,   299,     0,   409,   332,   169,     0,   169,   169,   185,
       0,     0,   233,   372,     0,     0,     0,   347,    71,     0,
     231,   169,     0,     0,   233,   191,   206,   420,   379,     0,
       0,   171,     0,    71,   403,     0,     0,     0,     0,     0,
     171,   387,     0,     0,   436,     0,     0,     0,   332,   169,
     169,     0,   402,   206,     0,   404,   171,    71,   407,     0,
      71,   171,   171,    71,     0,   389,   169,   425,     0,     0,
     169,   187,     0,   169,     0,     0,   187,   387,     0,     0,
      71,     0,   117,   424,     0,     0,    71,     0,     0,     0,
       0,     0,     0,     0,   413,     0,   256,   169,   433,   256,
     243,     0,     0,    71,   422,     0,   249,   169,   251,     0,
     233,   233,   233,   233,   233,   233,     0,     0,   233,   233,
     233,   233,   233,   233,   171,   171,     0,     0,     0,   434,
       0,     0,   171,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   180,     0,     0,     0,   187,     0,     0,     0,   274,
       0,     0,     0,     0,   187,     0,     0,     0,     0,   279,
       0,   171,   280,     0,   283,     0,     0,     0,     0,     0,
     187,     0,     0,   287,   145,   187,   187,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   132,   146,    48,   147,    50,   148,
     149,   150,     0,     0,   311,     0,     0,     0,     0,   317,
     171,     0,   171,   171,   151,   152,   153,   154,   155,   156,
     157,   158,     0,     0,     0,   233,   171,     0,     0,     0,
     159,   283,     0,     0,     0,     0,     0,     0,   187,   187,
       0,     2,     0,     3,     0,     0,   187,     0,     0,     0,
       0,     0,     0,     0,   171,   171,     0,     0,     0,     0,
       0,     0,     0,     0,   344,     0,     0,     0,     0,     0,
       0,   171,   230,     0,     0,   171,     0,     0,   171,   354,
     355,     0,    30,    31,     0,   187,     0,    33,    34,    35,
      36,    37,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   171,     0,     0,     0,    48,    49,    50,    51,
       0,     0,   171,     0,     0,     0,     0,    52,    53,    54,
      55,    56,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   361,     0,   361,   361,    58,    59,
     405,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     361,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,     0,     2,     0,     3,     0,     4,     0,     5,     6,
       0,     7,     8,     9,    10,    11,    12,    13,     0,   187,
       0,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,     0,     0,    24,    25,   361,    26,    27,    28,   361,
       0,    29,   416,    30,    31,     0,     0,    32,    33,    34,
      35,    36,    37,     0,     0,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,     0,     0,    48,    49,    50,
      51,     0,     0,     0,     0,     0,   416,     0,    52,    53,
      54,    55,    56,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    57,     0,    58,
      59,     1,     0,     2,     0,     3,     0,     4,   133,     0,
       6,     0,     7,     8,     9,    10,    11,    12,    13,     0,
       0,     0,     0,    15,    16,    17,     0,     0,    20,    21,
      22,    23,     0,     0,     0,     0,     0,     0,    27,    28,
       0,     0,    29,     0,    30,    31,     0,     0,    32,    33,
      34,    35,    36,    37,     0,     0,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,     0,     0,    48,    49,
      50,    51,     0,     0,     0,     0,     0,     0,     0,    52,
      53,    54,    55,    56,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     1,     0,     2,     0,     3,    57,     4,
      58,    59,     6,     0,     7,     8,     9,    10,    11,    12,
      13,     0,     0,     0,     0,    15,    16,    17,     0,     0,
      20,    21,    22,    23,     0,     0,     0,     0,     0,     0,
      27,    28,     0,     0,    29,     0,    30,    31,     0,     0,
      32,    33,    34,    35,    36,    37,     0,     0,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,     0,     0,
      48,    49,    50,    51,     0,     0,     0,     0,     0,     0,
       0,    52,    53,    54,    55,    56,     1,     0,     2,     0,
       3,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      57,     0,    58,    59,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    20,    21,    22,    23,     0,     0,     0,
       0,     0,     0,    27,   252,     0,     0,     0,     0,    30,
      31,     0,     0,    32,    33,    34,    35,    36,    37,     0,
       0,     0,     0,     0,     1,     0,     2,     0,     3,     0,
       0,     0,     0,    48,    49,    50,    51,     0,     0,     0,
       0,     0,     0,     0,    52,    53,    54,    55,    56,     0,
       0,    20,    21,    22,    23,     0,     0,     0,     0,     0,
       0,    27,    28,    57,     0,    58,    59,    30,    31,     0,
       0,    32,    33,    34,    35,    36,    37,     0,     0,     0,
       0,     0,     0,     0,     2,     0,     3,   130,     0,     0,
       0,    48,    49,    50,    51,     0,     0,     0,     0,     0,
       0,     0,    52,    53,    54,    55,    56,     0,     0,    20,
      21,    22,    23,     0,     0,     0,     0,     0,     0,    27,
      28,    57,     0,    58,    59,    30,    31,     0,     0,    32,
      33,    34,    35,    36,    37,     0,     0,     0,     0,     0,
       0,     0,     2,   126,     3,     0,     0,     0,     0,    48,
      49,    50,    51,     0,     0,     0,     0,   131,     0,     0,
      52,    53,    54,    55,    56,     0,     0,    20,    21,    22,
      23,     0,     0,     0,     0,     0,     0,    27,    28,    57,
       0,    58,    59,    30,    31,     0,     0,    32,    33,    34,
      35,    36,    37,     0,     0,     0,     0,     0,     0,     0,
       2,     0,     3,     0,     0,     0,     0,    48,    49,    50,
      51,     0,     0,     0,     0,     0,     0,     0,    52,    53,
      54,    55,    56,     0,     0,    20,    21,    22,    23,     0,
       0,     0,     0,     0,     0,    27,    28,    57,     0,    58,
      59,    30,    31,     0,     0,    32,    33,    34,    35,    36,
      37,   179,     0,     0,     0,     0,     0,     0,     2,     0,
       3,   282,     0,     0,     0,    48,    49,    50,    51,     0,
       0,     0,     0,     0,     0,     0,    52,    53,    54,    55,
      56,     0,     0,    20,    21,    22,    23,     0,     0,     0,
       0,     0,     0,    27,    28,    57,     0,    58,    59,    30,
      31,     0,     0,    32,    33,    34,    35,    36,    37,     0,
       0,     0,     0,     0,     0,     0,     2,     0,     3,     0,
       0,     0,     0,    48,    49,    50,    51,     0,     0,     0,
       0,     0,     0,     0,    52,    53,    54,    55,    56,     0,
       0,    20,    21,    22,    23,     0,     0,     0,     0,     0,
       0,    27,    28,    57,     0,    58,    59,    30,    31,     0,
       0,    32,    33,    34,    35,    36,    37,     0,     0,     0,
       0,     0,     0,     0,     2,     0,     3,   310,     0,     0,
       0,    48,    49,    50,    51,     0,     0,     0,     0,   131,
       0,     0,    52,    53,    54,    55,    56,     0,     0,    20,
      21,    22,    23,     0,     0,     0,     0,     0,     0,    27,
      28,    57,     0,    58,    59,    30,    31,     0,     0,    32,
      33,    34,    35,    36,    37,     0,     0,     0,     0,     0,
       0,     0,     2,     0,     3,   130,     0,     0,     0,    48,
      49,    50,    51,     0,     0,     0,     0,     0,     0,     0,
      52,    53,    54,    55,    56,     0,     0,    20,    21,    22,
      23,     0,     0,     0,     0,     0,     0,    27,    28,    57,
       0,    58,    59,    30,    31,     0,     0,    32,    33,    34,
      35,    36,    37,     0,     0,     0,     0,     0,     0,     0,
       2,   343,     3,     0,     0,     0,     0,    48,    49,    50,
      51,     0,     0,     0,     0,     0,     0,     0,    52,    53,
      54,    55,    56,     0,     0,    20,    21,    22,    23,     0,
       0,     0,     0,     0,     0,    27,    28,    57,     0,    58,
      59,    30,    31,     0,     0,    32,    33,    34,    35,    36,
      37,     0,     0,     0,     0,     0,     0,     0,     2,   353,
       3,     0,     0,     0,     0,    48,    49,    50,    51,     0,
       0,     0,     0,     0,     0,     0,    52,    53,    54,    55,
      56,     0,     0,    20,    21,    22,    23,     0,     0,     0,
       0,     0,     0,    27,    28,    57,     0,    58,    59,    30,
      31,     0,     0,    32,    33,    34,    35,    36,    37,     0,
       0,     0,     0,     0,     0,     0,     2,     0,     3,     0,
       0,     0,     0,    48,    49,    50,    51,     0,     0,     0,
       0,     0,     0,     0,    52,    53,    54,    55,    56,     0,
       0,    20,    21,    22,    23,     0,     0,     0,     0,     0,
       0,    27,    28,    57,     0,    58,    59,    30,    31,     0,
       0,    32,    33,    34,    35,    36,    37,     0,     0,     0,
       0,     0,     0,     0,     2,     0,     3,     0,     0,     0,
       0,    48,    49,    50,    51,     0,     0,     0,     0,     0,
       0,     0,    52,    53,    54,    55,    56,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    57,     0,    58,    59,    30,    31,     0,     0,     0,
      33,    34,    35,    36,    37,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    48,
      49,    50,    51,     0,     0,     0,     0,     0,     0,     0,
      52,    53,    54,    55,    56,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    58,    59
};

static const yytype_int16 yycheck[] =
{
       0,     4,     0,     8,     4,    29,   244,   197,     8,    62,
     215,    52,    12,   175,   265,   140,     4,     6,     8,     5,
      24,     7,    53,    87,     9,   369,   237,    27,     3,   136,
      30,    40,    32,   327,   328,    53,   324,     6,   145,   187,
      88,    50,     5,   117,    53,    93,    69,   341,    71,    35,
       5,     5,    52,    84,   161,   129,   104,    57,   122,   166,
      14,    88,    62,   211,    62,   276,    93,    70,    42,   100,
      70,    25,    26,   417,    43,    84,    53,    54,    14,    14,
     368,    16,   100,     5,    70,     3,    72,     5,    78,    25,
      26,   100,   386,    49,    50,    95,   390,    53,    77,    88,
      88,    80,   102,    88,    93,    93,    27,    53,    93,    63,
       5,    32,    49,    50,   100,   104,   104,   117,   122,   104,
      99,     9,   229,   230,   286,   315,   167,    63,   253,   129,
      73,    74,    75,    45,     0,   340,   136,    49,    50,     3,
     330,    53,   119,   143,     5,   145,    45,    32,    33,   387,
      49,    50,    94,    95,    53,    30,    31,    32,    33,     3,
       7,   161,    45,    87,    97,   416,   166,   167,   419,    89,
      90,    91,    92,    98,    79,   175,    76,   177,     6,    78,
     244,    96,     3,    10,   184,     9,     3,   100,    57,     7,
     428,     4,    86,   101,     4,    21,     5,     8,     6,   176,
       6,     5,     9,     5,     5,     8,     6,     6,    78,   209,
       5,   101,     8,     6,     3,   215,   216,   217,   218,   219,
     220,     3,    10,   223,   224,   225,   226,   227,   228,   229,
     230,     6,     4,   101,    13,     9,   236,   237,     6,    78,
      34,     6,    27,    23,    22,   309,    10,    32,   248,     4,
       4,     9,     3,     6,     6,    78,    78,     6,     4,     3,
      10,   370,    10,   263,   264,   265,   427,    52,   322,     1,
     122,   138,    57,   204,    93,    95,   276,   277,   278,    24,
     348,   262,   252,   209,   100,   417,   286,   397,    24,    24,
      24,     2,     3,    24,   217,   223,   225,   216,   228,   226,
     177,   218,    13,   219,    15,    -1,   220,    -1,   182,    -1,
      95,   316,    -1,   318,   224,    -1,   316,    -1,   318,   319,
      31,   227,    -1,   387,   324,   325,    -1,   327,   328,   370,
      -1,    -1,   117,   338,    -1,    -1,    -1,   314,   338,    -1,
     340,   341,    -1,    -1,   129,    56,   410,   400,   353,    -1,
      -1,   136,    -1,   353,   378,    -1,    -1,    -1,    -1,    -1,
     145,   361,    -1,    -1,   428,    -1,    -1,    -1,   368,   369,
     370,    -1,   377,   437,    -1,   380,   161,   377,   383,    -1,
     380,   166,   167,   383,    -1,   362,   386,   411,    -1,    -1,
     390,    52,    -1,   393,    -1,    -1,    57,   397,    -1,    -1,
     400,    -1,   400,   406,    -1,    -1,   406,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   391,    -1,   416,   417,   423,   419,
     131,    -1,    -1,   423,   401,    -1,   137,   427,   139,    -1,
     215,   216,   217,   218,   219,   220,    -1,    -1,   223,   224,
     225,   226,   227,   228,   229,   230,    -1,    -1,    -1,   426,
      -1,    -1,   237,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   182,    -1,    -1,    -1,   136,    -1,    -1,    -1,   190,
      -1,    -1,    -1,    -1,   145,    -1,    -1,    -1,    -1,   200,
      -1,   276,   203,    -1,   205,    -1,    -1,    -1,    -1,    -1,
     161,    -1,    -1,   214,    48,   166,   167,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   235,    69,    70,    71,    72,    73,
      74,    75,    -1,    -1,   245,    -1,    -1,    -1,    -1,   250,
     325,    -1,   327,   328,    88,    89,    90,    91,    92,    93,
      94,    95,    -1,    -1,    -1,   340,   341,    -1,    -1,    -1,
     104,   272,    -1,    -1,    -1,    -1,    -1,    -1,   229,   230,
      -1,     5,    -1,     7,    -1,    -1,   237,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   369,   370,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   305,    -1,    -1,    -1,    -1,    -1,
      -1,   386,    36,    -1,    -1,   390,    -1,    -1,   393,   320,
     321,    -1,    46,    47,    -1,   276,    -1,    51,    52,    53,
      54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   417,    -1,    -1,    -1,    70,    71,    72,    73,
      -1,    -1,   427,    -1,    -1,    -1,    -1,    81,    82,    83,
      84,    85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   325,    -1,   327,   328,   102,   103,
     381,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     341,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,    -1,     5,    -1,     7,    -1,     9,    -1,    11,    12,
      -1,    14,    15,    16,    17,    18,    19,    20,    -1,   370,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    -1,    -1,    36,    37,   386,    39,    40,    41,   390,
      -1,    44,   393,    46,    47,    -1,    -1,    50,    51,    52,
      53,    54,    55,    -1,    -1,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    -1,    -1,    70,    71,    72,
      73,    -1,    -1,    -1,    -1,    -1,   427,    -1,    81,    82,
      83,    84,    85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,    -1,   102,
     103,     3,    -1,     5,    -1,     7,    -1,     9,    10,    -1,
      12,    -1,    14,    15,    16,    17,    18,    19,    20,    -1,
      -1,    -1,    -1,    25,    26,    27,    -1,    -1,    30,    31,
      32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,
      -1,    -1,    44,    -1,    46,    47,    -1,    -1,    50,    51,
      52,    53,    54,    55,    -1,    -1,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    -1,    -1,    70,    71,
      72,    73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      82,    83,    84,    85,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,    -1,     5,    -1,     7,   100,     9,
     102,   103,    12,    -1,    14,    15,    16,    17,    18,    19,
      20,    -1,    -1,    -1,    -1,    25,    26,    27,    -1,    -1,
      30,    31,    32,    33,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    41,    -1,    -1,    44,    -1,    46,    47,    -1,    -1,
      50,    51,    52,    53,    54,    55,    -1,    -1,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    -1,    -1,
      70,    71,    72,    73,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    82,    83,    84,    85,     3,    -1,     5,    -1,
       7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     100,    -1,   102,   103,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    41,    -1,    -1,    -1,    -1,    46,
      47,    -1,    -1,    50,    51,    52,    53,    54,    55,    -1,
      -1,    -1,    -1,    -1,     3,    -1,     5,    -1,     7,    -1,
      -1,    -1,    -1,    70,    71,    72,    73,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    82,    83,    84,    85,    -1,
      -1,    30,    31,    32,    33,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    41,   100,    -1,   102,   103,    46,    47,    -1,
      -1,    50,    51,    52,    53,    54,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     5,    -1,     7,     8,    -1,    -1,
      -1,    70,    71,    72,    73,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    81,    82,    83,    84,    85,    -1,    -1,    30,
      31,    32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      41,   100,    -1,   102,   103,    46,    47,    -1,    -1,    50,
      51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     5,     6,     7,    -1,    -1,    -1,    -1,    70,
      71,    72,    73,    -1,    -1,    -1,    -1,    78,    -1,    -1,
      81,    82,    83,    84,    85,    -1,    -1,    30,    31,    32,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,   100,
      -1,   102,   103,    46,    47,    -1,    -1,    50,    51,    52,
      53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       5,    -1,     7,    -1,    -1,    -1,    -1,    70,    71,    72,
      73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,
      83,    84,    85,    -1,    -1,    30,    31,    32,    33,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    41,   100,    -1,   102,
     103,    46,    47,    -1,    -1,    50,    51,    52,    53,    54,
      55,    56,    -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,
       7,     8,    -1,    -1,    -1,    70,    71,    72,    73,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,    84,
      85,    -1,    -1,    30,    31,    32,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    41,   100,    -1,   102,   103,    46,
      47,    -1,    -1,    50,    51,    52,    53,    54,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,     7,    -1,
      -1,    -1,    -1,    70,    71,    72,    73,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    82,    83,    84,    85,    -1,
      -1,    30,    31,    32,    33,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    41,   100,    -1,   102,   103,    46,    47,    -1,
      -1,    50,    51,    52,    53,    54,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     5,    -1,     7,     8,    -1,    -1,
      -1,    70,    71,    72,    73,    -1,    -1,    -1,    -1,    78,
      -1,    -1,    81,    82,    83,    84,    85,    -1,    -1,    30,
      31,    32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      41,   100,    -1,   102,   103,    46,    47,    -1,    -1,    50,
      51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     5,    -1,     7,     8,    -1,    -1,    -1,    70,
      71,    72,    73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    82,    83,    84,    85,    -1,    -1,    30,    31,    32,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,   100,
      -1,   102,   103,    46,    47,    -1,    -1,    50,    51,    52,
      53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       5,     6,     7,    -1,    -1,    -1,    -1,    70,    71,    72,
      73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,
      83,    84,    85,    -1,    -1,    30,    31,    32,    33,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    41,   100,    -1,   102,
     103,    46,    47,    -1,    -1,    50,    51,    52,    53,    54,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,     6,
       7,    -1,    -1,    -1,    -1,    70,    71,    72,    73,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,    84,
      85,    -1,    -1,    30,    31,    32,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    41,   100,    -1,   102,   103,    46,
      47,    -1,    -1,    50,    51,    52,    53,    54,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,     7,    -1,
      -1,    -1,    -1,    70,    71,    72,    73,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    82,    83,    84,    85,    -1,
      -1,    30,    31,    32,    33,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    41,   100,    -1,   102,   103,    46,    47,    -1,
      -1,    50,    51,    52,    53,    54,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     5,    -1,     7,    -1,    -1,    -1,
      -1,    70,    71,    72,    73,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    81,    82,    83,    84,    85,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   100,    -1,   102,   103,    46,    47,    -1,    -1,    -1,
      51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      71,    72,    73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    82,    83,    84,    85,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   102,   103
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     5,     7,     9,    11,    12,    14,    15,    16,
      17,    18,    19,    20,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    36,    37,    39,    40,    41,    44,
      46,    47,    50,    51,    52,    53,    54,    55,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    70,    71,
      72,    73,    81,    82,    83,    84,    85,   100,   102,   103,
     109,   110,   111,   112,   113,   117,   120,   121,   129,   130,
     131,   132,   134,   135,   136,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   154,   155,   156,   157,
     158,   159,   161,   166,   167,   168,   170,   172,   175,   176,
     177,   178,   179,   181,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   208,
     211,   212,   213,   216,   217,   148,     6,   132,   150,   205,
       8,    78,   150,    10,   117,   168,   169,     5,   131,     5,
       5,   132,   150,   169,   150,    48,    69,    71,    73,    74,
      75,    88,    89,    90,    91,    92,    93,    94,    95,   104,
     153,   171,   187,   188,   189,   190,   211,   169,   169,   132,
     178,   216,    49,    50,   173,   174,   151,   132,   207,    56,
     150,   214,   215,   178,    42,   122,   123,   179,   129,   129,
       5,   150,   122,   124,   209,     0,   110,   169,   117,    78,
       5,     3,     3,     4,   153,     7,   154,   167,   159,    45,
     174,   132,   182,   183,    77,    80,    99,    87,    97,    98,
      96,    88,    93,   186,   187,   188,   189,   190,    79,    76,
      36,   132,   206,   216,   129,     7,    35,   100,   152,   154,
     156,   211,     6,   150,     8,    78,    10,   119,   124,   150,
     142,   150,    41,   149,     3,     9,   132,   133,     3,   124,
     124,   124,   118,   122,   100,   165,   182,   129,   207,    57,
     214,   132,     7,   157,   150,    86,     4,   101,   165,   150,
     150,   158,     8,   150,   175,   157,     4,   150,   191,   192,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   124,   124,   132,   209,     5,   210,     8,   154,   155,
       8,   150,     6,    43,   164,   132,     6,   150,     6,   173,
     149,    21,   138,   139,     9,     5,   162,     5,     5,   164,
     132,   116,   132,   133,     6,   209,   132,   132,     6,   182,
      78,     5,   101,     6,   150,     8,     6,   129,   165,   131,
       3,   131,   132,     6,   150,   150,   139,    10,   116,   125,
     126,   179,     6,   125,   125,     3,   165,   101,     4,     9,
      34,   114,   131,   192,   125,     6,   162,    13,    78,   131,
       6,    22,   137,    23,   140,    10,     4,   132,   184,   129,
       4,     6,     3,     5,   163,   116,   160,   177,   180,   123,
       9,     6,   131,   151,   131,   150,    78,   131,   125,   154,
     155,    78,   125,   129,   127,   128,   179,     3,   184,    10,
     110,   115,   129,     6,   117,   151,     6,     4,   133,   185,
     180,   133,    10,   131,   129,   128,   154,   155,     3
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   108,   109,   109,   110,   110,   111,   111,   111,   111,
     111,   111,   111,   112,   112,   113,   114,   114,   115,   115,
     116,   116,   117,   117,   118,   119,   120,   121,   122,   122,
     123,   124,   125,   125,   126,   126,   127,   128,   128,   129,
     129,   130,   130,   130,   130,   130,   130,   130,   130,   130,
     130,   131,   131,   131,   131,   131,   131,   131,   131,   131,
     131,   132,   132,   133,   133,   134,   135,   136,   137,   137,
     138,   139,   139,   140,   140,   141,   142,   142,   143,   143,
     143,   143,   143,   143,   144,   145,   145,   146,   146,   146,
     147,   147,   148,   148,   149,   149,   150,   150,   151,   151,
     152,   152,   153,   153,   153,   154,   154,   154,   155,   155,
     155,   156,   156,   156,   157,   157,   158,   158,   158,   159,
     160,   161,   161,   162,   162,   163,   163,   164,   164,   165,
     165,   166,   166,   167,   167,   168,   168,   168,   169,   169,
     170,   171,   171,   171,   171,   171,   172,   172,   172,   172,
     172,   173,   173,   174,   174,   175,   175,   176,   176,   177,
     177,   178,   179,   179,   179,   180,   180,   181,   182,   182,
     183,   183,   184,   184,   184,   185,   185,   185,   186,   186,
     187,   187,   187,   187,   188,   188,   189,   189,   190,   190,
     190,   191,   191,   192,   192,   192,   193,   193,   194,   194,
     195,   195,   196,   196,   197,   197,   198,   198,   199,   199,
     200,   200,   201,   201,   202,   202,   203,   203,   204,   204,
     205,   205,   205,   205,   205,   205,   205,   206,   206,   206,
     206,   206,   207,   207,   208,   208,   209,   209,   210,   210,
     211,   211,   212,   213,   213,   213,   213,   213,   213,   214,
     214,   215,   215,   216,   217,   217,   217,   217,   217,   217,
     217,   217,   217,   217,   217,   217,   217
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     8,     2,     0,     1,     0,
       1,     3,     1,     2,     4,     4,     5,     6,     1,     2,
       1,     1,     4,     2,     1,     3,     2,     1,     3,     2,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     0,     6,     2,     3,     2,     0,
       5,     1,     2,     2,     0,     6,     1,     1,     5,     5,
       6,     7,     9,     5,     3,     5,     7,     1,     1,     1,
       3,     2,     2,     1,     2,     1,     1,     3,     1,     3,
       3,     0,     1,     1,     1,     3,     4,     4,     2,     3,
       2,     5,     4,     4,     1,     1,     1,     1,     3,     2,
       2,     1,     2,     2,     1,     2,     1,     2,     1,     3,
       0,     1,     1,     1,     1,     1,     1,     2,     0,     1,
       5,     1,     1,     1,     1,     1,     1,     9,     7,     7,
       6,     0,     1,     1,     1,     1,     4,     1,     3,     1,
       1,     2,     1,     2,     2,     2,     3,     9,     1,     3,
       1,     2,     1,     2,     2,     1,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     1,     5,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       2,     2,     1,     2,     2,     1,     1,     3,     3,     2,
       1,     1,     3,     1,     2,     2,     3,     2,     1,     1,
       2,     2,     1,     4,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     2,     2,     2,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (&yylloc, arg, YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YY_LOCATION_PRINT
#  if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#   define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

#  else
#   define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#  endif
# endif /* !defined YY_LOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location, arg); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, Scanner* arg)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  YYUSE (yylocationp);
  YYUSE (arg);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, Scanner* arg)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YY_LOCATION_PRINT (yyo, *yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp, arg);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
                 int yyrule, Scanner* arg)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]), arg);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, arg); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, Scanner* arg)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (arg);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yykind)
    {
    case 110: /* ast  */
#line 137 "src/gwion.y"
             { free_ast(mpool(arg), ((*yyvaluep).ast)); }
#line 2027 "src/parser.c"
        break;

      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}






/*----------.
| yyparse.  |
`----------*/

int
yyparse (Scanner* arg)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of syntax errors so far.  */
    int yynerrs;

    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize;

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yynerrs = 0;
  yystate = 0;
  yyerrstatus = 0;

  yystacksize = YYINITDEPTH;
  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;


  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex (&yylval, &yylloc, scan);
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      yyerror_range[1] = yylloc;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2:
#line 140 "src/gwion.y"
         { arg->ast = (yyval.ast) = (yyvsp[0].ast); }
#line 2343 "src/parser.c"
    break;

  case 3:
#line 141 "src/gwion.y"
                { gwion_error(&(yyloc), arg, "file is empty."); YYERROR; }
#line 2349 "src/parser.c"
    break;

  case 4:
#line 144 "src/gwion.y"
            { (yyval.ast) = !((Scanner*)arg)->ppa->lint ? new_ast_expand(mpool(arg), (yyvsp[0].section), NULL) : new_ast(mpool(arg), (yyvsp[0].section), NULL); }
#line 2355 "src/parser.c"
    break;

  case 5:
#line 145 "src/gwion.y"
                { (yyval.ast) = !((Scanner*)arg)->ppa->lint ? new_ast_expand(mpool(arg), (yyvsp[-1].section), (yyvsp[0].ast)) : new_ast(mpool(arg), (yyvsp[-1].section), (yyvsp[0].ast)); }
#line 2361 "src/parser.c"
    break;

  case 6:
#line 149 "src/gwion.y"
              { (yyval.section) = new_section_stmt_list(mpool(arg), (yyvsp[0].stmt_list)); }
#line 2367 "src/parser.c"
    break;

  case 7:
#line 150 "src/gwion.y"
              { (yyval.section) = new_section_func_def (mpool(arg), (yyvsp[0].func_def)); }
#line 2373 "src/parser.c"
    break;

  case 8:
#line 151 "src/gwion.y"
              { (yyval.section) = new_section_class_def(mpool(arg), (yyvsp[0].class_def)); }
#line 2379 "src/parser.c"
    break;

  case 9:
#line 152 "src/gwion.y"
              { (yyval.section) = new_section_enum_def(mpool(arg), (yyvsp[0].enum_def)); }
#line 2385 "src/parser.c"
    break;

  case 10:
#line 153 "src/gwion.y"
              { (yyval.section) = new_section_union_def(mpool(arg), (yyvsp[0].union_def)); }
#line 2391 "src/parser.c"
    break;

  case 11:
#line 154 "src/gwion.y"
              { (yyval.section) = new_section_fptr_def(mpool(arg), (yyvsp[0].fptr_def)); }
#line 2397 "src/parser.c"
    break;

  case 12:
#line 155 "src/gwion.y"
              { (yyval.section) = new_section_type_def(mpool(arg), (yyvsp[0].type_def)); }
#line 2403 "src/parser.c"
    break;

  case 13:
#line 158 "src/gwion.y"
                  { (yyval.flag) = ae_flag_none; }
#line 2409 "src/parser.c"
    break;

  case 14:
#line 158 "src/gwion.y"
                                                  { (yyval.flag) = ae_flag_struct; }
#line 2415 "src/parser.c"
    break;

  case 15:
#line 161 "src/gwion.y"
    {
      if((yyvsp[-7].flag) == ae_flag_struct && (yyvsp[-3].type_decl))
        { gwion_error(&(yyloc), arg, "'struct' inherit other types"); YYERROR; }
      (yyval.class_def) =new_class_def(mpool(arg), (yyvsp[-7].flag) | (yyvsp[-6].flag), (yyvsp[-4].sym), (yyvsp[-3].type_decl), (yyvsp[-1].ast), GET_LOC(&(yyloc)));
      if((yyvsp[-5].id_list))
        (yyval.class_def)->base.tmpl = new_tmpl_base(mpool(arg), (yyvsp[-5].id_list));
  }
#line 2427 "src/parser.c"
    break;

  case 16:
#line 169 "src/gwion.y"
                                  { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2433 "src/parser.c"
    break;

  case 17:
#line 169 "src/gwion.y"
                                                 { (yyval.type_decl) = NULL; }
#line 2439 "src/parser.c"
    break;

  case 19:
#line 171 "src/gwion.y"
                   { (yyval.ast) = NULL; }
#line 2445 "src/parser.c"
    break;

  case 20:
#line 173 "src/gwion.y"
            { (yyval.id_list) = new_id_list(mpool(arg), (yyvsp[0].sym), GET_LOC(&(yyloc))); }
#line 2451 "src/parser.c"
    break;

  case 21:
#line 173 "src/gwion.y"
                                                                                    { (yyval.id_list) = prepend_id_list(mpool(arg), (yyvsp[-2].sym), (yyvsp[0].id_list), loc_cpy(mpool(arg), &(yylsp[-2]))); }
#line 2457 "src/parser.c"
    break;

  case 22:
#line 175 "src/gwion.y"
                { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL);}
#line 2463 "src/parser.c"
    break;

  case 23:
#line 175 "src/gwion.y"
                                                                              { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[-1].stmt), (yyvsp[0].stmt_list)); }
#line 2469 "src/parser.c"
    break;

  case 24:
#line 177 "src/gwion.y"
                                                      { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].sym), (yyvsp[0].arg_list));
  if((yyvsp[-1].id_list)) (yyval.func_base)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-1].id_list)); }
#line 2476 "src/parser.c"
    break;

  case 25:
#line 179 "src/gwion.y"
                                                      { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].sym), (yyvsp[0].arg_list));
  if((yyvsp[-1].id_list)) (yyval.func_base)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-1].id_list)); }
#line 2483 "src/parser.c"
    break;

  case 26:
#line 182 "src/gwion.y"
                                                        {
  if((yyvsp[-2].func_base)->td->array && (yyvsp[-2].func_base)->td->array->exp) {
    gwion_error(&(yyloc), arg, "type must be defined with empty []'s");
    YYERROR;
  }
  (yyval.fptr_def) = new_fptr_def(mpool(arg), (yyvsp[-2].func_base), (yyvsp[-3].flag) | (yyvsp[-1].flag));
}
#line 2495 "src/parser.c"
    break;

  case 27:
#line 189 "src/gwion.y"
                                                                      {
  (yyval.type_def) = new_type_def(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].sym));
  (yyvsp[-3].type_decl)->flag |= (yyvsp[-4].flag);
  if((yyvsp[-1].id_list))
    (yyval.type_def)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-1].id_list));
}
#line 2506 "src/parser.c"
    break;

  case 29:
#line 196 "src/gwion.y"
                                             { (yyvsp[-1].type_decl)->array = (yyvsp[0].array_sub); }
#line 2512 "src/parser.c"
    break;

  case 30:
#line 198 "src/gwion.y"
                               { if((yyvsp[0].type_decl)->array && !(yyvsp[0].type_decl)->array->exp)
    { gwion_error(&(yyloc), arg, "can't instantiate with empty '[]'"); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2520 "src/parser.c"
    break;

  case 31:
#line 202 "src/gwion.y"
                                 { if((yyvsp[0].type_decl)->array && (yyvsp[0].type_decl)->array->exp)
    { gwion_error(&(yyloc), arg, "type must be defined with empty []'s"); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2528 "src/parser.c"
    break;

  case 32:
#line 207 "src/gwion.y"
                                      { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].var_decl), NULL); (yyval.arg_list)->exp = (yyvsp[0].exp); }
#line 2534 "src/parser.c"
    break;

  case 33:
#line 208 "src/gwion.y"
                       { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl), NULL); }
#line 2540 "src/parser.c"
    break;

  case 34:
#line 210 "src/gwion.y"
         { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2546 "src/parser.c"
    break;

  case 35:
#line 211 "src/gwion.y"
                        {
     Arg_List last = (yyvsp[-2].arg_list);
     while(last->next)
       last = last->next;
     if(last->exp && !(yyvsp[0].arg_list)->exp)
        { gwion_error(&(yylsp[0]), arg, "missing default argument"); YYERROR;}
     last->next = (yyvsp[0].arg_list); (yyval.arg_list) = (yyvsp[-2].arg_list);
   }
#line 2559 "src/parser.c"
    break;

  case 36:
#line 220 "src/gwion.y"
                                  { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl), NULL); }
#line 2565 "src/parser.c"
    break;

  case 37:
#line 221 "src/gwion.y"
                    { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2571 "src/parser.c"
    break;

  case 38:
#line 221 "src/gwion.y"
                                                            {
  if(!(yyvsp[-2].arg_list))
    { gwion_error(&(yyloc), arg, "invalid function pointer argument"); YYERROR;}
    (yyvsp[-2].arg_list)->next = (yyvsp[0].arg_list); (yyval.arg_list) = (yyvsp[-2].arg_list);
}
#line 2581 "src/parser.c"
    break;

  case 39:
#line 228 "src/gwion.y"
                  { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_code, GET_LOC(&(yyloc))); }
#line 2587 "src/parser.c"
    break;

  case 40:
#line 229 "src/gwion.y"
                            { (yyval.stmt) = new_stmt_code(mpool(arg), (yyvsp[-1].stmt_list)); }
#line 2593 "src/parser.c"
    break;

  case 41:
#line 233 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_comment, (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2599 "src/parser.c"
    break;

  case 42:
#line 234 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_include, (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2605 "src/parser.c"
    break;

  case 43:
#line 235 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_define,  (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2611 "src/parser.c"
    break;

  case 44:
#line 236 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_pragma,  (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2617 "src/parser.c"
    break;

  case 45:
#line 237 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_undef,   (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2623 "src/parser.c"
    break;

  case 46:
#line 238 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_ifdef,   (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2629 "src/parser.c"
    break;

  case 47:
#line 239 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_ifndef,  (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2635 "src/parser.c"
    break;

  case 48:
#line 240 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_else,    (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2641 "src/parser.c"
    break;

  case 49:
#line 241 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_endif,   (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2647 "src/parser.c"
    break;

  case 50:
#line 242 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_nl,      (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2653 "src/parser.c"
    break;

  case 61:
#line 259 "src/gwion.y"
       { (yyval.sym) = insert_symbol((yyvsp[0].sval)); }
#line 2659 "src/parser.c"
    break;

  case 62:
#line 260 "src/gwion.y"
                {
    char c[strlen(s_name((yyvsp[0].sym))) + strlen((yyvsp[-2].sval))];
    sprintf(c, "%s%s", (yyvsp[-2].sval), s_name((yyvsp[0].sym)));
    (yyval.sym) = insert_symbol(c);
  }
#line 2669 "src/parser.c"
    break;

  case 64:
#line 267 "src/gwion.y"
             { (yyval.sym) = NULL; }
#line 2675 "src/parser.c"
    break;

  case 65:
#line 270 "src/gwion.y"
                                                  { (yyval.enum_def) = new_enum_def(mpool(arg), (yyvsp[-1].id_list), (yyvsp[-3].sym), GET_LOC(&(yyloc)));
    (yyval.enum_def)->flag = (yyvsp[-4].flag); }
#line 2682 "src/parser.c"
    break;

  case 66:
#line 273 "src/gwion.y"
                     {  (yyval.stmt) = new_stmt_jump(mpool(arg), (yyvsp[-1].sym), 1, GET_LOC(&(yyloc))); }
#line 2688 "src/parser.c"
    break;

  case 67:
#line 275 "src/gwion.y"
                             {  (yyval.stmt) = new_stmt_jump(mpool(arg), (yyvsp[-1].sym), 0, GET_LOC(&(yyloc))); }
#line 2694 "src/parser.c"
    break;

  case 68:
#line 277 "src/gwion.y"
                   { (yyval.exp) = (yyvsp[0].exp); }
#line 2700 "src/parser.c"
    break;

  case 69:
#line 277 "src/gwion.y"
                                  { (yyval.exp) = NULL; }
#line 2706 "src/parser.c"
    break;

  case 70:
#line 280 "src/gwion.y"
                                      {
    (yyval.stmt) = new_stmt(mpool(arg), 0, GET_LOC(&(yyloc)));
    (yyval.stmt)->d.stmt_match.cond = (yyvsp[-3].exp);
    (yyval.stmt)->d.stmt_match.list = (yyvsp[0].stmt_list);
    (yyval.stmt)->d.stmt_match.when = (yyvsp[-2].exp);
}
#line 2717 "src/parser.c"
    break;

  case 71:
#line 288 "src/gwion.y"
                    { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL); }
#line 2723 "src/parser.c"
    break;

  case 72:
#line 289 "src/gwion.y"
                               { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[-1].stmt), (yyvsp[0].stmt_list)); }
#line 2729 "src/parser.c"
    break;

  case 73:
#line 291 "src/gwion.y"
                       { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2735 "src/parser.c"
    break;

  case 74:
#line 291 "src/gwion.y"
                                      { (yyval.stmt) = NULL; }
#line 2741 "src/parser.c"
    break;

  case 75:
#line 293 "src/gwion.y"
                                                          {
  (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_match, GET_LOC(&(yyloc)));
  (yyval.stmt)->d.stmt_match.cond  = (yyvsp[-4].exp);
  (yyval.stmt)->d.stmt_match.list  = (yyvsp[-2].stmt_list);
  (yyval.stmt)->d.stmt_match.where = (yyvsp[0].stmt);
}
#line 2752 "src/parser.c"
    break;

  case 76:
#line 301 "src/gwion.y"
          { (yyval.ival) = ae_stmt_while; }
#line 2758 "src/parser.c"
    break;

  case 77:
#line 302 "src/gwion.y"
          { (yyval.ival) = ae_stmt_until; }
#line 2764 "src/parser.c"
    break;

  case 78:
#line 306 "src/gwion.y"
    { (yyval.stmt) = new_stmt_flow(mpool(arg), (yyvsp[-4].ival), (yyvsp[-2].exp), (yyvsp[0].stmt), 0); }
#line 2770 "src/parser.c"
    break;

  case 79:
#line 308 "src/gwion.y"
    { (yyval.stmt) = new_stmt_flow(mpool(arg), (yyvsp[-2].ival), (yyvsp[-1].exp), (yyvsp[-3].stmt), 1); }
#line 2776 "src/parser.c"
    break;

  case 80:
#line 310 "src/gwion.y"
      { (yyval.stmt) = new_stmt_for(mpool(arg), (yyvsp[-3].stmt), (yyvsp[-2].stmt), NULL, (yyvsp[0].stmt)); }
#line 2782 "src/parser.c"
    break;

  case 81:
#line 312 "src/gwion.y"
      { (yyval.stmt) = new_stmt_for(mpool(arg), (yyvsp[-4].stmt), (yyvsp[-3].stmt), (yyvsp[-2].exp), (yyvsp[0].stmt)); }
#line 2788 "src/parser.c"
    break;

  case 82:
#line 314 "src/gwion.y"
      { (yyval.stmt) = new_stmt_auto(mpool(arg), (yyvsp[-4].sym), (yyvsp[-2].exp), (yyvsp[0].stmt)); (yyval.stmt)->d.stmt_auto.is_ptr = (yyvsp[-5].ival); }
#line 2794 "src/parser.c"
    break;

  case 83:
#line 316 "src/gwion.y"
      { (yyval.stmt) = new_stmt_loop(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].stmt)); }
#line 2800 "src/parser.c"
    break;

  case 84:
#line 319 "src/gwion.y"
                                           { (yyval.stmt) = new_stmt_varloop(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].stmt)); }
#line 2806 "src/parser.c"
    break;

  case 85:
#line 323 "src/gwion.y"
      { (yyval.stmt) = new_stmt_if(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].stmt)); }
#line 2812 "src/parser.c"
    break;

  case 86:
#line 325 "src/gwion.y"
      { (yyval.stmt) = new_stmt_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].stmt)); (yyval.stmt)->d.stmt_if.else_body = (yyvsp[0].stmt); }
#line 2818 "src/parser.c"
    break;

  case 87:
#line 329 "src/gwion.y"
              { (yyval.ival) = ae_stmt_return; }
#line 2824 "src/parser.c"
    break;

  case 88:
#line 330 "src/gwion.y"
              { (yyval.ival) = ae_stmt_break; }
#line 2830 "src/parser.c"
    break;

  case 89:
#line 331 "src/gwion.y"
              { (yyval.ival) = ae_stmt_continue; }
#line 2836 "src/parser.c"
    break;

  case 90:
#line 334 "src/gwion.y"
                          { (yyval.stmt) = new_stmt_exp(mpool(arg), ae_stmt_return, (yyvsp[-1].exp)); }
#line 2842 "src/parser.c"
    break;

  case 91:
#line 335 "src/gwion.y"
                        { (yyval.stmt) = new_stmt(mpool(arg), (yyvsp[-1].ival), GET_LOC(&(yyloc))); }
#line 2848 "src/parser.c"
    break;

  case 92:
#line 338 "src/gwion.y"
                               { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2854 "src/parser.c"
    break;

  case 93:
#line 338 "src/gwion.y"
                                                        { (yyval.stmt) = NULL; }
#line 2860 "src/parser.c"
    break;

  case 94:
#line 341 "src/gwion.y"
                  { (yyval.stmt) = new_stmt_exp(mpool(arg), ae_stmt_exp, (yyvsp[-1].exp)); }
#line 2866 "src/parser.c"
    break;

  case 95:
#line 342 "src/gwion.y"
                  { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_exp, GET_LOC(&(yyloc))); }
#line 2872 "src/parser.c"
    break;

  case 97:
#line 345 "src/gwion.y"
                                        { (yyval.exp) = prepend_exp((yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2878 "src/parser.c"
    break;

  case 99:
#line 347 "src/gwion.y"
                                                    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 2884 "src/parser.c"
    break;

  case 100:
#line 349 "src/gwion.y"
                                     { (yyval.type_list) = (yyvsp[-1].type_list); }
#line 2890 "src/parser.c"
    break;

  case 101:
#line 349 "src/gwion.y"
                                                    { (yyval.type_list) = NULL; }
#line 2896 "src/parser.c"
    break;

  case 105:
#line 354 "src/gwion.y"
                                { (yyval.array_sub) = new_array_sub(mpool(arg), (yyvsp[-1].exp)); }
#line 2902 "src/parser.c"
    break;

  case 106:
#line 355 "src/gwion.y"
                                { if((yyvsp[-2].exp)->next){ gwion_error(&(yyloc), arg, "invalid format for array init [...][...]..."); YYERROR; } (yyval.array_sub) = prepend_array_sub((yyvsp[0].array_sub), (yyvsp[-2].exp)); }
#line 2908 "src/parser.c"
    break;

  case 107:
#line 356 "src/gwion.y"
                                  { gwion_error(&(yyloc), arg, "partially empty array init [...][]..."); YYERROR; }
#line 2914 "src/parser.c"
    break;

  case 108:
#line 360 "src/gwion.y"
                              { (yyval.array_sub) = new_array_sub(mpool(arg), NULL); }
#line 2920 "src/parser.c"
    break;

  case 109:
#line 361 "src/gwion.y"
                              { (yyval.array_sub) = prepend_array_sub((yyvsp[-2].array_sub), NULL); }
#line 2926 "src/parser.c"
    break;

  case 110:
#line 362 "src/gwion.y"
                              { gwion_error(&(yyloc), arg, "partially empty array init [][...]"); YYERROR; }
#line 2932 "src/parser.c"
    break;

  case 111:
#line 366 "src/gwion.y"
                                { (yyval.range) = new_range(mpool(arg), (yyvsp[-3].exp), (yyvsp[-1].exp)); }
#line 2938 "src/parser.c"
    break;

  case 112:
#line 367 "src/gwion.y"
                                { (yyval.range) = new_range(mpool(arg), (yyvsp[-2].exp), NULL); }
#line 2944 "src/parser.c"
    break;

  case 113:
#line 368 "src/gwion.y"
                                { (yyval.range) = new_range(mpool(arg), NULL, (yyvsp[-1].exp)); }
#line 2950 "src/parser.c"
    break;

  case 118:
#line 373 "src/gwion.y"
                                 { (yyval.exp)= new_exp_decl(mpool(arg), new_type_decl(mpool(arg),
     insert_symbol("auto"), GET_LOC(&(yyloc))), (yyvsp[0].var_decl_list)); }
#line 2957 "src/parser.c"
    break;

  case 119:
#line 375 "src/gwion.y"
                                  { (yyval.exp)= new_exp_decl(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl_list)); }
#line 2963 "src/parser.c"
    break;

  case 120:
#line 376 "src/gwion.y"
                                     { (yyvsp[-1].type_decl)->flag |= ae_flag_ref; (yyval.exp)= new_exp_decl(mpool(arg), (yyvsp[-1].type_decl), new_var_decl_list(mpool(arg), (yyvsp[0].var_decl), NULL)); }
#line 2969 "src/parser.c"
    break;

  case 122:
#line 377 "src/gwion.y"
                                    { (yyvsp[0].exp)->d.exp_decl.td->flag |= (yyvsp[-1].flag); (yyval.exp) = (yyvsp[0].exp); }
#line 2975 "src/parser.c"
    break;

  case 123:
#line 379 "src/gwion.y"
                           { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2981 "src/parser.c"
    break;

  case 124:
#line 379 "src/gwion.y"
                                                 { (yyval.arg_list) = NULL; }
#line 2987 "src/parser.c"
    break;

  case 125:
#line 380 "src/gwion.y"
                            { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2993 "src/parser.c"
    break;

  case 126:
#line 380 "src/gwion.y"
                                                  { (yyval.arg_list) = NULL; }
#line 2999 "src/parser.c"
    break;

  case 127:
#line 381 "src/gwion.y"
                         { (yyval.flag) = ae_flag_variadic; }
#line 3005 "src/parser.c"
    break;

  case 128:
#line 381 "src/gwion.y"
                                                            { (yyval.flag) = 0; }
#line 3011 "src/parser.c"
    break;

  case 129:
#line 383 "src/gwion.y"
                                   { (yyval.id_list) = (yyvsp[-1].id_list); }
#line 3017 "src/parser.c"
    break;

  case 130:
#line 383 "src/gwion.y"
                                                  { (yyval.id_list) = NULL; }
#line 3023 "src/parser.c"
    break;

  case 131:
#line 385 "src/gwion.y"
                     { (yyval.flag) = ae_flag_static; }
#line 3029 "src/parser.c"
    break;

  case 132:
#line 386 "src/gwion.y"
           { (yyval.flag) = ae_flag_global; }
#line 3035 "src/parser.c"
    break;

  case 133:
#line 389 "src/gwion.y"
                     { (yyval.flag) = ae_flag_private; }
#line 3041 "src/parser.c"
    break;

  case 134:
#line 390 "src/gwion.y"
            { (yyval.flag) = ae_flag_protect; }
#line 3047 "src/parser.c"
    break;

  case 135:
#line 393 "src/gwion.y"
                  { (yyval.flag) = (yyvsp[0].flag); }
#line 3053 "src/parser.c"
    break;

  case 136:
#line 394 "src/gwion.y"
                 { (yyval.flag) = (yyvsp[0].flag); }
#line 3059 "src/parser.c"
    break;

  case 137:
#line 395 "src/gwion.y"
                             { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 3065 "src/parser.c"
    break;

  case 138:
#line 398 "src/gwion.y"
           { (yyval.flag) = 0; }
#line 3071 "src/parser.c"
    break;

  case 139:
#line 398 "src/gwion.y"
                              { (yyval.flag) = (yyvsp[0].flag); }
#line 3077 "src/parser.c"
    break;

  case 140:
#line 402 "src/gwion.y"
    { (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-2].func_base), (yyvsp[0].stmt), (yyvsp[-3].flag) | (yyvsp[-1].flag), GET_LOC(&(yyloc))); }
#line 3083 "src/parser.c"
    break;

  case 147:
#line 409 "src/gwion.y"
    { (yyval.func_def) = new_func_def(mpool(arg), new_func_base(mpool(arg), (yyvsp[-6].type_decl), (yyvsp[-7].sym), (yyvsp[-4].arg_list)), (yyvsp[0].stmt), ae_flag_op, GET_LOC(&(yyloc))); (yyvsp[-4].arg_list)->next = (yyvsp[-2].arg_list);}
#line 3089 "src/parser.c"
    break;

  case 148:
#line 411 "src/gwion.y"
    { (yyval.func_def) = new_func_def(mpool(arg), new_func_base(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-5].sym), (yyvsp[-2].arg_list)), (yyvsp[0].stmt), ae_flag_op, GET_LOC(&(yyloc))); }
#line 3095 "src/parser.c"
    break;

  case 149:
#line 413 "src/gwion.y"
    { (yyval.func_def) = new_func_def(mpool(arg), new_func_base(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-6].sym), (yyvsp[-2].arg_list)), (yyvsp[0].stmt), ae_flag_op | ae_flag_unary, GET_LOC(&(yyloc))); }
#line 3101 "src/parser.c"
    break;

  case 150:
#line 415 "src/gwion.y"
    {
 (yyval.func_def) = new_func_def(mpool(arg), new_func_base(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-4].sym), (yyvsp[-2].arg_list)), (yyvsp[0].stmt), ae_flag_op | ae_flag_typedef, GET_LOC(&(yyloc)));
    }
#line 3109 "src/parser.c"
    break;

  case 151:
#line 419 "src/gwion.y"
     { (yyval.ival) = 0; }
#line 3115 "src/parser.c"
    break;

  case 152:
#line 419 "src/gwion.y"
                       { (yyval.ival) = ae_flag_ref; }
#line 3121 "src/parser.c"
    break;

  case 153:
#line 420 "src/gwion.y"
                   { (yyval.ival) = ae_flag_nonnull; }
#line 3127 "src/parser.c"
    break;

  case 155:
#line 423 "src/gwion.y"
       { (yyval.type_decl) = new_type_decl(mpool(arg), (yyvsp[0].sym), GET_LOC(&(yyloc))); }
#line 3133 "src/parser.c"
    break;

  case 156:
#line 424 "src/gwion.y"
                             { (yyval.type_decl) = new_type_decl(mpool(arg), (yyvsp[0].sym), GET_LOC(&(yyloc))); (yyval.type_decl)->types = (yyvsp[-2].type_list); }
#line 3139 "src/parser.c"
    break;

  case 158:
#line 429 "src/gwion.y"
                                       { (yyvsp[-2].type_decl)->next = (yyvsp[0].type_decl); }
#line 3145 "src/parser.c"
    break;

  case 159:
#line 433 "src/gwion.y"
                   { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 3151 "src/parser.c"
    break;

  case 160:
#line 434 "src/gwion.y"
               { (yyval.type_decl) = new_type_decl2(mpool(arg), (yyvsp[0].exp), GET_LOC(&(yyloc))); }
#line 3157 "src/parser.c"
    break;

  case 161:
#line 438 "src/gwion.y"
                               { (yyvsp[-1].type_decl)->flag |= (yyvsp[0].ival); (yyval.type_decl) = (yyvsp[-1].type_decl); }
#line 3163 "src/parser.c"
    break;

  case 162:
#line 441 "src/gwion.y"
                      { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 3169 "src/parser.c"
    break;

  case 163:
#line 442 "src/gwion.y"
                      { (yyval.type_decl) = (yyvsp[0].type_decl); SET_FLAG((yyval.type_decl), const); }
#line 3175 "src/parser.c"
    break;

  case 164:
#line 443 "src/gwion.y"
                       { (yyval.type_decl) = (yyvsp[0].type_decl); SET_FLAG((yyval.type_decl), nonnull); }
#line 3181 "src/parser.c"
    break;

  case 165:
#line 445 "src/gwion.y"
                               { (yyval.decl_list) = new_decl_list(mpool(arg), (yyvsp[-1].exp), NULL); }
#line 3187 "src/parser.c"
    break;

  case 166:
#line 446 "src/gwion.y"
                                  { (yyval.decl_list) = new_decl_list(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].decl_list)); }
#line 3193 "src/parser.c"
    break;

  case 167:
#line 449 "src/gwion.y"
                                                                                 {
      (yyval.union_def) = new_union_def(mpool(arg), (yyvsp[-3].decl_list), GET_LOC(&(yyloc)));
      (yyval.union_def)->type_xid = (yyvsp[-5].sym);
      (yyval.union_def)->xid = (yyvsp[-1].sym);
      (yyval.union_def)->flag = (yyvsp[-7].flag);
      if((yyvsp[-6].id_list)) {
        if(!(yyvsp[-5].sym)) {
          gwion_error(&(yyloc), arg, _("Template unions requires type name\n"));
          YYERROR;
        }
        if((yyvsp[-1].sym)) {
          gwion_error(&(yyloc), arg, _("Can't instantiate template union types at declaration site.\n"));
          YYERROR;
        }
        (yyval.union_def)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-6].id_list));
      }
    }
#line 3215 "src/parser.c"
    break;

  case 168:
#line 469 "src/gwion.y"
             { (yyval.var_decl_list) = new_var_decl_list(mpool(arg), (yyvsp[0].var_decl), NULL); }
#line 3221 "src/parser.c"
    break;

  case 169:
#line 470 "src/gwion.y"
                                 { (yyval.var_decl_list) = new_var_decl_list(mpool(arg), (yyvsp[-2].var_decl), (yyvsp[0].var_decl_list)); }
#line 3227 "src/parser.c"
    break;

  case 170:
#line 473 "src/gwion.y"
             { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, GET_LOC(&(yyloc))); }
#line 3233 "src/parser.c"
    break;

  case 171:
#line 474 "src/gwion.y"
                { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[-1].sym),   (yyvsp[0].array_sub), GET_LOC(&(yyloc))); }
#line 3239 "src/parser.c"
    break;

  case 172:
#line 476 "src/gwion.y"
             { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, GET_LOC(&(yyloc))); }
#line 3245 "src/parser.c"
    break;

  case 173:
#line 477 "src/gwion.y"
                   { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[-1].sym),   (yyvsp[0].array_sub), GET_LOC(&(yyloc))); }
#line 3251 "src/parser.c"
    break;

  case 174:
#line 478 "src/gwion.y"
                 { gwion_error(&(yyloc), arg, "argument/union must be defined with empty []'s"); YYERROR; }
#line 3257 "src/parser.c"
    break;

  case 175:
#line 479 "src/gwion.y"
                      { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, GET_LOC(&(yyloc))); }
#line 3263 "src/parser.c"
    break;

  case 176:
#line 480 "src/gwion.y"
                       { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[-1].sym),   (yyvsp[0].array_sub), GET_LOC(&(yyloc))); }
#line 3269 "src/parser.c"
    break;

  case 177:
#line 481 "src/gwion.y"
                     { gwion_error(&(yyloc), arg, "argument/union must be defined with empty []'s"); YYERROR; }
#line 3275 "src/parser.c"
    break;

  case 192:
#line 489 "src/gwion.y"
               { (yyval.exp) = NULL; }
#line 3281 "src/parser.c"
    break;

  case 194:
#line 492 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 3287 "src/parser.c"
    break;

  case 195:
#line 494 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-2].exp), NULL, (yyvsp[0].exp)); }
#line 3293 "src/parser.c"
    break;

  case 197:
#line 496 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3299 "src/parser.c"
    break;

  case 199:
#line 497 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3305 "src/parser.c"
    break;

  case 201:
#line 498 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3311 "src/parser.c"
    break;

  case 203:
#line 499 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3317 "src/parser.c"
    break;

  case 205:
#line 500 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3323 "src/parser.c"
    break;

  case 207:
#line 501 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3329 "src/parser.c"
    break;

  case 209:
#line 502 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3335 "src/parser.c"
    break;

  case 211:
#line 503 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3341 "src/parser.c"
    break;

  case 213:
#line 504 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3347 "src/parser.c"
    break;

  case 215:
#line 505 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3353 "src/parser.c"
    break;

  case 217:
#line 506 "src/gwion.y"
                                                  { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3359 "src/parser.c"
    break;

  case 219:
#line 509 "src/gwion.y"
    { (yyval.exp) = new_exp_cast(mpool(arg), (yyvsp[0].type_decl), (yyvsp[-2].exp)); }
#line 3365 "src/parser.c"
    break;

  case 228:
#line 515 "src/gwion.y"
                                          { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3371 "src/parser.c"
    break;

  case 229:
#line 516 "src/gwion.y"
                      {(yyval.exp) = new_exp_unary2(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].type_decl)); }
#line 3377 "src/parser.c"
    break;

  case 230:
#line 517 "src/gwion.y"
                      { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt)); }
#line 3383 "src/parser.c"
    break;

  case 231:
#line 518 "src/gwion.y"
                     { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt)); }
#line 3389 "src/parser.c"
    break;

  case 232:
#line 521 "src/gwion.y"
    { (yyval.arg_list) = new_arg_list(mpool(arg), NULL, new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, GET_LOC(&(yyloc))), NULL); }
#line 3395 "src/parser.c"
    break;

  case 233:
#line 522 "src/gwion.y"
                    { (yyval.arg_list) = new_arg_list(mpool(arg), NULL, new_var_decl(mpool(arg), (yyvsp[-1].sym), NULL, GET_LOC(&(yyloc))), (yyvsp[0].arg_list)); }
#line 3401 "src/parser.c"
    break;

  case 234:
#line 523 "src/gwion.y"
                                  { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 3407 "src/parser.c"
    break;

  case 235:
#line 523 "src/gwion.y"
                                                           { (yyval.arg_list) = NULL; }
#line 3413 "src/parser.c"
    break;

  case 236:
#line 526 "src/gwion.y"
                    { (yyval.type_list) = new_type_list(mpool(arg), (yyvsp[0].type_decl), NULL); }
#line 3419 "src/parser.c"
    break;

  case 237:
#line 527 "src/gwion.y"
                                    { (yyval.type_list) = new_type_list(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[0].type_list)); }
#line 3425 "src/parser.c"
    break;

  case 238:
#line 530 "src/gwion.y"
                               { (yyval.exp) = (yyvsp[-1].exp); }
#line 3431 "src/parser.c"
    break;

  case 239:
#line 530 "src/gwion.y"
                                                            { (yyval.exp) = NULL; }
#line 3437 "src/parser.c"
    break;

  case 242:
#line 534 "src/gwion.y"
                         { (yyval.exp) = new_exp_dot(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].sym)); }
#line 3443 "src/parser.c"
    break;

  case 244:
#line 537 "src/gwion.y"
    { (yyval.exp) = new_exp_array(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].array_sub)); }
#line 3449 "src/parser.c"
    break;

  case 245:
#line 539 "src/gwion.y"
    { (yyval.exp) = new_exp_slice(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].range)); }
#line 3455 "src/parser.c"
    break;

  case 246:
#line 541 "src/gwion.y"
    { (yyval.exp) = new_exp_call(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].exp));
      if((yyvsp[-1].type_list))(yyval.exp)->d.exp_call.tmpl = new_tmpl_call(mpool(arg), (yyvsp[-1].type_list)); }
#line 3462 "src/parser.c"
    break;

  case 247:
#line 544 "src/gwion.y"
    { (yyval.exp) = new_exp_post(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].sym)); }
#line 3468 "src/parser.c"
    break;

  case 248:
#line 544 "src/gwion.y"
                                                         { (yyval.exp) = (yyvsp[0].exp); }
#line 3474 "src/parser.c"
    break;

  case 249:
#line 547 "src/gwion.y"
                       { (yyval.exp) = new_prim_string(mpool(arg), (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 3480 "src/parser.c"
    break;

  case 250:
#line 548 "src/gwion.y"
                       { (yyval.exp) = (yyvsp[-1].exp); }
#line 3486 "src/parser.c"
    break;

  case 251:
#line 551 "src/gwion.y"
{
  Exp next = (yyvsp[-1].exp);
  while(next->next) {
    if(!next->next)
      break;
  next = next->next; }
  next->next = (yyvsp[0].exp); (yyval.exp) = (yyvsp[-1].exp);
}
#line 3499 "src/parser.c"
    break;

  case 252:
#line 559 "src/gwion.y"
                 { (yyval.exp) = (yyvsp[0].exp); }
#line 3505 "src/parser.c"
    break;

  case 253:
#line 561 "src/gwion.y"
                                     { (yyval.exp) = new_prim_typeof(mpool(arg), (yyvsp[-1].exp)); }
#line 3511 "src/parser.c"
    break;

  case 254:
#line 564 "src/gwion.y"
                        { (yyval.exp) = new_prim_id(     mpool(arg), (yyvsp[0].sym), GET_LOC(&(yyloc))); }
#line 3517 "src/parser.c"
    break;

  case 255:
#line 565 "src/gwion.y"
                        { (yyval.exp) = new_prim_int(    mpool(arg), (yyvsp[0].lval), GET_LOC(&(yyloc))); }
#line 3523 "src/parser.c"
    break;

  case 256:
#line 566 "src/gwion.y"
                        { (yyval.exp) = new_prim_float(  mpool(arg), (yyvsp[0].fval), GET_LOC(&(yyloc))); }
#line 3529 "src/parser.c"
    break;

  case 257:
#line 567 "src/gwion.y"
                        { (yyval.exp) = new_prim_string( mpool(arg), (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 3535 "src/parser.c"
    break;

  case 258:
#line 568 "src/gwion.y"
                        { (yyval.exp) = new_prim_char(   mpool(arg), (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 3541 "src/parser.c"
    break;

  case 259:
#line 569 "src/gwion.y"
                        { (yyval.exp) = new_prim_array(  mpool(arg), (yyvsp[0].array_sub), GET_LOC(&(yyloc))); }
#line 3547 "src/parser.c"
    break;

  case 260:
#line 570 "src/gwion.y"
                        { (yyval.exp) = new_prim_range(  mpool(arg), (yyvsp[0].range), GET_LOC(&(yyloc))); }
#line 3553 "src/parser.c"
    break;

  case 261:
#line 571 "src/gwion.y"
                        { (yyval.exp) = new_prim_hack(   mpool(arg), (yyvsp[-1].exp)); }
#line 3559 "src/parser.c"
    break;

  case 262:
#line 572 "src/gwion.y"
                        { (yyval.exp) = (yyvsp[-1].exp);                }
#line 3565 "src/parser.c"
    break;

  case 263:
#line 573 "src/gwion.y"
                         { (yyval.exp) = new_exp_lambda(     mpool(arg), lambda_name(arg), (yyvsp[-1].arg_list), (yyvsp[0].stmt)); }
#line 3571 "src/parser.c"
    break;

  case 264:
#line 574 "src/gwion.y"
                        { (yyval.exp) = new_prim_nil(    mpool(arg),     GET_LOC(&(yyloc))); }
#line 3577 "src/parser.c"
    break;

  case 265:
#line 575 "src/gwion.y"
                          { (yyval.exp) = new_prim_interp(mpool(arg),     (yyvsp[0].exp)); }
#line 3583 "src/parser.c"
    break;

  case 266:
#line 576 "src/gwion.y"
               { (yyval.exp) = (yyvsp[0].exp); }
#line 3589 "src/parser.c"
    break;


#line 3593 "src/parser.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (&yylloc, arg, YY_("syntax error"));
    }

  yyerror_range[1] = yylloc;
  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc, arg);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp, arg);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (&yylloc, arg, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc, arg);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp, arg);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 578 "src/gwion.y"

