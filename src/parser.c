/* A Bison parser, made by GNU Bison 3.7.2.51-de63.  */

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
#define YYBISON_VERSION "3.7.2.51-de63"

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

#include "parser.h"
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
  YYSYMBOL_VAR = 12,                       /* "var"  */
  YYSYMBOL_IF = 13,                        /* "if"  */
  YYSYMBOL_ELSE = 14,                      /* "else"  */
  YYSYMBOL_WHILE = 15,                     /* "while"  */
  YYSYMBOL_DO = 16,                        /* "do"  */
  YYSYMBOL_UNTIL = 17,                     /* "until"  */
  YYSYMBOL_LOOP = 18,                      /* "repeat"  */
  YYSYMBOL_FOR = 19,                       /* "for"  */
  YYSYMBOL_FOREACH = 20,                   /* "foreach"  */
  YYSYMBOL_GOTO = 21,                      /* "goto"  */
  YYSYMBOL_MATCH = 22,                     /* "match"  */
  YYSYMBOL_CASE = 23,                      /* "case"  */
  YYSYMBOL_WHEN = 24,                      /* "when"  */
  YYSYMBOL_WHERE = 25,                     /* "where"  */
  YYSYMBOL_ENUM = 26,                      /* "enum"  */
  YYSYMBOL_TRETURN = 27,                   /* "return"  */
  YYSYMBOL_BREAK = 28,                     /* "break"  */
  YYSYMBOL_CONTINUE = 29,                  /* "continue"  */
  YYSYMBOL_CLASS = 30,                     /* "class"  */
  YYSYMBOL_STRUCT = 31,                    /* "struct"  */
  YYSYMBOL_STATIC = 32,                    /* "static"  */
  YYSYMBOL_GLOBAL = 33,                    /* "global"  */
  YYSYMBOL_PRIVATE = 34,                   /* "private"  */
  YYSYMBOL_PROTECT = 35,                   /* "protect"  */
  YYSYMBOL_EXTENDS = 36,                   /* "extends"  */
  YYSYMBOL_DOT = 37,                       /* "."  */
  YYSYMBOL_OPERATOR = 38,                  /* "operator"  */
  YYSYMBOL_TYPEDEF = 39,                   /* "typedef"  */
  YYSYMBOL_FUNCDEF = 40,                   /* "funcdef"  */
  YYSYMBOL_NOELSE = 41,                    /* NOELSE  */
  YYSYMBOL_UNION = 42,                     /* "union"  */
  YYSYMBOL_CONSTT = 43,                    /* "const"  */
  YYSYMBOL_ELLIPSE = 44,                   /* "..."  */
  YYSYMBOL_VARLOOP = 45,                   /* "varloop"  */
  YYSYMBOL_BACKSLASH = 46,                 /* "\\"  */
  YYSYMBOL_OPID_A = 47,                    /* OPID_A  */
  YYSYMBOL_OPID_D = 48,                    /* OPID_D  */
  YYSYMBOL_REF = 49,                       /* "ref"  */
  YYSYMBOL_NONNULL = 50,                   /* "nonnull"  */
  YYSYMBOL_NUM = 51,                       /* "<integer>"  */
  YYSYMBOL_FLOATT = 52,                    /* FLOATT  */
  YYSYMBOL_ID = 53,                        /* "<identifier>"  */
  YYSYMBOL_STRING_LIT = 54,                /* "<litteral string>"  */
  YYSYMBOL_CHAR_LIT = 55,                  /* "<litteral char>"  */
  YYSYMBOL_INTERP_START = 56,              /* "`"  */
  YYSYMBOL_INTERP_LIT = 57,                /* "<interp string>"  */
  YYSYMBOL_INTERP_EXP = 58,                /* INTERP_EXP  */
  YYSYMBOL_INTERP_END = 59,                /* "<interp string>`"  */
  YYSYMBOL_PP_COMMENT = 60,                /* "<comment>"  */
  YYSYMBOL_PP_INCLUDE = 61,                /* "#include"  */
  YYSYMBOL_PP_DEFINE = 62,                 /* "#define"  */
  YYSYMBOL_PP_PRAGMA = 63,                 /* "#pragma"  */
  YYSYMBOL_PP_UNDEF = 64,                  /* "#undef"  */
  YYSYMBOL_PP_IFDEF = 65,                  /* "#ifdef"  */
  YYSYMBOL_PP_IFNDEF = 66,                 /* "#ifndef"  */
  YYSYMBOL_PP_ELSE = 67,                   /* "#else"  */
  YYSYMBOL_PP_ENDIF = 68,                  /* "#if"  */
  YYSYMBOL_PP_NL = 69,                     /* "\n"  */
  YYSYMBOL_70_operator_id_ = 70,           /* "@<operator id>"  */
  YYSYMBOL_71_operator_id_ = 71,           /* "$<operator id>"  */
  YYSYMBOL_PLUS = 72,                      /* "+"  */
  YYSYMBOL_PLUSPLUS = 73,                  /* "++"  */
  YYSYMBOL_MINUS = 74,                     /* "-"  */
  YYSYMBOL_MINUSMINUS = 75,                /* "--"  */
  YYSYMBOL_TIMES = 76,                     /* "*"  */
  YYSYMBOL_DIVIDE = 77,                    /* "/"  */
  YYSYMBOL_PERCENT = 78,                   /* "%"  */
  YYSYMBOL_DOLLAR = 79,                    /* "$"  */
  YYSYMBOL_QUESTION = 80,                  /* "?"  */
  YYSYMBOL_COLON = 81,                     /* ":"  */
  YYSYMBOL_COLONCOLON = 82,                /* "::"  */
  YYSYMBOL_QUESTIONCOLON = 83,             /* "?:"  */
  YYSYMBOL_NEW = 84,                       /* "new"  */
  YYSYMBOL_SPORK = 85,                     /* "spork"  */
  YYSYMBOL_FORK = 86,                      /* "fork"  */
  YYSYMBOL_TYPEOF = 87,                    /* "typeof"  */
  YYSYMBOL_L_HACK = 88,                    /* "<<<"  */
  YYSYMBOL_R_HACK = 89,                    /* ">>>"  */
  YYSYMBOL_AND = 90,                       /* "&&"  */
  YYSYMBOL_EQ = 91,                        /* "=="  */
  YYSYMBOL_GE = 92,                        /* ">="  */
  YYSYMBOL_GT = 93,                        /* ">"  */
  YYSYMBOL_LE = 94,                        /* "<="  */
  YYSYMBOL_LT = 95,                        /* "<"  */
  YYSYMBOL_NEQ = 96,                       /* "!="  */
  YYSYMBOL_SHIFT_LEFT = 97,                /* "<<"  */
  YYSYMBOL_SHIFT_RIGHT = 98,               /* ">>"  */
  YYSYMBOL_S_AND = 99,                     /* "&"  */
  YYSYMBOL_S_OR = 100,                     /* "|"  */
  YYSYMBOL_S_XOR = 101,                    /* "^"  */
  YYSYMBOL_OR = 102,                       /* "||"  */
  YYSYMBOL_TMPL = 103,                     /* ":["  */
  YYSYMBOL_TILDA = 104,                    /* "~"  */
  YYSYMBOL_EXCLAMATION = 105,              /* "!"  */
  YYSYMBOL_DYNOP = 106,                    /* "<dynamic_operator>"  */
  YYSYMBOL_UMINUS = 107,                   /* UMINUS  */
  YYSYMBOL_UTIMES = 108,                   /* UTIMES  */
  YYSYMBOL_109_ = 109,                     /* "="  */
  YYSYMBOL_YYACCEPT = 110,                 /* $accept  */
  YYSYMBOL_prg = 111,                      /* prg  */
  YYSYMBOL_ast = 112,                      /* ast  */
  YYSYMBOL_section = 113,                  /* section  */
  YYSYMBOL_class_type = 114,               /* class_type  */
  YYSYMBOL_class_def = 115,                /* class_def  */
  YYSYMBOL_class_ext = 116,                /* class_ext  */
  YYSYMBOL_class_body = 117,               /* class_body  */
  YYSYMBOL_id_list = 118,                  /* id_list  */
  YYSYMBOL_stmt_list = 119,                /* stmt_list  */
  YYSYMBOL_func_base = 120,                /* func_base  */
  YYSYMBOL_fptr_def = 121,                 /* fptr_def  */
  YYSYMBOL_type_def = 122,                 /* type_def  */
  YYSYMBOL_type_decl_array = 123,          /* type_decl_array  */
  YYSYMBOL_type_decl_exp = 124,            /* type_decl_exp  */
  YYSYMBOL_type_decl_empty = 125,          /* type_decl_empty  */
  YYSYMBOL_arg = 126,                      /* arg  */
  YYSYMBOL_arg_list = 127,                 /* arg_list  */
  YYSYMBOL_fptr_arg = 128,                 /* fptr_arg  */
  YYSYMBOL_fptr_list = 129,                /* fptr_list  */
  YYSYMBOL_code_stmt = 130,                /* code_stmt  */
  YYSYMBOL_stmt_pp = 131,                  /* stmt_pp  */
  YYSYMBOL_stmt = 132,                     /* stmt  */
  YYSYMBOL_id = 133,                       /* id  */
  YYSYMBOL_opt_id = 134,                   /* opt_id  */
  YYSYMBOL_enum_def = 135,                 /* enum_def  */
  YYSYMBOL_label_stmt = 136,               /* label_stmt  */
  YYSYMBOL_goto_stmt = 137,                /* goto_stmt  */
  YYSYMBOL_when_exp = 138,                 /* when_exp  */
  YYSYMBOL_match_case_stmt = 139,          /* match_case_stmt  */
  YYSYMBOL_match_list = 140,               /* match_list  */
  YYSYMBOL_where_stmt = 141,               /* where_stmt  */
  YYSYMBOL_match_stmt = 142,               /* match_stmt  */
  YYSYMBOL_flow = 143,                     /* flow  */
  YYSYMBOL_loop_stmt = 144,                /* loop_stmt  */
  YYSYMBOL_varloop_stmt = 145,             /* varloop_stmt  */
  YYSYMBOL_selection_stmt = 146,           /* selection_stmt  */
  YYSYMBOL_breaks = 147,                   /* breaks  */
  YYSYMBOL_jump_stmt = 148,                /* jump_stmt  */
  YYSYMBOL__exp_stmt = 149,                /* _exp_stmt  */
  YYSYMBOL_exp_stmt = 150,                 /* exp_stmt  */
  YYSYMBOL_exp = 151,                      /* exp  */
  YYSYMBOL_binary_exp = 152,               /* binary_exp  */
  YYSYMBOL_call_template = 153,            /* call_template  */
  YYSYMBOL_op = 154,                       /* op  */
  YYSYMBOL_array_exp = 155,                /* array_exp  */
  YYSYMBOL_array_empty = 156,              /* array_empty  */
  YYSYMBOL_range = 157,                    /* range  */
  YYSYMBOL_array = 158,                    /* array  */
  YYSYMBOL_decl_exp = 159,                 /* decl_exp  */
  YYSYMBOL_union_exp = 160,                /* union_exp  */
  YYSYMBOL_func_args = 161,                /* func_args  */
  YYSYMBOL_fptr_args = 162,                /* fptr_args  */
  YYSYMBOL_arg_type = 163,                 /* arg_type  */
  YYSYMBOL_decl_template = 164,            /* decl_template  */
  YYSYMBOL_storage_flag = 165,             /* storage_flag  */
  YYSYMBOL_access_flag = 166,              /* access_flag  */
  YYSYMBOL_flag = 167,                     /* flag  */
  YYSYMBOL_func_def_base = 168,            /* func_def_base  */
  YYSYMBOL_op_op = 169,                    /* op_op  */
  YYSYMBOL_func_def = 170,                 /* func_def  */
  YYSYMBOL_ref = 171,                      /* ref  */
  YYSYMBOL_type_decl_tmpl = 172,           /* type_decl_tmpl  */
  YYSYMBOL_type_decl_next = 173,           /* type_decl_next  */
  YYSYMBOL_type_decl_noflag = 174,         /* type_decl_noflag  */
  YYSYMBOL_type_decl = 175,                /* type_decl  */
  YYSYMBOL_type_decl_flag = 176,           /* type_decl_flag  */
  YYSYMBOL_type_decl_flag2 = 177,          /* type_decl_flag2  */
  YYSYMBOL_decl_list = 178,                /* decl_list  */
  YYSYMBOL_union_def = 179,                /* union_def  */
  YYSYMBOL_var_decl_list = 180,            /* var_decl_list  */
  YYSYMBOL_var_decl = 181,                 /* var_decl  */
  YYSYMBOL_arg_decl = 182,                 /* arg_decl  */
  YYSYMBOL_fptr_arg_decl = 183,            /* fptr_arg_decl  */
  YYSYMBOL_eq_op = 184,                    /* eq_op  */
  YYSYMBOL_rel_op = 185,                   /* rel_op  */
  YYSYMBOL_shift_op = 186,                 /* shift_op  */
  YYSYMBOL_add_op = 187,                   /* add_op  */
  YYSYMBOL_mul_op = 188,                   /* mul_op  */
  YYSYMBOL_opt_exp = 189,                  /* opt_exp  */
  YYSYMBOL_con_exp = 190,                  /* con_exp  */
  YYSYMBOL_log_or_exp = 191,               /* log_or_exp  */
  YYSYMBOL_log_and_exp = 192,              /* log_and_exp  */
  YYSYMBOL_inc_or_exp = 193,               /* inc_or_exp  */
  YYSYMBOL_exc_or_exp = 194,               /* exc_or_exp  */
  YYSYMBOL_and_exp = 195,                  /* and_exp  */
  YYSYMBOL_eq_exp = 196,                   /* eq_exp  */
  YYSYMBOL_rel_exp = 197,                  /* rel_exp  */
  YYSYMBOL_shift_exp = 198,                /* shift_exp  */
  YYSYMBOL_add_exp = 199,                  /* add_exp  */
  YYSYMBOL_mul_exp = 200,                  /* mul_exp  */
  YYSYMBOL_dur_exp = 201,                  /* dur_exp  */
  YYSYMBOL_cast_exp = 202,                 /* cast_exp  */
  YYSYMBOL_unary_op = 203,                 /* unary_op  */
  YYSYMBOL_unary_exp = 204,                /* unary_exp  */
  YYSYMBOL_lambda_list = 205,              /* lambda_list  */
  YYSYMBOL_lambda_arg = 206,               /* lambda_arg  */
  YYSYMBOL_type_list = 207,                /* type_list  */
  YYSYMBOL_call_paren = 208,               /* call_paren  */
  YYSYMBOL_post_op = 209,                  /* post_op  */
  YYSYMBOL_dot_exp = 210,                  /* dot_exp  */
  YYSYMBOL_post_exp = 211,                 /* post_exp  */
  YYSYMBOL_interp_exp = 212,               /* interp_exp  */
  YYSYMBOL_interp = 213,                   /* interp  */
  YYSYMBOL_typeof_exp = 214,               /* typeof_exp  */
  YYSYMBOL_prim_exp = 215                  /* prim_exp  */
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

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
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
#define YYFINAL  174
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1530

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  110
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  106
/* YYNRULES -- Number of rules.  */
#define YYNRULES  266
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  438

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   364


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
     105,   106,   107,   108,   109
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   140,   140,   141,   144,   145,   149,   150,   151,   152,
     153,   154,   155,   158,   158,   160,   169,   169,   171,   171,
     173,   173,   175,   175,   177,   180,   186,   193,   193,   195,
     199,   204,   205,   207,   208,   217,   218,   218,   225,   226,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     255,   257,   257,   260,   263,   265,   267,   267,   270,   278,
     279,   281,   281,   283,   291,   292,   295,   297,   299,   301,
     303,   305,   309,   312,   314,   319,   320,   321,   324,   325,
     328,   328,   331,   332,   335,   335,   338,   339,   340,   342,
     342,   344,   344,   344,   347,   348,   349,   353,   354,   355,
     359,   360,   361,   364,   364,   366,   367,   369,   371,   371,
     372,   372,   373,   373,   375,   375,   377,   378,   381,   382,
     385,   386,   387,   388,   392,   398,   398,   398,   398,   398,
     401,   402,   404,   406,   408,   413,   413,   416,   420,   421,
     425,   426,   429,   429,   432,   433,   434,   435,   436,   437,
     438,   440,   440,   442,   443,   446,   466,   467,   470,   471,
     473,   474,   475,   476,   476,   478,   478,   479,   479,   479,
     479,   480,   480,   481,   481,   482,   482,   482,   484,   484,
     485,   486,   488,   491,   491,   492,   492,   493,   493,   494,
     494,   495,   495,   496,   496,   497,   497,   498,   498,   499,
     499,   500,   500,   501,   501,   503,   503,   506,   506,   506,
     507,   507,   507,   507,   510,   511,   512,   513,   514,   515,
     518,   519,   520,   520,   523,   524,   527,   527,   529,   529,
     531,   539,   540,   542,   544,   547,   549,   551,   555,   556,
     557,   559,   560,   571,   574,   575,   576,   577,   578,   579,
     580,   581,   582,   583,   584,   585,   586
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
  "\"var\"", "\"if\"", "\"else\"", "\"while\"", "\"do\"", "\"until\"",
  "\"repeat\"", "\"for\"", "\"foreach\"", "\"goto\"", "\"match\"",
  "\"case\"", "\"when\"", "\"where\"", "\"enum\"", "\"return\"",
  "\"break\"", "\"continue\"", "\"class\"", "\"struct\"", "\"static\"",
  "\"global\"", "\"private\"", "\"protect\"", "\"extends\"", "\".\"",
  "\"operator\"", "\"typedef\"", "\"funcdef\"", "NOELSE", "\"union\"",
  "\"const\"", "\"...\"", "\"varloop\"", "\"\\\\\"", "OPID_A", "OPID_D",
  "\"ref\"", "\"nonnull\"", "\"<integer>\"", "FLOATT", "\"<identifier>\"",
  "\"<litteral string>\"", "\"<litteral char>\"", "\"`\"",
  "\"<interp string>\"", "INTERP_EXP", "\"<interp string>`\"",
  "\"<comment>\"", "\"#include\"", "\"#define\"", "\"#pragma\"",
  "\"#undef\"", "\"#ifdef\"", "\"#ifndef\"", "\"#else\"", "\"#if\"",
  "\"\\n\"", "\"@<operator id>\"", "\"$<operator id>\"", "\"+\"", "\"++\"",
  "\"-\"", "\"--\"", "\"*\"", "\"/\"", "\"%\"", "\"$\"", "\"?\"", "\":\"",
  "\"::\"", "\"?:\"", "\"new\"", "\"spork\"", "\"fork\"", "\"typeof\"",
  "\"<<<\"", "\">>>\"", "\"&&\"", "\"==\"", "\">=\"", "\">\"", "\"<=\"",
  "\"<\"", "\"!=\"", "\"<<\"", "\">>\"", "\"&\"", "\"|\"", "\"^\"",
  "\"||\"", "\":[\"", "\"~\"", "\"!\"", "\"<dynamic_operator>\"", "UMINUS",
  "UTIMES", "\"=\"", "$accept", "prg", "ast", "section", "class_type",
  "class_def", "class_ext", "class_body", "id_list", "stmt_list",
  "func_base", "fptr_def", "type_def", "type_decl_array", "type_decl_exp",
  "type_decl_empty", "arg", "arg_list", "fptr_arg", "fptr_list",
  "code_stmt", "stmt_pp", "stmt", "id", "opt_id", "enum_def", "label_stmt",
  "goto_stmt", "when_exp", "match_case_stmt", "match_list", "where_stmt",
  "match_stmt", "flow", "loop_stmt", "varloop_stmt", "selection_stmt",
  "breaks", "jump_stmt", "_exp_stmt", "exp_stmt", "exp", "binary_exp",
  "call_template", "op", "array_exp", "array_empty", "range", "array",
  "decl_exp", "union_exp", "func_args", "fptr_args", "arg_type",
  "decl_template", "storage_flag", "access_flag", "flag", "func_def_base",
  "op_op", "func_def", "ref", "type_decl_tmpl", "type_decl_next",
  "type_decl_noflag", "type_decl", "type_decl_flag", "type_decl_flag2",
  "decl_list", "union_def", "var_decl_list", "var_decl", "arg_decl",
  "fptr_arg_decl", "eq_op", "rel_op", "shift_op", "add_op", "mul_op",
  "opt_exp", "con_exp", "log_or_exp", "log_and_exp", "inc_or_exp",
  "exc_or_exp", "and_exp", "eq_exp", "rel_exp", "shift_exp", "add_exp",
  "mul_exp", "dur_exp", "cast_exp", "unary_op", "unary_exp", "lambda_list",
  "lambda_arg", "type_list", "call_paren", "post_op", "dot_exp",
  "post_exp", "interp_exp", "interp", "typeof_exp", "prim_exp", YY_NULLPTR
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
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364
};
#endif

#define YYPACT_NINF (-308)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-101)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     594,    37,   857,   914,   698,    24,  -308,    50,  -308,   792,
    -308,   102,   103,   121,    25,  1370,    24,  1370,  -308,  -308,
    -308,  -308,   181,    24,    24,    24,    17,  1370,    25,  -308,
      83,  -308,  -308,  -308,  -308,  -308,   971,  -308,  -308,  -308,
    -308,  -308,  -308,  -308,  -308,  -308,  -308,  -308,  -308,  -308,
    -308,    -8,   125,   125,   130,  1370,  -308,  -308,   136,  -308,
     594,    24,  -308,  -308,  -308,  -308,  -308,  -308,   792,    56,
    -308,  -308,  -308,  -308,   139,  -308,  -308,  -308,   142,  -308,
    -308,  -308,   143,    22,  -308,   140,  -308,  -308,  -308,  -308,
    -308,  -308,    24,  -308,  -308,    20,    58,    49,    55,    51,
      -5,     4,   -26,    10,    53,    69,    75,  1425,  -308,   125,
    -308,  -308,    39,   104,  -308,  -308,  -308,  -308,   157,  -308,
     158,  -308,  1370,    23,  -308,   155,  -308,  -308,  -308,  -308,
     161,  -308,    60,    -8,  1370,    73,  1370,   457,   118,   167,
     162,    25,   169,  -308,  -308,  -308,   361,    70,   137,  -308,
    -308,   168,   -24,    -8,  -308,    -8,   172,    25,  -308,   131,
      14,    25,  -308,  -308,   971,  -308,   124,  -308,  -308,  -308,
    -308,  -308,  1370,    94,  -308,  -308,    25,  -308,  -308,  1370,
    -308,  -308,  1370,  1370,  -308,  -308,  -308,  1370,  1028,  -308,
     -24,  1370,  1425,  1425,  1425,  1425,  1425,  1425,  -308,  -308,
    1425,  -308,  -308,  -308,  -308,  1425,  -308,  -308,  1425,  -308,
    -308,  1425,  -308,  -308,  -308,  1425,  1425,    -8,  -308,  -308,
    1085,    25,  -308,    -8,   179,  -308,  -308,  -308,   971,  1425,
    -308,   177,   168,  1142,  -308,    -8,    31,  -308,    25,   180,
    1370,   182,   457,  -308,    25,  -308,   164,  -308,   183,  -308,
     161,  -308,   184,  -308,  -308,  -308,  -308,   188,  -308,    25,
    1199,  -308,  -308,   189,    25,    -8,    31,    92,  -308,  -308,
    -308,  -308,   971,   190,  -308,    92,   192,  -308,  -308,  -308,
    -308,   191,    25,  -308,   119,  -308,    58,    49,    55,    51,
      -5,     4,   -26,    10,    53,    69,    75,  -308,  -308,   197,
     194,  1256,  -308,  -308,  -308,  -308,  -308,   140,  -308,   195,
    -308,   201,    25,  -308,   200,   125,    92,   792,   205,   792,
    1313,   128,  1370,   164,   202,    25,   204,    -8,    -8,  -308,
      -8,    92,   207,  -308,    25,   210,    25,   206,  -308,  -308,
     178,   792,   168,  -308,   214,  1425,    -8,  -308,  -308,   213,
    -308,    -8,   168,   141,  -308,  -308,  -308,   211,  -308,  -308,
     792,   220,  1370,   196,  -308,   203,   217,   225,   125,   228,
     230,   231,   236,    -8,  -308,  -308,  -308,   232,   -24,    -8,
     233,  -308,  -308,    25,  -308,  -308,  -308,  -308,  -308,   140,
    1370,   792,  -308,   792,    15,  1370,   165,   792,  -308,  -308,
      25,  -308,    -8,   125,   125,  -308,  -308,  -308,   242,    25,
     237,  -308,   594,  -308,   -11,  -308,  -308,   792,  -308,   792,
    -308,  -308,   244,  -308,  -308,   -24,  -308,    25,  -308,   238,
    -308,  -308,   125,  -308,   248,  -308,  -308,  -308
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       3,    91,     0,     0,     0,   133,   161,     0,    74,     0,
      75,     0,     0,     0,     0,     0,   133,    85,    86,    87,
      13,    14,     0,   133,   133,   133,   155,     0,   233,   154,
     156,   255,   256,    60,   258,   259,     0,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,   238,   217,   239,
     218,     0,   221,   222,     0,     0,   223,   220,     0,     2,
       4,   133,     8,     6,    11,    12,    53,    58,    22,   254,
       9,    54,    55,    56,     0,    51,    59,    52,     0,    57,
      93,    50,     0,    94,   113,   114,   261,   260,    96,   140,
       7,   162,   133,    10,   115,   190,   193,   195,   197,   199,
     201,   203,   205,   207,   209,   211,   213,     0,   215,     0,
     219,   247,   224,   257,   266,   241,    90,   265,     0,   254,
       0,   107,     0,     0,    38,     0,   126,   127,   128,   129,
       0,   131,   130,     0,     0,     0,     0,     0,   145,     0,
       0,    62,     0,   221,   222,    30,     0,   100,   148,   150,
     152,    27,     0,     0,   151,     0,     0,    62,   158,   159,
       0,   230,   232,   157,     0,   248,     0,   251,    29,   227,
     228,   229,     0,     0,     1,     5,     0,    23,    64,     0,
      89,    92,     0,     0,   101,   102,   103,     0,     0,   109,
       0,   189,     0,     0,     0,     0,     0,     0,   175,   176,
       0,   180,   178,   179,   177,     0,   181,   182,     0,   183,
     184,     0,   185,   186,   187,     0,     0,     0,   225,   264,
       0,     0,   246,     0,     0,   242,   243,   245,     0,     0,
     263,     0,   104,     0,    39,   119,     0,   132,     0,     0,
       0,     0,     0,   146,     0,    65,     0,    61,     0,    88,
       0,   135,     0,   137,   136,   139,   138,     0,   147,     0,
       0,    28,   153,     0,     0,   121,     0,   125,   160,    82,
     231,   249,     0,     0,   262,   125,     0,    95,    97,    98,
     108,     0,     0,   188,     0,   192,   194,   196,   198,   200,
     202,   204,   206,   208,   210,   212,   214,   216,   240,   234,
       0,     0,   244,   252,   226,   112,   105,   106,   111,     0,
      33,   118,     0,   123,     0,     0,   125,     0,     0,     0,
       0,     0,     0,    69,     0,     0,     0,     0,     0,   149,
       0,   125,    36,   120,   174,     0,     0,     0,   250,   253,
      17,     0,   168,   116,   166,     0,     0,    99,   237,     0,
     110,     0,   170,    32,   122,   134,    24,    83,    77,    81,
       0,     0,     0,    67,    70,    72,     0,    20,     0,     0,
       0,     0,     0,     0,   173,    35,    25,     0,     0,     0,
       0,    76,   169,     0,   191,   235,   236,    34,   172,   171,
       0,     0,    78,     0,     0,     0,     0,     0,    73,    63,
       0,   144,     0,     0,     0,    26,    37,   124,     0,     0,
       0,    16,    19,   167,    31,    84,    79,     0,    66,     0,
      71,    21,     0,   142,   143,   163,   117,    62,    18,     0,
      80,    68,     0,   164,     0,    15,   141,   165
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -308,  -308,   -57,  -308,  -308,  -308,  -308,  -308,  -306,    -3,
     229,  -308,  -308,   -46,  -127,   -10,  -278,  -308,  -308,  -115,
     -45,  -308,     1,     0,  -151,  -308,  -308,  -308,  -308,  -308,
     -63,  -308,  -308,   127,  -308,  -308,  -308,  -308,  -308,   262,
    -117,   307,   -25,   122,   126,   -74,  -214,   159,  -138,  -144,
    -308,    27,  -308,     7,  -242,   148,  -308,     9,  -308,  -308,
    -308,  -308,  -308,    16,  -137,  -211,   146,  -308,  -142,  -308,
    -109,  -308,  -307,  -308,  -308,   135,   138,   144,   147,  -308,
    -176,  -308,    96,    93,    97,    98,    99,    95,   100,    89,
      87,    85,    86,   281,   -90,   145,  -308,   -42,  -308,   -65,
    -308,  -308,  -145,  -308,    26,  -308
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    58,    59,    60,    61,    62,   380,   429,   366,    63,
     130,    64,    65,   145,   169,   299,   310,   311,   332,   333,
      66,    67,    68,   119,   248,    70,    71,    72,   396,   323,
     324,   398,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,   224,   187,    84,    85,    86,    87,    88,
     408,   236,   266,   315,   337,   131,   132,   133,    89,   252,
      90,   244,   148,   149,   150,   151,    91,    92,   410,    93,
     343,   344,   353,   375,   200,   205,   208,   211,   215,   284,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   162,   109,   300,   302,   110,
     111,   112,   167,   113,   114,   115
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      69,   125,   160,   175,    69,   168,   267,   170,   171,    69,
     135,   189,   146,   261,   139,   262,   285,   218,   307,   271,
     242,   417,   147,     4,   312,   141,   182,   374,   161,    33,
     377,   232,   155,   340,   157,    26,   183,   313,   225,   278,
       1,    29,    30,   279,  -100,    33,   220,   227,   154,   369,
     370,   147,   371,   282,   334,   134,   126,   127,   128,   129,
      69,   183,   183,    54,   219,   177,   158,   159,    69,   183,
     176,   206,   207,   387,   356,   314,   221,   154,    33,    54,
     184,   257,   209,   303,   210,   185,   198,   222,     8,   372,
      10,   199,   126,   127,   421,   186,   201,   202,   203,   204,
     191,   190,   426,   192,   233,   184,   184,   136,   137,   264,
     185,   185,    47,   184,    49,   269,   312,   312,   185,   312,
     186,   186,   193,   238,   422,   320,   138,   338,   186,   212,
     213,   214,   163,   147,     4,   172,   174,   178,   389,   304,
     312,   247,   223,   263,   179,   180,   181,   188,   194,   195,
     197,   216,   147,   147,   217,   147,   196,   247,   306,   154,
     228,   161,   334,   229,   230,   234,   235,   243,   152,   384,
     245,   246,   249,   223,   259,   260,   275,   265,   154,   154,
     268,   154,   272,   274,   301,   305,   317,   322,   319,   327,
     147,   312,   325,   328,   330,   336,   339,   152,   341,   232,
     345,   346,   347,   350,   382,   351,   354,   297,   358,   362,
     368,   373,   365,   376,   379,   378,   154,   147,   383,   386,
     395,   298,   390,   147,    26,   391,   393,   399,   397,   400,
      29,    30,   402,   189,    33,   147,   403,   404,   316,   405,
     407,   409,   412,   154,   321,   425,   419,   427,   435,   154,
     432,   437,   411,   156,    47,    48,    49,    50,   406,   147,
     364,   154,   240,   116,   331,   147,   143,   144,    54,   258,
     355,   226,   251,   335,   413,   329,   434,   326,   388,   152,
     237,   253,   342,   433,   254,    56,    57,   287,   409,   286,
     255,   154,   288,   256,   289,   291,   290,   293,   294,   152,
     295,   152,   296,   153,   385,   292,   270,     0,     0,   120,
     123,     0,   352,     0,     0,   189,     0,    69,   357,    69,
     359,     0,   140,   401,   142,   367,     0,   147,   147,     0,
     147,     0,     0,   168,   352,     0,   367,   394,     0,     0,
       0,    69,   381,   166,     0,     0,   147,     0,     0,     0,
       0,   147,     0,   154,   154,   428,   154,     0,   423,   424,
      69,   392,   173,   152,     0,   414,     0,     0,     0,   152,
       0,     0,   154,   147,     0,     0,     0,   154,   147,   147,
       0,   152,     0,   342,     0,     0,     0,   436,     0,     0,
       0,    69,   415,    69,   416,     0,     0,    69,   420,   154,
     367,     0,   147,     0,   154,   154,     0,     0,   250,   352,
       0,   152,    69,     0,     0,     0,   431,    69,   430,    69,
       0,     0,     0,     0,     0,   147,     0,   247,   154,   231,
       0,     0,     0,   209,    47,   210,    49,   212,   213,   214,
       0,   239,     0,   241,     0,     0,     0,     0,     0,     0,
       0,   154,   184,   201,   202,   203,   204,   185,   206,   207,
       1,     0,     2,     0,     3,     0,     0,   186,     0,     6,
       0,   166,     0,   152,   152,     0,   152,     0,     0,   273,
       0,     0,     0,     0,     0,     0,   276,     0,     0,   277,
       0,     0,   152,     0,     0,   281,     0,   152,   283,     0,
      26,     0,     0,    28,     0,     0,    29,    30,    31,    32,
      33,    34,    35,    36,     0,     0,     0,     0,     0,   152,
       0,     0,     0,     0,     0,   152,     0,   123,     0,     0,
      47,    48,    49,    50,     0,   166,     0,     0,     0,     0,
     309,    51,    52,    53,    54,    55,     0,   318,   152,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    56,    57,     0,     0,     0,     0,   281,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   166,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     1,     0,     2,
       0,     3,     0,     4,     0,     5,     6,     7,   349,     8,
       9,    10,    11,    12,    13,    14,    15,     0,     0,     0,
      16,    17,    18,    19,    20,    21,     0,   361,     0,   363,
       0,     0,    22,    23,    24,     0,    25,    26,     0,    27,
      28,     0,     0,    29,    30,    31,    32,    33,    34,    35,
      36,     0,     0,     0,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,     0,     0,     0,    47,    48,    49,
      50,     0,     0,     0,     0,     0,     0,     0,    51,    52,
      53,    54,    55,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    56,    57,
       0,     1,   418,     2,     0,     3,     0,     4,   124,     0,
       6,     7,     0,     8,     9,    10,    11,    12,    13,    14,
      15,     0,     0,     0,     0,    17,    18,    19,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    26,     0,    27,    28,     0,     0,    29,    30,    31,
      32,    33,    34,    35,    36,     0,     0,     0,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,     0,     0,
       0,    47,    48,    49,    50,     0,     0,     0,     0,     0,
       0,     0,    51,    52,    53,    54,    55,     0,     0,     0,
       0,     0,     0,     0,     0,     1,     0,     2,     0,     3,
       0,     4,    56,    57,     6,     7,     0,     8,     9,    10,
      11,    12,    13,    14,    15,     0,     0,     0,     0,    17,
      18,    19,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    26,     0,    27,    28,     0,
       0,    29,    30,    31,    32,    33,    34,    35,    36,     0,
       0,     0,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,     2,   117,     3,    47,    48,    49,    50,     6,
       0,     0,     0,     0,     0,     0,    51,    52,    53,    54,
      55,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    56,    57,     0,     0,
      26,     0,     0,    28,     0,   118,    29,    30,    31,    32,
      33,    34,    35,    36,     0,     0,     0,     0,     0,     2,
       0,     3,   121,     0,     0,     0,     6,     0,     0,     0,
      47,    48,    49,    50,     0,     0,     0,     0,     0,     0,
       0,    51,    52,    53,    54,    55,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    26,     0,     0,
      28,    56,    57,    29,    30,    31,    32,    33,    34,    35,
      36,     0,     0,     0,     0,     0,     2,     0,     3,     0,
       0,     0,     0,     6,     0,     0,     0,    47,    48,    49,
      50,     0,     0,     0,     0,   122,     0,     0,    51,    52,
      53,    54,    55,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    26,     0,     0,    28,    56,    57,
      29,    30,    31,    32,    33,    34,    35,    36,   164,     0,
     165,     0,     0,     2,     0,     3,   280,     0,     0,     0,
       6,     0,     0,     0,    47,    48,    49,    50,     0,     0,
       0,     0,     0,     0,     0,    51,    52,    53,    54,    55,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    26,     0,     0,    28,    56,    57,    29,    30,    31,
      32,    33,    34,    35,    36,     0,     0,     0,     0,     0,
       2,     0,     3,     0,     0,     0,     0,     6,     0,     0,
       0,    47,    48,    49,    50,     0,     0,     0,     0,     0,
       0,     0,    51,    52,    53,    54,    55,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    26,     0,
       0,    28,    56,    57,    29,    30,    31,    32,    33,    34,
      35,    36,     0,     0,     0,     0,     0,     2,     0,     3,
     308,     0,     0,     0,     6,     0,     0,     0,    47,    48,
      49,    50,     0,     0,     0,     0,   122,     0,     0,    51,
      52,    53,    54,    55,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    26,     0,     0,    28,    56,
      57,    29,    30,    31,    32,    33,    34,    35,    36,     0,
       0,     0,     0,     0,     2,     0,     3,   121,     0,     0,
       0,     6,     0,     0,     0,    47,    48,    49,    50,     0,
       0,     0,     0,     0,     0,     0,    51,    52,    53,    54,
      55,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    26,     0,     0,    28,    56,    57,    29,    30,
      31,    32,    33,    34,    35,    36,     0,     0,     0,     0,
       0,     2,   348,     3,     0,     0,     0,     0,     6,     0,
       0,     0,    47,    48,    49,    50,     0,     0,     0,     0,
       0,     0,     0,    51,    52,    53,    54,    55,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    26,
       0,     0,    28,    56,    57,    29,    30,    31,    32,    33,
      34,    35,    36,     0,     0,     0,     0,     0,     2,   360,
       3,     0,     0,     0,     0,     6,     0,     0,     0,    47,
      48,    49,    50,     0,     0,     0,     0,     0,     0,     0,
      51,    52,    53,    54,    55,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    26,     0,     0,    28,
      56,    57,    29,    30,    31,    32,    33,    34,    35,    36,
       0,     0,     0,     0,     0,     2,     0,     3,     0,     0,
       0,     0,     6,     0,     0,     0,    47,    48,    49,    50,
       0,     0,     0,     0,     0,     0,     0,    51,    52,    53,
      54,    55,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    26,     0,     0,    28,    56,    57,    29,
      30,    31,    32,    33,    34,    35,    36,     0,     0,     0,
       2,     0,     3,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    47,    48,    49,    50,     0,     0,     0,
       0,     0,     0,     0,    51,    52,    53,    54,    55,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    28,     0,     0,    56,    57,    31,    32,    33,    34,
      35,    36,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    47,    48,
      49,    50,     0,     0,     0,     0,     0,     0,     0,    51,
      52,    53,    54,    55,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    56,
      57
};

static const yytype_int16 yycheck[] =
{
       0,     4,    27,    60,     4,    51,   157,    52,    53,     9,
       9,    85,    22,   151,    14,   152,   192,   107,   232,   164,
     137,     6,    22,     9,   235,    16,     4,   334,    28,    53,
     336,     8,    23,   275,    25,    43,    47,     6,   112,   183,
       3,    49,    50,   187,     5,    53,     7,   112,    22,   327,
     328,    51,   330,   190,   265,     5,    32,    33,    34,    35,
      60,    47,    47,    87,   109,    68,    49,    50,    68,    47,
      61,    97,    98,   351,   316,    44,    37,    51,    53,    87,
      91,   146,    72,   228,    74,    96,    91,    48,    15,   331,
      17,    96,    32,    33,   400,   106,    92,    93,    94,    95,
      80,    92,   409,    83,    81,    91,    91,     5,     5,   155,
      96,    96,    73,    91,    75,   160,   327,   328,    96,   330,
     106,   106,   102,   133,   402,   242,     5,   272,   106,    76,
      77,    78,    49,   133,     9,     5,     0,    81,   352,   229,
     351,   141,   103,   153,     5,     3,     3,     7,    90,   100,
      99,    82,   152,   153,    79,   155,   101,   157,   232,   133,
      56,   161,   373,     6,     6,    10,     5,    49,    22,   345,
       3,     9,     3,   103,    37,     7,   176,     5,   152,   153,
      49,   155,    58,    89,     5,     8,     6,    23,     6,     5,
     190,   402,     9,     5,     5,   103,     6,    51,     6,     8,
      81,     4,     8,     8,   342,     4,     6,   217,     3,    81,
       6,     4,    10,     3,    36,     9,   190,   217,     4,     6,
      24,   221,    81,   223,    43,    14,     6,    10,    25,     4,
      49,    50,     4,   307,    53,   235,     6,     6,   238,     3,
       8,   378,     9,   217,   244,     3,    81,    10,    10,   223,
       6,     3,   379,    24,    73,    74,    75,    76,   373,   259,
     323,   235,   135,     1,   264,   265,    85,    86,    87,   147,
     315,   112,   146,   266,   383,   259,   427,   250,   352,   133,
     132,   146,   282,   425,   146,   104,   105,   194,   425,   193,
     146,   265,   195,   146,   196,   200,   197,   208,   211,   153,
     215,   155,   216,    22,   346,   205,   161,    -1,    -1,     2,
       3,    -1,   312,    -1,    -1,   389,    -1,   317,   317,   319,
     319,    -1,    15,   368,    17,   325,    -1,   327,   328,    -1,
     330,    -1,    -1,   379,   334,    -1,   336,   362,    -1,    -1,
      -1,   341,   341,    36,    -1,    -1,   346,    -1,    -1,    -1,
      -1,   351,    -1,   327,   328,   412,   330,    -1,   403,   404,
     360,   360,    55,   217,    -1,   390,    -1,    -1,    -1,   223,
      -1,    -1,   346,   373,    -1,    -1,    -1,   351,   378,   379,
      -1,   235,    -1,   383,    -1,    -1,    -1,   432,    -1,    -1,
      -1,   391,   391,   393,   393,    -1,    -1,   397,   397,   373,
     400,    -1,   402,    -1,   378,   379,    -1,    -1,    47,   409,
      -1,   265,   412,    -1,    -1,    -1,   419,   417,   417,   419,
      -1,    -1,    -1,    -1,    -1,   425,    -1,   427,   402,   122,
      -1,    -1,    -1,    72,    73,    74,    75,    76,    77,    78,
      -1,   134,    -1,   136,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   425,    91,    92,    93,    94,    95,    96,    97,    98,
       3,    -1,     5,    -1,     7,    -1,    -1,   106,    -1,    12,
      -1,   164,    -1,   327,   328,    -1,   330,    -1,    -1,   172,
      -1,    -1,    -1,    -1,    -1,    -1,   179,    -1,    -1,   182,
      -1,    -1,   346,    -1,    -1,   188,    -1,   351,   191,    -1,
      43,    -1,    -1,    46,    -1,    -1,    49,    50,    51,    52,
      53,    54,    55,    56,    -1,    -1,    -1,    -1,    -1,   373,
      -1,    -1,    -1,    -1,    -1,   379,    -1,   220,    -1,    -1,
      73,    74,    75,    76,    -1,   228,    -1,    -1,    -1,    -1,
     233,    84,    85,    86,    87,    88,    -1,   240,   402,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   104,   105,    -1,    -1,    -1,    -1,   260,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   272,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,     5,
      -1,     7,    -1,     9,    -1,    11,    12,    13,   301,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      26,    27,    28,    29,    30,    31,    -1,   320,    -1,   322,
      -1,    -1,    38,    39,    40,    -1,    42,    43,    -1,    45,
      46,    -1,    -1,    49,    50,    51,    52,    53,    54,    55,
      56,    -1,    -1,    -1,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    -1,    -1,    -1,    73,    74,    75,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    85,
      86,    87,    88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   104,   105,
      -1,     3,   395,     5,    -1,     7,    -1,     9,    10,    -1,
      12,    13,    -1,    15,    16,    17,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    -1,    27,    28,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    43,    -1,    45,    46,    -1,    -1,    49,    50,    51,
      52,    53,    54,    55,    56,    -1,    -1,    -1,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    -1,    -1,
      -1,    73,    74,    75,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    84,    85,    86,    87,    88,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,    -1,     5,    -1,     7,
      -1,     9,   104,   105,    12,    13,    -1,    15,    16,    17,
      18,    19,    20,    21,    22,    -1,    -1,    -1,    -1,    27,
      28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    43,    -1,    45,    46,    -1,
      -1,    49,    50,    51,    52,    53,    54,    55,    56,    -1,
      -1,    -1,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,     5,     6,     7,    73,    74,    75,    76,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    84,    85,    86,    87,
      88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   104,   105,    -1,    -1,
      43,    -1,    -1,    46,    -1,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    -1,    -1,    -1,    -1,    -1,     5,
      -1,     7,     8,    -1,    -1,    -1,    12,    -1,    -1,    -1,
      73,    74,    75,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    84,    85,    86,    87,    88,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,
      46,   104,   105,    49,    50,    51,    52,    53,    54,    55,
      56,    -1,    -1,    -1,    -1,    -1,     5,    -1,     7,    -1,
      -1,    -1,    -1,    12,    -1,    -1,    -1,    73,    74,    75,
      76,    -1,    -1,    -1,    -1,    81,    -1,    -1,    84,    85,
      86,    87,    88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    43,    -1,    -1,    46,   104,   105,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    -1,
      59,    -1,    -1,     5,    -1,     7,     8,    -1,    -1,    -1,
      12,    -1,    -1,    -1,    73,    74,    75,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    84,    85,    86,    87,    88,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    43,    -1,    -1,    46,   104,   105,    49,    50,    51,
      52,    53,    54,    55,    56,    -1,    -1,    -1,    -1,    -1,
       5,    -1,     7,    -1,    -1,    -1,    -1,    12,    -1,    -1,
      -1,    73,    74,    75,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    84,    85,    86,    87,    88,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,
      -1,    46,   104,   105,    49,    50,    51,    52,    53,    54,
      55,    56,    -1,    -1,    -1,    -1,    -1,     5,    -1,     7,
       8,    -1,    -1,    -1,    12,    -1,    -1,    -1,    73,    74,
      75,    76,    -1,    -1,    -1,    -1,    81,    -1,    -1,    84,
      85,    86,    87,    88,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,    46,   104,
     105,    49,    50,    51,    52,    53,    54,    55,    56,    -1,
      -1,    -1,    -1,    -1,     5,    -1,     7,     8,    -1,    -1,
      -1,    12,    -1,    -1,    -1,    73,    74,    75,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    84,    85,    86,    87,
      88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    43,    -1,    -1,    46,   104,   105,    49,    50,
      51,    52,    53,    54,    55,    56,    -1,    -1,    -1,    -1,
      -1,     5,     6,     7,    -1,    -1,    -1,    -1,    12,    -1,
      -1,    -1,    73,    74,    75,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    84,    85,    86,    87,    88,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,
      -1,    -1,    46,   104,   105,    49,    50,    51,    52,    53,
      54,    55,    56,    -1,    -1,    -1,    -1,    -1,     5,     6,
       7,    -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,    73,
      74,    75,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      84,    85,    86,    87,    88,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,    46,
     104,   105,    49,    50,    51,    52,    53,    54,    55,    56,
      -1,    -1,    -1,    -1,    -1,     5,    -1,     7,    -1,    -1,
      -1,    -1,    12,    -1,    -1,    -1,    73,    74,    75,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    85,    86,
      87,    88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    43,    -1,    -1,    46,   104,   105,    49,
      50,    51,    52,    53,    54,    55,    56,    -1,    -1,    -1,
       5,    -1,     7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    73,    74,    75,    76,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    84,    85,    86,    87,    88,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    46,    -1,    -1,   104,   105,    51,    52,    53,    54,
      55,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    74,
      75,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,
      85,    86,    87,    88,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   104,
     105
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     5,     7,     9,    11,    12,    13,    15,    16,
      17,    18,    19,    20,    21,    22,    26,    27,    28,    29,
      30,    31,    38,    39,    40,    42,    43,    45,    46,    49,
      50,    51,    52,    53,    54,    55,    56,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    73,    74,    75,
      76,    84,    85,    86,    87,    88,   104,   105,   111,   112,
     113,   114,   115,   119,   121,   122,   130,   131,   132,   133,
     135,   136,   137,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   155,   156,   157,   158,   159,   168,
     170,   176,   177,   179,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   206,
     209,   210,   211,   213,   214,   215,   149,     6,    48,   133,
     151,     8,    81,   151,    10,   119,    32,    33,    34,    35,
     120,   165,   166,   167,     5,   132,     5,     5,     5,   133,
     151,   167,   151,    85,    86,   123,   125,   133,   172,   173,
     174,   175,   176,   203,   214,   167,   120,   167,    49,    50,
     152,   133,   205,    49,    57,    59,   151,   212,   123,   124,
     130,   130,     5,   151,     0,   112,   167,   119,    81,     5,
       3,     3,     4,    47,    91,    96,   106,   154,     7,   155,
     167,    80,    83,   102,    90,   100,   101,    99,    91,    96,
     184,    92,    93,    94,    95,   185,    97,    98,   186,    72,
      74,   187,    76,    77,    78,   188,    82,    79,   204,   130,
       7,    37,    48,   103,   153,   155,   157,   209,    56,     6,
       6,   151,     8,    81,    10,     5,   161,   165,   125,   151,
     143,   151,   150,    49,   171,     3,     9,   133,   134,     3,
      47,   154,   169,   185,   186,   187,   188,   209,   153,    37,
       7,   158,   174,   125,   123,     5,   162,   134,    49,   130,
     205,   212,    58,   151,    89,   133,   151,   151,   159,   159,
       8,   151,   174,   151,   189,   190,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   125,   133,   125,
     207,     5,   208,   212,   204,     8,   155,   156,     8,   151,
     126,   127,   175,     6,    44,   163,   133,     6,   151,     6,
     150,   133,    23,   139,   140,     9,   161,     5,     5,   173,
       5,   133,   128,   129,   175,   163,   103,   164,   212,     6,
     164,     6,   133,   180,   181,    81,     4,     8,     6,   151,
       8,     4,   133,   182,     6,   130,   164,   132,     3,   132,
       6,   151,    81,   151,   140,    10,   118,   133,     6,   126,
     126,   126,   164,     4,   182,   183,     3,   118,     9,    36,
     116,   132,   158,     4,   190,   207,     6,   126,   155,   156,
      81,    14,   132,     6,   152,    24,   138,    25,   141,    10,
       4,   130,     4,     6,     6,     3,   129,     8,   160,   174,
     178,   124,     9,   180,   152,   132,   132,     6,   151,    81,
     132,   118,   126,   130,   130,     3,   182,    10,   112,   117,
     132,   119,     6,   178,   134,    10,   130,     3
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   110,   111,   111,   112,   112,   113,   113,   113,   113,
     113,   113,   113,   114,   114,   115,   116,   116,   117,   117,
     118,   118,   119,   119,   120,   121,   122,   123,   123,   124,
     125,   126,   126,   127,   127,   128,   129,   129,   130,   130,
     131,   131,   131,   131,   131,   131,   131,   131,   131,   131,
     132,   132,   132,   132,   132,   132,   132,   132,   132,   132,
     133,   134,   134,   135,   136,   137,   138,   138,   139,   140,
     140,   141,   141,   142,   143,   143,   144,   144,   144,   144,
     144,   144,   145,   146,   146,   147,   147,   147,   148,   148,
     149,   149,   150,   150,   151,   151,   152,   152,   152,   153,
     153,   154,   154,   154,   155,   155,   155,   156,   156,   156,
     157,   157,   157,   158,   158,   159,   159,   160,   161,   161,
     162,   162,   163,   163,   164,   164,   165,   165,   166,   166,
     167,   167,   167,   167,   168,   169,   169,   169,   169,   169,
     170,   170,   170,   170,   170,   171,   171,   172,   173,   173,
     174,   174,   175,   175,   176,   176,   176,   176,   176,   176,
     176,   177,   177,   178,   178,   179,   180,   180,   181,   181,
     182,   182,   182,   183,   183,   184,   184,   185,   185,   185,
     185,   186,   186,   187,   187,   188,   188,   188,   189,   189,
     190,   190,   190,   191,   191,   192,   192,   193,   193,   194,
     194,   195,   195,   196,   196,   197,   197,   198,   198,   199,
     199,   200,   200,   201,   201,   202,   202,   203,   203,   203,
     203,   203,   203,   203,   204,   204,   204,   204,   204,   204,
     205,   205,   206,   206,   207,   207,   208,   208,   209,   209,
     210,   211,   211,   211,   211,   211,   211,   211,   212,   212,
     212,   213,   213,   214,   215,   215,   215,   215,   215,   215,
     215,   215,   215,   215,   215,   215,   215
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     8,     2,     0,     1,     0,
       1,     3,     1,     2,     4,     5,     6,     1,     2,     1,
       1,     4,     2,     1,     3,     2,     1,     3,     2,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     6,     2,     3,     2,     0,     5,     1,
       2,     2,     0,     6,     1,     1,     5,     5,     6,     7,
       8,     5,     3,     5,     7,     1,     1,     1,     3,     2,
       2,     1,     2,     1,     1,     3,     1,     3,     3,     3,
       0,     1,     1,     1,     3,     4,     4,     2,     3,     2,
       5,     4,     4,     1,     1,     1,     4,     2,     2,     1,
       2,     1,     2,     1,     3,     0,     1,     1,     1,     1,
       1,     1,     2,     0,     5,     1,     1,     1,     1,     1,
       1,     9,     7,     7,     6,     0,     1,     2,     1,     3,
       1,     1,     1,     2,     1,     1,     1,     2,     2,     2,
       3,     1,     1,     2,     3,     9,     1,     3,     1,     2,
       1,     2,     2,     1,     0,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       1,     5,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     4,     2,     2,     2,
       1,     2,     2,     1,     1,     3,     3,     2,     1,     1,
       3,     1,     2,     2,     3,     2,     2,     1,     1,     2,
       3,     2,     3,     4,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     2,     2,     1
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
    case YYSYMBOL_ast: /* ast  */
#line 137 "src/gwion.y"
             { free_ast(mpool(arg), ((*yyvaluep).ast)); }
#line 1692 "src/parser.c"
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
/* Lookahead token kind.  */
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
    int yynerrs = 0;

    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
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
  case 2: /* prg: ast  */
#line 140 "src/gwion.y"
         { arg->ast = (yyval.ast) = (yyvsp[0].ast); }
#line 1993 "src/parser.c"
    break;

  case 3: /* prg: %empty  */
#line 141 "src/gwion.y"
                { gwion_error(&(yyloc), arg, "file is empty."); YYERROR; }
#line 1999 "src/parser.c"
    break;

  case 4: /* ast: section  */
#line 144 "src/gwion.y"
            { (yyval.ast) = !((Scanner*)arg)->ppa->lint ? new_ast_expand(mpool(arg), (yyvsp[0].section), NULL) : new_ast(mpool(arg), (yyvsp[0].section), NULL); }
#line 2005 "src/parser.c"
    break;

  case 5: /* ast: section ast  */
#line 145 "src/gwion.y"
                { (yyval.ast) = !((Scanner*)arg)->ppa->lint ? new_ast_expand(mpool(arg), (yyvsp[-1].section), (yyvsp[0].ast)) : new_ast(mpool(arg), (yyvsp[-1].section), (yyvsp[0].ast)); }
#line 2011 "src/parser.c"
    break;

  case 6: /* section: stmt_list  */
#line 149 "src/gwion.y"
              { (yyval.section) = new_section_stmt_list(mpool(arg), (yyvsp[0].stmt_list)); }
#line 2017 "src/parser.c"
    break;

  case 7: /* section: func_def  */
#line 150 "src/gwion.y"
              { (yyval.section) = new_section_func_def (mpool(arg), (yyvsp[0].func_def)); }
#line 2023 "src/parser.c"
    break;

  case 8: /* section: class_def  */
#line 151 "src/gwion.y"
              { (yyval.section) = new_section_class_def(mpool(arg), (yyvsp[0].class_def)); }
#line 2029 "src/parser.c"
    break;

  case 9: /* section: enum_def  */
#line 152 "src/gwion.y"
              { (yyval.section) = new_section_enum_def(mpool(arg), (yyvsp[0].enum_def)); }
#line 2035 "src/parser.c"
    break;

  case 10: /* section: union_def  */
#line 153 "src/gwion.y"
              { (yyval.section) = new_section_union_def(mpool(arg), (yyvsp[0].union_def)); }
#line 2041 "src/parser.c"
    break;

  case 11: /* section: fptr_def  */
#line 154 "src/gwion.y"
              { (yyval.section) = new_section_fptr_def(mpool(arg), (yyvsp[0].fptr_def)); }
#line 2047 "src/parser.c"
    break;

  case 12: /* section: type_def  */
#line 155 "src/gwion.y"
              { (yyval.section) = new_section_type_def(mpool(arg), (yyvsp[0].type_def)); }
#line 2053 "src/parser.c"
    break;

  case 13: /* class_type: "class"  */
#line 158 "src/gwion.y"
                  { (yyval.flag) = ae_flag_none; }
#line 2059 "src/parser.c"
    break;

  case 14: /* class_type: "struct"  */
#line 158 "src/gwion.y"
                                                  { (yyval.flag) = ae_flag_struct; }
#line 2065 "src/parser.c"
    break;

  case 15: /* class_def: class_type flag id decl_template class_ext "{" class_body "}"  */
#line 161 "src/gwion.y"
    {
      if((yyvsp[-7].flag) == ae_flag_struct && (yyvsp[-3].type_decl))
        { gwion_error(&(yyloc), arg, "'struct' inherit other types"); YYERROR; }
      (yyval.class_def) = new_class_def(mpool(arg), (yyvsp[-7].flag) | (yyvsp[-6].flag), (yyvsp[-5].sym), (yyvsp[-3].type_decl), (yyvsp[-1].ast), GET_LOC(&(yyloc)));
      if((yyvsp[-4].id_list))
        (yyval.class_def)->base.tmpl = new_tmpl_base(mpool(arg), (yyvsp[-4].id_list));
  }
#line 2077 "src/parser.c"
    break;

  case 16: /* class_ext: "extends" type_decl_exp  */
#line 169 "src/gwion.y"
                                  { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2083 "src/parser.c"
    break;

  case 17: /* class_ext: %empty  */
#line 169 "src/gwion.y"
                                                 { (yyval.type_decl) = NULL; }
#line 2089 "src/parser.c"
    break;

  case 19: /* class_body: %empty  */
#line 171 "src/gwion.y"
                   { (yyval.ast) = NULL; }
#line 2095 "src/parser.c"
    break;

  case 20: /* id_list: id  */
#line 173 "src/gwion.y"
            { (yyval.id_list) = new_id_list(mpool(arg), (yyvsp[0].sym), GET_LOC(&(yyloc))); }
#line 2101 "src/parser.c"
    break;

  case 21: /* id_list: id "," id_list  */
#line 173 "src/gwion.y"
                                                                                    { (yyval.id_list) = prepend_id_list(mpool(arg), (yyvsp[-2].sym), (yyvsp[0].id_list), loc_cpy(mpool(arg), &(yylsp[-2]))); }
#line 2107 "src/parser.c"
    break;

  case 22: /* stmt_list: stmt  */
#line 175 "src/gwion.y"
                { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL);}
#line 2113 "src/parser.c"
    break;

  case 23: /* stmt_list: stmt stmt_list  */
#line 175 "src/gwion.y"
                                                                              { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[-1].stmt), (yyvsp[0].stmt_list)); }
#line 2119 "src/parser.c"
    break;

  case 24: /* func_base: flag type_decl_empty id decl_template  */
#line 177 "src/gwion.y"
                                                 { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), NULL, (yyvsp[-3].flag));
  if((yyvsp[0].id_list)) { (yyval.func_base)->flag |= ae_flag_template; (yyval.func_base)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[0].id_list)); } }
#line 2126 "src/parser.c"
    break;

  case 25: /* fptr_def: "funcdef" func_base fptr_args arg_type ";"  */
#line 180 "src/gwion.y"
                                                         {
  (yyvsp[-3].func_base)->args = (yyvsp[-2].arg_list);
  (yyvsp[-3].func_base)->flag |= (yyvsp[-1].flag);
  (yyval.fptr_def) = new_fptr_def(mpool(arg), (yyvsp[-3].func_base));
}
#line 2136 "src/parser.c"
    break;

  case 26: /* type_def: "typedef" flag type_decl_array id decl_template ";"  */
#line 186 "src/gwion.y"
                                                                  {
  (yyval.type_def) = new_type_def(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].sym));
  (yyvsp[-3].type_decl)->flag |= (yyvsp[-4].flag);
  if((yyvsp[-1].id_list))
    (yyval.type_def)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-1].id_list));
}
#line 2147 "src/parser.c"
    break;

  case 28: /* type_decl_array: type_decl array  */
#line 193 "src/gwion.y"
                                             { (yyvsp[-1].type_decl)->array = (yyvsp[0].array_sub); }
#line 2153 "src/parser.c"
    break;

  case 29: /* type_decl_exp: type_decl_array  */
#line 195 "src/gwion.y"
                               { if((yyvsp[0].type_decl)->array && !(yyvsp[0].type_decl)->array->exp)
    { gwion_error(&(yyloc), arg, "can't instantiate with empty '[]'"); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2161 "src/parser.c"
    break;

  case 30: /* type_decl_empty: type_decl_array  */
#line 199 "src/gwion.y"
                                 { if((yyvsp[0].type_decl)->array && (yyvsp[0].type_decl)->array->exp)
    { gwion_error(&(yyloc), arg, "type must be defined with empty []'s"); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2169 "src/parser.c"
    break;

  case 31: /* arg: type_decl arg_decl ":" binary_exp  */
#line 204 "src/gwion.y"
                                      { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].var_decl), NULL); (yyval.arg_list)->exp = (yyvsp[0].exp); }
#line 2175 "src/parser.c"
    break;

  case 32: /* arg: type_decl arg_decl  */
#line 205 "src/gwion.y"
                       { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl), NULL); }
#line 2181 "src/parser.c"
    break;

  case 33: /* arg_list: arg  */
#line 207 "src/gwion.y"
         { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2187 "src/parser.c"
    break;

  case 34: /* arg_list: arg_list "," arg  */
#line 208 "src/gwion.y"
                        {
     Arg_List last = (yyvsp[-2].arg_list);
     while(last->next)
       last = last->next;
     if(last->exp && !(yyvsp[0].arg_list)->exp)
        { gwion_error(&(yylsp[0]), arg, "missing default argument"); YYERROR;}
     last->next = (yyvsp[0].arg_list); (yyval.arg_list) = (yyvsp[-2].arg_list);
   }
#line 2200 "src/parser.c"
    break;

  case 35: /* fptr_arg: type_decl fptr_arg_decl  */
#line 217 "src/gwion.y"
                                  { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl), NULL); }
#line 2206 "src/parser.c"
    break;

  case 36: /* fptr_list: fptr_arg  */
#line 218 "src/gwion.y"
                    { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2212 "src/parser.c"
    break;

  case 37: /* fptr_list: fptr_arg "," fptr_list  */
#line 218 "src/gwion.y"
                                                            {
  if(!(yyvsp[-2].arg_list))
    { gwion_error(&(yyloc), arg, "invalid function pointer argument"); YYERROR;}
    (yyvsp[-2].arg_list)->next = (yyvsp[0].arg_list); (yyval.arg_list) = (yyvsp[-2].arg_list);
}
#line 2222 "src/parser.c"
    break;

  case 38: /* code_stmt: "{" "}"  */
#line 225 "src/gwion.y"
                  { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_code, GET_LOC(&(yyloc))); }
#line 2228 "src/parser.c"
    break;

  case 39: /* code_stmt: "{" stmt_list "}"  */
#line 226 "src/gwion.y"
                            { (yyval.stmt) = new_stmt_code(mpool(arg), (yyvsp[-1].stmt_list)); }
#line 2234 "src/parser.c"
    break;

  case 40: /* stmt_pp: "<comment>"  */
#line 230 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_comment, (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2240 "src/parser.c"
    break;

  case 41: /* stmt_pp: "#include"  */
#line 231 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_include, (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2246 "src/parser.c"
    break;

  case 42: /* stmt_pp: "#define"  */
#line 232 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_define,  (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2252 "src/parser.c"
    break;

  case 43: /* stmt_pp: "#pragma"  */
#line 233 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_pragma,  (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2258 "src/parser.c"
    break;

  case 44: /* stmt_pp: "#undef"  */
#line 234 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_undef,   (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2264 "src/parser.c"
    break;

  case 45: /* stmt_pp: "#ifdef"  */
#line 235 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_ifdef,   (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2270 "src/parser.c"
    break;

  case 46: /* stmt_pp: "#ifndef"  */
#line 236 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_ifndef,  (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2276 "src/parser.c"
    break;

  case 47: /* stmt_pp: "#else"  */
#line 237 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_else,    (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2282 "src/parser.c"
    break;

  case 48: /* stmt_pp: "#if"  */
#line 238 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_endif,   (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2288 "src/parser.c"
    break;

  case 49: /* stmt_pp: "\n"  */
#line 239 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_nl,      (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2294 "src/parser.c"
    break;

  case 60: /* id: "<identifier>"  */
#line 255 "src/gwion.y"
       { (yyval.sym) = insert_symbol((yyvsp[0].sval)); }
#line 2300 "src/parser.c"
    break;

  case 62: /* opt_id: %empty  */
#line 257 "src/gwion.y"
             { (yyval.sym) = NULL; }
#line 2306 "src/parser.c"
    break;

  case 63: /* enum_def: "enum" flag opt_id "{" id_list "}"  */
#line 260 "src/gwion.y"
                                              { (yyval.enum_def) = new_enum_def(mpool(arg), (yyvsp[-1].id_list), (yyvsp[-3].sym), GET_LOC(&(yyloc)));
    (yyval.enum_def)->flag = (yyvsp[-4].flag); }
#line 2313 "src/parser.c"
    break;

  case 64: /* label_stmt: id ":"  */
#line 263 "src/gwion.y"
                     {  (yyval.stmt) = new_stmt_jump(mpool(arg), (yyvsp[-1].sym), 1, GET_LOC(&(yyloc))); }
#line 2319 "src/parser.c"
    break;

  case 65: /* goto_stmt: "goto" id ";"  */
#line 265 "src/gwion.y"
                             {  (yyval.stmt) = new_stmt_jump(mpool(arg), (yyvsp[-1].sym), 0, GET_LOC(&(yyloc))); }
#line 2325 "src/parser.c"
    break;

  case 66: /* when_exp: "when" exp  */
#line 267 "src/gwion.y"
                   { (yyval.exp) = (yyvsp[0].exp); }
#line 2331 "src/parser.c"
    break;

  case 67: /* when_exp: %empty  */
#line 267 "src/gwion.y"
                                  { (yyval.exp) = NULL; }
#line 2337 "src/parser.c"
    break;

  case 68: /* match_case_stmt: "case" exp when_exp ":" stmt_list  */
#line 270 "src/gwion.y"
                                      {
    (yyval.stmt) = new_stmt(mpool(arg), 0, GET_LOC(&(yyloc)));
    (yyval.stmt)->d.stmt_match.cond = (yyvsp[-3].exp);
    (yyval.stmt)->d.stmt_match.list = (yyvsp[0].stmt_list);
    (yyval.stmt)->d.stmt_match.when = (yyvsp[-2].exp);
}
#line 2348 "src/parser.c"
    break;

  case 69: /* match_list: match_case_stmt  */
#line 278 "src/gwion.y"
                    { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL); }
#line 2354 "src/parser.c"
    break;

  case 70: /* match_list: match_case_stmt match_list  */
#line 279 "src/gwion.y"
                               { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[-1].stmt), (yyvsp[0].stmt_list)); }
#line 2360 "src/parser.c"
    break;

  case 71: /* where_stmt: "where" stmt  */
#line 281 "src/gwion.y"
                       { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2366 "src/parser.c"
    break;

  case 72: /* where_stmt: %empty  */
#line 281 "src/gwion.y"
                                      { (yyval.stmt) = NULL; }
#line 2372 "src/parser.c"
    break;

  case 73: /* match_stmt: "match" exp "{" match_list "}" where_stmt  */
#line 283 "src/gwion.y"
                                                          {
  (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_match, GET_LOC(&(yyloc)));
  (yyval.stmt)->d.stmt_match.cond  = (yyvsp[-4].exp);
  (yyval.stmt)->d.stmt_match.list  = (yyvsp[-2].stmt_list);
  (yyval.stmt)->d.stmt_match.where = (yyvsp[0].stmt);
}
#line 2383 "src/parser.c"
    break;

  case 74: /* flow: "while"  */
#line 291 "src/gwion.y"
          { (yyval.ival) = ae_stmt_while; }
#line 2389 "src/parser.c"
    break;

  case 75: /* flow: "until"  */
#line 292 "src/gwion.y"
          { (yyval.ival) = ae_stmt_until; }
#line 2395 "src/parser.c"
    break;

  case 76: /* loop_stmt: flow "(" exp ")" stmt  */
#line 296 "src/gwion.y"
    { (yyval.stmt) = new_stmt_flow(mpool(arg), (yyvsp[-4].ival), (yyvsp[-2].exp), (yyvsp[0].stmt), 0); }
#line 2401 "src/parser.c"
    break;

  case 77: /* loop_stmt: "do" stmt flow exp ";"  */
#line 298 "src/gwion.y"
    { (yyval.stmt) = new_stmt_flow(mpool(arg), (yyvsp[-2].ival), (yyvsp[-1].exp), (yyvsp[-3].stmt), 1); }
#line 2407 "src/parser.c"
    break;

  case 78: /* loop_stmt: "for" "(" exp_stmt exp_stmt ")" stmt  */
#line 300 "src/gwion.y"
      { (yyval.stmt) = new_stmt_for(mpool(arg), (yyvsp[-3].stmt), (yyvsp[-2].stmt), NULL, (yyvsp[0].stmt)); }
#line 2413 "src/parser.c"
    break;

  case 79: /* loop_stmt: "for" "(" exp_stmt exp_stmt exp ")" stmt  */
#line 302 "src/gwion.y"
      { (yyval.stmt) = new_stmt_for(mpool(arg), (yyvsp[-4].stmt), (yyvsp[-3].stmt), (yyvsp[-2].exp), (yyvsp[0].stmt)); }
#line 2419 "src/parser.c"
    break;

  case 80: /* loop_stmt: "foreach" "(" ref id ":" binary_exp ")" stmt  */
#line 304 "src/gwion.y"
      { (yyval.stmt) = new_stmt_each(mpool(arg), (yyvsp[-4].sym), (yyvsp[-2].exp), (yyvsp[0].stmt)); (yyval.stmt)->d.stmt_each.is_ptr = (yyvsp[-5].ival); }
#line 2425 "src/parser.c"
    break;

  case 81: /* loop_stmt: "repeat" "(" exp ")" stmt  */
#line 306 "src/gwion.y"
      { (yyval.stmt) = new_stmt_loop(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].stmt)); }
#line 2431 "src/parser.c"
    break;

  case 82: /* varloop_stmt: "varloop" binary_exp code_stmt  */
#line 309 "src/gwion.y"
                                           { (yyval.stmt) = new_stmt_varloop(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].stmt)); }
#line 2437 "src/parser.c"
    break;

  case 83: /* selection_stmt: "if" "(" exp ")" stmt  */
#line 313 "src/gwion.y"
      { (yyval.stmt) = new_stmt_if(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].stmt)); }
#line 2443 "src/parser.c"
    break;

  case 84: /* selection_stmt: "if" "(" exp ")" stmt "else" stmt  */
#line 315 "src/gwion.y"
      { (yyval.stmt) = new_stmt_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].stmt)); (yyval.stmt)->d.stmt_if.else_body = (yyvsp[0].stmt); }
#line 2449 "src/parser.c"
    break;

  case 85: /* breaks: "return"  */
#line 319 "src/gwion.y"
              { (yyval.ival) = ae_stmt_return; }
#line 2455 "src/parser.c"
    break;

  case 86: /* breaks: "break"  */
#line 320 "src/gwion.y"
              { (yyval.ival) = ae_stmt_break; }
#line 2461 "src/parser.c"
    break;

  case 87: /* breaks: "continue"  */
#line 321 "src/gwion.y"
              { (yyval.ival) = ae_stmt_continue; }
#line 2467 "src/parser.c"
    break;

  case 88: /* jump_stmt: "return" exp ";"  */
#line 324 "src/gwion.y"
                          { (yyval.stmt) = new_stmt_exp(mpool(arg), ae_stmt_return, (yyvsp[-1].exp)); }
#line 2473 "src/parser.c"
    break;

  case 89: /* jump_stmt: breaks ";"  */
#line 325 "src/gwion.y"
                        { (yyval.stmt) = new_stmt(mpool(arg), (yyvsp[-1].ival), GET_LOC(&(yyloc))); }
#line 2479 "src/parser.c"
    break;

  case 90: /* _exp_stmt: ";" _exp_stmt  */
#line 328 "src/gwion.y"
                               { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2485 "src/parser.c"
    break;

  case 91: /* _exp_stmt: ";"  */
#line 328 "src/gwion.y"
                                                        { (yyval.stmt) = NULL; }
#line 2491 "src/parser.c"
    break;

  case 92: /* exp_stmt: exp ";"  */
#line 331 "src/gwion.y"
                  { (yyval.stmt) = new_stmt_exp(mpool(arg), ae_stmt_exp, (yyvsp[-1].exp)); }
#line 2497 "src/parser.c"
    break;

  case 93: /* exp_stmt: _exp_stmt  */
#line 332 "src/gwion.y"
                  { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_exp, GET_LOC(&(yyloc))); }
#line 2503 "src/parser.c"
    break;

  case 95: /* exp: binary_exp "," exp  */
#line 335 "src/gwion.y"
                                        { (yyval.exp) = prepend_exp((yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2509 "src/parser.c"
    break;

  case 97: /* binary_exp: binary_exp OPID_A decl_exp  */
#line 339 "src/gwion.y"
                                   { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 2515 "src/parser.c"
    break;

  case 98: /* binary_exp: binary_exp op decl_exp  */
#line 340 "src/gwion.y"
                               { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 2521 "src/parser.c"
    break;

  case 99: /* call_template: ":[" type_list "]"  */
#line 342 "src/gwion.y"
                                     { (yyval.type_list) = (yyvsp[-1].type_list); }
#line 2527 "src/parser.c"
    break;

  case 100: /* call_template: %empty  */
#line 342 "src/gwion.y"
                                                    { (yyval.type_list) = NULL; }
#line 2533 "src/parser.c"
    break;

  case 104: /* array_exp: "[" exp "]"  */
#line 347 "src/gwion.y"
                                { (yyval.array_sub) = new_array_sub(mpool(arg), (yyvsp[-1].exp)); }
#line 2539 "src/parser.c"
    break;

  case 105: /* array_exp: "[" exp "]" array_exp  */
#line 348 "src/gwion.y"
                                { if((yyvsp[-2].exp)->next){ gwion_error(&(yyloc), arg, "invalid format for array init [...][...]..."); YYERROR; } (yyval.array_sub) = prepend_array_sub((yyvsp[0].array_sub), (yyvsp[-2].exp)); }
#line 2545 "src/parser.c"
    break;

  case 106: /* array_exp: "[" exp "]" array_empty  */
#line 349 "src/gwion.y"
                                  { gwion_error(&(yyloc), arg, "partially empty array init [...][]..."); YYERROR; }
#line 2551 "src/parser.c"
    break;

  case 107: /* array_empty: "[" "]"  */
#line 353 "src/gwion.y"
                              { (yyval.array_sub) = new_array_sub(mpool(arg), NULL); }
#line 2557 "src/parser.c"
    break;

  case 108: /* array_empty: array_empty "[" "]"  */
#line 354 "src/gwion.y"
                              { (yyval.array_sub) = prepend_array_sub((yyvsp[-2].array_sub), NULL); }
#line 2563 "src/parser.c"
    break;

  case 109: /* array_empty: array_empty array_exp  */
#line 355 "src/gwion.y"
                              { gwion_error(&(yyloc), arg, "partially empty array init [][...]"); YYERROR; }
#line 2569 "src/parser.c"
    break;

  case 110: /* range: "[" exp ":" exp "]"  */
#line 359 "src/gwion.y"
                                { (yyval.range) = new_range(mpool(arg), (yyvsp[-3].exp), (yyvsp[-1].exp)); }
#line 2575 "src/parser.c"
    break;

  case 111: /* range: "[" exp ":" "]"  */
#line 360 "src/gwion.y"
                                { (yyval.range) = new_range(mpool(arg), (yyvsp[-2].exp), NULL); }
#line 2581 "src/parser.c"
    break;

  case 112: /* range: "[" ":" exp "]"  */
#line 361 "src/gwion.y"
                                { (yyval.range) = new_range(mpool(arg), NULL, (yyvsp[-1].exp)); }
#line 2587 "src/parser.c"
    break;

  case 116: /* decl_exp: type_decl_flag2 flag type_decl_noflag var_decl_list  */
#line 367 "src/gwion.y"
                                                        { (yyval.exp)= new_exp_decl(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl_list)); (yyval.exp)->d.exp_decl.td->flag |= (yyvsp[-3].flag) | (yyvsp[-2].flag); }
#line 2593 "src/parser.c"
    break;

  case 117: /* union_exp: type_decl_noflag arg_decl  */
#line 369 "src/gwion.y"
                                     { (yyvsp[-1].type_decl)->flag |= ae_flag_ref; (yyval.exp)= new_exp_decl(mpool(arg), (yyvsp[-1].type_decl), new_var_decl_list(mpool(arg), (yyvsp[0].var_decl), NULL)); }
#line 2599 "src/parser.c"
    break;

  case 118: /* func_args: "(" arg_list  */
#line 371 "src/gwion.y"
                           { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2605 "src/parser.c"
    break;

  case 119: /* func_args: "("  */
#line 371 "src/gwion.y"
                                                 { (yyval.arg_list) = NULL; }
#line 2611 "src/parser.c"
    break;

  case 120: /* fptr_args: "(" fptr_list  */
#line 372 "src/gwion.y"
                            { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2617 "src/parser.c"
    break;

  case 121: /* fptr_args: "("  */
#line 372 "src/gwion.y"
                                                  { (yyval.arg_list) = NULL; }
#line 2623 "src/parser.c"
    break;

  case 122: /* arg_type: "..." ")"  */
#line 373 "src/gwion.y"
                         { (yyval.flag) = ae_flag_variadic; }
#line 2629 "src/parser.c"
    break;

  case 123: /* arg_type: ")"  */
#line 373 "src/gwion.y"
                                                            { (yyval.flag) = 0; }
#line 2635 "src/parser.c"
    break;

  case 124: /* decl_template: ":[" id_list "]"  */
#line 375 "src/gwion.y"
                                   { (yyval.id_list) = (yyvsp[-1].id_list); }
#line 2641 "src/parser.c"
    break;

  case 125: /* decl_template: %empty  */
#line 375 "src/gwion.y"
                                                  { (yyval.id_list) = NULL; }
#line 2647 "src/parser.c"
    break;

  case 126: /* storage_flag: "static"  */
#line 377 "src/gwion.y"
                     { (yyval.flag) = ae_flag_static; }
#line 2653 "src/parser.c"
    break;

  case 127: /* storage_flag: "global"  */
#line 378 "src/gwion.y"
           { (yyval.flag) = ae_flag_global; }
#line 2659 "src/parser.c"
    break;

  case 128: /* access_flag: "private"  */
#line 381 "src/gwion.y"
                     { (yyval.flag) = ae_flag_private; }
#line 2665 "src/parser.c"
    break;

  case 129: /* access_flag: "protect"  */
#line 382 "src/gwion.y"
            { (yyval.flag) = ae_flag_protect; }
#line 2671 "src/parser.c"
    break;

  case 130: /* flag: access_flag  */
#line 385 "src/gwion.y"
                  { (yyval.flag) = (yyvsp[0].flag); }
#line 2677 "src/parser.c"
    break;

  case 131: /* flag: storage_flag  */
#line 386 "src/gwion.y"
                  { (yyval.flag) = (yyvsp[0].flag); }
#line 2683 "src/parser.c"
    break;

  case 132: /* flag: access_flag storage_flag  */
#line 387 "src/gwion.y"
                              { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 2689 "src/parser.c"
    break;

  case 133: /* flag: %empty  */
#line 388 "src/gwion.y"
    { (yyval.flag) = ae_flag_none; }
#line 2695 "src/parser.c"
    break;

  case 134: /* func_def_base: "fun" func_base func_args arg_type code_stmt  */
#line 392 "src/gwion.y"
                                                    {
    (yyvsp[-3].func_base)->args = (yyvsp[-2].arg_list);
    (yyvsp[-3].func_base)->flag |= (yyvsp[-1].flag);
    (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-3].func_base), (yyvsp[0].stmt), GET_LOC(&(yyloc)));
  }
#line 2705 "src/parser.c"
    break;

  case 141: /* func_def: "operator" type_decl_empty op_op "(" arg "," arg ")" code_stmt  */
#line 403 "src/gwion.y"
    { (yyval.func_def) = new_func_def(mpool(arg), new_func_base(mpool(arg), (yyvsp[-7].type_decl), (yyvsp[-6].sym), (yyvsp[-4].arg_list), ae_flag_op), (yyvsp[0].stmt), GET_LOC(&(yyloc))); (yyvsp[-4].arg_list)->next = (yyvsp[-2].arg_list);}
#line 2711 "src/parser.c"
    break;

  case 142: /* func_def: "operator" type_decl_empty post_op "(" arg ")" code_stmt  */
#line 405 "src/gwion.y"
    { (yyval.func_def) = new_func_def(mpool(arg), new_func_base(mpool(arg), (yyvsp[-5].type_decl), (yyvsp[-4].sym), (yyvsp[-2].arg_list), ae_flag_op), (yyvsp[0].stmt), GET_LOC(&(yyloc))); }
#line 2717 "src/parser.c"
    break;

  case 143: /* func_def: "operator" unary_op type_decl_empty "(" arg ")" code_stmt  */
#line 407 "src/gwion.y"
    { (yyval.func_def) = new_func_def(mpool(arg), new_func_base(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-5].sym), (yyvsp[-2].arg_list), ae_flag_op | ae_flag_unary), (yyvsp[0].stmt), GET_LOC(&(yyloc))); }
#line 2723 "src/parser.c"
    break;

  case 144: /* func_def: "operator" type_decl_empty OPID_A func_args ")" code_stmt  */
#line 409 "src/gwion.y"
    {
 (yyval.func_def) = new_func_def(mpool(arg), new_func_base(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-3].sym), (yyvsp[-2].arg_list), ae_flag_op | ae_flag_typedef), (yyvsp[0].stmt), GET_LOC(&(yyloc)));
    }
#line 2731 "src/parser.c"
    break;

  case 145: /* ref: %empty  */
#line 413 "src/gwion.y"
     { (yyval.ival) = 0; }
#line 2737 "src/parser.c"
    break;

  case 146: /* ref: "ref"  */
#line 413 "src/gwion.y"
                       { (yyval.ival) = ae_flag_ref; }
#line 2743 "src/parser.c"
    break;

  case 147: /* type_decl_tmpl: id call_template  */
#line 416 "src/gwion.y"
                     { (yyval.type_decl) = new_type_decl(mpool(arg), (yyvsp[-1].sym), GET_LOC(&(yyloc))); (yyval.type_decl)->types = (yyvsp[0].type_list); }
#line 2749 "src/parser.c"
    break;

  case 149: /* type_decl_next: type_decl_tmpl "." type_decl_next  */
#line 421 "src/gwion.y"
                                      { (yyvsp[-2].type_decl)->next = (yyvsp[0].type_decl); }
#line 2755 "src/parser.c"
    break;

  case 150: /* type_decl_noflag: type_decl_next  */
#line 425 "src/gwion.y"
                   { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2761 "src/parser.c"
    break;

  case 151: /* type_decl_noflag: typeof_exp  */
#line 426 "src/gwion.y"
               { (yyval.type_decl) = new_type_decl2(mpool(arg), (yyvsp[0].exp), GET_LOC(&(yyloc))); }
#line 2767 "src/parser.c"
    break;

  case 153: /* type_decl: type_decl_flag type_decl_noflag  */
#line 429 "src/gwion.y"
                                                              { (yyval.type_decl) = (yyvsp[0].type_decl); (yyval.type_decl)->flag |= (yyvsp[-1].flag); }
#line 2773 "src/parser.c"
    break;

  case 154: /* type_decl_flag: "ref"  */
#line 432 "src/gwion.y"
        { (yyval.flag) = ae_flag_ref; }
#line 2779 "src/parser.c"
    break;

  case 155: /* type_decl_flag: "const"  */
#line 433 "src/gwion.y"
           { (yyval.flag) = ae_flag_const; }
#line 2785 "src/parser.c"
    break;

  case 156: /* type_decl_flag: "nonnull"  */
#line 434 "src/gwion.y"
            { (yyval.flag) = ae_flag_nonnull; }
#line 2791 "src/parser.c"
    break;

  case 157: /* type_decl_flag: "nonnull" "ref"  */
#line 435 "src/gwion.y"
                { (yyval.flag) = ae_flag_nonnull | ae_flag_ref; }
#line 2797 "src/parser.c"
    break;

  case 158: /* type_decl_flag: "const" "ref"  */
#line 436 "src/gwion.y"
               { (yyval.flag) = ae_flag_const | ae_flag_ref; }
#line 2803 "src/parser.c"
    break;

  case 159: /* type_decl_flag: "const" "nonnull"  */
#line 437 "src/gwion.y"
                   { (yyval.flag) = ae_flag_const | ae_flag_nonnull; }
#line 2809 "src/parser.c"
    break;

  case 160: /* type_decl_flag: "const" "nonnull" "ref"  */
#line 438 "src/gwion.y"
                       { (yyval.flag) = ae_flag_const | ae_flag_nonnull | ae_flag_ref; }
#line 2815 "src/parser.c"
    break;

  case 161: /* type_decl_flag2: "var"  */
#line 440 "src/gwion.y"
                        { (yyval.flag) = ae_flag_none; }
#line 2821 "src/parser.c"
    break;

  case 163: /* decl_list: union_exp ";"  */
#line 442 "src/gwion.y"
                               { (yyval.decl_list) = new_decl_list(mpool(arg), (yyvsp[-1].exp), NULL); }
#line 2827 "src/parser.c"
    break;

  case 164: /* decl_list: union_exp ";" decl_list  */
#line 443 "src/gwion.y"
                                  { (yyval.decl_list) = new_decl_list(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].decl_list)); }
#line 2833 "src/parser.c"
    break;

  case 165: /* union_def: "union" flag opt_id decl_template "{" decl_list "}" opt_id ";"  */
#line 446 "src/gwion.y"
                                                                             {
      (yyval.union_def) = new_union_def(mpool(arg), (yyvsp[-3].decl_list), GET_LOC(&(yyloc)));
      (yyval.union_def)->type_xid = (yyvsp[-6].sym);
      (yyval.union_def)->xid = (yyvsp[-1].sym);
      (yyval.union_def)->flag = (yyvsp[-7].flag);
      if((yyvsp[-5].id_list)) {
        if(!(yyvsp[-6].sym)) {
          gwion_error(&(yyloc), arg, _("Template unions requires type name\n"));
          YYERROR;
        }
        if((yyvsp[-1].sym)) {
          gwion_error(&(yyloc), arg, _("Can't instantiate template union types at declaration site.\n"));
          YYERROR;
        }
        (yyval.union_def)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-5].id_list));
      }
    }
#line 2855 "src/parser.c"
    break;

  case 166: /* var_decl_list: var_decl  */
#line 466 "src/gwion.y"
             { (yyval.var_decl_list) = new_var_decl_list(mpool(arg), (yyvsp[0].var_decl), NULL); }
#line 2861 "src/parser.c"
    break;

  case 167: /* var_decl_list: var_decl "," var_decl_list  */
#line 467 "src/gwion.y"
                                 { (yyval.var_decl_list) = new_var_decl_list(mpool(arg), (yyvsp[-2].var_decl), (yyvsp[0].var_decl_list)); }
#line 2867 "src/parser.c"
    break;

  case 168: /* var_decl: id  */
#line 470 "src/gwion.y"
             { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, GET_LOC(&(yyloc))); }
#line 2873 "src/parser.c"
    break;

  case 169: /* var_decl: id array  */
#line 471 "src/gwion.y"
                { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[-1].sym),   (yyvsp[0].array_sub), GET_LOC(&(yyloc))); }
#line 2879 "src/parser.c"
    break;

  case 170: /* arg_decl: id  */
#line 473 "src/gwion.y"
             { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, GET_LOC(&(yyloc))); }
#line 2885 "src/parser.c"
    break;

  case 171: /* arg_decl: id array_empty  */
#line 474 "src/gwion.y"
                   { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[-1].sym),   (yyvsp[0].array_sub), GET_LOC(&(yyloc))); }
#line 2891 "src/parser.c"
    break;

  case 172: /* arg_decl: id array_exp  */
#line 475 "src/gwion.y"
                 { gwion_error(&(yyloc), arg, "argument/union must be defined with empty []'s"); YYERROR; }
#line 2897 "src/parser.c"
    break;

  case 174: /* fptr_arg_decl: %empty  */
#line 476 "src/gwion.y"
                          { (yyval.var_decl) = new_var_decl(mpool(arg), NULL, NULL, GET_LOC(&(yyloc))); }
#line 2903 "src/parser.c"
    break;

  case 189: /* opt_exp: %empty  */
#line 484 "src/gwion.y"
               { (yyval.exp) = NULL; }
#line 2909 "src/parser.c"
    break;

  case 191: /* con_exp: log_or_exp "?" opt_exp ":" con_exp  */
#line 487 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2915 "src/parser.c"
    break;

  case 192: /* con_exp: log_or_exp "?:" con_exp  */
#line 489 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-2].exp), NULL, (yyvsp[0].exp)); }
#line 2921 "src/parser.c"
    break;

  case 194: /* log_or_exp: log_or_exp "||" log_and_exp  */
#line 491 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 2927 "src/parser.c"
    break;

  case 196: /* log_and_exp: log_and_exp "&&" inc_or_exp  */
#line 492 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 2933 "src/parser.c"
    break;

  case 198: /* inc_or_exp: inc_or_exp "|" exc_or_exp  */
#line 493 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 2939 "src/parser.c"
    break;

  case 200: /* exc_or_exp: exc_or_exp "^" and_exp  */
#line 494 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 2945 "src/parser.c"
    break;

  case 202: /* and_exp: and_exp "&" eq_exp  */
#line 495 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 2951 "src/parser.c"
    break;

  case 204: /* eq_exp: eq_exp eq_op rel_exp  */
#line 496 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 2957 "src/parser.c"
    break;

  case 206: /* rel_exp: rel_exp rel_op shift_exp  */
#line 497 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 2963 "src/parser.c"
    break;

  case 208: /* shift_exp: shift_exp shift_op add_exp  */
#line 498 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 2969 "src/parser.c"
    break;

  case 210: /* add_exp: add_exp add_op mul_exp  */
#line 499 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 2975 "src/parser.c"
    break;

  case 212: /* mul_exp: mul_exp mul_op dur_exp  */
#line 500 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 2981 "src/parser.c"
    break;

  case 214: /* dur_exp: dur_exp "::" cast_exp  */
#line 501 "src/gwion.y"
                                                  { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 2987 "src/parser.c"
    break;

  case 216: /* cast_exp: cast_exp "$" type_decl_empty  */
#line 504 "src/gwion.y"
    { (yyval.exp) = new_exp_cast(mpool(arg), (yyvsp[0].type_decl), (yyvsp[-2].exp)); }
#line 2993 "src/parser.c"
    break;

  case 225: /* unary_exp: unary_op unary_exp  */
#line 511 "src/gwion.y"
                       { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 2999 "src/parser.c"
    break;

  case 226: /* unary_exp: "(" OPID_D ")" unary_exp  */
#line 512 "src/gwion.y"
                                   { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-2].sym), (yyvsp[0].exp)); }
#line 3005 "src/parser.c"
    break;

  case 227: /* unary_exp: "new" type_decl_exp  */
#line 513 "src/gwion.y"
                      {(yyval.exp) = new_exp_unary2(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].type_decl)); }
#line 3011 "src/parser.c"
    break;

  case 228: /* unary_exp: "spork" code_stmt  */
#line 514 "src/gwion.y"
                      { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt)); }
#line 3017 "src/parser.c"
    break;

  case 229: /* unary_exp: "fork" code_stmt  */
#line 515 "src/gwion.y"
                     { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt)); }
#line 3023 "src/parser.c"
    break;

  case 230: /* lambda_list: id  */
#line 518 "src/gwion.y"
    { (yyval.arg_list) = new_arg_list(mpool(arg), NULL, new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, GET_LOC(&(yyloc))), NULL); }
#line 3029 "src/parser.c"
    break;

  case 231: /* lambda_list: id lambda_list  */
#line 519 "src/gwion.y"
                    { (yyval.arg_list) = new_arg_list(mpool(arg), NULL, new_var_decl(mpool(arg), (yyvsp[-1].sym), NULL, GET_LOC(&(yyloc))), (yyvsp[0].arg_list)); }
#line 3035 "src/parser.c"
    break;

  case 232: /* lambda_arg: "\\" lambda_list  */
#line 520 "src/gwion.y"
                                  { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 3041 "src/parser.c"
    break;

  case 233: /* lambda_arg: "\\"  */
#line 520 "src/gwion.y"
                                                           { (yyval.arg_list) = NULL; }
#line 3047 "src/parser.c"
    break;

  case 234: /* type_list: type_decl_empty  */
#line 523 "src/gwion.y"
                    { (yyval.type_list) = new_type_list(mpool(arg), (yyvsp[0].type_decl), NULL); }
#line 3053 "src/parser.c"
    break;

  case 235: /* type_list: type_decl_empty "," type_list  */
#line 524 "src/gwion.y"
                                    { (yyval.type_list) = new_type_list(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[0].type_list)); }
#line 3059 "src/parser.c"
    break;

  case 236: /* call_paren: "(" exp ")"  */
#line 527 "src/gwion.y"
                               { (yyval.exp) = (yyvsp[-1].exp); }
#line 3065 "src/parser.c"
    break;

  case 237: /* call_paren: "(" ")"  */
#line 527 "src/gwion.y"
                                                            { (yyval.exp) = NULL; }
#line 3071 "src/parser.c"
    break;

  case 240: /* dot_exp: post_exp "." id  */
#line 531 "src/gwion.y"
                         {
  if((yyvsp[-2].exp)->next) {
    gwion_error(&(yyloc), arg, "can't use multiple expression"
      " in dot member base expression");
    YYERROR;
  };
  (yyval.exp) = new_exp_dot(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].sym));
}
#line 3084 "src/parser.c"
    break;

  case 242: /* post_exp: post_exp array_exp  */
#line 541 "src/gwion.y"
    { (yyval.exp) = new_exp_array(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].array_sub)); }
#line 3090 "src/parser.c"
    break;

  case 243: /* post_exp: post_exp range  */
#line 543 "src/gwion.y"
    { (yyval.exp) = new_exp_slice(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].range)); }
#line 3096 "src/parser.c"
    break;

  case 244: /* post_exp: post_exp call_template call_paren  */
#line 545 "src/gwion.y"
    { (yyval.exp) = new_exp_call(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].exp));
      if((yyvsp[-1].type_list))(yyval.exp)->d.exp_call.tmpl = new_tmpl_call(mpool(arg), (yyvsp[-1].type_list)); }
#line 3103 "src/parser.c"
    break;

  case 245: /* post_exp: post_exp post_op  */
#line 548 "src/gwion.y"
    { (yyval.exp) = new_exp_post(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].sym)); }
#line 3109 "src/parser.c"
    break;

  case 246: /* post_exp: post_exp OPID_D  */
#line 550 "src/gwion.y"
    { (yyval.exp) = new_exp_post(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].sym)); }
#line 3115 "src/parser.c"
    break;

  case 247: /* post_exp: dot_exp  */
#line 551 "src/gwion.y"
            { (yyval.exp) = (yyvsp[0].exp); }
#line 3121 "src/parser.c"
    break;

  case 248: /* interp_exp: "<interp string>`"  */
#line 555 "src/gwion.y"
               { (yyval.exp) = new_prim_string(mpool(arg), (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 3127 "src/parser.c"
    break;

  case 249: /* interp_exp: "<interp string>" interp_exp  */
#line 556 "src/gwion.y"
                          { (yyval.exp) = new_prim_string(mpool(arg), (yyvsp[-1].sval), GET_LOC(&(yyloc))); (yyval.exp)->next = (yyvsp[0].exp); }
#line 3133 "src/parser.c"
    break;

  case 250: /* interp_exp: exp INTERP_EXP interp_exp  */
#line 557 "src/gwion.y"
                              { (yyval.exp) = (yyvsp[-2].exp); (yyval.exp)->next = (yyvsp[0].exp); }
#line 3139 "src/parser.c"
    break;

  case 251: /* interp: "`" interp_exp  */
#line 559 "src/gwion.y"
                                { (yyval.exp) = (yyvsp[0].exp); }
#line 3145 "src/parser.c"
    break;

  case 252: /* interp: interp "`" interp_exp  */
#line 560 "src/gwion.y"
                                 {
  if(!(yyvsp[0].exp)->next) {
    char c[strlen((yyvsp[-2].exp)->d.prim.d.str) + strlen((yyvsp[0].exp)->d.prim.d.str) + 1];
    sprintf(c, "%s%s\n", (yyvsp[-2].exp)->d.prim.d.str, (yyvsp[0].exp)->d.prim.d.str);
    (yyvsp[-2].exp)->d.prim.d.str = s_name(insert_symbol(c));
    (yyvsp[-2].exp)->pos->last = (yyvsp[0].exp)->pos->last;
    free_exp(mpool(arg), (yyvsp[0].exp));
  } else
  (yyvsp[-2].exp)->next = (yyvsp[0].exp);
}
#line 3160 "src/parser.c"
    break;

  case 253: /* typeof_exp: "typeof" "(" exp ")"  */
#line 571 "src/gwion.y"
                                     { (yyval.exp) = new_prim_typeof(mpool(arg), (yyvsp[-1].exp)); }
#line 3166 "src/parser.c"
    break;

  case 254: /* prim_exp: id  */
#line 574 "src/gwion.y"
                        { (yyval.exp) = new_prim_id(     mpool(arg), (yyvsp[0].sym), GET_LOC(&(yyloc))); }
#line 3172 "src/parser.c"
    break;

  case 255: /* prim_exp: "<integer>"  */
#line 575 "src/gwion.y"
                        { (yyval.exp) = new_prim_int(    mpool(arg), (yyvsp[0].lval), GET_LOC(&(yyloc))); }
#line 3178 "src/parser.c"
    break;

  case 256: /* prim_exp: FLOATT  */
#line 576 "src/gwion.y"
                        { (yyval.exp) = new_prim_float(  mpool(arg), (yyvsp[0].fval), GET_LOC(&(yyloc))); }
#line 3184 "src/parser.c"
    break;

  case 257: /* prim_exp: interp  */
#line 577 "src/gwion.y"
                        { (yyval.exp) = !(yyvsp[0].exp)->next ? (yyvsp[0].exp) : new_prim_interp(mpool(arg), (yyvsp[0].exp)); }
#line 3190 "src/parser.c"
    break;

  case 258: /* prim_exp: "<litteral string>"  */
#line 578 "src/gwion.y"
                        { (yyval.exp) = new_prim_string( mpool(arg), (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 3196 "src/parser.c"
    break;

  case 259: /* prim_exp: "<litteral char>"  */
#line 579 "src/gwion.y"
                        { (yyval.exp) = new_prim_char(   mpool(arg), (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 3202 "src/parser.c"
    break;

  case 260: /* prim_exp: array  */
#line 580 "src/gwion.y"
                        { (yyval.exp) = new_prim_array(  mpool(arg), (yyvsp[0].array_sub), GET_LOC(&(yyloc))); }
#line 3208 "src/parser.c"
    break;

  case 261: /* prim_exp: range  */
#line 581 "src/gwion.y"
                        { (yyval.exp) = new_prim_range(  mpool(arg), (yyvsp[0].range), GET_LOC(&(yyloc))); }
#line 3214 "src/parser.c"
    break;

  case 262: /* prim_exp: "<<<" exp ">>>"  */
#line 582 "src/gwion.y"
                        { (yyval.exp) = new_prim_hack(   mpool(arg), (yyvsp[-1].exp)); }
#line 3220 "src/parser.c"
    break;

  case 263: /* prim_exp: "(" exp ")"  */
#line 583 "src/gwion.y"
                        { (yyval.exp) = (yyvsp[-1].exp);                }
#line 3226 "src/parser.c"
    break;

  case 264: /* prim_exp: lambda_arg code_stmt  */
#line 584 "src/gwion.y"
                         { (yyval.exp) = new_exp_lambda(     mpool(arg), lambda_name(arg), (yyvsp[-1].arg_list), (yyvsp[0].stmt)); }
#line 3232 "src/parser.c"
    break;

  case 265: /* prim_exp: "(" ")"  */
#line 585 "src/gwion.y"
                        { (yyval.exp) = new_prim_nil(    mpool(arg),     GET_LOC(&(yyloc))); }
#line 3238 "src/parser.c"
    break;

  case 266: /* prim_exp: typeof_exp  */
#line 586 "src/gwion.y"
               { (yyval.exp) = (yyvsp[0].exp); }
#line 3244 "src/parser.c"
    break;


#line 3248 "src/parser.c"

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
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
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

#line 588 "src/gwion.y"

