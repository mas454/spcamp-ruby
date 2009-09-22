/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     keyword_class = 258,
     keyword_module = 259,
     keyword_def = 260,
     keyword_undef = 261,
     keyword_begin = 262,
     keyword_rescue = 263,
     keyword_ensure = 264,
     keyword_end = 265,
     keyword_if = 266,
     keyword_unless = 267,
     keyword_then = 268,
     keyword_elsif = 269,
     keyword_else = 270,
     keyword_case = 271,
     keyword_patern = 272,
     keyword_when = 273,
     keyword_while = 274,
     keyword_until = 275,
     keyword_for = 276,
     keyword_break = 277,
     keyword_next = 278,
     keyword_redo = 279,
     keyword_retry = 280,
     keyword_in = 281,
     keyword_do = 282,
     keyword_do_cond = 283,
     keyword_do_block = 284,
     keyword_do_LAMBDA = 285,
     keyword_return = 286,
     keyword_yield = 287,
     keyword_super = 288,
     keyword_self = 289,
     keyword_nil = 290,
     keyword_true = 291,
     keyword_false = 292,
     keyword_and = 293,
     keyword_or = 294,
     keyword_not = 295,
     modifier_if = 296,
     modifier_unless = 297,
     modifier_while = 298,
     modifier_until = 299,
     modifier_rescue = 300,
     keyword_alias = 301,
     keyword_defined = 302,
     keyword_BEGIN = 303,
     keyword_END = 304,
     keyword__LINE__ = 305,
     keyword__FILE__ = 306,
     keyword__ENCODING__ = 307,
     tIDENTIFIER = 308,
     tFID = 309,
     tGVAR = 310,
     tIVAR = 311,
     tCONSTANT = 312,
     tCVAR = 313,
     tLABEL = 314,
     tINTEGER = 315,
     tFLOAT = 316,
     tSTRING_CONTENT = 317,
     tCHAR = 318,
     tNTH_REF = 319,
     tBACK_REF = 320,
     tREGEXP_END = 321,
     tUPLUS = 322,
     tUMINUS = 323,
     tPOW = 324,
     tCMP = 325,
     tEQ = 326,
     tEQQ = 327,
     tNEQ = 328,
     tGEQ = 329,
     tLEQ = 330,
     tANDOP = 331,
     tOROP = 332,
     tMATCH = 333,
     tNMATCH = 334,
     tDOT2 = 335,
     tDOT3 = 336,
     tAREF = 337,
     tASET = 338,
     tLSHFT = 339,
     tRSHFT = 340,
     tCOLON2 = 341,
     tCOLON3 = 342,
     tOP_ASGN = 343,
     tASSOC = 344,
     tLPAREN = 345,
     tLPAREN_ARG = 346,
     tRPAREN = 347,
     tLBRACK = 348,
     tLBRACE = 349,
     tLBRACE_ARG = 350,
     tSTAR = 351,
     tAMPER = 352,
     tLAMBDA = 353,
     tSYMBEG = 354,
     tSTRING_BEG = 355,
     tXSTRING_BEG = 356,
     tREGEXP_BEG = 357,
     tWORDS_BEG = 358,
     tQWORDS_BEG = 359,
     tSTRING_DBEG = 360,
     tSTRING_DVAR = 361,
     tSTRING_END = 362,
     tLAMBEG = 363,
     tLOWEST = 364,
     tUMINUS_NUM = 365,
     idNULL = 366,
     idRespond_to = 367,
     idIFUNC = 368,
     idCFUNC = 369,
     idThrowState = 370,
     id_core_set_method_alias = 371,
     id_core_set_variable_alias = 372,
     id_core_undef_method = 373,
     id_core_define_method = 374,
     id_core_define_singleton_method = 375,
     id_core_set_postexe = 376,
     tLAST_TOKEN = 377
   };
#endif
/* Tokens.  */
#define keyword_class 258
#define keyword_module 259
#define keyword_def 260
#define keyword_undef 261
#define keyword_begin 262
#define keyword_rescue 263
#define keyword_ensure 264
#define keyword_end 265
#define keyword_if 266
#define keyword_unless 267
#define keyword_then 268
#define keyword_elsif 269
#define keyword_else 270
#define keyword_case 271
#define keyword_patern 272
#define keyword_when 273
#define keyword_while 274
#define keyword_until 275
#define keyword_for 276
#define keyword_break 277
#define keyword_next 278
#define keyword_redo 279
#define keyword_retry 280
#define keyword_in 281
#define keyword_do 282
#define keyword_do_cond 283
#define keyword_do_block 284
#define keyword_do_LAMBDA 285
#define keyword_return 286
#define keyword_yield 287
#define keyword_super 288
#define keyword_self 289
#define keyword_nil 290
#define keyword_true 291
#define keyword_false 292
#define keyword_and 293
#define keyword_or 294
#define keyword_not 295
#define modifier_if 296
#define modifier_unless 297
#define modifier_while 298
#define modifier_until 299
#define modifier_rescue 300
#define keyword_alias 301
#define keyword_defined 302
#define keyword_BEGIN 303
#define keyword_END 304
#define keyword__LINE__ 305
#define keyword__FILE__ 306
#define keyword__ENCODING__ 307
#define tIDENTIFIER 308
#define tFID 309
#define tGVAR 310
#define tIVAR 311
#define tCONSTANT 312
#define tCVAR 313
#define tLABEL 314
#define tINTEGER 315
#define tFLOAT 316
#define tSTRING_CONTENT 317
#define tCHAR 318
#define tNTH_REF 319
#define tBACK_REF 320
#define tREGEXP_END 321
#define tUPLUS 322
#define tUMINUS 323
#define tPOW 324
#define tCMP 325
#define tEQ 326
#define tEQQ 327
#define tNEQ 328
#define tGEQ 329
#define tLEQ 330
#define tANDOP 331
#define tOROP 332
#define tMATCH 333
#define tNMATCH 334
#define tDOT2 335
#define tDOT3 336
#define tAREF 337
#define tASET 338
#define tLSHFT 339
#define tRSHFT 340
#define tCOLON2 341
#define tCOLON3 342
#define tOP_ASGN 343
#define tASSOC 344
#define tLPAREN 345
#define tLPAREN_ARG 346
#define tRPAREN 347
#define tLBRACK 348
#define tLBRACE 349
#define tLBRACE_ARG 350
#define tSTAR 351
#define tAMPER 352
#define tLAMBDA 353
#define tSYMBEG 354
#define tSTRING_BEG 355
#define tXSTRING_BEG 356
#define tREGEXP_BEG 357
#define tWORDS_BEG 358
#define tQWORDS_BEG 359
#define tSTRING_DBEG 360
#define tSTRING_DVAR 361
#define tSTRING_END 362
#define tLAMBEG 363
#define tLOWEST 364
#define tUMINUS_NUM 365
#define idNULL 366
#define idRespond_to 367
#define idIFUNC 368
#define idCFUNC 369
#define idThrowState 370
#define id_core_set_method_alias 371
#define id_core_set_variable_alias 372
#define id_core_undef_method 373
#define id_core_define_method 374
#define id_core_define_singleton_method 375
#define id_core_set_postexe 376
#define tLAST_TOKEN 377




/* Copy the first part of user declarations.  */
#line 12 "parse.y"


#define YYDEBUG 1
#define YYERROR_VERBOSE 1
#define YYSTACK_USE_ALLOCA 0

#include "ruby/ruby.h"
#include "ruby/st.h"
#include "ruby/encoding.h"
#include "node.h"
#include "parse.h"
#include "id.h"
#include "regenc.h"
#include <stdio.h>
#include <errno.h>
#include <ctype.h>

#define YYMALLOC(size)		rb_parser_malloc(parser, size)
#define YYREALLOC(ptr, size)	rb_parser_realloc(parser, ptr, size)
#define YYCALLOC(nelem, size)	rb_parser_calloc(parser, nelem, size)
#define YYFREE(ptr)		rb_parser_free(parser, ptr)
#define malloc	YYMALLOC
#define realloc	YYREALLOC
#define calloc	YYCALLOC
#define free	YYFREE

#ifndef RIPPER
static ID register_symid(ID, const char *, long, rb_encoding *);
#define REGISTER_SYMID(id, name) register_symid(id, name, strlen(name), enc)
#include "id.c"
#endif

#define is_notop_id(id) ((id)>tLAST_TOKEN)
#define is_local_id(id) (is_notop_id(id)&&((id)&ID_SCOPE_MASK)==ID_LOCAL)
#define is_global_id(id) (is_notop_id(id)&&((id)&ID_SCOPE_MASK)==ID_GLOBAL)
#define is_instance_id(id) (is_notop_id(id)&&((id)&ID_SCOPE_MASK)==ID_INSTANCE)
#define is_attrset_id(id) (is_notop_id(id)&&((id)&ID_SCOPE_MASK)==ID_ATTRSET)
#define is_const_id(id) (is_notop_id(id)&&((id)&ID_SCOPE_MASK)==ID_CONST)
#define is_class_id(id) (is_notop_id(id)&&((id)&ID_SCOPE_MASK)==ID_CLASS)
#define is_junk_id(id) (is_notop_id(id)&&((id)&ID_SCOPE_MASK)==ID_JUNK)

#define is_asgn_or_id(id) ((is_notop_id(id)) && \
	(((id)&ID_SCOPE_MASK) == ID_GLOBAL || \
	 ((id)&ID_SCOPE_MASK) == ID_INSTANCE || \
	 ((id)&ID_SCOPE_MASK) == ID_CLASS))

enum lex_state_e {
    EXPR_BEG,			/* ignore newline, +/- is a sign. */
    EXPR_END,			/* newline significant, +/- is an operator. */
    EXPR_ENDARG,		/* ditto, and unbound braces. */
    EXPR_ARG,			/* newline significant, +/- is an operator. */
    EXPR_CMDARG,		/* newline significant, +/- is an operator. */
    EXPR_MID,			/* newline significant, +/- is an operator. */
    EXPR_FNAME,			/* ignore newline, no reserved words. */
    EXPR_DOT,			/* right after `.' or `::', no reserved words. */
    EXPR_CLASS,			/* immediate after `class', no here document. */
    EXPR_VALUE			/* alike EXPR_BEG but label is disallowed. */
};

# ifdef HAVE_LONG_LONG
typedef unsigned LONG_LONG stack_type;
# else
typedef unsigned long stack_type;
# endif

# define BITSTACK_PUSH(stack, n)	(stack = (stack<<1)|((n)&1))
# define BITSTACK_POP(stack)	(stack = stack >> 1)
# define BITSTACK_LEXPOP(stack)	(stack = (stack >> 1) | (stack & 1))
# define BITSTACK_SET_P(stack)	(stack&1)

#define COND_PUSH(n)	BITSTACK_PUSH(cond_stack, n)
#define COND_POP()	BITSTACK_POP(cond_stack)
#define COND_LEXPOP()	BITSTACK_LEXPOP(cond_stack)
#define COND_P()	BITSTACK_SET_P(cond_stack)

#define CMDARG_PUSH(n)	BITSTACK_PUSH(cmdarg_stack, n)
#define CMDARG_POP()	BITSTACK_POP(cmdarg_stack)
#define CMDARG_LEXPOP()	BITSTACK_LEXPOP(cmdarg_stack)
#define CMDARG_P()	BITSTACK_SET_P(cmdarg_stack)

struct vtable {
    ID *tbl;
    int pos;
    int capa;
    struct vtable *prev;
};

struct local_vars {
    struct vtable *args;
    struct vtable *vars;
    struct local_vars *prev;
};

#define DVARS_INHERIT ((void*)1)
#define DVARS_TOPSCOPE NULL
#define DVARS_SPECIAL_P(tbl) (!POINTER_P(tbl))
#define POINTER_P(val) ((VALUE)(val) & ~(VALUE)3)

#ifndef RIPPER
static int
vtable_size(const struct vtable *tbl)
{
    if (POINTER_P(tbl)) {
        return tbl->pos;
    }
    else {
        return 0;
    }
}

#define VTBL_DEBUG 0

static struct vtable *
vtable_alloc(struct vtable *prev)
{
    struct vtable *tbl = ALLOC(struct vtable);
    tbl->pos = 0;
    tbl->capa = 8;
    tbl->tbl = ALLOC_N(ID, tbl->capa);
    tbl->prev = prev;
    if (VTBL_DEBUG) printf("vtable_alloc: %p\n", (void *)tbl);
    return tbl;
}

static void
vtable_free(struct vtable *tbl)
{
    if (VTBL_DEBUG)printf("vtable_free: %p\n", (void *)tbl);
    if (POINTER_P(tbl)) {
        if (tbl->tbl) {
            xfree(tbl->tbl);
        }
        xfree(tbl);
    }
}

static void
vtable_add(struct vtable *tbl, ID id)
{
    if (!POINTER_P(tbl)) {
        rb_bug("vtable_add: vtable is not allocated (%p)", (void *)tbl);
    }
    if (VTBL_DEBUG) printf("vtable_add: %p, %s\n", (void *)tbl, rb_id2name(id));

    if (tbl->pos == tbl->capa) {
        tbl->capa = tbl->capa * 2;
        REALLOC_N(tbl->tbl, ID, tbl->capa);
    }
    tbl->tbl[tbl->pos++] = id;
}

static int
vtable_included(const struct vtable * tbl, ID id)
{
    int i;

    if (POINTER_P(tbl)) {
        for (i = 0; i < tbl->pos; i++) {
            if (tbl->tbl[i] == id) {
                return 1;
            }
        }
    }
    return 0;
}


typedef struct token_info {
    const char *token;
    int linenum;
    int column;
    int nonspc;
    struct token_info *next;
} token_info;
#endif

/*
    Structure of Lexer Buffer:

 lex_pbeg      tokp         lex_p        lex_pend
    |           |              |            |
    |-----------+--------------+------------|
                |<------------>|
                     token
*/
struct parser_params {
    int is_ripper;
    NODE *heap;

    YYSTYPE *parser_yylval;
    VALUE eofp;

    NODE *parser_lex_strterm;
    enum lex_state_e parser_lex_state;
    stack_type parser_cond_stack;
    stack_type parser_cmdarg_stack;
    int parser_class_nest;
    int parser_paren_nest;
    int parser_lpar_beg;
    int parser_in_single;
    int parser_in_def;
    int parser_compile_for_eval;
    VALUE parser_cur_mid;
    int parser_in_defined;
    char *parser_tokenbuf;
    int parser_tokidx;
    int parser_toksiz;
    VALUE parser_lex_input;
    VALUE parser_lex_lastline;
    VALUE parser_lex_nextline;
    const char *parser_lex_pbeg;
    const char *parser_lex_p;
    const char *parser_lex_pend;
    int parser_heredoc_end;
    int parser_command_start;
    NODE *parser_deferred_nodes;
    int parser_lex_gets_ptr;
    VALUE (*parser_lex_gets)(struct parser_params*,VALUE);
    struct local_vars *parser_lvtbl;
    int parser_ruby__end__seen;
    int line_count;
    int has_shebang;
    char *parser_ruby_sourcefile; /* current source file */
    int parser_ruby_sourceline;	/* current line no. */
    rb_encoding *enc;
    rb_encoding *utf8;

    int parser_yydebug;

#ifndef RIPPER
    /* Ruby core only */
    NODE *parser_eval_tree_begin;
    NODE *parser_eval_tree;
    VALUE debug_lines;
    VALUE coverage;
    int nerr;

    token_info *parser_token_info;
#else
    /* Ripper only */
    VALUE parser_ruby_sourcefile_string;
    const char *tokp;
    VALUE delayed;
    int delayed_line;
    int delayed_col;

    VALUE value;
    VALUE result;
    VALUE parsing_thread;
    int toplevel_p;
#endif
};

#define UTF8_ENC() (parser->utf8 ? parser->utf8 : \
		    (parser->utf8 = rb_utf8_encoding()))
#define STR_NEW(p,n) rb_enc_str_new((p),(n),parser->enc)
#define STR_NEW0() rb_enc_str_new(0,0,parser->enc)
#define STR_NEW2(p) rb_enc_str_new((p),strlen(p),parser->enc)
#define STR_NEW3(p,n,e,func) parser_str_new((p),(n),(e),(func),parser->enc)
#define ENC_SINGLE(cr) ((cr)==ENC_CODERANGE_7BIT)
#define TOK_INTERN(mb) rb_intern3(tok(), toklen(), parser->enc)

#ifdef YYMALLOC
void *rb_parser_malloc(struct parser_params *, size_t);
void *rb_parser_realloc(struct parser_params *, void *, size_t);
void *rb_parser_calloc(struct parser_params *, size_t, size_t);
void rb_parser_free(struct parser_params *, void *);
#endif

static int parser_yyerror(struct parser_params*, const char*);
#define yyerror(msg) parser_yyerror(parser, msg)

#define YYLEX_PARAM parser

#define lex_strterm		(parser->parser_lex_strterm)
#define lex_state		(parser->parser_lex_state)
#define cond_stack		(parser->parser_cond_stack)
#define cmdarg_stack		(parser->parser_cmdarg_stack)
#define class_nest		(parser->parser_class_nest)
#define paren_nest		(parser->parser_paren_nest)
#define lpar_beg		(parser->parser_lpar_beg)
#define in_single		(parser->parser_in_single)
#define in_def			(parser->parser_in_def)
#define compile_for_eval	(parser->parser_compile_for_eval)
#define cur_mid			(parser->parser_cur_mid)
#define in_defined		(parser->parser_in_defined)
#define tokenbuf		(parser->parser_tokenbuf)
#define tokidx			(parser->parser_tokidx)
#define toksiz			(parser->parser_toksiz)
#define lex_input		(parser->parser_lex_input)
#define lex_lastline		(parser->parser_lex_lastline)
#define lex_nextline		(parser->parser_lex_nextline)
#define lex_pbeg		(parser->parser_lex_pbeg)
#define lex_p			(parser->parser_lex_p)
#define lex_pend		(parser->parser_lex_pend)
#define heredoc_end		(parser->parser_heredoc_end)
#define command_start		(parser->parser_command_start)
#define deferred_nodes		(parser->parser_deferred_nodes)
#define lex_gets_ptr		(parser->parser_lex_gets_ptr)
#define lex_gets		(parser->parser_lex_gets)
#define lvtbl			(parser->parser_lvtbl)
#define ruby__end__seen		(parser->parser_ruby__end__seen)
#define ruby_sourceline		(parser->parser_ruby_sourceline)
#define ruby_sourcefile		(parser->parser_ruby_sourcefile)
#define yydebug			(parser->parser_yydebug)
#ifdef RIPPER
#else
#define ruby_eval_tree		(parser->parser_eval_tree)
#define ruby_eval_tree_begin	(parser->parser_eval_tree_begin)
#define ruby_debug_lines	(parser->debug_lines)
#define ruby_coverage		(parser->coverage)
#endif

static int yylex(void*, void*);

#ifndef RIPPER
#define yyparse ruby_yyparse

static NODE* node_newnode(struct parser_params *, enum node_type, VALUE, VALUE, VALUE);
#define rb_node_newnode(type, a1, a2, a3) node_newnode(parser, type, a1, a2, a3)

static NODE *cond_gen(struct parser_params*,NODE*);
#define cond(node) cond_gen(parser, node)
static NODE *logop_gen(struct parser_params*,enum node_type,NODE*,NODE*);
#define logop(type,node1,node2) logop_gen(parser, type, node1, node2)

static NODE *newline_node(NODE*);
static void fixpos(NODE*,NODE*);

static int value_expr_gen(struct parser_params*,NODE*);
static void void_expr_gen(struct parser_params*,NODE*);
static NODE *remove_begin(NODE*);
#define value_expr(node) value_expr_gen(parser, (node) = remove_begin(node))
#define void_expr0(node) void_expr_gen(parser, (node))
#define void_expr(node) void_expr0((node) = remove_begin(node))
static void void_stmts_gen(struct parser_params*,NODE*);
#define void_stmts(node) void_stmts_gen(parser, node)
static void reduce_nodes_gen(struct parser_params*,NODE**);
#define reduce_nodes(n) reduce_nodes_gen(parser,n)
static void block_dup_check_gen(struct parser_params*,NODE*,NODE*);
#define block_dup_check(n1,n2) block_dup_check_gen(parser,n1,n2)

static NODE *block_append_gen(struct parser_params*,NODE*,NODE*);
#define block_append(h,t) block_append_gen(parser,h,t)
static NODE *list_append_gen(struct parser_params*,NODE*,NODE*);
#define list_append(l,i) list_append_gen(parser,l,i)
static NODE *list_concat_gen(struct parser_params*,NODE*,NODE*);
#define list_concat(h,t) list_concat_gen(parser,h,t)
static NODE *arg_append_gen(struct parser_params*,NODE*,NODE*);
#define arg_append(h,t) arg_append_gen(parser,h,t)
static NODE *arg_concat_gen(struct parser_params*,NODE*,NODE*);
#define arg_concat(h,t) arg_concat_gen(parser,h,t)
static NODE *literal_concat_gen(struct parser_params*,NODE*,NODE*);
#define literal_concat(h,t) literal_concat_gen(parser,h,t)
static NODE *new_evstr_gen(struct parser_params*,NODE*);
#define new_evstr(n) new_evstr_gen(parser,n)
static NODE *evstr2dstr_gen(struct parser_params*,NODE*);
#define evstr2dstr(n) evstr2dstr_gen(parser,n)
static NODE *splat_array(NODE*);

static NODE *call_bin_op_gen(struct parser_params*,NODE*,ID,NODE*);
#define call_bin_op(recv,id,arg1) call_bin_op_gen(parser, recv,id,arg1)
static NODE *call_uni_op_gen(struct parser_params*,NODE*,ID);
#define call_uni_op(recv,id) call_uni_op_gen(parser, recv,id)

static NODE *new_args_gen(struct parser_params*,NODE*,NODE*,ID,NODE*,ID);
#define new_args(f,o,r,p,b) new_args_gen(parser, f,o,r,p,b)
static void shadowing_lvar_gen(struct parser_params*,ID);
#define shadowing_lvar(name) shadowing_lvar_gen(parser, name)

static NODE *negate_lit(NODE*);
static NODE *ret_args_gen(struct parser_params*,NODE*);
#define ret_args(node) ret_args_gen(parser, node)
static NODE *arg_blk_pass(NODE*,NODE*);
static NODE *new_yield_gen(struct parser_params*,NODE*);
#define new_yield(node) new_yield_gen(parser, node)

static NODE *gettable_gen(struct parser_params*,ID);
#define gettable(id) gettable_gen(parser,id)
static NODE *assignable_gen(struct parser_params*,ID,NODE*);
#define assignable(id,node) assignable_gen(parser, id, node)
static void new_bv_gen(struct parser_params*,ID);
#define new_bv(id) new_bv_gen(parser, id)
static NODE *aryset_gen(struct parser_params*,NODE*,NODE*);
#define aryset(node1,node2) aryset_gen(parser, node1, node2)
static NODE *attrset_gen(struct parser_params*,NODE*,ID);
#define attrset(node,id) attrset_gen(parser, node, id)

static void rb_backref_error_gen(struct parser_params*,NODE*);
#define rb_backref_error(n) rb_backref_error_gen(parser,n)
static NODE *node_assign_gen(struct parser_params*,NODE*,NODE*);
#define node_assign(node1, node2) node_assign_gen(parser, node1, node2)

static NODE *match_op_gen(struct parser_params*,NODE*,NODE*);
#define match_op(node1,node2) match_op_gen(parser, node1, node2)

static void local_push_gen(struct parser_params*,int);
#define local_push(top) local_push_gen(parser,top)
static void local_pop_gen(struct parser_params*);
#define local_pop() local_pop_gen(parser)
static int local_var_gen(struct parser_params*, ID);
#define local_var(id) local_var_gen(parser, id);
static int arg_var_gen(struct parser_params*, ID);
#define arg_var(id) arg_var_gen(parser, id)
static int  local_id_gen(struct parser_params*, ID);
#define local_id(id) local_id_gen(parser, id)
static ID  *local_tbl_gen(struct parser_params*);
#define local_tbl() local_tbl_gen(parser)
static ID   internal_id_gen(struct parser_params*);
#define internal_id() internal_id_gen(parser)

static void dyna_push_gen(struct parser_params*);
#define dyna_push() dyna_push_gen(parser)
static void dyna_pop_gen(struct parser_params*);
#define dyna_pop() dyna_pop_gen(parser)
static int dyna_in_block_gen(struct parser_params*);
#define dyna_in_block() dyna_in_block_gen(parser)
#define dyna_var(id) local_var(id)
static int dvar_defined_gen(struct parser_params*,ID);
#define dvar_defined(id) dvar_defined_gen(parser, id)
static int dvar_curr_gen(struct parser_params*,ID);
#define dvar_curr(id) dvar_curr_gen(parser, id)

static void fixup_nodes(NODE **);

extern int rb_dvar_defined(ID);
extern int rb_local_defined(ID);
extern int rb_parse_in_eval(void);
extern int rb_parse_in_main(void);

static VALUE reg_compile_gen(struct parser_params*, VALUE, int);
#define reg_compile(str,options) reg_compile_gen(parser, str, options)
static void reg_fragment_setenc_gen(struct parser_params*, VALUE, int);
#define reg_fragment_setenc(str,options) reg_fragment_setenc_gen(parser, str, options)
static void reg_fragment_check_gen(struct parser_params*, VALUE, int);
#define reg_fragment_check(str,options) reg_fragment_check_gen(parser, str, options)
static NODE *reg_named_capture_assign_gen(struct parser_params* parser, VALUE regexp, NODE *match);
#define reg_named_capture_assign(regexp,match) reg_named_capture_assign_gen(parser,regexp,match)
int rb_enc_symname2_p(const char *, int, rb_encoding *);
#else
#define remove_begin(node) (node)
#endif /* !RIPPER */
static int lvar_defined_gen(struct parser_params*, ID);
#define lvar_defined(id) lvar_defined_gen(parser, id)

#define RE_OPTION_ONCE (1<<16)
#define RE_OPTION_ENCODING_SHIFT 8
#define RE_OPTION_ENCODING(e) (((e)&0xff)<<RE_OPTION_ENCODING_SHIFT)
#define RE_OPTION_ENCODING_IDX(o) (((o)>>RE_OPTION_ENCODING_SHIFT)&0xff)
#define RE_OPTION_ENCODING_NONE(o) ((o)&RE_OPTION_ARG_ENCODING_NONE)
#define RE_OPTION_MASK  0xff
#define RE_OPTION_ARG_ENCODING_NONE 32

#define NODE_STRTERM NODE_ZARRAY	/* nothing to gc */
#define NODE_HEREDOC NODE_ARRAY 	/* 1, 3 to gc */
#define SIGN_EXTEND(x,n) (((1<<(n)-1)^((x)&~(~0<<(n))))-(1<<(n)-1))
#define nd_func u1.id
#if SIZEOF_SHORT == 2
#define nd_term(node) ((signed short)(node)->u2.id)
#else
#define nd_term(node) SIGN_EXTEND((node)->u2.id, CHAR_BIT*2)
#endif
#define nd_paren(node) (char)((node)->u2.id >> CHAR_BIT*2)
#define nd_nest u3.cnt
int patern_match_set=0;
/****** Ripper *******/

#ifdef RIPPER
#define RIPPER_VERSION "0.1.0"

#include "eventids1.c"
#include "eventids2.c"
static ID ripper_id_gets;

static VALUE ripper_dispatch0(struct parser_params*,ID);
static VALUE ripper_dispatch1(struct parser_params*,ID,VALUE);
static VALUE ripper_dispatch2(struct parser_params*,ID,VALUE,VALUE);
static VALUE ripper_dispatch3(struct parser_params*,ID,VALUE,VALUE,VALUE);
static VALUE ripper_dispatch4(struct parser_params*,ID,VALUE,VALUE,VALUE,VALUE);
static VALUE ripper_dispatch5(struct parser_params*,ID,VALUE,VALUE,VALUE,VALUE,VALUE);

#define dispatch0(n)            ripper_dispatch0(parser, TOKEN_PASTE(ripper_id_, n))
#define dispatch1(n,a)          ripper_dispatch1(parser, TOKEN_PASTE(ripper_id_, n), a)
#define dispatch2(n,a,b)        ripper_dispatch2(parser, TOKEN_PASTE(ripper_id_, n), a, b)
#define dispatch3(n,a,b,c)      ripper_dispatch3(parser, TOKEN_PASTE(ripper_id_, n), a, b, c)
#define dispatch4(n,a,b,c,d)    ripper_dispatch4(parser, TOKEN_PASTE(ripper_id_, n), a, b, c, d)
#define dispatch5(n,a,b,c,d,e)  ripper_dispatch5(parser, TOKEN_PASTE(ripper_id_, n), a, b, c, d, e)

#define yyparse ripper_yyparse

static VALUE ripper_intern(const char*);
static VALUE ripper_id2sym(ID);
#ifdef __GNUC__
#define ripper_id2sym(id) ((id) < 256 && rb_ispunct(id) ? \
			   ID2SYM(id) : ripper_id2sym(id))
#endif

#define arg_new() dispatch0(args_new)
#define arg_add(l,a) dispatch2(args_add, l, a)
#define arg_prepend(l,a) dispatch2(args_prepend, l, a)
#define arg_add_star(l,a) dispatch2(args_add_star, l, a)
#define arg_add_block(l,b) dispatch2(args_add_block, l, b)
#define arg_add_optblock(l,b) ((b)==Qundef? l : dispatch2(args_add_block, l, b))
#define bare_assoc(v) dispatch1(bare_assoc_hash, v)
#define arg_add_assocs(l,b) arg_add(l, bare_assoc(b))

#define args2mrhs(a) dispatch1(mrhs_new_from_args, a)
#define mrhs_new() dispatch0(mrhs_new)
#define mrhs_add(l,a) dispatch2(mrhs_add, l, a)
#define mrhs_add_star(l,a) dispatch2(mrhs_add_star, l, a)

#define mlhs_new() dispatch0(mlhs_new)
#define mlhs_add(l,a) dispatch2(mlhs_add, l, a)
#define mlhs_add_star(l,a) dispatch2(mlhs_add_star, l, a)

#define params_new(pars, opts, rest, pars2, blk) \
        dispatch5(params, pars, opts, rest, pars2, blk)

#define blockvar_new(p,v) dispatch2(block_var, p, v)
#define blockvar_add_star(l,a) dispatch2(block_var_add_star, l, a)
#define blockvar_add_block(l,a) dispatch2(block_var_add_block, l, a)

#define method_optarg(m,a) ((a)==Qundef ? m : dispatch2(method_add_arg,m,a))
#define method_arg(m,a) dispatch2(method_add_arg,m,a)
#define method_add_block(m,b) dispatch2(method_add_block, m, b)

#define escape_Qundef(x) ((x)==Qundef ? Qnil : (x))

#define FIXME 0

#endif /* RIPPER */

#ifndef RIPPER
# define ifndef_ripper(x) x
#else
# define ifndef_ripper(x)
#endif

#ifndef RIPPER
# define rb_warn0(fmt)    rb_compile_warn(ruby_sourcefile, ruby_sourceline, fmt)
# define rb_warnI(fmt,a)  rb_compile_warn(ruby_sourcefile, ruby_sourceline, fmt, a)
# define rb_warnS(fmt,a)  rb_compile_warn(ruby_sourcefile, ruby_sourceline, fmt, a)
# define rb_warning0(fmt) rb_compile_warning(ruby_sourcefile, ruby_sourceline, fmt)
# define rb_warningS(fmt,a) rb_compile_warning(ruby_sourcefile, ruby_sourceline, fmt, a)
#else
# define rb_warn0(fmt)    ripper_warn0(parser, fmt)
# define rb_warnI(fmt,a)  ripper_warnI(parser, fmt, a)
# define rb_warnS(fmt,a)  ripper_warnS(parser, fmt, a)
# define rb_warning0(fmt) ripper_warning0(parser, fmt)
# define rb_warningS(fmt,a) ripper_warningS(parser, fmt, a)
static void ripper_warn0(struct parser_params*, const char*);
static void ripper_warnI(struct parser_params*, const char*, int);
#if 0
static void ripper_warnS(struct parser_params*, const char*, const char*);
#endif
static void ripper_warning0(struct parser_params*, const char*);
static void ripper_warningS(struct parser_params*, const char*, const char*);
#endif

#ifdef RIPPER
static void ripper_compile_error(struct parser_params*, const char *fmt, ...);
# define rb_compile_error ripper_compile_error
# define compile_error ripper_compile_error
# define PARSER_ARG parser,
#else
# define compile_error parser->nerr++,rb_compile_error
# define PARSER_ARG ruby_sourcefile, ruby_sourceline,
#endif

/* Older versions of Yacc set YYMAXDEPTH to a very low value by default (150,
   for instance).  This is too low for Ruby to parse some files, such as
   date/format.rb, therefore bump the value up to at least Bison's default. */
#ifdef OLD_YACC
#ifndef YYMAXDEPTH
#define YYMAXDEPTH 10000
#endif
#endif

#ifndef RIPPER
static void token_info_push(struct parser_params*, const char *token);
static void token_info_pop(struct parser_params*, const char *token);
#endif


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 599 "parse.y"
{
    VALUE val;
    NODE *node;
    ID id;
    int num;
}
/* Line 187 of yacc.c.  */
#line 931 "parse.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 944 "parse.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   10666

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  150
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  177
/* YYNRULES -- Number of rules.  */
#define YYNRULES  571
/* YYNRULES -- Number of states.  */
#define YYNSTATES  991

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   377

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     149,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,   148,   124,     2,     2,     2,   122,   117,     2,
     144,   146,   120,   118,   142,   119,   141,   121,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   112,   147,
     114,   110,   113,   111,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   140,     2,   145,   116,     2,   143,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   138,   115,   139,   125,     2,     2,     2,
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
     105,   106,   107,   108,   109,   123,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,    10,    12,    14,    18,    21,
      23,    24,    30,    35,    38,    40,    42,    46,    49,    50,
      55,    59,    63,    67,    70,    74,    78,    82,    86,    90,
      95,    99,   103,   107,   114,   120,   126,   132,   136,   140,
     144,   148,   150,   152,   156,   160,   164,   167,   169,   171,
     173,   175,   178,   181,   184,   186,   191,   196,   197,   203,
     206,   210,   215,   221,   226,   232,   235,   238,   240,   244,
     246,   250,   252,   255,   259,   265,   268,   273,   276,   281,
     283,   287,   289,   293,   296,   300,   302,   306,   308,   313,
     317,   321,   325,   329,   332,   334,   336,   341,   345,   349,
     353,   357,   360,   362,   364,   366,   369,   371,   375,   377,
     379,   381,   383,   385,   387,   389,   391,   393,   395,   396,
     401,   403,   405,   407,   409,   411,   413,   415,   417,   419,
     421,   423,   425,   427,   429,   431,   433,   435,   437,   439,
     441,   443,   445,   447,   449,   451,   453,   455,   457,   459,
     461,   463,   465,   467,   469,   471,   473,   475,   477,   479,
     481,   483,   485,   487,   489,   491,   493,   495,   497,   499,
     501,   503,   505,   507,   509,   511,   513,   515,   517,   519,
     521,   523,   525,   527,   529,   531,   533,   535,   537,   539,
     541,   543,   545,   549,   555,   559,   565,   572,   578,   584,
     590,   596,   601,   605,   609,   613,   617,   621,   625,   629,
     633,   637,   642,   647,   650,   653,   657,   661,   665,   669,
     673,   677,   681,   685,   689,   693,   697,   701,   705,   708,
     711,   715,   719,   723,   727,   728,   733,   740,   742,   744,
     746,   748,   751,   756,   759,   763,   765,   767,   769,   771,
     773,   776,   779,   784,   786,   787,   790,   793,   796,   798,
     800,   802,   804,   807,   811,   816,   820,   825,   828,   832,
     834,   836,   838,   840,   842,   844,   846,   848,   850,   851,
     856,   857,   862,   866,   870,   873,   877,   881,   883,   888,
     892,   894,   895,   902,   907,   911,   914,   916,   919,   922,
     929,   936,   937,   938,   946,   947,   948,   956,   962,   968,
     973,   974,   975,   985,   986,   993,   994,   995,  1004,  1005,
    1011,  1012,  1019,  1020,  1021,  1031,  1033,  1035,  1037,  1039,
    1041,  1043,  1045,  1047,  1049,  1051,  1053,  1055,  1057,  1059,
    1061,  1063,  1065,  1067,  1069,  1072,  1074,  1076,  1078,  1084,
    1086,  1089,  1091,  1093,  1095,  1099,  1101,  1105,  1107,  1112,
    1119,  1123,  1129,  1132,  1137,  1139,  1143,  1150,  1159,  1164,
    1171,  1176,  1179,  1186,  1189,  1194,  1201,  1204,  1209,  1212,
    1217,  1219,  1221,  1223,  1227,  1229,  1234,  1236,  1239,  1241,
    1245,  1247,  1249,  1250,  1254,  1259,  1261,  1265,  1269,  1270,
    1276,  1279,  1284,  1289,  1292,  1297,  1302,  1306,  1310,  1314,
    1317,  1319,  1324,  1325,  1331,  1332,  1338,  1340,  1346,  1352,
    1354,  1356,  1358,  1360,  1367,  1369,  1371,  1373,  1375,  1378,
    1380,  1383,  1385,  1387,  1389,  1391,  1393,  1395,  1397,  1400,
    1404,  1408,  1412,  1416,  1420,  1421,  1425,  1427,  1430,  1434,
    1438,  1439,  1443,  1444,  1447,  1448,  1451,  1453,  1454,  1458,
    1459,  1464,  1466,  1468,  1470,  1472,  1475,  1477,  1479,  1481,
    1483,  1487,  1489,  1491,  1494,  1497,  1499,  1501,  1503,  1505,
    1507,  1509,  1511,  1513,  1515,  1517,  1519,  1521,  1523,  1525,
    1527,  1529,  1531,  1532,  1537,  1540,  1544,  1547,  1554,  1563,
    1568,  1575,  1580,  1587,  1590,  1595,  1602,  1605,  1610,  1613,
    1618,  1620,  1621,  1623,  1625,  1627,  1629,  1631,  1633,  1635,
    1639,  1641,  1645,  1649,  1653,  1655,  1659,  1661,  1665,  1667,
    1669,  1672,  1674,  1676,  1678,  1681,  1684,  1686,  1688,  1689,
    1694,  1696,  1699,  1701,  1705,  1709,  1712,  1714,  1716,  1718,
    1720,  1722,  1724,  1726,  1728,  1730,  1732,  1734,  1736,  1737,
    1739,  1740,  1742,  1745,  1748,  1749,  1751,  1753,  1755,  1757,
    1759,  1762
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     151,     0,    -1,    -1,   152,   153,    -1,   154,   319,    -1,
     326,    -1,   155,    -1,   154,   325,   155,    -1,     1,   155,
      -1,   160,    -1,    -1,    48,   156,   138,   153,   139,    -1,
     158,   264,   237,   267,    -1,   159,   319,    -1,   326,    -1,
     160,    -1,   159,   325,   160,    -1,     1,   160,    -1,    -1,
      46,   181,   161,   181,    -1,    46,    55,    55,    -1,    46,
      55,    65,    -1,    46,    55,    64,    -1,     6,   182,    -1,
     160,    41,   163,    -1,   160,    42,   163,    -1,   160,    43,
     163,    -1,   160,    44,   163,    -1,   160,    45,   160,    -1,
      49,   138,   158,   139,    -1,   176,   110,   164,    -1,   169,
     110,   164,    -1,   291,    88,   164,    -1,   221,   140,   194,
     322,    88,   164,    -1,   221,   141,    53,    88,   164,    -1,
     221,   141,    57,    88,   164,    -1,   221,    86,    53,    88,
     164,    -1,   292,    88,   164,    -1,   176,   110,   202,    -1,
     169,   110,   190,    -1,   169,   110,   202,    -1,   162,    -1,
     164,    -1,   162,    38,   162,    -1,   162,    39,   162,    -1,
      40,   320,   162,    -1,   124,   164,    -1,   187,    -1,   162,
      -1,   168,    -1,   165,    -1,    31,   195,    -1,    22,   195,
      -1,    23,   195,    -1,   254,    -1,   254,   141,   316,   196,
      -1,   254,    86,   316,   196,    -1,    -1,    95,   167,   243,
     158,   139,    -1,   315,   196,    -1,   315,   196,   166,    -1,
     221,   141,   316,   196,    -1,   221,   141,   316,   196,   166,
      -1,   221,    86,   316,   196,    -1,   221,    86,   316,   196,
     166,    -1,    33,   196,    -1,    32,   196,    -1,   171,    -1,
      90,   170,   321,    -1,   171,    -1,    90,   170,   321,    -1,
     173,    -1,   173,   172,    -1,   173,    96,   175,    -1,   173,
      96,   175,   142,   174,    -1,   173,    96,    -1,   173,    96,
     142,   174,    -1,    96,   175,    -1,    96,   175,   142,   174,
      -1,    96,    -1,    96,   142,   174,    -1,   175,    -1,    90,
     170,   321,    -1,   172,   142,    -1,   173,   172,   142,    -1,
     172,    -1,   174,   142,   172,    -1,   289,    -1,   221,   140,
     194,   322,    -1,   221,   141,    53,    -1,   221,    86,    53,
      -1,   221,   141,    57,    -1,   221,    86,    57,    -1,    87,
      57,    -1,   292,    -1,   289,    -1,   221,   140,   194,   322,
      -1,   221,   141,    53,    -1,   221,    86,    53,    -1,   221,
     141,    57,    -1,   221,    86,    57,    -1,    87,    57,    -1,
     292,    -1,    53,    -1,    57,    -1,    87,   177,    -1,   177,
      -1,   221,    86,   177,    -1,    53,    -1,    57,    -1,    54,
      -1,   184,    -1,   185,    -1,   179,    -1,   285,    -1,   180,
      -1,   287,    -1,   181,    -1,    -1,   182,   142,   183,   181,
      -1,   115,    -1,   116,    -1,   117,    -1,    70,    -1,    71,
      -1,    72,    -1,    78,    -1,    79,    -1,   113,    -1,    74,
      -1,   114,    -1,    75,    -1,    73,    -1,    84,    -1,    85,
      -1,   118,    -1,   119,    -1,   120,    -1,    96,    -1,   121,
      -1,   122,    -1,    69,    -1,   124,    -1,   125,    -1,    67,
      -1,    68,    -1,    82,    -1,    83,    -1,   143,    -1,    50,
      -1,    51,    -1,    52,    -1,    48,    -1,    49,    -1,    46,
      -1,    38,    -1,     7,    -1,    22,    -1,    16,    -1,    17,
      -1,     3,    -1,     5,    -1,    47,    -1,    27,    -1,    15,
      -1,    14,    -1,    10,    -1,     9,    -1,    37,    -1,    21,
      -1,    26,    -1,     4,    -1,    23,    -1,    35,    -1,    40,
      -1,    39,    -1,    24,    -1,     8,    -1,    25,    -1,    31,
      -1,    34,    -1,    33,    -1,    13,    -1,    36,    -1,     6,
      -1,    18,    -1,    32,    -1,    11,    -1,    12,    -1,    19,
      -1,    20,    -1,   203,    -1,   176,   110,   187,    -1,   176,
     110,   187,    45,   187,    -1,   291,    88,   187,    -1,   291,
      88,   187,    45,   187,    -1,   221,   140,   194,   322,    88,
     187,    -1,   221,   141,    53,    88,   187,    -1,   221,   141,
      57,    88,   187,    -1,   221,    86,    53,    88,   187,    -1,
     221,    86,    57,    88,   187,    -1,    87,    57,    88,   187,
      -1,   292,    88,   187,    -1,   187,    80,   187,    -1,   187,
      81,   187,    -1,   187,   118,   187,    -1,   187,   119,   187,
      -1,   187,   120,   187,    -1,   187,   121,   187,    -1,   187,
     122,   187,    -1,   187,    69,   187,    -1,   123,    60,    69,
     187,    -1,   123,    61,    69,   187,    -1,    67,   187,    -1,
      68,   187,    -1,   187,   115,   187,    -1,   187,   116,   187,
      -1,   187,   117,   187,    -1,   187,    70,   187,    -1,   187,
     113,   187,    -1,   187,    74,   187,    -1,   187,   114,   187,
      -1,   187,    75,   187,    -1,   187,    71,   187,    -1,   187,
      72,   187,    -1,   187,    73,   187,    -1,   187,    78,   187,
      -1,   187,    79,   187,    -1,   124,   187,    -1,   125,   187,
      -1,   187,    84,   187,    -1,   187,    85,   187,    -1,   187,
      76,   187,    -1,   187,    77,   187,    -1,    -1,    47,   320,
     188,   187,    -1,   187,   111,   187,   320,   112,   187,    -1,
     204,    -1,   186,    -1,   187,    -1,   326,    -1,   201,   323,
      -1,   201,   142,   313,   323,    -1,   313,   323,    -1,   144,
     194,   321,    -1,   326,    -1,   192,    -1,   326,    -1,   195,
      -1,   168,    -1,   201,   199,    -1,   313,   199,    -1,   201,
     142,   313,   199,    -1,   198,    -1,    -1,   197,   195,    -1,
      97,   190,    -1,   142,   198,    -1,   142,    -1,   326,    -1,
     189,    -1,   190,    -1,    96,   190,    -1,   201,   142,   190,
      -1,   201,   142,    96,   190,    -1,   201,   142,   190,    -1,
     201,   142,    96,   190,    -1,    96,   190,    -1,    93,   191,
     145,    -1,   268,    -1,   269,    -1,   272,    -1,   273,    -1,
     274,    -1,   277,    -1,   290,    -1,   292,    -1,    54,    -1,
      -1,   222,   205,   157,   233,    -1,    -1,    91,   162,   206,
     321,    -1,    90,   158,   146,    -1,   221,    86,    57,    -1,
      87,    57,    -1,    93,   191,   145,    -1,    94,   312,   139,
      -1,    31,    -1,    32,   144,   195,   321,    -1,    32,   144,
     321,    -1,    32,    -1,    -1,    47,   320,   144,   207,   162,
     321,    -1,    40,   144,   162,   321,    -1,    40,   144,   321,
      -1,   315,   256,    -1,   255,    -1,   255,   256,    -1,    98,
     248,    -1,   223,   163,   234,   158,   236,   233,    -1,   224,
     163,   234,   158,   237,   233,    -1,    -1,    -1,   225,   208,
     163,   235,   209,   158,   233,    -1,    -1,    -1,   226,   210,
     163,   235,   211,   158,   233,    -1,   228,   163,   319,   260,
     233,    -1,   227,   163,   319,   261,   233,    -1,   227,   319,
     261,   233,    -1,    -1,    -1,   229,   238,    26,   212,   163,
     235,   213,   158,   233,    -1,    -1,   230,   178,   293,   214,
     157,   233,    -1,    -1,    -1,   230,    84,   162,   215,   324,
     216,   157,   233,    -1,    -1,   231,   178,   217,   157,   233,
      -1,    -1,   232,   179,   218,   295,   157,   233,    -1,    -1,
      -1,   232,   310,   318,   219,   179,   220,   295,   157,   233,
      -1,    22,    -1,    23,    -1,    24,    -1,    25,    -1,   204,
      -1,     7,    -1,    11,    -1,    12,    -1,    19,    -1,    20,
      -1,    16,    -1,    17,    -1,    21,    -1,     3,    -1,     4,
      -1,     5,    -1,    10,    -1,   324,    -1,    13,    -1,   324,
      13,    -1,   324,    -1,    28,    -1,   237,    -1,    14,   163,
     234,   158,   236,    -1,   326,    -1,    15,   158,    -1,   176,
      -1,   169,    -1,   298,    -1,    90,   241,   321,    -1,   239,
      -1,   240,   142,   239,    -1,   240,    -1,   240,   142,    96,
     298,    -1,   240,   142,    96,   298,   142,   240,    -1,   240,
     142,    96,    -1,   240,   142,    96,   142,   240,    -1,    96,
     298,    -1,    96,   298,   142,   240,    -1,    96,    -1,    96,
     142,   240,    -1,   300,   142,   303,   142,   306,   309,    -1,
     300,   142,   303,   142,   306,   142,   300,   309,    -1,   300,
     142,   303,   309,    -1,   300,   142,   303,   142,   300,   309,
      -1,   300,   142,   306,   309,    -1,   300,   142,    -1,   300,
     142,   306,   142,   300,   309,    -1,   300,   309,    -1,   303,
     142,   306,   309,    -1,   303,   142,   306,   142,   300,   309,
      -1,   303,   309,    -1,   303,   142,   300,   309,    -1,   306,
     309,    -1,   306,   142,   300,   309,    -1,   308,    -1,   326,
      -1,   244,    -1,   115,   245,   115,    -1,    77,    -1,   115,
     242,   245,   115,    -1,   326,    -1,   147,   246,    -1,   247,
      -1,   246,   142,   247,    -1,    53,    -1,   297,    -1,    -1,
     249,   250,   251,    -1,   144,   296,   245,   321,    -1,   296,
      -1,   108,   158,   139,    -1,    30,   158,    10,    -1,    -1,
      29,   253,   243,   158,    10,    -1,   168,   252,    -1,   254,
     141,   316,   193,    -1,   254,    86,   316,   193,    -1,   315,
     192,    -1,   221,   141,   316,   193,    -1,   221,    86,   316,
     192,    -1,   221,    86,   317,    -1,   221,   141,   192,    -1,
     221,    86,   192,    -1,    33,   192,    -1,    33,    -1,   221,
     140,   194,   322,    -1,    -1,   138,   257,   243,   158,   139,
      -1,    -1,    27,   258,   243,   158,    10,    -1,    18,    -1,
     259,   200,   234,   158,   263,    -1,    18,   201,   234,   158,
     262,    -1,   237,    -1,   261,    -1,   237,    -1,   260,    -1,
       8,   265,   266,   234,   158,   264,    -1,   326,    -1,   190,
      -1,   202,    -1,   326,    -1,    89,   176,    -1,   326,    -1,
       9,   158,    -1,   326,    -1,   288,    -1,   285,    -1,   287,
      -1,   270,    -1,    63,    -1,   271,    -1,   270,   271,    -1,
     100,   279,   107,    -1,   101,   280,   107,    -1,   102,   280,
      66,    -1,   103,   148,   107,    -1,   103,   275,   107,    -1,
      -1,   275,   276,   148,    -1,   281,    -1,   276,   281,    -1,
     104,   148,   107,    -1,   104,   278,   107,    -1,    -1,   278,
      62,   148,    -1,    -1,   279,   281,    -1,    -1,   280,   281,
      -1,    62,    -1,    -1,   106,   282,   284,    -1,    -1,   105,
     283,   158,   139,    -1,    55,    -1,    56,    -1,    58,    -1,
     292,    -1,    99,   286,    -1,   179,    -1,    56,    -1,    55,
      -1,    58,    -1,    99,   280,   107,    -1,    60,    -1,    61,
      -1,   123,    60,    -1,   123,    61,    -1,    53,    -1,    56,
      -1,    55,    -1,    57,    -1,    58,    -1,    35,    -1,    34,
      -1,    36,    -1,    37,    -1,    51,    -1,    50,    -1,    52,
      -1,   289,    -1,   289,    -1,    64,    -1,    65,    -1,   324,
      -1,    -1,   114,   294,   163,   324,    -1,     1,   324,    -1,
     144,   296,   321,    -1,   296,   324,    -1,   300,   142,   304,
     142,   306,   309,    -1,   300,   142,   304,   142,   306,   142,
     300,   309,    -1,   300,   142,   304,   309,    -1,   300,   142,
     304,   142,   300,   309,    -1,   300,   142,   306,   309,    -1,
     300,   142,   306,   142,   300,   309,    -1,   300,   309,    -1,
     304,   142,   306,   309,    -1,   304,   142,   306,   142,   300,
     309,    -1,   304,   309,    -1,   304,   142,   300,   309,    -1,
     306,   309,    -1,   306,   142,   300,   309,    -1,   308,    -1,
      -1,    57,    -1,    56,    -1,    55,    -1,    58,    -1,   297,
      -1,    53,    -1,   298,    -1,    90,   241,   321,    -1,   299,
      -1,   300,   142,   299,    -1,    53,   110,   190,    -1,    53,
     110,   221,    -1,   302,    -1,   303,   142,   302,    -1,   301,
      -1,   304,   142,   301,    -1,   120,    -1,    96,    -1,   305,
      53,    -1,   305,    -1,   117,    -1,    97,    -1,   307,    53,
      -1,   142,   308,    -1,   326,    -1,   290,    -1,    -1,   144,
     311,   162,   321,    -1,   326,    -1,   313,   323,    -1,   314,
      -1,   313,   142,   314,    -1,   190,    89,   190,    -1,    59,
     190,    -1,    53,    -1,    57,    -1,    54,    -1,    53,    -1,
      57,    -1,    54,    -1,   184,    -1,    53,    -1,    54,    -1,
     184,    -1,   141,    -1,    86,    -1,    -1,   325,    -1,    -1,
     149,    -1,   320,   146,    -1,   320,   145,    -1,    -1,   149,
      -1,   142,    -1,   147,    -1,   149,    -1,   324,    -1,   325,
     147,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   767,   767,   767,   798,   809,   818,   826,   834,   840,
     842,   841,   865,   898,   909,   918,   926,   934,   940,   940,
     948,   956,   967,   977,   985,   994,  1003,  1016,  1029,  1038,
    1050,  1059,  1069,  1098,  1119,  1136,  1153,  1170,  1180,  1190,
    1200,  1210,  1213,  1214,  1222,  1230,  1238,  1246,  1249,  1261,
    1262,  1263,  1271,  1279,  1289,  1290,  1299,  1311,  1310,  1332,
    1341,  1353,  1362,  1374,  1383,  1395,  1404,  1415,  1416,  1426,
    1427,  1437,  1445,  1453,  1461,  1469,  1477,  1485,  1493,  1501,
    1509,  1519,  1520,  1530,  1538,  1548,  1556,  1566,  1574,  1582,
    1590,  1598,  1606,  1618,  1628,  1640,  1648,  1656,  1664,  1672,
    1680,  1693,  1706,  1717,  1725,  1728,  1736,  1744,  1754,  1755,
    1756,  1757,  1767,  1779,  1780,  1783,  1791,  1794,  1802,  1802,
    1812,  1813,  1814,  1815,  1816,  1817,  1818,  1819,  1820,  1821,
    1822,  1823,  1824,  1825,  1826,  1827,  1828,  1829,  1830,  1831,
    1832,  1833,  1834,  1835,  1836,  1837,  1838,  1839,  1840,  1843,
    1843,  1843,  1844,  1844,  1845,  1845,  1845,  1846,  1846,  1846,
    1846,  1847,  1848,  1848,  1848,  1848,  1849,  1849,  1849,  1850,
    1850,  1850,  1850,  1851,  1851,  1851,  1851,  1852,  1852,  1852,
    1852,  1853,  1853,  1853,  1853,  1854,  1854,  1854,  1854,  1855,
    1855,  1857,  1862,  1872,  1882,  1911,  1942,  1963,  1980,  1997,
    2014,  2025,  2036,  2047,  2061,  2075,  2083,  2091,  2099,  2107,
    2115,  2123,  2132,  2141,  2149,  2157,  2165,  2173,  2181,  2189,
    2197,  2205,  2213,  2221,  2229,  2237,  2245,  2256,  2264,  2272,
    2280,  2288,  2296,  2304,  2312,  2312,  2322,  2332,  2338,  2349,
    2361,  2362,  2366,  2374,  2384,  2394,  2395,  2398,  2399,  2402,
    2410,  2418,  2428,  2437,  2446,  2446,  2458,  2468,  2472,  2476,
    2481,  2492,  2500,  2508,  2522,  2538,  2552,  2567,  2576,  2590,
    2591,  2592,  2593,  2594,  2595,  2596,  2597,  2598,  2608,  2607,
    2632,  2632,  2641,  2649,  2657,  2665,  2678,  2686,  2694,  2702,
    2710,  2718,  2718,  2728,  2736,  2744,  2756,  2757,  2768,  2772,
    2784,  2796,  2796,  2796,  2807,  2807,  2807,  2818,  2830,  2841,
    2850,  2852,  2849,  2916,  2915,  2937,  2942,  2936,  2964,  2963,
    2985,  2984,  3011,  3012,  3011,  3036,  3044,  3052,  3060,  3070,
    3082,  3089,  3096,  3103,  3110,  3117,  3123,  3129,  3136,  3143,
    3150,  3157,  3164,  3169,  3170,  3177,  3182,  3185,  3186,  3199,
    3200,  3210,  3211,  3214,  3222,  3232,  3240,  3250,  3258,  3266,
    3274,  3282,  3290,  3298,  3309,  3317,  3327,  3335,  3343,  3351,
    3359,  3367,  3376,  3384,  3392,  3400,  3408,  3416,  3424,  3432,
    3440,  3450,  3451,  3457,  3466,  3475,  3486,  3487,  3497,  3504,
    3513,  3521,  3527,  3527,  3549,  3557,  3567,  3571,  3578,  3577,
    3598,  3614,  3623,  3634,  3644,  3654,  3664,  3672,  3683,  3694,
    3702,  3710,  3725,  3724,  3746,  3745,  3765,  3770,  3782,  3794,
    3795,  3797,  3798,  3800,  3819,  3822,  3830,  3838,  3841,  3845,
    3848,  3856,  3859,  3860,  3868,  3871,  3888,  3889,  3890,  3900,
    3910,  3937,  3979,  3987,  3994,  4001,  4011,  4019,  4029,  4037,
    4044,  4051,  4062,  4069,  4080,  4087,  4097,  4099,  4098,  4115,
    4114,  4136,  4144,  4152,  4160,  4163,  4175,  4176,  4177,  4178,
    4181,  4212,  4213,  4214,  4222,  4232,  4233,  4234,  4235,  4236,
    4237,  4238,  4239,  4240,  4241,  4242,  4243,  4246,  4257,  4267,
    4268,  4271,  4280,  4279,  4287,  4299,  4311,  4317,  4325,  4333,
    4341,  4349,  4357,  4365,  4373,  4381,  4389,  4397,  4405,  4413,
    4421,  4430,  4439,  4448,  4457,  4466,  4477,  4478,  4490,  4498,
    4517,  4524,  4537,  4552,  4567,  4575,  4591,  4599,  4615,  4616,
    4619,  4631,  4642,  4643,  4646,  4662,  4666,  4676,  4686,  4686,
    4715,  4716,  4726,  4733,  4743,  4751,  4761,  4762,  4763,  4766,
    4767,  4768,  4769,  4772,  4773,  4774,  4777,  4782,  4789,  4790,
    4793,  4794,  4797,  4800,  4803,  4804,  4805,  4808,  4809,  4812,
    4813,  4817
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "keyword_class", "keyword_module",
  "keyword_def", "keyword_undef", "keyword_begin", "keyword_rescue",
  "keyword_ensure", "keyword_end", "keyword_if", "keyword_unless",
  "keyword_then", "keyword_elsif", "keyword_else", "keyword_case",
  "keyword_patern", "keyword_when", "keyword_while", "keyword_until",
  "keyword_for", "keyword_break", "keyword_next", "keyword_redo",
  "keyword_retry", "keyword_in", "keyword_do", "keyword_do_cond",
  "keyword_do_block", "keyword_do_LAMBDA", "keyword_return",
  "keyword_yield", "keyword_super", "keyword_self", "keyword_nil",
  "keyword_true", "keyword_false", "keyword_and", "keyword_or",
  "keyword_not", "modifier_if", "modifier_unless", "modifier_while",
  "modifier_until", "modifier_rescue", "keyword_alias", "keyword_defined",
  "keyword_BEGIN", "keyword_END", "keyword__LINE__", "keyword__FILE__",
  "keyword__ENCODING__", "tIDENTIFIER", "tFID", "tGVAR", "tIVAR",
  "tCONSTANT", "tCVAR", "tLABEL", "tINTEGER", "tFLOAT", "tSTRING_CONTENT",
  "tCHAR", "tNTH_REF", "tBACK_REF", "tREGEXP_END", "tUPLUS", "tUMINUS",
  "tPOW", "tCMP", "tEQ", "tEQQ", "tNEQ", "tGEQ", "tLEQ", "tANDOP", "tOROP",
  "tMATCH", "tNMATCH", "tDOT2", "tDOT3", "tAREF", "tASET", "tLSHFT",
  "tRSHFT", "tCOLON2", "tCOLON3", "tOP_ASGN", "tASSOC", "tLPAREN",
  "tLPAREN_ARG", "tRPAREN", "tLBRACK", "tLBRACE", "tLBRACE_ARG", "tSTAR",
  "tAMPER", "tLAMBDA", "tSYMBEG", "tSTRING_BEG", "tXSTRING_BEG",
  "tREGEXP_BEG", "tWORDS_BEG", "tQWORDS_BEG", "tSTRING_DBEG",
  "tSTRING_DVAR", "tSTRING_END", "tLAMBEG", "tLOWEST", "'='", "'?'", "':'",
  "'>'", "'<'", "'|'", "'^'", "'&'", "'+'", "'-'", "'*'", "'/'", "'%'",
  "tUMINUS_NUM", "'!'", "'~'", "idNULL", "idRespond_to", "idIFUNC",
  "idCFUNC", "idThrowState", "id_core_set_method_alias",
  "id_core_set_variable_alias", "id_core_undef_method",
  "id_core_define_method", "id_core_define_singleton_method",
  "id_core_set_postexe", "tLAST_TOKEN", "'{'", "'}'", "'['", "'.'", "','",
  "'`'", "'('", "']'", "')'", "';'", "' '", "'\\n'", "$accept", "program",
  "@1", "top_compstmt", "top_stmts", "top_stmt", "@2", "bodystmt",
  "compstmt", "stmts", "stmt", "@3", "expr", "expr_value", "command_call",
  "block_command", "cmd_brace_block", "@4", "command", "mlhs",
  "mlhs_inner", "mlhs_basic", "mlhs_item", "mlhs_head", "mlhs_post",
  "mlhs_node", "lhs", "cname", "cpath", "fname", "fsym", "fitem",
  "undef_list", "@5", "op", "reswords", "parg", "arg", "@6", "parg_value",
  "arg_value", "aref_args", "paren_args", "opt_paren_args",
  "opt_call_args", "call_args", "command_args", "@7", "block_arg",
  "opt_block_arg", "patern_args", "args", "mrhs", "mprimary", "primary",
  "@8", "@9", "@10", "@11", "@12", "@13", "@14", "@15", "@16", "@17",
  "@18", "@19", "@20", "@21", "@22", "@23", "primary_value", "k_begin",
  "k_if", "k_unless", "k_while", "k_until", "k_case", "k_patern", "k_for",
  "k_class", "k_module", "k_def", "k_end", "then", "do", "if_tail",
  "opt_else", "for_var", "f_marg", "f_marg_list", "f_margs", "block_param",
  "opt_block_param", "block_param_def", "opt_bv_decl", "bv_decls", "bvar",
  "lambda", "@24", "f_larglist", "lambda_body", "do_block", "@25",
  "block_call", "method_call", "brace_block", "@26", "@27",
  "k_patern_when", "patern_body", "case_body", "cases", "matches",
  "opt_rescue", "exc_list", "exc_var", "opt_ensure", "literal", "strings",
  "string", "string1", "xstring", "regexp", "words", "word_list", "word",
  "qwords", "qword_list", "string_contents", "xstring_contents",
  "string_content", "@28", "@29", "string_dvar", "symbol", "sym", "dsym",
  "numeric", "variable", "var_ref", "var_lhs", "backref", "superclass",
  "@30", "f_arglist", "f_args", "f_bad_arg", "f_norm_arg", "f_arg_item",
  "f_arg", "f_opt", "f_block_opt", "f_block_optarg", "f_optarg",
  "restarg_mark", "f_rest_arg", "blkarg_mark", "f_block_arg",
  "opt_f_block_arg", "singleton", "@31", "assoc_list", "assocs", "assoc",
  "operation", "operation2", "operation3", "dot_or_colon", "opt_terms",
  "opt_nl", "rparen", "rbracket", "trailer", "term", "terms", "none", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
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
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
      61,    63,    58,    62,    60,   124,    94,    38,    43,    45,
      42,    47,    37,   365,    33,   126,   366,   367,   368,   369,
     370,   371,   372,   373,   374,   375,   376,   377,   123,   125,
      91,    46,    44,    96,    40,    93,    41,    59,    32,    10
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   150,   152,   151,   153,   154,   154,   154,   154,   155,
     156,   155,   157,   158,   159,   159,   159,   159,   161,   160,
     160,   160,   160,   160,   160,   160,   160,   160,   160,   160,
     160,   160,   160,   160,   160,   160,   160,   160,   160,   160,
     160,   160,   162,   162,   162,   162,   162,   162,   163,   164,
     164,   164,   164,   164,   165,   165,   165,   167,   166,   168,
     168,   168,   168,   168,   168,   168,   168,   169,   169,   170,
     170,   171,   171,   171,   171,   171,   171,   171,   171,   171,
     171,   172,   172,   173,   173,   174,   174,   175,   175,   175,
     175,   175,   175,   175,   175,   176,   176,   176,   176,   176,
     176,   176,   176,   177,   177,   178,   178,   178,   179,   179,
     179,   179,   179,   180,   180,   181,   181,   182,   183,   182,
     184,   184,   184,   184,   184,   184,   184,   184,   184,   184,
     184,   184,   184,   184,   184,   184,   184,   184,   184,   184,
     184,   184,   184,   184,   184,   184,   184,   184,   184,   185,
     185,   185,   185,   185,   185,   185,   185,   185,   185,   185,
     185,   185,   185,   185,   185,   185,   185,   185,   185,   185,
     185,   185,   185,   185,   185,   185,   185,   185,   185,   185,
     185,   185,   185,   185,   185,   185,   185,   185,   185,   185,
     185,   186,   187,   187,   187,   187,   187,   187,   187,   187,
     187,   187,   187,   187,   187,   187,   187,   187,   187,   187,
     187,   187,   187,   187,   187,   187,   187,   187,   187,   187,
     187,   187,   187,   187,   187,   187,   187,   187,   187,   187,
     187,   187,   187,   187,   188,   187,   187,   187,   189,   190,
     191,   191,   191,   191,   192,   193,   193,   194,   194,   195,
     195,   195,   195,   195,   197,   196,   198,   199,   199,   199,
     200,   201,   201,   201,   201,   202,   202,   202,   203,   204,
     204,   204,   204,   204,   204,   204,   204,   204,   205,   204,
     206,   204,   204,   204,   204,   204,   204,   204,   204,   204,
     204,   207,   204,   204,   204,   204,   204,   204,   204,   204,
     204,   208,   209,   204,   210,   211,   204,   204,   204,   204,
     212,   213,   204,   214,   204,   215,   216,   204,   217,   204,
     218,   204,   219,   220,   204,   204,   204,   204,   204,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   234,   234,   235,   235,   236,   236,   237,
     237,   238,   238,   239,   239,   240,   240,   241,   241,   241,
     241,   241,   241,   241,   241,   241,   242,   242,   242,   242,
     242,   242,   242,   242,   242,   242,   242,   242,   242,   242,
     242,   243,   243,   244,   244,   244,   245,   245,   246,   246,
     247,   247,   249,   248,   250,   250,   251,   251,   253,   252,
     254,   254,   254,   255,   255,   255,   255,   255,   255,   255,
     255,   255,   257,   256,   258,   256,   259,   260,   261,   262,
     262,   263,   263,   264,   264,   265,   265,   265,   266,   266,
     267,   267,   268,   268,   268,   269,   270,   270,   270,   271,
     272,   273,   274,   274,   275,   275,   276,   276,   277,   277,
     278,   278,   279,   279,   280,   280,   281,   282,   281,   283,
     281,   284,   284,   284,   284,   285,   286,   286,   286,   286,
     287,   288,   288,   288,   288,   289,   289,   289,   289,   289,
     289,   289,   289,   289,   289,   289,   289,   290,   291,   292,
     292,   293,   294,   293,   293,   295,   295,   296,   296,   296,
     296,   296,   296,   296,   296,   296,   296,   296,   296,   296,
     296,   296,   297,   297,   297,   297,   298,   298,   299,   299,
     300,   300,   301,   302,   303,   303,   304,   304,   305,   305,
     306,   306,   307,   307,   308,   309,   309,   310,   311,   310,
     312,   312,   313,   313,   314,   314,   315,   315,   315,   316,
     316,   316,   316,   317,   317,   317,   318,   318,   319,   319,
     320,   320,   321,   322,   323,   323,   323,   324,   324,   325,
     325,   326
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     2,     1,     1,     3,     2,     1,
       0,     5,     4,     2,     1,     1,     3,     2,     0,     4,
       3,     3,     3,     2,     3,     3,     3,     3,     3,     4,
       3,     3,     3,     6,     5,     5,     5,     3,     3,     3,
       3,     1,     1,     3,     3,     3,     2,     1,     1,     1,
       1,     2,     2,     2,     1,     4,     4,     0,     5,     2,
       3,     4,     5,     4,     5,     2,     2,     1,     3,     1,
       3,     1,     2,     3,     5,     2,     4,     2,     4,     1,
       3,     1,     3,     2,     3,     1,     3,     1,     4,     3,
       3,     3,     3,     2,     1,     1,     4,     3,     3,     3,
       3,     2,     1,     1,     1,     2,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     4,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     5,     3,     5,     6,     5,     5,     5,
       5,     4,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     4,     4,     2,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     2,
       3,     3,     3,     3,     0,     4,     6,     1,     1,     1,
       1,     2,     4,     2,     3,     1,     1,     1,     1,     1,
       2,     2,     4,     1,     0,     2,     2,     2,     1,     1,
       1,     1,     2,     3,     4,     3,     4,     2,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     4,
       0,     4,     3,     3,     2,     3,     3,     1,     4,     3,
       1,     0,     6,     4,     3,     2,     1,     2,     2,     6,
       6,     0,     0,     7,     0,     0,     7,     5,     5,     4,
       0,     0,     9,     0,     6,     0,     0,     8,     0,     5,
       0,     6,     0,     0,     9,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     1,     1,     5,     1,
       2,     1,     1,     1,     3,     1,     3,     1,     4,     6,
       3,     5,     2,     4,     1,     3,     6,     8,     4,     6,
       4,     2,     6,     2,     4,     6,     2,     4,     2,     4,
       1,     1,     1,     3,     1,     4,     1,     2,     1,     3,
       1,     1,     0,     3,     4,     1,     3,     3,     0,     5,
       2,     4,     4,     2,     4,     4,     3,     3,     3,     2,
       1,     4,     0,     5,     0,     5,     1,     5,     5,     1,
       1,     1,     1,     6,     1,     1,     1,     1,     2,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     2,     3,
       3,     3,     3,     3,     0,     3,     1,     2,     3,     3,
       0,     3,     0,     2,     0,     2,     1,     0,     3,     0,
       4,     1,     1,     1,     1,     2,     1,     1,     1,     1,
       3,     1,     1,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     4,     2,     3,     2,     6,     8,     4,
       6,     4,     6,     2,     4,     6,     2,     4,     2,     4,
       1,     0,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     3,     3,     3,     1,     3,     1,     3,     1,     1,
       2,     1,     1,     1,     2,     2,     1,     1,     0,     4,
       1,     2,     1,     3,     3,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     1,
       0,     1,     2,     2,     0,     1,     1,     1,     1,     1,
       2,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,     0,     1,     0,   338,   339,   340,     0,   330,
     331,   332,   335,   336,   333,   334,   337,   325,   326,   327,
     328,   287,   254,   254,   481,   480,   482,   483,   560,     0,
     560,    10,     0,   485,   484,   486,   546,   548,   477,   476,
     547,   479,   471,   472,   436,   489,   490,     0,     0,     0,
       0,     0,   571,   571,    79,   392,   454,   452,   454,   454,
     444,   450,     0,     0,     0,     3,   558,     6,     9,    41,
      42,    50,    49,     0,    67,     0,    71,    81,     0,    47,
     237,     0,   278,     0,     0,   301,   304,   558,     0,     0,
       0,     0,     0,    54,   296,   269,   270,   435,   437,   271,
     272,   273,   274,   433,   434,   432,   487,   275,     0,   276,
     254,     5,     8,   160,   171,   161,   184,   156,   177,   167,
     166,   187,   188,   182,   165,   164,   158,   159,   185,   189,
     190,   169,   157,   172,   176,   178,   170,   163,   179,   186,
     181,   180,   173,   183,   168,   155,   175,   174,   154,   162,
     152,   153,   149,   150,   151,   108,   110,   109,   144,   145,
     141,   123,   124,   125,   132,   129,   131,   126,   127,   146,
     147,   133,   134,   138,   128,   130,   120,   121,   122,   135,
     136,   137,   139,   140,   142,   143,   148,   113,   115,   117,
      23,   111,   112,   114,   116,   325,   326,   287,     0,     0,
       0,     0,     0,     0,     0,   249,     0,   239,   261,    52,
     253,   571,     0,   487,     0,   276,   571,   542,    53,    51,
     560,    66,     0,   571,   409,    65,   560,   561,     0,     0,
      18,   234,     0,     0,   290,   410,   213,     0,     0,   214,
     284,     0,     0,     0,   558,    15,   560,    69,    14,   280,
       0,   564,   564,   240,     0,     0,   564,   540,   560,     0,
       0,     0,    77,   329,     0,    87,    94,   298,   511,   468,
     467,   469,   466,     0,   465,     0,     0,     0,     0,     0,
       0,     0,   473,   474,    46,   228,   229,   567,   568,     4,
     569,   559,     0,     0,     0,     0,     0,     0,     0,   398,
     400,     0,    83,     0,    75,    72,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   571,     0,     0,    48,     0,     0,
       0,     0,   558,     0,   559,   558,     0,   352,   351,     0,
       0,   487,   276,   103,   104,     0,     0,   106,     0,     0,
     487,   276,   318,   180,   173,   183,   168,   149,   150,   151,
     108,   109,   538,   320,   537,     0,     0,     0,   414,   412,
     297,   438,     0,     0,   403,    59,   295,   118,   545,   284,
     262,   256,     0,     0,   258,   250,   259,     0,   571,     0,
       0,     0,   258,   251,   560,     0,   289,   255,   560,   248,
     247,   560,   294,    45,    20,    22,    21,     0,   291,     0,
       0,     0,     0,     0,     0,    17,   560,   282,    13,   559,
      68,   560,   285,   566,   565,   241,   566,   243,   286,   541,
       0,    93,   473,   474,    85,    80,     0,     0,   571,     0,
     517,   514,   513,   512,   515,     0,   529,   533,   532,   528,
     511,     0,   395,   516,   518,   520,   571,   526,   571,   531,
     571,     0,   510,   456,   459,   457,   470,   455,   439,   453,
     440,   441,   442,   443,     0,   446,   448,     0,   449,     0,
       0,   570,     7,    24,    25,    26,    27,    28,    43,    44,
     571,     0,    31,    39,     0,    40,   560,     0,    73,    84,
      30,   192,   261,    38,   210,   218,   223,   224,   225,   220,
     222,   232,   233,   226,   227,   203,   204,   230,   231,   560,
     219,   221,   215,   216,   217,   205,   206,   207,   208,   209,
     549,   551,   550,   552,   408,   254,   406,   560,   549,   551,
     550,   552,   407,   254,     0,   571,   343,     0,   342,     0,
       0,     0,     0,     0,     0,     0,   284,     0,   571,     0,
     310,   315,   103,   104,   105,     0,   492,   313,   491,     0,
     571,     0,     0,     0,   511,   557,   556,   322,   549,   550,
     254,   254,   571,   571,    32,   194,    37,   202,    57,    60,
       0,   192,   544,     0,   263,   257,   571,   549,   550,   560,
     549,   550,   543,   288,   562,   244,   293,    19,     0,   235,
       0,    29,     0,   571,   201,    70,    16,   281,   564,     0,
      78,    90,    92,   560,   549,   550,     0,   517,     0,   364,
     355,   357,   560,   353,   571,     0,     0,   393,     0,   503,
     536,     0,   506,   530,     0,   508,   534,     0,     0,   445,
     447,   451,   211,   212,   384,   571,     0,   382,   381,   267,
       0,    82,    76,     0,     0,     0,     0,     0,   405,    63,
       0,   411,     0,     0,   246,   404,    61,   245,   341,   279,
     571,   571,   424,   571,   344,   571,   346,   302,   345,   305,
       0,     0,   309,   416,     0,     0,   553,   283,   560,   549,
     550,     0,     0,   494,     0,     0,   103,   104,   107,   560,
       0,   560,   511,     0,     0,     0,   402,    56,   401,    55,
       0,     0,     0,   571,   119,   264,   252,     0,   411,     0,
       0,   560,    11,   242,    86,    88,   522,   560,     0,   362,
       0,   519,     0,   560,   386,     0,     0,   521,   571,   571,
     535,   571,   527,   571,   571,     0,   461,   462,   463,   458,
     464,   517,   571,     0,   571,   524,   571,   571,   380,     0,
       0,   265,    74,   193,     0,    36,   199,   200,    64,   563,
       0,    34,   197,    35,   198,    62,   425,   426,   571,   427,
       0,   571,   349,     0,     0,   347,     0,     0,     0,   308,
       0,     0,   571,   238,   260,     0,   191,   307,   411,     0,
     316,     0,     0,   411,   319,   539,   560,     0,   496,   323,
       0,     0,   195,     0,     0,   292,   354,   365,     0,   360,
     356,   390,   387,   388,   391,   394,   397,   396,     0,   499,
       0,   501,     0,   507,     0,   504,   509,   460,     0,     0,
     383,   371,   373,     0,   376,     0,   378,   399,   266,   236,
      33,   196,     0,     0,   429,   350,     0,    12,   431,     0,
     299,   300,     0,     0,   263,   571,     0,     0,   311,     0,
     493,   314,   495,   321,   511,   415,   413,     0,     0,   363,
       0,   358,     0,   571,   571,   571,   571,     0,   523,   385,
     571,   571,   571,   525,   571,   571,     0,   428,     0,    95,
     102,     0,   430,     0,   303,   306,   419,   420,   418,   268,
     571,     0,     0,     0,    58,   361,     0,   389,   500,     0,
     497,   502,   505,   284,     0,     0,   368,     0,   370,   377,
       0,   374,   379,   101,     0,   571,     0,   571,   571,   421,
     422,   417,     0,   317,     0,   359,   571,   553,   283,   571,
     571,   571,   571,   553,   100,   560,   549,   550,   423,   348,
     312,   324,   498,   369,     0,   366,   372,   375,   411,   571,
     367
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    65,    66,    67,   232,   554,   555,   244,
     245,   417,    69,   338,    70,    71,   599,   733,    72,    73,
     246,    74,    75,    76,   445,    77,   206,   357,   358,   187,
     188,   189,   190,   600,   551,   192,   813,    79,   419,   814,
     208,   250,   544,   685,   408,   409,   221,   222,   210,   395,
     815,   211,   505,   816,    80,   336,   431,   618,   340,   807,
     341,   808,   711,   931,   715,   712,   889,   582,   584,   725,
     894,   237,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,   689,   557,   697,   804,   805,   350,   640,
     641,   642,   772,   666,   667,   753,   842,   843,   267,   268,
     461,   647,   300,   500,    93,    94,   386,   593,   592,   704,
     705,   564,   928,   961,   691,   798,   873,   877,    95,    96,
      97,    98,    99,   100,   101,   279,   484,   102,   281,   275,
     273,   477,   658,   657,   769,   103,   274,   104,   105,   213,
     107,   214,   215,   577,   714,   723,   724,   463,   464,   465,
     466,   467,   775,   776,   468,   469,   470,   471,   760,   649,
     375,   583,   255,   216,   217,   110,   622,   546,   587,   289,
     405,   406,   681,   435,   558,   344,   248
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -780
static const yytype_int16 yypact[] =
{
    -780,   110,  2360,  -780,  7005,  -780,  -780,  -780,  6513,  -780,
    -780,  -780,  -780,  -780,  -780,  -780,  -780,  7225,  7225,  -780,
    -780,  7225,  3808,  3379,  -780,  -780,  -780,  -780,   113,  6372,
      -1,  -780,    75,  -780,  -780,  -780,  2664,  3522,  -780,  -780,
    2807,  -780,  -780,  -780,  -780,  -780,  -780,  8435,  8435,   119,
    4886,  8545,  7445,  7775,  6779,  -780,  6231,  -780,  -780,  -780,
      85,   104,   101,  8655,  8435,  -780,   -22,  -780,   830,   409,
    -780,  -780,   156,   206,  -780,   186,  8765,  -780,   252,  2647,
     207,   241,  -780,  8545,  8545,  -780,  -780,  5571,  8545,  8870,
    8975,  9080,  6089,    37,    50,  -780,  -780,   290,  -780,  -780,
    -780,  -780,  -780,  -780,  -780,  -780,   134,  -780,   309,   341,
      39,  -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,
    -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,
    -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,
    -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,
    -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,
    -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,
    -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,
    -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,
     228,  -780,  -780,  -780,  -780,  -780,  -780,  -780,   262,  8435,
     363,  5033,  8435,  8435,  8435,  -780,   325,  2647,   376,  -780,
    -780,   299,   264,    47,   379,    58,   339,  -780,  -780,  -780,
    5461,  -780,  7225,  7225,  -780,  -780,  5705,  -780,  8545,    90,
    -780,   332,   353,  5180,   355,   366,  -780,   269,    39,   436,
     482,  7115,  4886,   367,   -22,   830,    -1,   397,  -780,   409,
     384,   -11,    45,  -780,   376,   377,    45,  -780,    -1,   464,
     434,  9185,   390,  -780,   281,   291,   393,  -780,  1265,  -780,
    -780,  -780,  -780,   418,  -780,   596,   623,   644,   430,   635,
     432,    62,   477,   483,  -780,  -780,  -780,  -780,  -780,  -780,
    -780,  5815,  8545,  8545,  8545,  8545,  7115,  8545,  8545,  -780,
    -780,  7885,  -780,  4886,  6892,   426,  7885,  8435,  8435,  8435,
    8435,  8435,  8435,  8435,  8435,  8435,  8435,  8435,  8435,  8435,
    8435,  8435,  8435,  8435,  8435,  8435,  8435,  8435,  8435,  8435,
    8435,  8435,  8435,  9452,  7225,  9530,  4043,   409,    70,    70,
    8545,  8545,   -22,   538,   413,   -22,   505,  -780,  -780,   400,
     549,    42,    53,   315,   344,  8545,   420,  -780,    61,   414,
    -780,  -780,  -780,   217,   270,   274,   282,   287,   348,   356,
     371,   374,  -780,  -780,  -780,   386, 10466, 10466,  -780,  -780,
    -780,  -780,  8655,  8655,  -780,   484,  -780,  -780,  -780,   108,
    -780,  -780,  8435,  8435,  7335,  -780,  -780,  9608,  7225,  9686,
    8435,  8435,  7555,  -780,    -1,   431,  -780,  -780,    -1,  -780,
    -780,   105,  -780,  -780,  -780,  -780,  -780,  6513,  -780,  8435,
    4471,   444,  9608,  9686,  8435,   830,    -1,  -780,  -780,  5944,
     443,    -1,  -780,  7665,  -780,  -780,  7775,  -780,  -780,  -780,
     332,   417,  -780,  -780,  -780,   451,  9185,  9764,  7225,  9842,
     486,  -780,  -780,  -780,  -780,   887,  -780,  -780,  -780,  -780,
    1360,    66,  -780,  -780,  -780,  -780,   461,  -780,   463,   566,
     490,   575,  -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,
    -780,  -780,  -780,  -780,    24,  -780,  -780,   500,  -780,  8435,
    8435,  -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,
     237,  8435,  -780,   510,   512,  -780,    -1,  9185,   515,  -780,
    -780,  1937,  -780,  -780,   436,  1997,  1997,  1997,  1997,   748,
     748,  2198,  1808,  1997,  1997,  2790,  2790,   722,   722,   927,
     748,   748,  1067,  1067,  1172,   496,   496,   436,   436,   436,
    1560,  2950,  3896,  3093,  -780,   366,  -780,    -1,   513,  -780,
     541,  -780,  -780,  3665,   628,   664,  -780,  4190,   665,  4618,
      33,    33,   538,  7995,   628,   661,    59,  9920,  7225,  9998,
    -780,   409,  -780,   417,  -780,   -22,  -780,  -780,  -780, 10076,
    7225, 10154,  4043,  8545,  1276,  -780,  -780,  -780,  -780,  -780,
    1240,  1240,   237,   237,  -780, 10523,  -780,  2647,  -780,  -780,
    6513, 10544,  -780,  8435,   376,  -780,   339,  2520,  3236,    -1,
     253,   266,  -780,  -780,  -780,  -780,  -780,  -780,  8545,  2647,
     543,  -780,   366,   366,  2647,     5,   830,  -780,    45,  9185,
     451,   352,    12,    -1,    93,    94,  8435,  -780,   887,   492,
    -780,   542,    -1,  -780,   547,  5327,  5180,  -780,  1360,  -780,
    -780,  1360,  -780,  -780,  1146,  -780,  -780,  5180,   604,  -780,
    -780,  -780,   436,   436,  -780,  1125,  5327,  -780,  -780,   548,
    8105,  -780,   451,  9185,  8435,   583,  8655,  8435,  -780,   484,
     562,   556,  8655,  8655,  -780,  -780,   484,  -780,  -780,  -780,
    8215,   701,  -780,   632,  -780,   701,  -780,  -780,  -780,  -780,
     628,    44,  -780,  -780,   624,   628,    48,   141,    -1,    64,
      81,  8545,   -22,  -780,  8545,  4043,   352,    12,  -780,    -1,
     628,   105,  1360,  4043,   -22,  6654,  -780,  -780,  -780,  -780,
    5327,  5180,  8435,   237,  -780,  -780,  -780,  8435,   361,  8435,
    8435,   105,  -780,  -780,  -780,   368,  -780,    -1,   975,   578,
    1378,  -780,   668,    -1,  -780,   727,   606,  -780,   601,   609,
    -780,   610,  -780,   612,   610,   607,  -780,  -780,  -780,  -780,
    -780,   638,   547,   640,   618,  -780,   621,   622,  -780,   755,
    8435,   626,   451,  2647,  8435,  -780,  2647,  2647,  -780,  -780,
    8655,  -780,  2647,  -780,  2647,  -780,   510,  -780,   677,  -780,
    4752,   769,  -780,  8545,   628,  -780,   628,  5327,  5327,  -780,
    8325,  4337,  7445,  -780,  -780,    70,  -780,  -780,   106,    33,
    -780,   -22,   628,  -780,  -780,  -780,    -1,   628,  -780,  -780,
     771,   643,  2647,  5180,  8435,  -780,  -780,   641,   975,   656,
    -780,  -780,   642,  -780,  -780,  -780,  -780,  -780,  1360,  -780,
    1146,  -780,  1146,  -780,  1146,  -780,  -780,  -780,  9290,   671,
    -780,  1369,  -780,  1369,  -780,  1146,  -780,  -780,   645,  2647,
    -780,  2647,  9395,    70,  -780,  -780,  5327,  -780,  -780,    70,
    -780,  -780,   628,   628,  -780,   357,   647,  4337,  -780,  4043,
    -780,  -780,  -780,  -780,  1276,  -780,  -780,   649,   975,   641,
     975,   653,   668,   610,   658,   610,   610,   744,   433,  -780,
     663,   666,   610,  -780,   667,   610,   746,  -780,   458,   291,
     393,  4043,  -780,  4190,  -780,  -780,  -780,  -780,  -780,  -780,
     373,  5327,   628,  4043,  -780,   641,   975,  -780,  -780,  1146,
    -780,  -780,  -780,  -780, 10232,  1369,  -780,  1146,  -780,  -780,
    1146,  -780,  -780,   417, 10310,  7225, 10388,   664,   632,  -780,
    -780,  -780,   628,  -780,   628,   641,   610,   662,   669,   610,
     672,   610,   610,   202,    12,    -1,   128,   145,  -780,  -780,
    -780,  -780,  -780,  -780,  1146,  -780,  -780,  -780,   166,   610,
    -780
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -780,  -780,  -780,   396,  -780,    38,  -780,  -550,   -31,  -780,
     102,  -780,    25,    -6,   -46,  -780,  -301,  -780,    27,   729,
    -139,   -13,   -62,  -780,  -410,   -24,  1109,  -313,   730,   -52,
    -780,     0,  -780,  -780,    -3,  -780,  -780,   772,  -780,  -780,
      68,    11,   -10,    74,  -299,    84,    49,  -780,  -252,  -207,
    -780,   -45,  -290,  -780,   -20,  -780,  -780,  -780,  -780,  -780,
    -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,
    -780,     4,  -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,
    -780,  -780,  -780,   334,  -337,  -528,  -136,  -573,  -780,  -698,
    -702,   188,  -780,  -459,  -780,  -601,  -780,   -75,  -780,  -780,
    -780,  -780,  -780,  -780,  -780,  -780,   735,  -780,  -780,  -780,
    -100,  -552,  -780,  -780,  -126,  -780,  -780,  -780,  -780,  -780,
    -780,   737,  -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,
     617,  -216,  -780,  -780,  -780,    10,  -780,    20,  -780,   934,
     747,  1417,  1103,  -780,  -780,   -48,  -248,  -705,   212,  -588,
     364,  -628,  -779,   -14,   201,  -780,  -537,  -780,  -253,   157,
    -780,  -780,  -780,   -41,  -276,  1842,  -260,  -780,  -780,   -63,
     -27,    32,  -568,  -225,   172,   -28,    -2
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -572
static const yytype_int16 yytable[] =
{
     111,   228,   559,   231,   272,   191,    81,   251,    81,   403,
     700,   252,   256,   224,   305,   472,   513,   284,   193,   243,
     462,   212,   212,   762,   343,   212,   191,   437,   194,   230,
     262,   439,   720,   699,   263,   547,   630,   247,   291,   193,
     373,   738,   112,   574,   205,   205,   837,   844,   205,   194,
     253,   257,   840,   191,    81,   212,   263,   556,   264,   479,
     757,   696,   575,   485,   773,   745,   378,   212,   -95,   263,
     263,   263,   225,   545,   -98,   553,   249,   378,   339,  -102,
     264,   342,   345,   556,   913,  -101,   473,   212,   212,   191,
     -97,   212,   212,   349,   359,   359,   645,   672,  -283,   609,
     384,   209,   218,   426,    68,   219,    68,   -99,   337,   337,
       3,   759,   337,   337,   763,   -68,   590,   591,   801,   -89,
     -91,   254,   806,   376,   487,   287,   612,   288,   777,   474,
     475,   433,   -96,   730,   731,  -488,   899,   545,   434,   553,
     818,   -97,   605,   297,   298,   414,   401,   -82,   227,   633,
     605,   823,  -283,  -283,   415,   416,  -550,   -95,   -99,   385,
     612,   282,   283,   623,   506,   822,   913,  -100,  -102,   488,
     243,   859,   659,   827,   646,   576,   240,   379,   377,   -96,
     287,   428,   288,   223,   -87,   299,   810,   436,   379,   623,
     -90,   287,  -549,   288,   434,   -94,   424,   844,   935,   444,
     840,   -93,   421,   -89,   -91,    81,   -89,   472,   287,   396,
     288,   243,   644,   233,   396,   -98,   429,   287,  -101,   288,
     762,   410,  -488,   -91,   212,   224,   212,   212,   384,   247,
     212,   440,   212,   278,   965,   -89,   -91,    81,   290,   -89,
     -91,   263,   -89,   -91,   -95,    81,    81,   205,   -88,   205,
     205,   411,   280,   413,   227,   502,   504,   226,   412,   290,
     510,   504,   227,   782,   757,   264,   718,   388,   660,   708,
     390,   391,   243,   757,   833,   -97,   -87,   -97,   430,   562,
     508,   719,   565,   -92,   263,  -550,   493,   494,   495,   496,
     247,   888,   -99,  -329,   -99,    81,   212,   212,   212,   212,
      81,   212,   212,  -481,   404,   212,   407,    81,   264,   623,
     212,   904,   926,   -96,   664,   -96,   301,   337,   337,   337,
     337,   623,   498,   499,   911,   552,   914,   333,   302,   492,
     543,   472,   410,   927,   560,   561,   594,   596,   212,   932,
      81,   739,  -546,   425,   212,   212,  -549,  -329,  -329,   -98,
     397,   -98,   665,   606,   740,   422,  -480,   959,  -481,   212,
    -482,   205,   306,   -97,   811,   337,   337,   447,  -483,   503,
     387,  -547,   800,  -485,   512,   563,   -99,  -487,   788,  -553,
     571,   334,   335,   964,   444,   795,   212,   212,   800,   552,
      57,   703,   628,    68,   543,  -411,   410,   382,   497,   736,
     797,  -475,   212,   743,   398,   399,   226,   988,   970,   398,
     423,  -480,   778,   552,   191,  -482,   290,   617,   111,   543,
     389,   448,   449,  -483,    81,   205,   263,   193,  -485,   383,
    -478,  -487,  -487,    81,  -484,   392,   613,   194,  -553,   552,
     615,   394,  -486,   616,   543,   444,   410,   297,   298,   834,
     264,  -102,   212,  -546,  -411,  -475,  -475,  -475,   625,  -546,
    -478,   602,   604,   627,   650,   393,   650,   400,   650,   472,
     254,   -96,   585,   572,   826,   205,   418,   573,   887,  -276,
     473,   402,  -547,   -94,  -478,  -478,   567,   263,  -547,  -484,
    -553,   420,  -553,  -553,   442,   443,  -549,  -486,   668,   220,
     579,   604,   675,  -284,   254,   307,  -411,   -67,  -411,  -411,
     223,   264,  -475,   427,   290,  -478,   438,   290,   701,   944,
     680,   441,    68,   474,   475,   476,   693,   586,   695,   432,
     578,   626,   446,  -276,  -276,   678,   921,   482,   671,   486,
     568,   569,   923,   684,   954,   637,   489,   451,   452,   453,
     454,   687,   490,   692,   580,   581,   563,  -284,  -284,   552,
     491,    81,   566,    81,   543,   307,   410,   744,   509,   669,
     424,   552,   212,   580,   581,   570,   543,   614,   410,   598,
     684,   684,   680,   621,   212,   -82,    81,   212,   687,   687,
     668,   668,  -101,   629,   679,   205,   636,   191,   955,   956,
     734,   682,   686,   648,   396,   651,   680,   205,   721,   263,
     193,   444,   678,   684,   755,   756,   330,   331,   332,   653,
     194,   687,   212,   -97,   -93,   652,   765,   655,   656,   683,
     785,   512,   654,   264,   748,   779,   791,   793,   688,   727,
     729,   472,   754,   741,   790,   504,   803,   800,   661,    81,
      81,   -99,  -261,   263,   670,   -89,   975,   673,   473,   766,
     767,    81,   768,   754,   726,   728,   -96,   643,    45,    46,
      81,   735,   690,   829,   751,   276,   277,   264,   694,   703,
     212,   680,   742,   -91,   750,   473,   212,   212,   799,   802,
    -262,   802,   680,   802,   752,   784,   623,   473,   -88,   830,
     831,   474,   475,   478,   746,   819,   473,   789,   821,   637,
     481,   451,   452,   453,   454,   212,   800,   812,   212,    81,
     838,   841,   191,   451,   452,   453,   454,    81,   474,   475,
     480,   668,   698,   698,    81,    81,   337,   846,   781,   337,
     474,   475,   483,   848,   870,   847,   857,   713,   858,   474,
     475,   850,   852,   825,   854,   860,   650,   650,   796,   650,
     861,   650,   650,   863,   865,   867,   872,   251,  -263,   875,
     754,   252,   650,   835,   650,   650,   882,   883,   876,   836,
     885,   895,   896,   898,   902,   845,   909,  -264,   934,   207,
     207,   307,   929,   207,   212,   936,   874,   879,   900,   878,
     939,   943,   897,   953,    81,   945,  -549,   212,   947,   950,
     253,    81,    81,  -550,   984,    81,   620,   307,   347,   236,
     239,   362,   979,   886,   207,   207,   747,   937,   337,   380,
     960,   978,   320,   321,   381,   285,   286,    81,   263,   374,
     328,   329,   330,   331,   332,   922,   933,   910,   868,   758,
     643,   749,   263,     0,     0,     0,   930,     0,   892,     0,
       0,     0,   908,   325,   326,   327,   328,   329,   330,   331,
     332,   292,   293,   294,   295,   296,   918,     0,   884,     0,
      81,     0,     0,   802,   820,     0,     0,     0,     0,     0,
     957,    81,   958,    81,     0,     0,   828,     0,   702,     0,
     962,   650,   650,   650,   650,     0,     0,     0,   650,   650,
     650,     0,   650,   650,     0,   849,   851,     0,   853,     0,
     855,   856,     0,     0,     0,    81,     0,    81,   802,     0,
       0,   862,     0,   864,   866,    81,   106,    81,   106,     0,
     637,   543,   451,   452,   453,   454,   552,     0,   680,     0,
       0,   543,     0,   410,     0,   692,   802,     0,     0,   212,
     643,     0,   643,     0,   650,     0,     0,   650,   650,   650,
     650,   207,     0,     0,   207,   207,   285,   638,     0,     0,
       0,     0,   205,   639,   106,     0,     0,   650,   265,     0,
       0,   698,   207,   890,   207,   207,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,     0,
     265,   320,   321,     0,     0,   761,     0,     0,   764,     0,
       0,     0,     0,   351,   360,   360,   360,     0,   637,   774,
     451,   452,   453,   454,   809,     0,     0,     0,   322,   817,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     643,   901,     0,     0,   824,     0,     0,     0,     0,     0,
     938,   940,   941,   942,     0,   638,     0,   946,   948,   949,
       0,   951,   952,   207,     0,     0,   227,     0,   511,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   109,   207,   109,     0,     0,
     643,    78,   643,    78,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   982,     0,     0,   983,   985,   986,   987,
       0,     0,     0,     0,     0,   106,   307,     0,   880,     0,
     881,     0,     0,     0,     0,     0,   990,     0,   643,     0,
       0,   320,   321,   109,   595,   597,   891,   266,     0,    78,
       0,   893,     0,     0,   601,   207,   207,   106,     0,     0,
     207,     0,   595,   597,   207,   106,   106,     0,   771,   266,
     451,   452,   453,   454,   327,   328,   329,   330,   331,   332,
       0,   619,   352,   361,   361,   265,   624,     0,   348,   637,
       0,   451,   452,   453,   454,   207,     0,     0,   207,     0,
       0,     0,   903,     0,   905,   455,   924,   925,   906,     0,
     207,   456,   457,     0,     0,   106,     0,   912,     0,   915,
     106,     0,     0,     0,     0,     0,   455,   106,   265,     0,
    -571,   307,   458,   457,     0,   459,     0,     0,  -571,  -571,
    -571,     0,     0,  -571,  -571,  -571,   320,   321,  -571,     0,
       0,   662,   663,   458,     0,     0,   963,     0,  -571,     0,
     106,     0,   752,   207,     0,     0,     0,     0,  -571,  -571,
       0,  -571,  -571,  -571,  -571,  -571,     0,     0,     0,     0,
     328,   329,   330,   331,   332,     0,   980,     0,   981,     0,
       0,     0,     0,   966,   109,     0,     0,     0,     0,   969,
      78,   971,     0,     0,   972,     0,     0,     0,   450,     0,
     451,   452,   453,   454,     0,     0,  -571,     0,     0,   450,
       0,   451,   452,   453,   454,   207,   109,     0,     0,     0,
     207,     0,    78,     0,   109,   109,     0,     0,   989,     0,
      78,    78,   207,     0,   106,   455,     0,     0,     0,     0,
       0,   456,   457,   106,   266,     0,   455,     0,     0,     0,
       0,     0,   456,   457,     0,   207,     0,     0,     0,  -571,
     265,  -571,   458,     0,   223,   459,  -571,  -571,     0,  -571,
       0,     0,     0,   458,   109,     0,   459,     0,     0,   109,
      78,     0,     0,     0,     0,    78,   109,   266,   207,   460,
       0,     0,    78,   450,     0,   451,   452,   453,   454,   108,
     722,   108,   771,     0,   451,   452,   453,   454,     0,     0,
       0,   637,     0,   451,   452,   453,   454,     0,     0,   109,
       0,   265,   207,     0,     0,    78,   783,     0,   786,   787,
     455,     0,     0,     0,   792,   794,   456,   457,     0,   455,
       0,     0,   207,     0,     0,   456,   457,   108,   638,     0,
       0,     0,     0,     0,   839,     0,     0,   458,     0,     0,
     459,     0,     0,     0,     0,     0,   458,     0,     0,   459,
       0,   106,     0,   106,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   832,     0,     0,     0,     0,   786,
       0,   792,   794,     0,     0,     0,   106,     0,     0,     0,
       0,     0,     0,   109,     0,     0,     0,     0,     0,    78,
       0,     0,   109,     0,     0,     0,     0,     0,    78,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   266,
       0,     0,   207,     0,     0,     0,   869,     0,     0,     0,
    -553,     0,   871,   265,     0,     0,     0,     0,  -553,  -553,
    -553,     0,     0,     0,  -553,  -553,     0,     0,  -553,   106,
     106,     0,   207,     0,   207,     0,     0,  -553,     0,     0,
       0,   106,     0,     0,     0,     0,     0,     0,  -553,  -553,
     106,  -553,  -553,  -553,  -553,  -553,   871,   265,     0,     0,
     266,     0,     0,     0,     0,     0,     0,     0,   108,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -553,
    -553,  -553,  -553,  -553,  -553,  -553,  -553,  -553,  -553,  -553,
    -553,  -553,     0,     0,  -553,  -553,  -553,     0,   676,   106,
     108,     0,     0,     0,     0,     0,     0,   106,   108,   108,
     109,     0,   109,     0,   106,   106,    78,     0,    78,     0,
     -98,  -553,     0,  -553,  -553,  -553,  -553,  -553,  -553,  -553,
    -553,  -553,  -553,     0,     0,   109,     0,     0,     0,     0,
       0,    78,     0,     0,     0,     0,     0,     0,  -553,  -553,
    -553,  -553,   -90,     0,     0,     0,  -553,  -553,   108,  -553,
       0,     0,     0,   108,     0,     0,     0,     0,     0,     0,
     108,     0,     0,     0,     0,     0,     0,   207,     0,     0,
       0,     0,   266,     0,   106,     0,     0,     0,     0,     0,
       0,   106,   106,     0,     0,   106,     0,     0,   109,   109,
       0,     0,     0,   108,    78,    78,     0,     0,     0,     0,
     109,   770,     0,     0,     0,     0,    78,   106,     0,   109,
       0,     0,     0,     0,     0,    78,   266,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   360,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   919,     0,     0,     0,
     106,     0,     0,     0,     0,     0,     0,     0,   109,     0,
       0,   106,     0,   106,    78,     0,   109,     0,     0,     0,
       0,     0,    78,   109,   109,     0,     0,   108,     0,    78,
      78,     0,     0,     0,     0,     0,   108,     0,     0,     0,
       0,     0,     0,     0,     0,   106,     0,   106,     0,     0,
       0,     0,     0,     0,     0,   106,     0,   106,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   307,   308,   309,
     310,   311,   312,   313,   314,     0,   316,   317,     0,   238,
     238,     0,   320,   321,   238,   238,   238,     0,     0,     0,
       0,     0,     0,   109,     0,     0,   238,     0,     0,    78,
     109,   109,     0,     0,   109,     0,    78,    78,   238,     0,
      78,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   238,   238,   238,     0,     0,   109,     0,     0,     0,
       0,     0,    78,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   361,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   108,   920,   108,     0,     0,   109,
       0,   917,   674,     0,     0,    78,     0,     0,     0,     0,
     109,     0,   109,     0,     0,     0,    78,     0,    78,   108,
       0,     0,     0,     0,     0,     0,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,     0,
       0,   320,   321,     0,   109,     0,   109,     0,     0,     0,
      78,     0,    78,     0,   109,     0,   109,     0,     0,     0,
      78,   238,    78,     0,   238,   238,   238,     0,   322,     0,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
       0,     0,   108,   108,     0,     0,   307,  -572,  -572,  -572,
    -572,   312,   313,     0,   108,  -572,  -572,     0,     0,  -239,
       0,   320,   321,   108,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   238,     0,     0,     0,     0,     0,     0,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   108,     0,     0,     0,     0,     0,     0,     0,
     108,     0,     0,     0,     0,     0,   238,   108,   108,   238,
     238,   238,   238,   238,   238,   238,   238,   238,   238,   238,
     238,   238,   238,   238,   238,   238,   238,   238,   238,   238,
     238,   238,   238,   238,   238,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   108,     0,     0,
       0,     0,     0,     0,   108,   108,     0,     0,   108,     0,
       0,     0,     0,     0,   238,   238,   238,     0,     0,     0,
       0,     0,   238,   238,   238,     0,     0,     0,     0,     0,
     108,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   238,     0,     0,     0,     0,   238,   307,   308,   309,
     310,   311,   312,   313,     0,   238,   316,   317,   238,     0,
       0,     0,   320,   321,     0,     0,     0,     0,   238,     0,
       0,     0,     0,   108,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   108,     0,   108,     0,     0,     0,
       0,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   238,   238,     0,     0,     0,     0,     0,   108,     0,
     108,     0,     0,   238,     0,     0,     0,     0,   108,   238,
     108,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -571,     4,     0,     5,     6,     7,     8,     9,     0,     0,
       0,    10,    11,     0,     0,     0,    12,    13,     0,    14,
      15,    16,    17,    18,    19,    20,     0,     0,     0,     0,
       0,    21,    22,    23,    24,    25,    26,    27,     0,     0,
      28,     0,     0,     0,     0,   238,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,     0,
      42,    43,     0,    44,    45,    46,     0,    47,    48,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   238,     0,    49,     0,     0,
      50,    51,     0,    52,    53,     0,    54,     0,    55,    56,
      57,    58,    59,    60,    61,     0,     0,     0,     0,     0,
       0,   238,     0,     0,     0,     0,     0,     0,   238,     0,
       0,     0,     0,    62,    63,    64,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -571,     0,  -571,
       0,     0,   238,     0,     0,   238,   238,     0,     0,   238,
    -553,     0,     0,     0,     0,     0,     0,     0,  -553,  -553,
    -553,     0,   238,  -553,  -553,  -553,     0,     0,  -553,     0,
       0,     0,     0,     0,     0,     0,     0,  -553,  -553,  -553,
    -553,     0,     0,     0,     0,     0,     0,     0,  -553,  -553,
       0,  -553,  -553,  -553,  -553,  -553,     0,     0,     0,     0,
       0,     0,     0,     0,   238,     0,     0,     0,     0,   238,
       0,   238,   238,     0,     0,     0,     0,     0,     0,  -553,
    -553,  -553,  -553,  -553,  -553,  -553,  -553,  -553,  -553,  -553,
    -553,  -553,     0,     0,  -553,  -553,  -553,     0,   737,  -553,
       0,     0,     0,     0,     0,  -553,     0,     0,     0,     0,
       0,     0,   238,     0,     0,     0,   238,     0,  -553,     0,
     -98,  -553,  -553,  -553,  -553,  -553,  -553,  -553,  -553,  -553,
    -553,  -553,  -553,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   238,     0,   238,     0,     0,     0,  -553,  -553,
    -553,  -553,  -553,     0,  -475,  -553,  -553,  -553,     0,  -553,
       0,     0,  -475,  -475,  -475,     0,   238,  -475,  -475,  -475,
       0,     0,  -475,     0,     0,     0,     0,     0,     0,     0,
    -475,     0,  -475,  -475,  -475,     0,     0,     0,     0,     0,
     238,     0,  -475,  -475,     0,  -475,  -475,  -475,  -475,  -475,
       0,     0,     0,     0,   238,     0,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,     0,
       0,   320,   321,  -475,  -475,  -475,  -475,  -475,  -475,  -475,
    -475,  -475,  -475,  -475,  -475,  -475,     0,     0,  -475,  -475,
    -475,     0,  -475,  -475,     0,     0,     0,     0,   322,  -475,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
       0,     0,  -475,     0,  -475,  -475,  -475,  -475,  -475,  -475,
    -475,  -475,  -475,  -475,  -475,  -475,  -475,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -475,  -475,  -475,  -475,  -478,     0,  -475,
    -475,  -475,     0,  -475,     0,  -478,  -478,  -478,     0,     0,
    -478,  -478,  -478,     0,     0,  -478,     0,     0,     0,     0,
       0,     0,     0,  -478,     0,  -478,  -478,  -478,     0,     0,
       0,     0,     0,     0,     0,  -478,  -478,     0,  -478,  -478,
    -478,  -478,  -478,     0,     0,     0,     0,     0,     0,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
    -572,  -572,     0,     0,   320,   321,  -478,  -478,  -478,  -478,
    -478,  -478,  -478,  -478,  -478,  -478,  -478,  -478,  -478,     0,
       0,  -478,  -478,  -478,     0,  -478,  -478,     0,     0,     0,
       0,     0,  -478,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,     0,     0,  -478,     0,  -478,  -478,  -478,
    -478,  -478,  -478,  -478,  -478,  -478,  -478,  -478,  -478,  -478,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -478,  -478,  -478,  -478,
    -554,     0,  -478,  -478,  -478,     0,  -478,     0,  -554,  -554,
    -554,     0,     0,  -554,  -554,  -554,     0,     0,  -554,     0,
       0,     0,     0,     0,     0,     0,     0,  -554,  -554,  -554,
    -554,     0,     0,     0,     0,     0,     0,     0,  -554,  -554,
       0,  -554,  -554,  -554,  -554,  -554,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -554,
    -554,  -554,  -554,  -554,  -554,  -554,  -554,  -554,  -554,  -554,
    -554,  -554,     0,     0,  -554,  -554,  -554,     0,     0,  -554,
       0,     0,     0,     0,     0,  -554,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -554,     0,
       0,  -554,  -554,  -554,  -554,  -554,  -554,  -554,  -554,  -554,
    -554,  -554,  -554,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -554,  -554,
    -554,  -554,  -554,  -555,     0,  -554,  -554,  -554,     0,  -554,
       0,  -555,  -555,  -555,     0,     0,  -555,  -555,  -555,     0,
       0,  -555,     0,     0,     0,     0,     0,     0,     0,     0,
    -555,  -555,  -555,  -555,     0,     0,     0,     0,     0,     0,
       0,  -555,  -555,     0,  -555,  -555,  -555,  -555,  -555,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -555,  -555,  -555,  -555,  -555,  -555,  -555,  -555,
    -555,  -555,  -555,  -555,  -555,     0,     0,  -555,  -555,  -555,
       0,     0,  -555,     0,     0,     0,     0,     0,  -555,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -555,     0,     0,  -555,  -555,  -555,  -555,  -555,  -555,
    -555,  -555,  -555,  -555,  -555,  -555,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -555,  -555,  -555,  -555,  -555,  -283,     0,  -555,  -555,
    -555,     0,  -555,     0,  -283,  -283,  -283,     0,     0,  -283,
    -283,  -283,     0,     0,  -283,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -283,  -283,  -283,     0,     0,     0,
       0,     0,     0,     0,  -283,  -283,     0,  -283,  -283,  -283,
    -283,  -283,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -283,  -283,  -283,  -283,  -283,
    -283,  -283,  -283,  -283,  -283,  -283,  -283,  -283,     0,     0,
    -283,  -283,  -283,     0,   677,  -283,     0,     0,     0,     0,
       0,  -283,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -283,     0,  -100,  -283,  -283,  -283,
    -283,  -283,  -283,  -283,  -283,  -283,  -283,  -283,  -283,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -283,  -283,  -283,  -283,  -410,
       0,  -283,  -283,  -283,     0,  -283,     0,  -410,  -410,  -410,
       0,     0,  -410,  -410,  -410,     0,     0,  -410,     0,     0,
       0,     0,     0,     0,     0,     0,  -410,  -410,  -410,     0,
       0,     0,     0,     0,     0,     0,     0,  -410,  -410,     0,
    -410,  -410,  -410,  -410,  -410,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -410,  -410,
    -410,  -410,  -410,  -410,  -410,  -410,  -410,  -410,  -410,  -410,
    -410,     0,     0,  -410,  -410,  -410,     0,     0,  -410,     0,
       0,     0,     0,     0,  -410,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -410,     0,  -410,  -410,  -410,  -410,  -410,  -410,  -410,  -410,
    -410,  -410,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -410,  -410,  -410,
    -410,  -410,  -277,   223,  -410,  -410,  -410,     0,  -410,     0,
    -277,  -277,  -277,     0,     0,  -277,  -277,  -277,     0,     0,
    -277,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -277,  -277,  -277,     0,     0,     0,     0,     0,     0,     0,
    -277,  -277,     0,  -277,  -277,  -277,  -277,  -277,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -277,  -277,  -277,  -277,  -277,  -277,  -277,  -277,  -277,
    -277,  -277,  -277,  -277,     0,     0,  -277,  -277,  -277,     0,
       0,  -277,     0,     0,     0,     0,     0,  -277,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -277,     0,     0,  -277,  -277,  -277,  -277,  -277,  -277,  -277,
    -277,  -277,  -277,  -277,  -277,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -277,  -277,  -277,  -277,  -571,     0,  -277,  -277,  -277,
       0,  -277,     0,  -571,  -571,  -571,     0,     0,  -571,  -571,
    -571,     0,     0,  -571,     0,     0,     0,     0,     0,     0,
       0,     0,  -571,  -571,  -571,     0,     0,     0,     0,     0,
       0,     0,     0,  -571,  -571,     0,  -571,  -571,  -571,  -571,
    -571,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -571,  -571,  -571,  -571,  -571,  -571,
    -571,  -571,  -571,  -571,  -571,  -571,  -571,     0,     0,  -571,
    -571,  -571,     0,     0,  -571,     0,     0,     0,     0,     0,
    -571,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -571,     0,  -571,  -571,
    -571,  -571,  -571,  -571,  -571,  -571,  -571,  -571,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -571,  -571,  -571,  -571,  -571,  -290,   223,
    -571,  -571,  -571,     0,  -571,     0,  -290,  -290,  -290,     0,
       0,  -290,  -290,  -290,     0,     0,  -290,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -290,  -290,     0,     0,
       0,     0,     0,     0,     0,     0,  -290,  -290,     0,  -290,
    -290,  -290,  -290,  -290,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -290,  -290,  -290,
    -290,  -290,  -290,  -290,  -290,  -290,  -290,  -290,  -290,  -290,
       0,     0,  -290,  -290,  -290,     0,  -283,  -290,     0,     0,
       0,     0,     0,  -290,  -283,  -283,  -283,     0,     0,     0,
    -283,  -283,     0,     0,  -283,     0,     0,     0,     0,  -290,
       0,  -290,  -290,  -290,  -290,  -290,  -290,  -290,  -290,  -290,
    -290,     0,     0,     0,  -283,  -283,     0,  -283,  -283,  -283,
    -283,  -283,     0,     0,     0,     0,     0,  -290,  -290,  -290,
    -290,     0,   220,  -290,  -290,  -290,     0,  -290,     0,     0,
       0,     0,     0,     0,     0,  -283,  -283,  -283,  -283,  -283,
    -283,  -283,  -283,  -283,  -283,  -283,  -283,  -283,     0,     0,
    -283,  -283,  -283,     0,   677,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -100,  -283,     0,  -283,
    -283,  -283,  -283,  -283,  -283,  -283,  -283,  -283,  -283,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -283,  -283,  -283,   -92,     0,
       0,     0,  -283,  -283,   241,  -283,     5,     6,     7,     8,
       9,  -571,  -571,  -571,    10,    11,     0,     0,  -571,    12,
      13,     0,    14,    15,    16,    17,    18,    19,    20,     0,
       0,     0,     0,     0,    21,    22,    23,    24,    25,    26,
      27,     0,     0,    28,     0,     0,     0,     0,     0,    29,
      30,     0,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,     0,    42,    43,     0,    44,    45,    46,     0,
      47,    48,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      49,     0,     0,    50,    51,     0,    52,    53,     0,    54,
       0,    55,    56,    57,    58,    59,    60,    61,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    62,    63,    64,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -571,   241,  -571,     5,     6,     7,     8,     9,     0,     0,
    -571,    10,    11,     0,  -571,  -571,    12,    13,     0,    14,
      15,    16,    17,    18,    19,    20,     0,     0,     0,     0,
       0,    21,    22,    23,    24,    25,    26,    27,     0,     0,
      28,     0,     0,     0,     0,     0,    29,    30,     0,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,     0,
      42,    43,     0,    44,    45,    46,     0,    47,    48,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    49,     0,     0,
      50,    51,     0,    52,    53,     0,    54,     0,    55,    56,
      57,    58,    59,    60,    61,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    62,    63,    64,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -571,   241,  -571,
       5,     6,     7,     8,     9,     0,     0,  -571,    10,    11,
       0,     0,  -571,    12,    13,  -571,    14,    15,    16,    17,
      18,    19,    20,     0,     0,     0,     0,     0,    21,    22,
      23,    24,    25,    26,    27,     0,     0,    28,     0,     0,
       0,     0,     0,    29,    30,     0,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,     0,    42,    43,     0,
      44,    45,    46,     0,    47,    48,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    49,     0,     0,    50,    51,     0,
      52,    53,     0,    54,     0,    55,    56,    57,    58,    59,
      60,    61,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      62,    63,    64,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     4,     0,     5,     6,     7,     8,     9,     0,
       0,     0,    10,    11,  -571,     0,  -571,    12,    13,     0,
      14,    15,    16,    17,    18,    19,    20,     0,     0,     0,
       0,     0,    21,    22,    23,    24,    25,    26,    27,     0,
       0,    28,     0,     0,     0,     0,     0,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
       0,    42,    43,     0,    44,    45,    46,     0,    47,    48,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    49,     0,
       0,    50,    51,     0,    52,    53,     0,    54,     0,    55,
      56,    57,    58,    59,    60,    61,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    62,    63,    64,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -571,     0,     0,     0,     0,     0,     0,     0,  -571,   241,
    -571,     5,     6,     7,     8,     9,     0,     0,  -571,    10,
      11,     0,     0,  -571,    12,    13,     0,    14,    15,    16,
      17,    18,    19,    20,     0,     0,     0,     0,     0,    21,
      22,    23,    24,    25,    26,    27,     0,     0,    28,     0,
       0,     0,     0,     0,    29,    30,     0,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,     0,    42,    43,
       0,    44,    45,    46,     0,    47,    48,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    49,     0,     0,    50,    51,
       0,    52,    53,     0,    54,     0,    55,    56,    57,    58,
      59,    60,    61,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    62,    63,    64,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   241,     0,     5,     6,     7,     8,     9,
       0,  -571,  -571,    10,    11,  -571,     0,  -571,    12,    13,
       0,    14,    15,    16,    17,    18,    19,    20,     0,     0,
       0,     0,     0,    21,    22,    23,    24,    25,    26,    27,
       0,     0,    28,     0,     0,     0,     0,     0,    29,    30,
       0,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,     0,    42,    43,     0,    44,    45,    46,     0,    47,
      48,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    49,
       0,     0,    50,    51,     0,    52,    53,     0,    54,     0,
      55,    56,    57,    58,    59,    60,    61,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    62,    63,    64,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   241,     0,     5,
       6,     7,     8,     9,     0,     0,     0,    10,    11,  -571,
       0,  -571,    12,    13,     0,    14,    15,    16,    17,    18,
      19,    20,     0,     0,     0,     0,     0,    21,    22,    23,
      24,    25,    26,    27,     0,     0,    28,     0,     0,     0,
       0,     0,    29,    30,     0,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,     0,    42,    43,     0,    44,
      45,    46,     0,    47,    48,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    49,     0,     0,   242,    51,     0,    52,
      53,     0,    54,     0,    55,    56,    57,    58,    59,    60,
      61,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    62,
      63,    64,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -571,  -571,   241,  -571,     5,     6,     7,     8,
       9,     0,     0,     0,    10,    11,     0,     0,     0,    12,
      13,     0,    14,    15,    16,    17,    18,    19,    20,     0,
       0,     0,     0,     0,    21,    22,    23,    24,    25,    26,
      27,     0,     0,    28,     0,     0,     0,     0,     0,    29,
      30,     0,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,     0,    42,    43,     0,    44,    45,    46,     0,
      47,    48,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      49,     0,     0,    50,    51,     0,    52,    53,     0,    54,
       0,    55,    56,    57,    58,    59,    60,    61,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    62,    63,    64,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -571,
    -571,   241,  -571,     5,     6,     7,     8,     9,     0,     0,
       0,    10,    11,     0,     0,     0,    12,    13,     0,    14,
      15,    16,    17,    18,    19,    20,     0,     0,     0,     0,
       0,    21,    22,    23,    24,    25,    26,    27,     0,     0,
      28,     0,     0,     0,     0,     0,    29,    30,     0,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,     0,
      42,    43,     0,    44,    45,    46,     0,    47,    48,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    49,     0,     0,
      50,    51,     0,    52,    53,     0,    54,     0,    55,    56,
      57,    58,    59,    60,    61,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    62,    63,    64,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -571,
       0,     0,     0,     0,     0,     0,     0,  -571,   241,  -571,
       5,     6,     7,     8,     9,     0,     0,  -571,    10,    11,
       0,     0,     0,    12,    13,     0,    14,    15,    16,    17,
      18,    19,    20,     0,     0,     0,     0,     0,    21,    22,
      23,    24,    25,    26,    27,     0,     0,    28,     0,     0,
       0,     0,     0,    29,    30,     0,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,     0,    42,    43,     0,
      44,    45,    46,     0,    47,    48,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    49,     0,     0,    50,    51,     0,
      52,    53,     0,    54,     0,    55,    56,    57,    58,    59,
      60,    61,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      62,    63,    64,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     5,     6,     7,     0,     9,     0,
       0,     0,    10,    11,  -571,     0,  -571,    12,    13,     0,
      14,    15,    16,   195,   196,    19,    20,     0,     0,     0,
       0,     0,   197,    22,    23,    24,    25,    26,    27,     0,
       0,   198,     0,     0,     0,     0,     0,     0,    30,     0,
       0,    33,    34,    35,    36,    37,    38,    39,    40,    41,
     199,    42,    43,     0,    44,    45,    46,     0,    47,    48,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   200,     0,
       0,   201,    51,     0,    52,    53,     0,   202,   203,    55,
      56,    57,    58,    59,    60,    61,     0,     0,     0,     0,
       0,     0,     0,     0,     5,     6,     7,     0,     9,     0,
       0,     0,    10,    11,    62,   204,    64,    12,    13,     0,
      14,    15,    16,    17,    18,    19,    20,     0,     0,     0,
       0,     0,    21,    22,    23,    24,    25,    26,    27,     0,
     227,    28,     0,     0,     0,     0,     0,     0,    30,     0,
       0,    33,    34,    35,    36,    37,    38,    39,    40,    41,
       0,    42,    43,     0,    44,    45,    46,     0,    47,    48,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   200,     0,
       0,   201,    51,     0,    52,    53,     0,     0,     0,    55,
      56,    57,    58,    59,    60,    61,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    62,    63,    64,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     5,     6,
       7,     0,     9,     0,     0,     0,    10,    11,   287,     0,
     288,    12,    13,     0,    14,    15,    16,    17,    18,    19,
      20,     0,     0,     0,     0,     0,    21,    22,    23,    24,
      25,    26,    27,     0,     0,    28,     0,     0,     0,     0,
       0,     0,    30,     0,     0,    33,    34,    35,    36,    37,
      38,    39,    40,    41,     0,    42,    43,     0,    44,    45,
      46,     0,    47,    48,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   200,     0,     0,   201,    51,     0,    52,    53,
       0,     0,     0,    55,    56,    57,    58,    59,    60,    61,
       0,     0,     0,     0,     0,     0,     0,     0,     5,     6,
       7,     8,     9,     0,     0,     0,    10,    11,    62,    63,
      64,    12,    13,     0,    14,    15,    16,    17,    18,    19,
      20,     0,     0,     0,     0,     0,    21,    22,    23,    24,
      25,    26,    27,     0,   227,    28,     0,     0,     0,     0,
       0,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,     0,    42,    43,     0,    44,    45,
      46,     0,    47,    48,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    49,     0,     0,    50,    51,     0,    52,    53,
       0,    54,     0,    55,    56,    57,    58,    59,    60,    61,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    62,    63,
      64,     0,     0,     0,     0,     0,     0,     5,     6,     7,
       8,     9,     0,     0,     0,    10,    11,     0,     0,     0,
      12,    13,   491,    14,    15,    16,    17,    18,    19,    20,
       0,     0,     0,     0,     0,    21,    22,    23,    24,    25,
      26,    27,     0,     0,    28,     0,     0,     0,     0,     0,
      29,    30,     0,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,     0,    42,    43,     0,    44,    45,    46,
       0,    47,    48,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    49,     0,     0,    50,    51,     0,    52,    53,     0,
      54,     0,    55,    56,    57,    58,    59,    60,    61,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    62,    63,    64,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   491,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,     0,     0,     0,
     138,   139,   140,   363,   364,   365,   366,   145,   146,   147,
       0,     0,     0,     0,     0,   148,   149,   150,   151,   367,
     368,   369,   370,   156,    38,    39,   371,    41,     0,     0,
       0,     0,     0,     0,     0,     0,   158,   159,   160,   161,
     162,   163,   164,   165,   166,     0,     0,   167,   168,     0,
       0,   169,   170,   171,   172,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   173,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,     0,   184,   185,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   186,   372,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,     0,
       0,     0,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,     0,     0,     0,     0,     0,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   269,   270,   157,   271,
       0,     0,     0,     0,     0,     0,     0,     0,   158,   159,
     160,   161,   162,   163,   164,   165,   166,     0,     0,   167,
     168,     0,     0,   169,   170,   171,   172,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   173,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,     0,   184,   185,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   186,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
       0,     0,     0,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,     0,     0,     0,     0,     0,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   229,     0,   157,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   158,
     159,   160,   161,   162,   163,   164,   165,   166,     0,     0,
     167,   168,     0,     0,   169,   170,   171,   172,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   173,     0,
       0,    56,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,     0,   184,   185,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   186,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,     0,     0,     0,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,     0,     0,     0,     0,     0,   148,
     149,   150,   151,   152,   153,   154,   155,   156,     0,     0,
     157,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     158,   159,   160,   161,   162,   163,   164,   165,   166,     0,
       0,   167,   168,     0,     0,   169,   170,   171,   172,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   173,
       0,     0,    56,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,     0,   184,   185,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   186,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,     0,     0,     0,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,     0,     0,     0,     0,     0,
     148,   149,   150,   151,   152,   153,   154,   155,   156,     0,
       0,   157,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   158,   159,   160,   161,   162,   163,   164,   165,   166,
       0,     0,   167,   168,     0,     0,   169,   170,   171,   172,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     173,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,     0,   184,   185,
       0,     0,     5,     6,     7,     0,     9,     0,     0,     0,
      10,    11,     0,     0,     0,    12,    13,   186,    14,    15,
      16,   195,   196,    19,    20,     0,     0,     0,     0,     0,
     197,   234,   235,    24,    25,    26,    27,     0,     0,   198,
       0,     0,     0,     0,     0,     0,   258,     0,     0,    33,
      34,    35,    36,    37,    38,    39,    40,    41,     0,    42,
      43,     0,    44,    45,    46,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   259,     0,     0,   201,
      51,     0,    52,    53,     0,     0,     0,    55,    56,    57,
      58,    59,    60,    61,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     5,     6,     7,     0,     9,
       0,     0,   260,    10,    11,     0,     0,     0,    12,    13,
       0,    14,    15,    16,   195,   196,    19,    20,     0,     0,
       0,   261,     0,   197,   234,   235,    24,    25,    26,    27,
       0,     0,   198,     0,     0,     0,     0,     0,     0,   258,
       0,     0,    33,    34,    35,    36,    37,    38,    39,    40,
      41,     0,    42,    43,     0,    44,    45,    46,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   259,
       0,     0,   201,    51,     0,    52,    53,     0,     0,     0,
      55,    56,    57,    58,    59,    60,    61,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     5,     6,
       7,     8,     9,     0,     0,   260,    10,    11,     0,     0,
       0,    12,    13,     0,    14,    15,    16,    17,    18,    19,
      20,     0,     0,     0,   507,     0,    21,    22,    23,    24,
      25,    26,    27,     0,     0,    28,     0,     0,     0,     0,
       0,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,     0,    42,    43,     0,    44,    45,
      46,     0,    47,    48,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    49,     0,     0,    50,    51,     0,    52,    53,
       0,    54,     0,    55,    56,    57,    58,    59,    60,    61,
       0,     0,     0,     0,     0,     0,     0,     0,     5,     6,
       7,     8,     9,     0,     0,     0,    10,    11,    62,    63,
      64,    12,    13,     0,    14,    15,    16,    17,    18,    19,
      20,     0,     0,     0,     0,     0,    21,    22,    23,    24,
      25,    26,    27,     0,     0,    28,     0,     0,     0,     0,
       0,    29,    30,     0,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,     0,    42,    43,     0,    44,    45,
      46,     0,    47,    48,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    49,     0,     0,    50,    51,     0,    52,    53,
       0,    54,     0,    55,    56,    57,    58,    59,    60,    61,
       0,     0,     0,     0,     0,     0,     0,     0,     5,     6,
       7,     0,     9,     0,     0,     0,    10,    11,    62,    63,
      64,    12,    13,     0,    14,    15,    16,   195,   196,    19,
      20,     0,     0,     0,     0,     0,   197,    22,    23,    24,
      25,    26,    27,     0,     0,   198,     0,     0,     0,     0,
       0,     0,    30,     0,     0,    33,    34,    35,    36,    37,
      38,    39,    40,    41,   199,    42,    43,     0,    44,    45,
      46,     0,    47,    48,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   200,     0,     0,   201,    51,     0,    52,    53,
       0,   202,   203,    55,    56,    57,    58,    59,    60,    61,
       0,     0,     0,     0,     0,     0,     0,     0,     5,     6,
       7,     0,     9,     0,     0,     0,    10,    11,    62,   204,
      64,    12,    13,     0,    14,    15,    16,   195,   196,    19,
      20,     0,     0,     0,     0,     0,   197,   234,   235,    24,
      25,    26,    27,     0,     0,   198,     0,     0,     0,     0,
       0,     0,    30,     0,     0,    33,    34,    35,    36,    37,
      38,    39,    40,    41,   199,    42,    43,     0,    44,    45,
      46,     0,    47,    48,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   200,     0,     0,   201,    51,     0,    52,    53,
       0,   603,   203,    55,    56,    57,    58,    59,    60,    61,
       0,     0,     0,     0,     0,     0,     0,     0,     5,     6,
       7,     0,     9,     0,     0,     0,    10,    11,    62,   204,
      64,    12,    13,     0,    14,    15,    16,   195,   196,    19,
      20,     0,     0,     0,     0,     0,   197,   234,   235,    24,
      25,    26,    27,     0,     0,   198,     0,     0,     0,     0,
       0,     0,    30,     0,     0,    33,    34,    35,    36,    37,
      38,    39,    40,    41,   199,    42,    43,     0,    44,    45,
      46,     0,    47,    48,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   200,     0,     0,   201,    51,     0,    52,    53,
       0,   202,     0,    55,    56,    57,    58,    59,    60,    61,
       0,     0,     0,     0,     0,     0,     0,     0,     5,     6,
       7,     0,     9,     0,     0,     0,    10,    11,    62,   204,
      64,    12,    13,     0,    14,    15,    16,   195,   196,    19,
      20,     0,     0,     0,     0,     0,   197,   234,   235,    24,
      25,    26,    27,     0,     0,   198,     0,     0,     0,     0,
       0,     0,    30,     0,     0,    33,    34,    35,    36,    37,
      38,    39,    40,    41,   199,    42,    43,     0,    44,    45,
      46,     0,    47,    48,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   200,     0,     0,   201,    51,     0,    52,    53,
       0,     0,   203,    55,    56,    57,    58,    59,    60,    61,
       0,     0,     0,     0,     0,     0,     0,     0,     5,     6,
       7,     0,     9,     0,     0,     0,    10,    11,    62,   204,
      64,    12,    13,     0,    14,    15,    16,   195,   196,    19,
      20,     0,     0,     0,     0,     0,   197,   234,   235,    24,
      25,    26,    27,     0,     0,   198,     0,     0,     0,     0,
       0,     0,    30,     0,     0,    33,    34,    35,    36,    37,
      38,    39,    40,    41,   199,    42,    43,     0,    44,    45,
      46,     0,    47,    48,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   200,     0,     0,   201,    51,     0,    52,    53,
       0,   603,     0,    55,    56,    57,    58,    59,    60,    61,
       0,     0,     0,     0,     0,     0,     0,     0,     5,     6,
       7,     0,     9,     0,     0,     0,    10,    11,    62,   204,
      64,    12,    13,     0,    14,    15,    16,   195,   196,    19,
      20,     0,     0,     0,     0,     0,   197,   234,   235,    24,
      25,    26,    27,     0,     0,   198,     0,     0,     0,     0,
       0,     0,    30,     0,     0,    33,    34,    35,    36,    37,
      38,    39,    40,    41,   199,    42,    43,     0,    44,    45,
      46,     0,    47,    48,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   200,     0,     0,   201,    51,     0,    52,    53,
       0,     0,     0,    55,    56,    57,    58,    59,    60,    61,
       0,     0,     0,     0,     0,     0,     0,     0,     5,     6,
       7,     0,     9,     0,     0,     0,    10,    11,    62,   204,
      64,    12,    13,     0,    14,    15,    16,    17,    18,    19,
      20,     0,     0,     0,     0,     0,    21,    22,    23,    24,
      25,    26,    27,     0,     0,   198,     0,     0,     0,     0,
       0,     0,    30,     0,     0,    33,    34,    35,    36,    37,
      38,    39,    40,    41,     0,    42,    43,     0,    44,    45,
      46,     0,    47,    48,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   200,     0,     0,   201,    51,     0,    52,    53,
       0,   501,     0,    55,    56,    57,    58,    59,    60,    61,
       0,     0,     0,     0,     0,     0,     0,     0,     5,     6,
       7,     0,     9,     0,     0,     0,    10,    11,    62,   204,
      64,    12,    13,     0,    14,    15,    16,   195,   196,    19,
      20,     0,     0,     0,     0,     0,   197,   234,   235,    24,
      25,    26,    27,     0,     0,   198,     0,     0,     0,     0,
       0,     0,    30,     0,     0,    33,    34,    35,    36,    37,
      38,    39,    40,    41,     0,    42,    43,     0,    44,    45,
      46,     0,    47,    48,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   200,     0,     0,   201,    51,     0,    52,    53,
       0,   202,     0,    55,    56,    57,    58,    59,    60,    61,
       0,     0,     0,     0,     0,     0,     0,     0,     5,     6,
       7,     0,     9,     0,     0,     0,    10,    11,    62,   204,
      64,    12,    13,     0,    14,    15,    16,   195,   196,    19,
      20,     0,     0,     0,     0,     0,   197,   234,   235,    24,
      25,    26,    27,     0,     0,   198,     0,     0,     0,     0,
       0,     0,    30,     0,     0,    33,    34,    35,    36,    37,
      38,    39,    40,    41,     0,    42,    43,     0,    44,    45,
      46,     0,    47,    48,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   200,     0,     0,   201,    51,     0,    52,    53,
       0,   780,     0,    55,    56,    57,    58,    59,    60,    61,
       0,     0,     0,     0,     0,     0,     0,     0,     5,     6,
       7,     0,     9,     0,     0,     0,    10,    11,    62,   204,
      64,    12,    13,     0,    14,    15,    16,   195,   196,    19,
      20,     0,     0,     0,     0,     0,   197,   234,   235,    24,
      25,    26,    27,     0,     0,   198,     0,     0,     0,     0,
       0,     0,    30,     0,     0,    33,    34,    35,    36,    37,
      38,    39,    40,    41,     0,    42,    43,     0,    44,    45,
      46,     0,    47,    48,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   200,     0,     0,   201,    51,     0,    52,    53,
       0,   501,     0,    55,    56,    57,    58,    59,    60,    61,
       0,     0,     0,     0,     0,     0,     0,     0,     5,     6,
       7,     0,     9,     0,     0,     0,    10,    11,    62,   204,
      64,    12,    13,     0,    14,    15,    16,   195,   196,    19,
      20,     0,     0,     0,     0,     0,   197,   234,   235,    24,
      25,    26,    27,     0,     0,   198,     0,     0,     0,     0,
       0,     0,    30,     0,     0,    33,    34,    35,    36,    37,
      38,    39,    40,    41,     0,    42,    43,     0,    44,    45,
      46,     0,    47,    48,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   200,     0,     0,   201,    51,     0,    52,    53,
       0,   603,     0,    55,    56,    57,    58,    59,    60,    61,
       0,     0,     0,     0,     0,     0,     0,     0,     5,     6,
       7,     0,     9,     0,     0,     0,    10,    11,    62,   204,
      64,    12,    13,     0,    14,    15,    16,   195,   196,    19,
      20,     0,     0,     0,     0,     0,   197,   234,   235,    24,
      25,    26,    27,     0,     0,   198,     0,     0,     0,     0,
       0,     0,    30,     0,     0,    33,    34,    35,    36,    37,
      38,    39,    40,    41,     0,    42,    43,     0,    44,    45,
      46,     0,    47,    48,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   200,     0,     0,   201,    51,     0,    52,    53,
       0,     0,     0,    55,    56,    57,    58,    59,    60,    61,
       0,     0,     0,     0,     0,     0,     0,     0,     5,     6,
       7,     0,     9,     0,     0,     0,    10,    11,    62,   204,
      64,    12,    13,     0,    14,    15,    16,    17,    18,    19,
      20,     0,     0,     0,     0,     0,    21,    22,    23,    24,
      25,    26,    27,     0,     0,    28,     0,     0,     0,     0,
       0,     0,    30,     0,     0,    33,    34,    35,    36,    37,
      38,    39,    40,    41,     0,    42,    43,     0,    44,    45,
      46,     0,    47,    48,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   200,     0,     0,   201,    51,     0,    52,    53,
       0,     0,     0,    55,    56,    57,    58,    59,    60,    61,
       0,     0,     0,     0,     0,     0,     0,     0,     5,     6,
       7,     0,     9,     0,     0,     0,    10,    11,    62,    63,
      64,    12,    13,     0,    14,    15,    16,    17,    18,    19,
      20,     0,     0,     0,     0,     0,    21,    22,    23,    24,
      25,    26,    27,     0,     0,   198,     0,     0,     0,     0,
       0,     0,    30,     0,     0,    33,    34,    35,    36,    37,
      38,    39,    40,    41,     0,    42,    43,     0,    44,    45,
      46,     0,    47,    48,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   200,     0,     0,   201,    51,     0,    52,    53,
       0,     0,     0,    55,    56,    57,    58,    59,    60,    61,
       0,     0,     0,     0,     0,     0,     0,     0,     5,     6,
       7,     0,     9,     0,     0,     0,    10,    11,    62,   204,
      64,    12,    13,     0,    14,    15,    16,   195,   196,    19,
      20,     0,     0,     0,     0,     0,   197,   234,   235,    24,
      25,    26,    27,     0,     0,   198,     0,     0,     0,     0,
       0,     0,   258,     0,     0,    33,    34,    35,    36,    37,
      38,    39,    40,    41,     0,    42,    43,     0,    44,    45,
      46,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   259,     0,     0,   303,    51,     0,    52,    53,
       0,   304,     0,    55,    56,    57,    58,    59,    60,    61,
       0,     0,     0,     5,     6,     7,     0,     9,     0,     0,
       0,    10,    11,     0,     0,     0,    12,    13,   260,    14,
      15,    16,   195,   196,    19,    20,     0,     0,     0,     0,
       0,   197,   234,   235,    24,    25,    26,    27,     0,     0,
     198,     0,     0,     0,     0,     0,     0,   258,     0,     0,
      33,    34,    35,    36,    37,    38,    39,    40,    41,     0,
      42,    43,     0,    44,    45,    46,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   346,     0,     0,
      50,    51,     0,    52,    53,     0,    54,     0,    55,    56,
      57,    58,    59,    60,    61,     0,     0,     0,     5,     6,
       7,     0,     9,     0,     0,     0,    10,    11,     0,     0,
       0,    12,    13,   260,    14,    15,    16,   195,   196,    19,
      20,     0,     0,     0,     0,     0,   197,   234,   235,    24,
      25,    26,    27,     0,     0,   198,     0,     0,     0,     0,
       0,     0,   258,     0,     0,    33,    34,    35,   353,    37,
      38,    39,   354,    41,     0,    42,    43,     0,    44,    45,
      46,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   355,
       0,     0,   356,     0,     0,   201,    51,     0,    52,    53,
       0,     0,     0,    55,    56,    57,    58,    59,    60,    61,
       0,     0,     0,     5,     6,     7,     0,     9,     0,     0,
       0,    10,    11,     0,     0,     0,    12,    13,   260,    14,
      15,    16,   195,   196,    19,    20,     0,     0,     0,     0,
       0,   197,   234,   235,    24,    25,    26,    27,     0,     0,
     198,     0,     0,     0,     0,     0,     0,   258,     0,     0,
      33,    34,    35,   353,    37,    38,    39,   354,    41,     0,
      42,    43,     0,    44,    45,    46,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   356,     0,     0,
     201,    51,     0,    52,    53,     0,     0,     0,    55,    56,
      57,    58,    59,    60,    61,     0,     0,     0,     5,     6,
       7,     0,     9,     0,     0,     0,    10,    11,     0,     0,
       0,    12,    13,   260,    14,    15,    16,   195,   196,    19,
      20,     0,     0,     0,     0,     0,   197,   234,   235,    24,
      25,    26,    27,     0,     0,   198,     0,     0,     0,     0,
       0,     0,   258,     0,     0,    33,    34,    35,    36,    37,
      38,    39,    40,    41,     0,    42,    43,     0,    44,    45,
      46,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   259,     0,     0,   303,    51,     0,    52,    53,
       0,     0,     0,    55,    56,    57,    58,    59,    60,    61,
       0,     0,     0,     5,     6,     7,     0,     9,     0,     0,
       0,    10,    11,     0,     0,     0,    12,    13,   260,    14,
      15,    16,   195,   196,    19,    20,     0,     0,     0,     0,
       0,   197,   234,   235,    24,    25,    26,    27,     0,     0,
     198,     0,     0,     0,     0,     0,     0,   258,     0,     0,
      33,    34,    35,    36,    37,    38,    39,    40,    41,     0,
      42,    43,     0,    44,    45,    46,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   907,     0,     0,
     201,    51,     0,    52,    53,     0,     0,     0,    55,    56,
      57,    58,    59,    60,    61,     0,     0,     0,     5,     6,
       7,     0,     9,     0,     0,     0,    10,    11,     0,     0,
       0,    12,    13,   260,    14,    15,    16,   195,   196,    19,
      20,     0,     0,     0,     0,     0,   197,   234,   235,    24,
      25,    26,    27,     0,     0,   198,     0,     0,     0,     0,
       0,     0,   258,     0,     0,    33,    34,    35,    36,    37,
      38,    39,    40,    41,     0,    42,    43,     0,    44,    45,
      46,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   916,     0,     0,   201,    51,     0,    52,    53,
       0,     0,     0,    55,    56,    57,    58,    59,    60,    61,
       0,     0,     0,     0,     0,   540,   541,     0,     0,   542,
       0,     0,     0,     0,     0,     0,     0,     0,   260,   158,
     159,   160,   161,   162,   163,   164,   165,   166,     0,     0,
     167,   168,     0,     0,   169,   170,   171,   172,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   173,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,     0,   184,   185,     0,     0,
       0,     0,     0,   548,   549,     0,     0,   550,     0,     0,
       0,     0,     0,     0,     0,   186,   223,   158,   159,   160,
     161,   162,   163,   164,   165,   166,     0,     0,   167,   168,
       0,     0,   169,   170,   171,   172,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   173,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,     0,   184,   185,     0,     0,     0,     0,
       0,   607,   541,     0,     0,   608,     0,     0,     0,     0,
       0,     0,     0,   186,   223,   158,   159,   160,   161,   162,
     163,   164,   165,   166,     0,     0,   167,   168,     0,     0,
     169,   170,   171,   172,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   173,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,     0,   184,   185,     0,     0,     0,     0,     0,   610,
     549,     0,     0,   611,     0,     0,     0,     0,     0,     0,
       0,   186,   223,   158,   159,   160,   161,   162,   163,   164,
     165,   166,     0,     0,   167,   168,     0,     0,   169,   170,
     171,   172,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   173,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,     0,
     184,   185,     0,     0,     0,     0,     0,   631,   541,     0,
       0,   632,     0,     0,     0,     0,     0,     0,     0,   186,
     223,   158,   159,   160,   161,   162,   163,   164,   165,   166,
       0,     0,   167,   168,     0,     0,   169,   170,   171,   172,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     173,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,     0,   184,   185,
       0,     0,     0,     0,     0,   634,   549,     0,     0,   635,
       0,     0,     0,     0,     0,     0,     0,   186,   223,   158,
     159,   160,   161,   162,   163,   164,   165,   166,     0,     0,
     167,   168,     0,     0,   169,   170,   171,   172,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   173,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,     0,   184,   185,     0,     0,
       0,     0,     0,   706,   541,     0,     0,   707,     0,     0,
       0,     0,     0,     0,     0,   186,   223,   158,   159,   160,
     161,   162,   163,   164,   165,   166,     0,     0,   167,   168,
       0,     0,   169,   170,   171,   172,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   173,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,     0,   184,   185,     0,     0,     0,     0,
       0,   709,   549,     0,     0,   710,     0,     0,     0,     0,
       0,     0,     0,   186,   223,   158,   159,   160,   161,   162,
     163,   164,   165,   166,     0,     0,   167,   168,     0,     0,
     169,   170,   171,   172,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   173,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,     0,   184,   185,     0,     0,     0,     0,     0,   716,
     541,     0,     0,   717,     0,     0,     0,     0,     0,     0,
       0,   186,   223,   158,   159,   160,   161,   162,   163,   164,
     165,   166,     0,     0,   167,   168,     0,     0,   169,   170,
     171,   172,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   173,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,     0,
     184,   185,     0,     0,     0,     0,     0,   588,   549,     0,
       0,   589,     0,     0,     0,     0,     0,     0,     0,   186,
     223,   158,   159,   160,   161,   162,   163,   164,   165,   166,
       0,     0,   167,   168,     0,     0,   169,   170,   171,   172,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     173,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,     0,   184,   185,
       0,     0,     0,     0,     0,   967,   541,     0,     0,   968,
       0,     0,     0,     0,     0,     0,     0,   186,   223,   158,
     159,   160,   161,   162,   163,   164,   165,   166,     0,     0,
     167,   168,     0,     0,   169,   170,   171,   172,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   173,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,     0,   184,   185,     0,     0,
       0,     0,     0,   973,   541,     0,     0,   974,     0,     0,
       0,     0,     0,     0,     0,   186,   223,   158,   159,   160,
     161,   162,   163,   164,   165,   166,     0,     0,   167,   168,
       0,     0,   169,   170,   171,   172,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   173,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,     0,   184,   185,     0,     0,     0,     0,
       0,   976,   549,     0,     0,   977,     0,     0,     0,     0,
       0,     0,     0,   186,   223,   158,   159,   160,   161,   162,
     163,   164,   165,   166,     0,     0,   167,   168,     0,     0,
     169,   170,   171,   172,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   173,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,     0,   184,   185,     0,     0,     0,     0,     0,   588,
     549,     0,     0,   589,     0,     0,     0,     0,     0,     0,
       0,   186,   223,   158,   159,   160,   161,   162,   163,   164,
     165,   166,     0,     0,   167,   168,     0,     0,   169,   170,
     171,   172,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   173,     0,     0,     0,     0,     0,   732,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   674,
     184,   185,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,     0,     0,   320,   321,   186,
       0,     0,     0,   307,   308,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,     0,     0,   320,   321,
       0,     0,     0,     0,   322,     0,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   322,     0,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332
};

static const yytype_int16 yycheck[] =
{
       2,    28,   339,    30,    56,     8,     2,    52,     4,   216,
     562,    52,    53,    23,    76,   268,   306,    63,     8,    50,
     268,    17,    18,   651,    87,    21,    29,   252,     8,    29,
      54,   256,   582,   561,    54,   334,   446,    50,    66,    29,
      92,   609,     4,   356,    17,    18,   748,   752,    21,    29,
      52,    53,   750,    56,    50,    51,    76,    13,    54,   275,
     648,    28,     1,   279,   665,   633,    27,    63,    26,    89,
      90,    91,    23,   333,    26,   335,    51,    27,    84,    26,
      76,    87,    88,    13,   863,    26,    62,    83,    84,    92,
      26,    87,    88,    89,    90,    91,    30,   507,    86,   398,
     110,    17,    18,   242,     2,    21,     4,    26,    83,    84,
       0,   648,    87,    88,   651,   110,   376,   377,   691,    26,
      26,    53,   695,    86,    62,   147,   402,   149,   665,   105,
     106,   142,    26,   592,   593,    88,   838,   397,   149,   399,
     708,    13,   394,    38,    39,    55,    88,   142,   149,   448,
     402,   719,   140,   141,    64,    65,   144,   110,    13,   110,
     436,    60,    61,   423,   303,   715,   945,    26,   110,   107,
     201,   772,   148,   723,   108,   114,    57,   138,   141,    13,
     147,   244,   149,   144,   142,    29,   142,   142,   138,   449,
     142,   147,   144,   149,   149,   142,    88,   902,   900,   261,
     898,   142,   233,   110,   110,   201,   142,   460,   147,   211,
     149,   242,   460,   138,   216,    13,   244,   147,   110,   149,
     848,   223,    88,   142,   220,   235,   222,   223,   238,   242,
     226,   258,   228,   148,   936,   142,   142,   233,    66,   146,
     146,   261,   149,   149,   110,   241,   242,   220,   142,   222,
     223,   226,   148,   228,   149,   301,   301,   144,   226,    87,
     306,   306,   149,   673,   852,   261,   579,   199,   484,   568,
     202,   203,   303,   861,   733,   147,   142,   149,   246,   342,
     304,   580,   345,   142,   304,   144,   292,   293,   294,   295,
     303,   819,   147,    86,   149,   291,   292,   293,   294,   295,
     296,   297,   298,    86,   220,   301,   222,   303,   304,   569,
     306,   848,   885,   147,    77,   149,   110,   292,   293,   294,
     295,   581,   297,   298,   861,   335,   863,    86,   142,   291,
     333,   584,   334,   885,   340,   341,   382,   383,   334,   889,
     336,    88,    27,   241,   340,   341,   144,   140,   141,   147,
      86,   149,   115,   394,    88,    86,    86,   930,   141,   355,
      86,   334,   110,   110,   701,   340,   341,    86,    86,   301,
     142,    27,    15,    86,   306,    18,   110,    86,   679,    27,
     355,   140,   141,   933,   446,   686,   382,   383,    15,   399,
     100,    18,   433,   291,   397,    27,   398,    88,   296,   606,
     690,    86,   398,   628,   140,   141,   144,   975,   945,   140,
     141,   141,   665,   423,   417,   141,   244,   417,   420,   422,
      57,   140,   141,   141,   420,   398,   446,   417,   141,    88,
      86,   140,   141,   429,    86,   110,   404,   417,    86,   449,
     408,   142,    86,   411,   447,   507,   448,    38,    39,    88,
     446,   110,   448,   138,    86,   140,   141,    86,   426,   144,
      86,   393,   394,   431,   466,    89,   468,    88,   470,   722,
     402,   110,    86,    53,   722,   448,   144,    57,   815,    86,
      62,   142,   138,   142,   140,   141,    86,   507,   144,   141,
     138,   138,   140,   141,    60,    61,   144,   141,   500,   144,
      86,   433,   529,    86,   436,    69,   138,   110,   140,   141,
     144,   507,   141,   146,   342,   141,   139,   345,   563,    86,
     547,    57,   420,   105,   106,   107,   557,   141,   559,   145,
     358,   429,   142,   140,   141,   545,   873,   107,   506,   107,
     140,   141,   879,   553,    86,    53,    69,    55,    56,    57,
      58,   553,    69,   555,   140,   141,    18,   140,   141,   569,
     147,   557,    57,   559,   567,    69,   568,   629,   142,   501,
      88,   581,   568,   140,   141,    26,   579,   146,   580,    95,
     590,   591,   609,   139,   580,   142,   582,   583,   590,   591,
     592,   593,   110,   142,   545,   568,   110,   600,   140,   141,
     600,    88,   553,   142,   606,   142,   633,   580,   583,   629,
     600,   673,   622,   623,   645,   646,   120,   121,   122,    53,
     600,   623,   618,   110,   142,   468,   657,   470,    53,    88,
     676,   563,   142,   629,   142,   666,   682,   683,    10,   590,
     591,   894,   644,   618,    88,   690,    14,    15,   148,   645,
     646,   110,   142,   673,   142,   142,   955,   142,    62,    55,
      56,   657,    58,   665,   590,   591,   110,   455,    64,    65,
     666,   603,     8,   725,   642,    58,    59,   673,    13,    18,
     676,   708,   139,   142,   142,    62,   682,   683,   690,   691,
     142,   693,   719,   695,   147,   112,   956,    62,   142,   730,
     731,   105,   106,   107,   636,   711,    62,   145,   714,    53,
      66,    55,    56,    57,    58,   711,    15,    93,   714,   715,
     142,    53,   725,    55,    56,    57,    58,   723,   105,   106,
     107,   733,   560,   561,   730,   731,   711,    10,   670,   714,
     105,   106,   107,   142,   790,   139,   139,   575,   110,   105,
     106,   142,   142,   721,   142,   115,   758,   759,   690,   761,
     142,   763,   764,   142,   142,    10,    89,   812,   142,   800,
     772,   812,   774,   741,   776,   777,   807,   808,     9,   747,
     811,    10,   139,   142,   142,   753,   115,   142,   139,    17,
      18,    69,   145,    21,   790,   142,   798,   803,   142,   801,
     142,    57,   833,    57,   800,   142,   144,   803,   142,   142,
     812,   807,   808,   144,   142,   811,   420,    69,    89,    47,
      48,    91,   958,   812,    52,    53,   638,   902,   803,    94,
     930,   957,    84,    85,    97,    63,    64,   833,   858,    92,
     118,   119,   120,   121,   122,   876,   894,   861,   780,   648,
     638,   639,   872,    -1,    -1,    -1,   887,    -1,   826,    -1,
      -1,    -1,   858,   115,   116,   117,   118,   119,   120,   121,
     122,    41,    42,    43,    44,    45,   872,    -1,   810,    -1,
     876,    -1,    -1,   885,   712,    -1,    -1,    -1,    -1,    -1,
     921,   887,   923,   889,    -1,    -1,   724,    -1,   564,    -1,
     931,   903,   904,   905,   906,    -1,    -1,    -1,   910,   911,
     912,    -1,   914,   915,    -1,   758,   759,    -1,   761,    -1,
     763,   764,    -1,    -1,    -1,   921,    -1,   923,   930,    -1,
      -1,   774,    -1,   776,   777,   931,     2,   933,     4,    -1,
      53,   944,    55,    56,    57,    58,   956,    -1,   975,    -1,
      -1,   954,    -1,   955,    -1,   957,   958,    -1,    -1,   955,
     748,    -1,   750,    -1,   966,    -1,    -1,   969,   970,   971,
     972,   199,    -1,    -1,   202,   203,   204,    90,    -1,    -1,
      -1,    -1,   955,    96,    50,    -1,    -1,   989,    54,    -1,
      -1,   819,   220,   821,   222,   223,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    -1,
      76,    84,    85,    -1,    -1,   651,    -1,    -1,   654,    -1,
      -1,    -1,    -1,    89,    90,    91,    92,    -1,    53,   665,
      55,    56,    57,    58,   700,    -1,    -1,    -1,   111,   705,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     838,   839,    -1,    -1,   720,    -1,    -1,    -1,    -1,    -1,
     903,   904,   905,   906,    -1,    90,    -1,   910,   911,   912,
      -1,   914,   915,   301,    -1,    -1,   149,    -1,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,     2,   334,     4,    -1,    -1,
     898,     2,   900,     4,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   966,    -1,    -1,   969,   970,   971,   972,
      -1,    -1,    -1,    -1,    -1,   201,    69,    -1,   804,    -1,
     806,    -1,    -1,    -1,    -1,    -1,   989,    -1,   936,    -1,
      -1,    84,    85,    50,   382,   383,   822,    54,    -1,    50,
      -1,   827,    -1,    -1,   392,   393,   394,   233,    -1,    -1,
     398,    -1,   400,   401,   402,   241,   242,    -1,    53,    76,
      55,    56,    57,    58,   117,   118,   119,   120,   121,   122,
      -1,   419,    89,    90,    91,   261,   424,    -1,    89,    53,
      -1,    55,    56,    57,    58,   433,    -1,    -1,   436,    -1,
      -1,    -1,   848,    -1,   850,    90,   882,   883,   854,    -1,
     448,    96,    97,    -1,    -1,   291,    -1,   863,    -1,   865,
     296,    -1,    -1,    -1,    -1,    -1,    90,   303,   304,    -1,
       0,    69,   117,    97,    -1,   120,    -1,    -1,     8,     9,
      10,    -1,    -1,    13,    14,    15,    84,    85,    18,    -1,
      -1,   489,   490,   117,    -1,    -1,   932,    -1,    28,    -1,
     336,    -1,   147,   501,    -1,    -1,    -1,    -1,    38,    39,
      -1,    41,    42,    43,    44,    45,    -1,    -1,    -1,    -1,
     118,   119,   120,   121,   122,    -1,   962,    -1,   964,    -1,
      -1,    -1,    -1,   939,   201,    -1,    -1,    -1,    -1,   945,
     201,   947,    -1,    -1,   950,    -1,    -1,    -1,    53,    -1,
      55,    56,    57,    58,    -1,    -1,    86,    -1,    -1,    53,
      -1,    55,    56,    57,    58,   563,   233,    -1,    -1,    -1,
     568,    -1,   233,    -1,   241,   242,    -1,    -1,   984,    -1,
     241,   242,   580,    -1,   420,    90,    -1,    -1,    -1,    -1,
      -1,    96,    97,   429,   261,    -1,    90,    -1,    -1,    -1,
      -1,    -1,    96,    97,    -1,   603,    -1,    -1,    -1,   139,
     446,   141,   117,    -1,   144,   120,   146,   147,    -1,   149,
      -1,    -1,    -1,   117,   291,    -1,   120,    -1,    -1,   296,
     291,    -1,    -1,    -1,    -1,   296,   303,   304,   636,   144,
      -1,    -1,   303,    53,    -1,    55,    56,    57,    58,     2,
     144,     4,    53,    -1,    55,    56,    57,    58,    -1,    -1,
      -1,    53,    -1,    55,    56,    57,    58,    -1,    -1,   336,
      -1,   507,   670,    -1,    -1,   336,   674,    -1,   676,   677,
      90,    -1,    -1,    -1,   682,   683,    96,    97,    -1,    90,
      -1,    -1,   690,    -1,    -1,    96,    97,    50,    90,    -1,
      -1,    -1,    -1,    -1,    96,    -1,    -1,   117,    -1,    -1,
     120,    -1,    -1,    -1,    -1,    -1,   117,    -1,    -1,   120,
      -1,   557,    -1,   559,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   732,    -1,    -1,    -1,    -1,   737,
      -1,   739,   740,    -1,    -1,    -1,   582,    -1,    -1,    -1,
      -1,    -1,    -1,   420,    -1,    -1,    -1,    -1,    -1,   420,
      -1,    -1,   429,    -1,    -1,    -1,    -1,    -1,   429,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   446,
      -1,    -1,   780,    -1,    -1,    -1,   784,    -1,    -1,    -1,
       0,    -1,   790,   629,    -1,    -1,    -1,    -1,     8,     9,
      10,    -1,    -1,    -1,    14,    15,    -1,    -1,    18,   645,
     646,    -1,   810,    -1,   812,    -1,    -1,    27,    -1,    -1,
      -1,   657,    -1,    -1,    -1,    -1,    -1,    -1,    38,    39,
     666,    41,    42,    43,    44,    45,   834,   673,    -1,    -1,
     507,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   201,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    -1,    -1,    84,    85,    86,    -1,    88,   715,
     233,    -1,    -1,    -1,    -1,    -1,    -1,   723,   241,   242,
     557,    -1,   559,    -1,   730,   731,   557,    -1,   559,    -1,
     110,   111,    -1,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,    -1,    -1,   582,    -1,    -1,    -1,    -1,
      -1,   582,    -1,    -1,    -1,    -1,    -1,    -1,   138,   139,
     140,   141,   142,    -1,    -1,    -1,   146,   147,   291,   149,
      -1,    -1,    -1,   296,    -1,    -1,    -1,    -1,    -1,    -1,
     303,    -1,    -1,    -1,    -1,    -1,    -1,   955,    -1,    -1,
      -1,    -1,   629,    -1,   800,    -1,    -1,    -1,    -1,    -1,
      -1,   807,   808,    -1,    -1,   811,    -1,    -1,   645,   646,
      -1,    -1,    -1,   336,   645,   646,    -1,    -1,    -1,    -1,
     657,   658,    -1,    -1,    -1,    -1,   657,   833,    -1,   666,
      -1,    -1,    -1,    -1,    -1,   666,   673,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   858,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   872,    -1,    -1,    -1,
     876,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   715,    -1,
      -1,   887,    -1,   889,   715,    -1,   723,    -1,    -1,    -1,
      -1,    -1,   723,   730,   731,    -1,    -1,   420,    -1,   730,
     731,    -1,    -1,    -1,    -1,    -1,   429,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   921,    -1,   923,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   931,    -1,   933,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    70,    71,
      72,    73,    74,    75,    76,    -1,    78,    79,    -1,    47,
      48,    -1,    84,    85,    52,    53,    54,    -1,    -1,    -1,
      -1,    -1,    -1,   800,    -1,    -1,    64,    -1,    -1,   800,
     807,   808,    -1,    -1,   811,    -1,   807,   808,    76,    -1,
     811,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,    89,    90,    91,    -1,    -1,   833,    -1,    -1,    -1,
      -1,    -1,   833,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   858,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   557,   872,   559,    -1,    -1,   876,
      -1,   872,    45,    -1,    -1,   876,    -1,    -1,    -1,    -1,
     887,    -1,   889,    -1,    -1,    -1,   887,    -1,   889,   582,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    -1,
      -1,    84,    85,    -1,   921,    -1,   923,    -1,    -1,    -1,
     921,    -1,   923,    -1,   931,    -1,   933,    -1,    -1,    -1,
     931,   199,   933,    -1,   202,   203,   204,    -1,   111,    -1,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
      -1,    -1,   645,   646,    -1,    -1,    69,    70,    71,    72,
      73,    74,    75,    -1,   657,    78,    79,    -1,    -1,   142,
      -1,    84,    85,   666,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   261,    -1,    -1,    -1,    -1,    -1,    -1,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   715,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     723,    -1,    -1,    -1,    -1,    -1,   304,   730,   731,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   800,    -1,    -1,
      -1,    -1,    -1,    -1,   807,   808,    -1,    -1,   811,    -1,
      -1,    -1,    -1,    -1,   392,   393,   394,    -1,    -1,    -1,
      -1,    -1,   400,   401,   402,    -1,    -1,    -1,    -1,    -1,
     833,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   419,    -1,    -1,    -1,    -1,   424,    69,    70,    71,
      72,    73,    74,    75,    -1,   433,    78,    79,   436,    -1,
      -1,    -1,    84,    85,    -1,    -1,    -1,    -1,   446,    -1,
      -1,    -1,    -1,   876,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   887,    -1,   889,    -1,    -1,    -1,
      -1,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   489,   490,    -1,    -1,    -1,    -1,    -1,   921,    -1,
     923,    -1,    -1,   501,    -1,    -1,    -1,    -1,   931,   507,
     933,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       0,     1,    -1,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    11,    12,    -1,    -1,    -1,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    31,    32,    33,    34,    35,    36,    37,    -1,    -1,
      40,    -1,    -1,    -1,    -1,   563,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    -1,
      60,    61,    -1,    63,    64,    65,    -1,    67,    68,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   603,    -1,    87,    -1,    -1,
      90,    91,    -1,    93,    94,    -1,    96,    -1,    98,    99,
     100,   101,   102,   103,   104,    -1,    -1,    -1,    -1,    -1,
      -1,   629,    -1,    -1,    -1,    -1,    -1,    -1,   636,    -1,
      -1,    -1,    -1,   123,   124,   125,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   147,    -1,   149,
      -1,    -1,   670,    -1,    -1,   673,   674,    -1,    -1,   677,
       0,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     8,     9,
      10,    -1,   690,    13,    14,    15,    -1,    -1,    18,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    39,
      -1,    41,    42,    43,    44,    45,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   732,    -1,    -1,    -1,    -1,   737,
      -1,   739,   740,    -1,    -1,    -1,    -1,    -1,    -1,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    -1,    -1,    84,    85,    86,    -1,    88,    89,
      -1,    -1,    -1,    -1,    -1,    95,    -1,    -1,    -1,    -1,
      -1,    -1,   780,    -1,    -1,    -1,   784,    -1,   108,    -1,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   810,    -1,   812,    -1,    -1,    -1,   138,   139,
     140,   141,   142,    -1,     0,   145,   146,   147,    -1,   149,
      -1,    -1,     8,     9,    10,    -1,   834,    13,    14,    15,
      -1,    -1,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    -1,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,
     858,    -1,    38,    39,    -1,    41,    42,    43,    44,    45,
      -1,    -1,    -1,    -1,   872,    -1,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    -1,
      -1,    84,    85,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    -1,    -1,    84,    85,
      86,    -1,    88,    89,    -1,    -1,    -1,    -1,   111,    95,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
      -1,    -1,   108,    -1,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   139,   140,   141,   142,     0,    -1,   145,
     146,   147,    -1,   149,    -1,     8,     9,    10,    -1,    -1,
      13,    14,    15,    -1,    -1,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    26,    -1,    28,    29,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    39,    -1,    41,    42,
      43,    44,    45,    -1,    -1,    -1,    -1,    -1,    -1,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    -1,    -1,    84,    85,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    -1,
      -1,    84,    85,    86,    -1,    88,    89,    -1,    -1,    -1,
      -1,    -1,    95,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,    -1,    -1,   108,    -1,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   139,   140,   141,   142,
       0,    -1,   145,   146,   147,    -1,   149,    -1,     8,     9,
      10,    -1,    -1,    13,    14,    15,    -1,    -1,    18,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    39,
      -1,    41,    42,    43,    44,    45,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    -1,    -1,    84,    85,    86,    -1,    -1,    89,
      -1,    -1,    -1,    -1,    -1,    95,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   108,    -1,
      -1,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   138,   139,
     140,   141,   142,     0,    -1,   145,   146,   147,    -1,   149,
      -1,     8,     9,    10,    -1,    -1,    13,    14,    15,    -1,
      -1,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    39,    -1,    41,    42,    43,    44,    45,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    -1,    -1,    84,    85,    86,
      -1,    -1,    89,    -1,    -1,    -1,    -1,    -1,    95,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   108,    -1,    -1,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   138,   139,   140,   141,   142,     0,    -1,   145,   146,
     147,    -1,   149,    -1,     8,     9,    10,    -1,    -1,    13,
      14,    15,    -1,    -1,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    29,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    39,    -1,    41,    42,    43,
      44,    45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    -1,    -1,
      84,    85,    86,    -1,    88,    89,    -1,    -1,    -1,    -1,
      -1,    95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   108,    -1,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   139,   140,   141,   142,     0,
      -1,   145,   146,   147,    -1,   149,    -1,     8,     9,    10,
      -1,    -1,    13,    14,    15,    -1,    -1,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    39,    -1,
      41,    42,    43,    44,    45,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    -1,    -1,    84,    85,    86,    -1,    -1,    89,    -1,
      -1,    -1,    -1,    -1,    95,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     111,    -1,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   138,   139,   140,
     141,   142,     0,   144,   145,   146,   147,    -1,   149,    -1,
       8,     9,    10,    -1,    -1,    13,    14,    15,    -1,    -1,
      18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    39,    -1,    41,    42,    43,    44,    45,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    -1,    -1,    84,    85,    86,    -1,
      -1,    89,    -1,    -1,    -1,    -1,    -1,    95,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     108,    -1,    -1,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   139,   140,   141,   142,     0,    -1,   145,   146,   147,
      -1,   149,    -1,     8,     9,    10,    -1,    -1,    13,    14,
      15,    -1,    -1,    18,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    27,    28,    29,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    39,    -1,    41,    42,    43,    44,
      45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    -1,    -1,    84,
      85,    86,    -1,    -1,    89,    -1,    -1,    -1,    -1,    -1,
      95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   111,    -1,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   138,   139,   140,   141,   142,     0,   144,
     145,   146,   147,    -1,   149,    -1,     8,     9,    10,    -1,
      -1,    13,    14,    15,    -1,    -1,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    39,    -1,    41,
      42,    43,    44,    45,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      -1,    -1,    84,    85,    86,    -1,     0,    89,    -1,    -1,
      -1,    -1,    -1,    95,     8,     9,    10,    -1,    -1,    -1,
      14,    15,    -1,    -1,    18,    -1,    -1,    -1,    -1,   111,
      -1,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,    -1,    -1,    -1,    38,    39,    -1,    41,    42,    43,
      44,    45,    -1,    -1,    -1,    -1,    -1,   139,   140,   141,
     142,    -1,   144,   145,   146,   147,    -1,   149,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    -1,    -1,
      84,    85,    86,    -1,    88,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   110,   111,    -1,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   139,   140,   141,   142,    -1,
      -1,    -1,   146,   147,     1,   149,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    15,    16,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,    36,
      37,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    46,
      47,    -1,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    -1,    60,    61,    -1,    63,    64,    65,    -1,
      67,    68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      87,    -1,    -1,    90,    91,    -1,    93,    94,    -1,    96,
      -1,    98,    99,   100,   101,   102,   103,   104,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   123,   124,   125,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     147,     1,   149,     3,     4,     5,     6,     7,    -1,    -1,
      10,    11,    12,    -1,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    31,    32,    33,    34,    35,    36,    37,    -1,    -1,
      40,    -1,    -1,    -1,    -1,    -1,    46,    47,    -1,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    -1,
      60,    61,    -1,    63,    64,    65,    -1,    67,    68,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,
      90,    91,    -1,    93,    94,    -1,    96,    -1,    98,    99,
     100,   101,   102,   103,   104,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   123,   124,   125,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   147,     1,   149,
       3,     4,     5,     6,     7,    -1,    -1,    10,    11,    12,
      -1,    -1,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,
      33,    34,    35,    36,    37,    -1,    -1,    40,    -1,    -1,
      -1,    -1,    -1,    46,    47,    -1,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    -1,    60,    61,    -1,
      63,    64,    65,    -1,    67,    68,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    87,    -1,    -1,    90,    91,    -1,
      93,    94,    -1,    96,    -1,    98,    99,   100,   101,   102,
     103,   104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     123,   124,   125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     1,    -1,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    11,    12,   147,    -1,   149,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    -1,    31,    32,    33,    34,    35,    36,    37,    -1,
      -1,    40,    -1,    -1,    -1,    -1,    -1,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      -1,    60,    61,    -1,    63,    64,    65,    -1,    67,    68,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,    -1,
      -1,    90,    91,    -1,    93,    94,    -1,    96,    -1,    98,
      99,   100,   101,   102,   103,   104,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   123,   124,   125,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     139,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   147,     1,
     149,     3,     4,     5,     6,     7,    -1,    -1,    10,    11,
      12,    -1,    -1,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,
      32,    33,    34,    35,    36,    37,    -1,    -1,    40,    -1,
      -1,    -1,    -1,    -1,    46,    47,    -1,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    -1,    60,    61,
      -1,    63,    64,    65,    -1,    67,    68,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,    90,    91,
      -1,    93,    94,    -1,    96,    -1,    98,    99,   100,   101,
     102,   103,   104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   123,   124,   125,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,     7,
      -1,     9,    10,    11,    12,   147,    -1,   149,    16,    17,
      -1,    19,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    -1,    31,    32,    33,    34,    35,    36,    37,
      -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    46,    47,
      -1,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    -1,    60,    61,    -1,    63,    64,    65,    -1,    67,
      68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,
      -1,    -1,    90,    91,    -1,    93,    94,    -1,    96,    -1,
      98,    99,   100,   101,   102,   103,   104,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   123,   124,   125,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    11,    12,   147,
      -1,   149,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,
      34,    35,    36,    37,    -1,    -1,    40,    -1,    -1,    -1,
      -1,    -1,    46,    47,    -1,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    -1,    60,    61,    -1,    63,
      64,    65,    -1,    67,    68,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    87,    -1,    -1,    90,    91,    -1,    93,
      94,    -1,    96,    -1,    98,    99,   100,   101,   102,   103,
     104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,
     124,   125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   146,   147,     1,   149,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    11,    12,    -1,    -1,    -1,    16,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,    36,
      37,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    46,
      47,    -1,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    -1,    60,    61,    -1,    63,    64,    65,    -1,
      67,    68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      87,    -1,    -1,    90,    91,    -1,    93,    94,    -1,    96,
      -1,    98,    99,   100,   101,   102,   103,   104,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   123,   124,   125,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   146,
     147,     1,   149,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    11,    12,    -1,    -1,    -1,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    31,    32,    33,    34,    35,    36,    37,    -1,    -1,
      40,    -1,    -1,    -1,    -1,    -1,    46,    47,    -1,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    -1,
      60,    61,    -1,    63,    64,    65,    -1,    67,    68,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,
      90,    91,    -1,    93,    94,    -1,    96,    -1,    98,    99,
     100,   101,   102,   103,   104,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   123,   124,   125,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   147,     1,   149,
       3,     4,     5,     6,     7,    -1,    -1,    10,    11,    12,
      -1,    -1,    -1,    16,    17,    -1,    19,    20,    21,    22,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,
      33,    34,    35,    36,    37,    -1,    -1,    40,    -1,    -1,
      -1,    -1,    -1,    46,    47,    -1,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    -1,    60,    61,    -1,
      63,    64,    65,    -1,    67,    68,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    87,    -1,    -1,    90,    91,    -1,
      93,    94,    -1,    96,    -1,    98,    99,   100,   101,   102,
     103,   104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     123,   124,   125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,    -1,     7,    -1,
      -1,    -1,    11,    12,   147,    -1,   149,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    -1,    31,    32,    33,    34,    35,    36,    37,    -1,
      -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    47,    -1,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    -1,    63,    64,    65,    -1,    67,    68,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,    -1,
      -1,    90,    91,    -1,    93,    94,    -1,    96,    97,    98,
      99,   100,   101,   102,   103,   104,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,    -1,     7,    -1,
      -1,    -1,    11,    12,   123,   124,   125,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    -1,    31,    32,    33,    34,    35,    36,    37,    -1,
     149,    40,    -1,    -1,    -1,    -1,    -1,    -1,    47,    -1,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      -1,    60,    61,    -1,    63,    64,    65,    -1,    67,    68,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,    -1,
      -1,    90,    91,    -1,    93,    94,    -1,    -1,    -1,    98,
      99,   100,   101,   102,   103,   104,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   123,   124,   125,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,    -1,     7,    -1,    -1,    -1,    11,    12,   147,    -1,
     149,    16,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    47,    -1,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    -1,    60,    61,    -1,    63,    64,
      65,    -1,    67,    68,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    87,    -1,    -1,    90,    91,    -1,    93,    94,
      -1,    -1,    -1,    98,    99,   100,   101,   102,   103,   104,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    11,    12,   123,   124,
     125,    16,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    36,    37,    -1,   149,    40,    -1,    -1,    -1,    -1,
      -1,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    -1,    60,    61,    -1,    63,    64,
      65,    -1,    67,    68,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    87,    -1,    -1,    90,    91,    -1,    93,    94,
      -1,    96,    -1,    98,    99,   100,   101,   102,   103,   104,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,   124,
     125,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    11,    12,    -1,    -1,    -1,
      16,    17,   147,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,
      36,    37,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,
      46,    47,    -1,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    -1,    60,    61,    -1,    63,    64,    65,
      -1,    67,    68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    87,    -1,    -1,    90,    91,    -1,    93,    94,    -1,
      96,    -1,    98,    99,   100,   101,   102,   103,   104,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,   124,   125,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   147,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    -1,    -1,    -1,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      -1,    -1,    -1,    -1,    -1,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    -1,    -1,    78,    79,    -1,
      -1,    82,    83,    84,    85,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    96,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,    -1,   124,   125,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   143,   144,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    -1,
      -1,    -1,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    -1,    -1,    -1,    -1,    -1,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    -1,    -1,    78,
      79,    -1,    -1,    82,    83,    84,    85,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,    -1,   124,   125,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   143,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      -1,    -1,    -1,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    -1,    -1,    -1,    -1,    -1,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    -1,    -1,
      78,    79,    -1,    -1,    82,    83,    84,    85,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,
      -1,    99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,    -1,   124,   125,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   143,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    -1,    -1,    -1,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    -1,    -1,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    -1,
      -1,    78,    79,    -1,    -1,    82,    83,    84,    85,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,
      -1,    -1,    99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,    -1,   124,   125,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   143,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    -1,    -1,    -1,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    -1,
      -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      -1,    -1,    78,    79,    -1,    -1,    82,    83,    84,    85,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,    -1,   124,   125,
      -1,    -1,     3,     4,     5,    -1,     7,    -1,    -1,    -1,
      11,    12,    -1,    -1,    -1,    16,    17,   143,    19,    20,
      21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      31,    32,    33,    34,    35,    36,    37,    -1,    -1,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    47,    -1,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    -1,    60,
      61,    -1,    63,    64,    65,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,    90,
      91,    -1,    93,    94,    -1,    -1,    -1,    98,    99,   100,
     101,   102,   103,   104,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,     7,
      -1,    -1,   123,    11,    12,    -1,    -1,    -1,    16,    17,
      -1,    19,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,   142,    -1,    31,    32,    33,    34,    35,    36,    37,
      -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    47,
      -1,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    -1,    60,    61,    -1,    63,    64,    65,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,
      -1,    -1,    90,    91,    -1,    93,    94,    -1,    -1,    -1,
      98,    99,   100,   101,   102,   103,   104,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,    -1,    -1,   123,    11,    12,    -1,    -1,
      -1,    16,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,   142,    -1,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    -1,    60,    61,    -1,    63,    64,
      65,    -1,    67,    68,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    87,    -1,    -1,    90,    91,    -1,    93,    94,
      -1,    96,    -1,    98,    99,   100,   101,   102,   103,   104,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    11,    12,   123,   124,
     125,    16,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    46,    47,    -1,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    -1,    60,    61,    -1,    63,    64,
      65,    -1,    67,    68,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    87,    -1,    -1,    90,    91,    -1,    93,    94,
      -1,    96,    -1,    98,    99,   100,   101,   102,   103,   104,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,    -1,     7,    -1,    -1,    -1,    11,    12,   123,   124,
     125,    16,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    47,    -1,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    -1,    63,    64,
      65,    -1,    67,    68,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    87,    -1,    -1,    90,    91,    -1,    93,    94,
      -1,    96,    97,    98,    99,   100,   101,   102,   103,   104,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,    -1,     7,    -1,    -1,    -1,    11,    12,   123,   124,
     125,    16,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    47,    -1,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    -1,    63,    64,
      65,    -1,    67,    68,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    87,    -1,    -1,    90,    91,    -1,    93,    94,
      -1,    96,    97,    98,    99,   100,   101,   102,   103,   104,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,    -1,     7,    -1,    -1,    -1,    11,    12,   123,   124,
     125,    16,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    47,    -1,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    -1,    63,    64,
      65,    -1,    67,    68,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    87,    -1,    -1,    90,    91,    -1,    93,    94,
      -1,    96,    -1,    98,    99,   100,   101,   102,   103,   104,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,    -1,     7,    -1,    -1,    -1,    11,    12,   123,   124,
     125,    16,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    47,    -1,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    -1,    63,    64,
      65,    -1,    67,    68,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    87,    -1,    -1,    90,    91,    -1,    93,    94,
      -1,    -1,    97,    98,    99,   100,   101,   102,   103,   104,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,    -1,     7,    -1,    -1,    -1,    11,    12,   123,   124,
     125,    16,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    47,    -1,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    -1,    63,    64,
      65,    -1,    67,    68,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    87,    -1,    -1,    90,    91,    -1,    93,    94,
      -1,    96,    -1,    98,    99,   100,   101,   102,   103,   104,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,    -1,     7,    -1,    -1,    -1,    11,    12,   123,   124,
     125,    16,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    47,    -1,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    -1,    63,    64,
      65,    -1,    67,    68,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    87,    -1,    -1,    90,    91,    -1,    93,    94,
      -1,    -1,    -1,    98,    99,   100,   101,   102,   103,   104,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,    -1,     7,    -1,    -1,    -1,    11,    12,   123,   124,
     125,    16,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    47,    -1,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    -1,    60,    61,    -1,    63,    64,
      65,    -1,    67,    68,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    87,    -1,    -1,    90,    91,    -1,    93,    94,
      -1,    96,    -1,    98,    99,   100,   101,   102,   103,   104,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,    -1,     7,    -1,    -1,    -1,    11,    12,   123,   124,
     125,    16,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    47,    -1,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    -1,    60,    61,    -1,    63,    64,
      65,    -1,    67,    68,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    87,    -1,    -1,    90,    91,    -1,    93,    94,
      -1,    96,    -1,    98,    99,   100,   101,   102,   103,   104,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,    -1,     7,    -1,    -1,    -1,    11,    12,   123,   124,
     125,    16,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    47,    -1,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    -1,    60,    61,    -1,    63,    64,
      65,    -1,    67,    68,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    87,    -1,    -1,    90,    91,    -1,    93,    94,
      -1,    96,    -1,    98,    99,   100,   101,   102,   103,   104,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,    -1,     7,    -1,    -1,    -1,    11,    12,   123,   124,
     125,    16,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    47,    -1,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    -1,    60,    61,    -1,    63,    64,
      65,    -1,    67,    68,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    87,    -1,    -1,    90,    91,    -1,    93,    94,
      -1,    96,    -1,    98,    99,   100,   101,   102,   103,   104,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,    -1,     7,    -1,    -1,    -1,    11,    12,   123,   124,
     125,    16,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    47,    -1,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    -1,    60,    61,    -1,    63,    64,
      65,    -1,    67,    68,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    87,    -1,    -1,    90,    91,    -1,    93,    94,
      -1,    96,    -1,    98,    99,   100,   101,   102,   103,   104,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,    -1,     7,    -1,    -1,    -1,    11,    12,   123,   124,
     125,    16,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    47,    -1,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    -1,    60,    61,    -1,    63,    64,
      65,    -1,    67,    68,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    87,    -1,    -1,    90,    91,    -1,    93,    94,
      -1,    -1,    -1,    98,    99,   100,   101,   102,   103,   104,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,    -1,     7,    -1,    -1,    -1,    11,    12,   123,   124,
     125,    16,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    47,    -1,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    -1,    60,    61,    -1,    63,    64,
      65,    -1,    67,    68,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    87,    -1,    -1,    90,    91,    -1,    93,    94,
      -1,    -1,    -1,    98,    99,   100,   101,   102,   103,   104,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,    -1,     7,    -1,    -1,    -1,    11,    12,   123,   124,
     125,    16,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    47,    -1,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    -1,    60,    61,    -1,    63,    64,
      65,    -1,    67,    68,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    87,    -1,    -1,    90,    91,    -1,    93,    94,
      -1,    -1,    -1,    98,    99,   100,   101,   102,   103,   104,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,    -1,     7,    -1,    -1,    -1,    11,    12,   123,   124,
     125,    16,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    47,    -1,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    -1,    60,    61,    -1,    63,    64,
      65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    87,    -1,    -1,    90,    91,    -1,    93,    94,
      -1,    96,    -1,    98,    99,   100,   101,   102,   103,   104,
      -1,    -1,    -1,     3,     4,     5,    -1,     7,    -1,    -1,
      -1,    11,    12,    -1,    -1,    -1,    16,    17,   123,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    31,    32,    33,    34,    35,    36,    37,    -1,    -1,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    47,    -1,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    -1,
      60,    61,    -1,    63,    64,    65,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,
      90,    91,    -1,    93,    94,    -1,    96,    -1,    98,    99,
     100,   101,   102,   103,   104,    -1,    -1,    -1,     3,     4,
       5,    -1,     7,    -1,    -1,    -1,    11,    12,    -1,    -1,
      -1,    16,    17,   123,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    47,    -1,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    -1,    60,    61,    -1,    63,    64,
      65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,
      -1,    -1,    87,    -1,    -1,    90,    91,    -1,    93,    94,
      -1,    -1,    -1,    98,    99,   100,   101,   102,   103,   104,
      -1,    -1,    -1,     3,     4,     5,    -1,     7,    -1,    -1,
      -1,    11,    12,    -1,    -1,    -1,    16,    17,   123,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    31,    32,    33,    34,    35,    36,    37,    -1,    -1,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    47,    -1,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    -1,
      60,    61,    -1,    63,    64,    65,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,
      90,    91,    -1,    93,    94,    -1,    -1,    -1,    98,    99,
     100,   101,   102,   103,   104,    -1,    -1,    -1,     3,     4,
       5,    -1,     7,    -1,    -1,    -1,    11,    12,    -1,    -1,
      -1,    16,    17,   123,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    47,    -1,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    -1,    60,    61,    -1,    63,    64,
      65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    87,    -1,    -1,    90,    91,    -1,    93,    94,
      -1,    -1,    -1,    98,    99,   100,   101,   102,   103,   104,
      -1,    -1,    -1,     3,     4,     5,    -1,     7,    -1,    -1,
      -1,    11,    12,    -1,    -1,    -1,    16,    17,   123,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    31,    32,    33,    34,    35,    36,    37,    -1,    -1,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    47,    -1,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    -1,
      60,    61,    -1,    63,    64,    65,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,
      90,    91,    -1,    93,    94,    -1,    -1,    -1,    98,    99,
     100,   101,   102,   103,   104,    -1,    -1,    -1,     3,     4,
       5,    -1,     7,    -1,    -1,    -1,    11,    12,    -1,    -1,
      -1,    16,    17,   123,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    47,    -1,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    -1,    60,    61,    -1,    63,    64,
      65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    87,    -1,    -1,    90,    91,    -1,    93,    94,
      -1,    -1,    -1,    98,    99,   100,   101,   102,   103,   104,
      -1,    -1,    -1,    -1,    -1,    53,    54,    -1,    -1,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    -1,    -1,
      78,    79,    -1,    -1,    82,    83,    84,    85,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,    -1,   124,   125,    -1,    -1,
      -1,    -1,    -1,    53,    54,    -1,    -1,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   143,   144,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    -1,    -1,    78,    79,
      -1,    -1,    82,    83,    84,    85,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,    -1,   124,   125,    -1,    -1,    -1,    -1,
      -1,    53,    54,    -1,    -1,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   143,   144,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    -1,    -1,    78,    79,    -1,    -1,
      82,    83,    84,    85,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    96,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,    -1,   124,   125,    -1,    -1,    -1,    -1,    -1,    53,
      54,    -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   143,   144,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    -1,    -1,    78,    79,    -1,    -1,    82,    83,
      84,    85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,    -1,
     124,   125,    -1,    -1,    -1,    -1,    -1,    53,    54,    -1,
      -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   143,
     144,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      -1,    -1,    78,    79,    -1,    -1,    82,    83,    84,    85,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,    -1,   124,   125,
      -1,    -1,    -1,    -1,    -1,    53,    54,    -1,    -1,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   143,   144,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    -1,    -1,
      78,    79,    -1,    -1,    82,    83,    84,    85,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,    -1,   124,   125,    -1,    -1,
      -1,    -1,    -1,    53,    54,    -1,    -1,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   143,   144,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    -1,    -1,    78,    79,
      -1,    -1,    82,    83,    84,    85,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,    -1,   124,   125,    -1,    -1,    -1,    -1,
      -1,    53,    54,    -1,    -1,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   143,   144,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    -1,    -1,    78,    79,    -1,    -1,
      82,    83,    84,    85,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    96,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,    -1,   124,   125,    -1,    -1,    -1,    -1,    -1,    53,
      54,    -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   143,   144,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    -1,    -1,    78,    79,    -1,    -1,    82,    83,
      84,    85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,    -1,
     124,   125,    -1,    -1,    -1,    -1,    -1,    53,    54,    -1,
      -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   143,
     144,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      -1,    -1,    78,    79,    -1,    -1,    82,    83,    84,    85,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,    -1,   124,   125,
      -1,    -1,    -1,    -1,    -1,    53,    54,    -1,    -1,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   143,   144,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    -1,    -1,
      78,    79,    -1,    -1,    82,    83,    84,    85,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,    -1,   124,   125,    -1,    -1,
      -1,    -1,    -1,    53,    54,    -1,    -1,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   143,   144,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    -1,    -1,    78,    79,
      -1,    -1,    82,    83,    84,    85,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,    -1,   124,   125,    -1,    -1,    -1,    -1,
      -1,    53,    54,    -1,    -1,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   143,   144,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    -1,    -1,    78,    79,    -1,    -1,
      82,    83,    84,    85,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    96,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,    -1,   124,   125,    -1,    -1,    -1,    -1,    -1,    53,
      54,    -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   143,   144,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    -1,    -1,    78,    79,    -1,    -1,    82,    83,
      84,    85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    96,    -1,    -1,    -1,    -1,    -1,    45,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,    45,
     124,   125,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    -1,    -1,    84,    85,   143,
      -1,    -1,    -1,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    -1,    -1,    84,    85,
      -1,    -1,    -1,    -1,   111,    -1,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   111,    -1,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   151,   152,     0,     1,     3,     4,     5,     6,     7,
      11,    12,    16,    17,    19,    20,    21,    22,    23,    24,
      25,    31,    32,    33,    34,    35,    36,    37,    40,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    60,    61,    63,    64,    65,    67,    68,    87,
      90,    91,    93,    94,    96,    98,    99,   100,   101,   102,
     103,   104,   123,   124,   125,   153,   154,   155,   160,   162,
     164,   165,   168,   169,   171,   172,   173,   175,   176,   187,
     204,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   254,   255,   268,   269,   270,   271,   272,
     273,   274,   277,   285,   287,   288,   289,   290,   291,   292,
     315,   326,   155,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    57,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    78,    79,    82,
      83,    84,    85,    96,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   124,   125,   143,   179,   180,   181,
     182,   184,   185,   285,   287,    22,    23,    31,    40,    59,
      87,    90,    96,    97,   124,   168,   176,   187,   190,   195,
     198,   201,   221,   289,   291,   292,   313,   314,   195,   195,
     144,   196,   197,   144,   192,   196,   144,   149,   320,    55,
     181,   320,   156,   138,    32,    33,   187,   221,   315,   187,
      57,     1,    90,   158,   159,   160,   170,   171,   326,   162,
     191,   201,   313,   326,   190,   312,   313,   326,    47,    87,
     123,   142,   175,   204,   221,   289,   292,   248,   249,    55,
      56,    58,   179,   280,   286,   279,   280,   280,   148,   275,
     148,   278,    60,    61,   164,   187,   187,   147,   149,   319,
     324,   325,    41,    42,    43,    44,    45,    38,    39,    29,
     252,   110,   142,    90,    96,   172,   110,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      84,    85,   111,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,    86,   140,   141,   205,   162,   163,   163,
     208,   210,   163,   319,   325,   163,    87,   169,   176,   221,
     238,   289,   292,    53,    57,    84,    87,   177,   178,   221,
     289,   292,   178,    34,    35,    36,    37,    50,    51,    52,
      53,    57,   144,   179,   290,   310,    86,   141,    27,   138,
     256,   271,    88,    88,   192,   196,   256,   142,   190,    57,
     190,   190,   110,    89,   142,   199,   326,    86,   140,   141,
      88,    88,   142,   199,   195,   320,   321,   195,   194,   195,
     326,   162,   321,   162,    55,    64,    65,   161,   144,   188,
     138,   158,    86,   141,    88,   160,   170,   146,   319,   325,
     321,   206,   145,   142,   149,   323,   142,   323,   139,   323,
     320,    57,    60,    61,   172,   174,   142,    86,   140,   141,
      53,    55,    56,    57,    58,    90,    96,    97,   117,   120,
     144,   250,   296,   297,   298,   299,   300,   301,   304,   305,
     306,   307,   308,    62,   105,   106,   107,   281,   107,   281,
     107,    66,   107,   107,   276,   281,   107,    62,   107,    69,
      69,   147,   155,   163,   163,   163,   163,   160,   162,   162,
     253,    96,   164,   190,   201,   202,   170,   142,   175,   142,
     164,   187,   190,   202,   187,   187,   187,   187,   187,   187,
     187,   187,   187,   187,   187,   187,   187,   187,   187,   187,
     187,   187,   187,   187,   187,   187,   187,   187,   187,   187,
      53,    54,    57,   184,   192,   316,   317,   194,    53,    54,
      57,   184,   192,   316,   157,   158,    13,   234,   324,   234,
     163,   163,   319,    18,   261,   319,    57,    86,   140,   141,
      26,   162,    53,    57,   177,     1,   114,   293,   324,    86,
     140,   141,   217,   311,   218,    86,   141,   318,    53,    57,
     316,   316,   258,   257,   164,   187,   164,   187,    95,   166,
     183,   187,   190,    96,   190,   198,   313,    53,    57,   194,
      53,    57,   314,   321,   146,   321,   321,   181,   207,   187,
     153,   139,   316,   316,   187,   321,   160,   321,   313,   142,
     174,    53,    57,   194,    53,    57,   110,    53,    90,    96,
     239,   240,   241,   298,   296,    30,   108,   251,   142,   309,
     326,   142,   309,    53,   142,   309,    53,   283,   282,   148,
     281,   148,   187,   187,    77,   115,   243,   244,   326,   190,
     142,   321,   174,   142,    45,   320,    88,    88,   192,   196,
     320,   322,    88,    88,   192,   193,   196,   326,    10,   233,
       8,   264,   326,   158,    13,   158,    28,   235,   324,   235,
     261,   201,   233,    18,   259,   260,    53,    57,   194,    53,
      57,   212,   215,   324,   294,   214,    53,    57,   177,   194,
     157,   162,   144,   295,   296,   219,   193,   196,   193,   196,
     243,   243,    45,   167,   181,   190,   199,    88,   322,    88,
      88,   162,   139,   323,   172,   322,   190,   241,   142,   298,
     142,   321,   147,   245,   326,   158,   158,   299,   304,   306,
     308,   300,   301,   306,   300,   158,    55,    56,    58,   284,
     292,    53,   242,   245,   300,   302,   303,   306,   308,   158,
      96,   190,   174,   187,   112,   164,   187,   187,   166,   145,
      88,   164,   187,   164,   187,   166,   190,   202,   265,   326,
      15,   237,   326,    14,   236,   237,   237,   209,   211,   233,
     142,   234,    93,   186,   189,   200,   203,   233,   322,   163,
     324,   163,   157,   322,   233,   321,   296,   157,   324,   179,
     158,   158,   187,   243,    88,   321,   321,   240,   142,    96,
     239,    53,   246,   247,   297,   321,    10,   139,   142,   309,
     142,   309,   142,   309,   142,   309,   309,   139,   110,   245,
     115,   142,   309,   142,   309,   142,   309,    10,   190,   187,
     164,   187,    89,   266,   326,   158,     9,   267,   326,   163,
     233,   233,   158,   158,   190,   158,   191,   234,   235,   216,
     324,   233,   321,   233,   220,    10,   139,   158,   142,   240,
     142,   298,   142,   300,   306,   300,   300,    87,   221,   115,
     303,   306,   300,   302,   306,   300,    87,   176,   221,   289,
     292,   234,   158,   234,   233,   233,   237,   261,   262,   145,
     158,   213,   157,   295,   139,   240,   142,   247,   309,   142,
     309,   309,   309,    57,    86,   142,   309,   142,   309,   309,
     142,   309,   309,    57,    86,   140,   141,   158,   158,   237,
     260,   263,   158,   233,   157,   240,   300,    53,    57,   300,
     306,   300,   300,    53,    57,   194,    53,    57,   264,   236,
     233,   233,   309,   309,   142,   309,   309,   309,   322,   300,
     309
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      parser_yyerror (parser, YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (&yylval, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval)
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value, parser); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, struct parser_params *parser)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, parser)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    struct parser_params *parser;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (parser);
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, struct parser_params *parser)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, parser)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    struct parser_params *parser;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, parser);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule, struct parser_params *parser)
#else
static void
yy_reduce_print (yyvsp, yyrule, parser)
    YYSTYPE *yyvsp;
    int yyrule;
    struct parser_params *parser;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       , parser);
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule, parser); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
#ifndef yydebug
int yydebug;
#endif
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
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



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, struct parser_params *parser)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, parser)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    struct parser_params *parser;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (parser);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (struct parser_params *parser);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */






/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (struct parser_params *parser)
#else
int
yyparse (parser)
    struct parser_params *parser;
#endif
#endif
{
  /* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;

  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 767 "parse.y"
    {
			lex_state = EXPR_BEG;
		    /*%%%*/
			(yyval.num) = compile_for_eval || rb_parse_in_main();
			local_push((yyval.num));
		    /*%
		    %*/
		    ;}
    break;

  case 3:
#line 776 "parse.y"
    {
		    /*%%%*/
			if ((yyvsp[(2) - (2)].node) && !(yyvsp[(1) - (2)].num)) {
			    /* last expression should not be void */
			    if (nd_type((yyvsp[(2) - (2)].node)) != NODE_BLOCK) void_expr((yyvsp[(2) - (2)].node));
			    else {
				NODE *node = (yyvsp[(2) - (2)].node);
				while (node->nd_next) {
				    node = node->nd_next;
				}
				void_expr(node->nd_head);
			    }
			}
			ruby_eval_tree = NEW_SCOPE(0, block_append(ruby_eval_tree, (yyvsp[(2) - (2)].node)));
			local_pop();
		    /*%
			$$ = $2;
			parser->result = dispatch1(program, $$);
		    %*/
		    ;}
    break;

  case 4:
#line 799 "parse.y"
    {
		    /*%%%*/
			void_stmts((yyvsp[(1) - (2)].node));
			fixup_nodes(&deferred_nodes);
		    /*%
		    %*/
			(yyval.node) = (yyvsp[(1) - (2)].node);
		    ;}
    break;

  case 5:
#line 810 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_BEGIN(0);
		    /*%
			$$ = dispatch2(stmts_add, dispatch0(stmts_new),
						  dispatch0(void_stmt));
		    %*/
		    ;}
    break;

  case 6:
#line 819 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = newline_node((yyvsp[(1) - (1)].node));
		    /*%
			$$ = dispatch2(stmts_add, dispatch0(stmts_new), $1);
		    %*/
		    ;}
    break;

  case 7:
#line 827 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = block_append((yyvsp[(1) - (3)].node), newline_node((yyvsp[(3) - (3)].node)));
		    /*%
			$$ = dispatch2(stmts_add, $1, $3);
		    %*/
		    ;}
    break;

  case 8:
#line 835 "parse.y"
    {
			(yyval.node) = remove_begin((yyvsp[(2) - (2)].node));
		    ;}
    break;

  case 10:
#line 842 "parse.y"
    {
			if (in_def || in_single) {
			    yyerror("BEGIN in method");
			}
		    /*%%%*/
			/* local_push(0); */
		    /*%
		    %*/
		    ;}
    break;

  case 11:
#line 852 "parse.y"
    {
		    /*%%%*/
			ruby_eval_tree_begin = block_append(ruby_eval_tree_begin,
							    (yyvsp[(4) - (5)].node));
			/* NEW_PREEXE($4)); */
			/* local_pop(); */
			(yyval.node) = NEW_BEGIN(0);
		    /*%
			$$ = dispatch1(BEGIN, $4);
		    %*/
		    ;}
    break;

  case 12:
#line 869 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = (yyvsp[(1) - (4)].node);
			if ((yyvsp[(2) - (4)].node)) {
			    (yyval.node) = NEW_RESCUE((yyvsp[(1) - (4)].node), (yyvsp[(2) - (4)].node), (yyvsp[(3) - (4)].node));
			}
			else if ((yyvsp[(3) - (4)].node)) {
			    rb_warn0("else without rescue is useless");
			    (yyval.node) = block_append((yyval.node), (yyvsp[(3) - (4)].node));
			}
			if ((yyvsp[(4) - (4)].node)) {
			    if ((yyval.node)) {
				(yyval.node) = NEW_ENSURE((yyval.node), (yyvsp[(4) - (4)].node));
			    }
			    else {
				(yyval.node) = block_append((yyvsp[(4) - (4)].node), NEW_NIL());
			    }
			}
			fixpos((yyval.node), (yyvsp[(1) - (4)].node));
		    /*%
			$$ = dispatch4(body_stmt,
				       escape_Qundef($1),
				       escape_Qundef($2),
				       escape_Qundef($3),
				       escape_Qundef($4));
		    %*/
		    ;}
    break;

  case 13:
#line 899 "parse.y"
    {
		    /*%%%*/
			void_stmts((yyvsp[(1) - (2)].node));
			fixup_nodes(&deferred_nodes);
		    /*%
		    %*/
			(yyval.node) = (yyvsp[(1) - (2)].node);
		    ;}
    break;

  case 14:
#line 910 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_BEGIN(0);
		    /*%
			$$ = dispatch2(stmts_add, dispatch0(stmts_new),
						  dispatch0(void_stmt));
		    %*/
		    ;}
    break;

  case 15:
#line 919 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = newline_node((yyvsp[(1) - (1)].node));
		    /*%
			$$ = dispatch2(stmts_add, dispatch0(stmts_new), $1);
		    %*/
		    ;}
    break;

  case 16:
#line 927 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = block_append((yyvsp[(1) - (3)].node), newline_node((yyvsp[(3) - (3)].node)));
		    /*%
			$$ = dispatch2(stmts_add, $1, $3);
		    %*/
		    ;}
    break;

  case 17:
#line 935 "parse.y"
    {
			(yyval.node) = remove_begin((yyvsp[(2) - (2)].node));
		    ;}
    break;

  case 18:
#line 940 "parse.y"
    {lex_state = EXPR_FNAME;;}
    break;

  case 19:
#line 941 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_ALIAS((yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
		    /*%
			$$ = dispatch2(alias, $2, $4);
		    %*/
		    ;}
    break;

  case 20:
#line 949 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_VALIAS((yyvsp[(2) - (3)].id), (yyvsp[(3) - (3)].id));
		    /*%
			$$ = dispatch2(var_alias, $2, $3);
		    %*/
		    ;}
    break;

  case 21:
#line 957 "parse.y"
    {
		    /*%%%*/
			char buf[3];

			sprintf(buf, "$%c", (char)(yyvsp[(3) - (3)].node)->nd_nth);
			(yyval.node) = NEW_VALIAS((yyvsp[(2) - (3)].id), rb_intern(buf));
		    /*%
			$$ = dispatch2(var_alias, $2, $3);
		    %*/
		    ;}
    break;

  case 22:
#line 968 "parse.y"
    {
		    /*%%%*/
			yyerror("can't make alias for the number variables");
			(yyval.node) = NEW_BEGIN(0);
		    /*%
			$$ = dispatch2(var_alias, $2, $3);
			$$ = dispatch1(alias_error, $$);
		    %*/
		    ;}
    break;

  case 23:
#line 978 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = (yyvsp[(2) - (2)].node);
		    /*%
			$$ = dispatch1(undef, $2);
		    %*/
		    ;}
    break;

  case 24:
#line 986 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_IF(cond((yyvsp[(3) - (3)].node)), remove_begin((yyvsp[(1) - (3)].node)), 0);
			fixpos((yyval.node), (yyvsp[(3) - (3)].node));
		    /*%
			$$ = dispatch2(if_mod, $3, $1);
		    %*/
		    ;}
    break;

  case 25:
#line 995 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_UNLESS(cond((yyvsp[(3) - (3)].node)), remove_begin((yyvsp[(1) - (3)].node)), 0);
			fixpos((yyval.node), (yyvsp[(3) - (3)].node));
		    /*%
			$$ = dispatch2(unless_mod, $3, $1);
		    %*/
		    ;}
    break;

  case 26:
#line 1004 "parse.y"
    {
		    /*%%%*/
			if ((yyvsp[(1) - (3)].node) && nd_type((yyvsp[(1) - (3)].node)) == NODE_BEGIN) {
			    (yyval.node) = NEW_WHILE(cond((yyvsp[(3) - (3)].node)), (yyvsp[(1) - (3)].node)->nd_body, 0);
			}
			else {
			    (yyval.node) = NEW_WHILE(cond((yyvsp[(3) - (3)].node)), (yyvsp[(1) - (3)].node), 1);
			}
		    /*%
			$$ = dispatch2(while_mod, $3, $1);
		    %*/
		    ;}
    break;

  case 27:
#line 1017 "parse.y"
    {
		    /*%%%*/
			if ((yyvsp[(1) - (3)].node) && nd_type((yyvsp[(1) - (3)].node)) == NODE_BEGIN) {
			    (yyval.node) = NEW_UNTIL(cond((yyvsp[(3) - (3)].node)), (yyvsp[(1) - (3)].node)->nd_body, 0);
			}
			else {
			    (yyval.node) = NEW_UNTIL(cond((yyvsp[(3) - (3)].node)), (yyvsp[(1) - (3)].node), 1);
			}
		    /*%
			$$ = dispatch2(until_mod, $3, $1);
		    %*/
		    ;}
    break;

  case 28:
#line 1030 "parse.y"
    {
		    /*%%%*/
			NODE *resq = NEW_RESBODY(0, remove_begin((yyvsp[(3) - (3)].node)), 0);
			(yyval.node) = NEW_RESCUE(remove_begin((yyvsp[(1) - (3)].node)), resq, 0);
		    /*%
			$$ = dispatch2(rescue_mod, $3, $1);
		    %*/
		    ;}
    break;

  case 29:
#line 1039 "parse.y"
    {
			if (in_def || in_single) {
			    rb_warn0("END in method; use at_exit");
			}
		    /*%%%*/
			(yyval.node) = NEW_POSTEXE(NEW_NODE(
			    NODE_SCOPE, 0 /* tbl */, (yyvsp[(3) - (4)].node) /* body */, 0 /* args */));
		    /*%
			$$ = dispatch1(END, $3);
		    %*/
		    ;}
    break;

  case 30:
#line 1051 "parse.y"
    {
		    /*%%%*/
			value_expr((yyvsp[(3) - (3)].node));
			(yyval.node) = node_assign((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
		    /*%
			$$ = dispatch2(assign, $1, $3);
		    %*/
		    ;}
    break;

  case 31:
#line 1060 "parse.y"
    {
		    /*%%%*/
			value_expr((yyvsp[(3) - (3)].node));
			(yyvsp[(1) - (3)].node)->nd_value = (yyvsp[(3) - (3)].node);
			(yyval.node) = (yyvsp[(1) - (3)].node);
		    /*%
			$$ = dispatch2(massign, $1, $3);
		    %*/
		    ;}
    break;

  case 32:
#line 1070 "parse.y"
    {
		    /*%%%*/
			value_expr((yyvsp[(3) - (3)].node));
			if ((yyvsp[(1) - (3)].node)) {
			    ID vid = (yyvsp[(1) - (3)].node)->nd_vid;
			    if ((yyvsp[(2) - (3)].id) == tOROP) {
				(yyvsp[(1) - (3)].node)->nd_value = (yyvsp[(3) - (3)].node);
				(yyval.node) = NEW_OP_ASGN_OR(gettable(vid), (yyvsp[(1) - (3)].node));
				if (is_asgn_or_id(vid)) {
				    (yyval.node)->nd_aid = vid;
				}
			    }
			    else if ((yyvsp[(2) - (3)].id) == tANDOP) {
				(yyvsp[(1) - (3)].node)->nd_value = (yyvsp[(3) - (3)].node);
				(yyval.node) = NEW_OP_ASGN_AND(gettable(vid), (yyvsp[(1) - (3)].node));
			    }
			    else {
				(yyval.node) = (yyvsp[(1) - (3)].node);
				(yyval.node)->nd_value = NEW_CALL(gettable(vid), (yyvsp[(2) - (3)].id), NEW_LIST((yyvsp[(3) - (3)].node)));
			    }
			}
			else {
			    (yyval.node) = NEW_BEGIN(0);
			}
		    /*%
			$$ = dispatch3(opassign, $1, $2, $3);
		    %*/
		    ;}
    break;

  case 33:
#line 1099 "parse.y"
    {
		    /*%%%*/
			NODE *args;

			value_expr((yyvsp[(6) - (6)].node));
			if (!(yyvsp[(3) - (6)].node)) (yyvsp[(3) - (6)].node) = NEW_ZARRAY();
			args = arg_concat((yyvsp[(6) - (6)].node), (yyvsp[(3) - (6)].node));
			if ((yyvsp[(5) - (6)].id) == tOROP) {
			    (yyvsp[(5) - (6)].id) = 0;
			}
			else if ((yyvsp[(5) - (6)].id) == tANDOP) {
			    (yyvsp[(5) - (6)].id) = 1;
			}
			(yyval.node) = NEW_OP_ASGN1((yyvsp[(1) - (6)].node), (yyvsp[(5) - (6)].id), args);
			fixpos((yyval.node), (yyvsp[(1) - (6)].node));
		    /*%
			$$ = dispatch2(aref_field, $1, escape_Qundef($3));
			$$ = dispatch3(opassign, $$, $5, $6);
		    %*/
		    ;}
    break;

  case 34:
#line 1120 "parse.y"
    {
		    /*%%%*/
			value_expr((yyvsp[(5) - (5)].node));
			if ((yyvsp[(4) - (5)].id) == tOROP) {
			    (yyvsp[(4) - (5)].id) = 0;
			}
			else if ((yyvsp[(4) - (5)].id) == tANDOP) {
			    (yyvsp[(4) - (5)].id) = 1;
			}
			(yyval.node) = NEW_OP_ASGN2((yyvsp[(1) - (5)].node), (yyvsp[(3) - (5)].id), (yyvsp[(4) - (5)].id), (yyvsp[(5) - (5)].node));
			fixpos((yyval.node), (yyvsp[(1) - (5)].node));
		    /*%
			$$ = dispatch3(field, $1, ripper_id2sym('.'), $3);
			$$ = dispatch3(opassign, $$, $4, $5);
		    %*/
		    ;}
    break;

  case 35:
#line 1137 "parse.y"
    {
		    /*%%%*/
			value_expr((yyvsp[(5) - (5)].node));
			if ((yyvsp[(4) - (5)].id) == tOROP) {
			    (yyvsp[(4) - (5)].id) = 0;
			}
			else if ((yyvsp[(4) - (5)].id) == tANDOP) {
			    (yyvsp[(4) - (5)].id) = 1;
			}
			(yyval.node) = NEW_OP_ASGN2((yyvsp[(1) - (5)].node), (yyvsp[(3) - (5)].id), (yyvsp[(4) - (5)].id), (yyvsp[(5) - (5)].node));
			fixpos((yyval.node), (yyvsp[(1) - (5)].node));
		    /*%
			$$ = dispatch3(field, $1, ripper_id2sym('.'), $3);
			$$ = dispatch3(opassign, $$, $4, $5);
		    %*/
		    ;}
    break;

  case 36:
#line 1154 "parse.y"
    {
		    /*%%%*/
			value_expr((yyvsp[(5) - (5)].node));
			if ((yyvsp[(4) - (5)].id) == tOROP) {
			    (yyvsp[(4) - (5)].id) = 0;
			}
			else if ((yyvsp[(4) - (5)].id) == tANDOP) {
			    (yyvsp[(4) - (5)].id) = 1;
			}
			(yyval.node) = NEW_OP_ASGN2((yyvsp[(1) - (5)].node), (yyvsp[(3) - (5)].id), (yyvsp[(4) - (5)].id), (yyvsp[(5) - (5)].node));
			fixpos((yyval.node), (yyvsp[(1) - (5)].node));
		    /*%
			$$ = dispatch3(field, $1, ripper_intern("::"), $3);
			$$ = dispatch3(opassign, $$, $4, $5);
		    %*/
		    ;}
    break;

  case 37:
#line 1171 "parse.y"
    {
		    /*%%%*/
			rb_backref_error((yyvsp[(1) - (3)].node));
			(yyval.node) = NEW_BEGIN(0);
		    /*%
			$$ = dispatch2(assign, dispatch1(var_field, $1), $3);
			$$ = dispatch1(assign_error, $$);
		    %*/
		    ;}
    break;

  case 38:
#line 1181 "parse.y"
    {
		    /*%%%*/
		      
			value_expr((yyvsp[(3) - (3)].node));
			(yyval.node) = node_assign((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
		    /*%
			$$ = dispatch2(assign, $1, $3);
		    %*/
		    ;}
    break;

  case 39:
#line 1191 "parse.y"
    {
		    /*%%%*/
		      
			(yyvsp[(1) - (3)].node)->nd_value = (yyvsp[(3) - (3)].node);
			(yyval.node) = (yyvsp[(1) - (3)].node);
		    /*%
			$$ = dispatch2(massign, $1, $3);
		    %*/
		    ;}
    break;

  case 40:
#line 1201 "parse.y"
    {
		     
		    /*%%%*/
			(yyvsp[(1) - (3)].node)->nd_value = (yyvsp[(3) - (3)].node);
			(yyval.node) = (yyvsp[(1) - (3)].node);
		    /*%
			$$ = dispatch2(massign, $1, $3);
		    %*/
		    ;}
    break;

  case 43:
#line 1215 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = logop(NODE_AND, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
		    /*%
			$$ = dispatch3(binary, $1, ripper_intern("and"), $3);
		    %*/
		    ;}
    break;

  case 44:
#line 1223 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = logop(NODE_OR, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
		    /*%
			$$ = dispatch3(binary, $1, ripper_intern("or"), $3);
		    %*/
		    ;}
    break;

  case 45:
#line 1231 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = call_uni_op(cond((yyvsp[(3) - (3)].node)), '!');
		    /*%
			$$ = dispatch2(unary, ripper_intern("not"), $3);
		    %*/
		    ;}
    break;

  case 46:
#line 1239 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = call_uni_op(cond((yyvsp[(2) - (2)].node)), '!');
		    /*%
			$$ = dispatch2(unary, ripper_id2sym('!'), $2);
		    %*/
		    ;}
    break;

  case 48:
#line 1250 "parse.y"
    {
		    /*%%%*/
			value_expr((yyvsp[(1) - (1)].node));
			(yyval.node) = (yyvsp[(1) - (1)].node);
		        if (!(yyval.node)) (yyval.node) = NEW_NIL();
		    /*%
			$$ = $1;
		    %*/
		    ;}
    break;

  case 51:
#line 1264 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_RETURN(ret_args((yyvsp[(2) - (2)].node)));
		    /*%
			$$ = dispatch1(return, $2);
		    %*/
		    ;}
    break;

  case 52:
#line 1272 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_BREAK(ret_args((yyvsp[(2) - (2)].node)));
		    /*%
			$$ = dispatch1(break, $2);
		    %*/
		    ;}
    break;

  case 53:
#line 1280 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_NEXT(ret_args((yyvsp[(2) - (2)].node)));
		    /*%
			$$ = dispatch1(next, $2);
		    %*/
		    ;}
    break;

  case 55:
#line 1291 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_CALL((yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].id), (yyvsp[(4) - (4)].node));
		    /*%
			$$ = dispatch3(call, $1, ripper_id2sym('.'), $3);
			$$ = method_arg($$, $4);
		    %*/
		    ;}
    break;

  case 56:
#line 1300 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_CALL((yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].id), (yyvsp[(4) - (4)].node));
		    /*%
			$$ = dispatch3(call, $1, ripper_intern("::"), $3);
			$$ = method_arg($$, $4);
		    %*/
		    ;}
    break;

  case 57:
#line 1311 "parse.y"
    {
		    /*%%%*/
			dyna_push();
			(yyval.num) = ruby_sourceline;
		    /*%
		    %*/
		    ;}
    break;

  case 58:
#line 1321 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_ITER((yyvsp[(3) - (5)].node),(yyvsp[(4) - (5)].node));
			nd_set_line((yyval.node), (yyvsp[(2) - (5)].num));
			dyna_pop();
		    /*%
			$$ = dispatch2(brace_block, escape_Qundef($3), $4);
		    %*/
		    ;}
    break;

  case 59:
#line 1333 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_FCALL((yyvsp[(1) - (2)].id), (yyvsp[(2) - (2)].node));
			fixpos((yyval.node), (yyvsp[(2) - (2)].node));
		    /*%
			$$ = dispatch2(command, $1, $2);
		    %*/
		    ;}
    break;

  case 60:
#line 1342 "parse.y"
    {
		    /*%%%*/
			block_dup_check((yyvsp[(2) - (3)].node),(yyvsp[(3) - (3)].node));
		        (yyvsp[(3) - (3)].node)->nd_iter = NEW_FCALL((yyvsp[(1) - (3)].id), (yyvsp[(2) - (3)].node));
			(yyval.node) = (yyvsp[(3) - (3)].node);
			fixpos((yyval.node), (yyvsp[(2) - (3)].node));
		    /*%
			$$ = dispatch2(command, $1, $2);
			$$ = method_add_block($$, $3);
		    %*/
		    ;}
    break;

  case 61:
#line 1354 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_CALL((yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].id), (yyvsp[(4) - (4)].node));
			fixpos((yyval.node), (yyvsp[(1) - (4)].node));
		    /*%
			$$ = dispatch4(command_call, $1, ripper_id2sym('.'), $3, $4);
		    %*/
		    ;}
    break;

  case 62:
#line 1363 "parse.y"
    {
		    /*%%%*/
			block_dup_check((yyvsp[(4) - (5)].node),(yyvsp[(5) - (5)].node));
		        (yyvsp[(5) - (5)].node)->nd_iter = NEW_CALL((yyvsp[(1) - (5)].node), (yyvsp[(3) - (5)].id), (yyvsp[(4) - (5)].node));
			(yyval.node) = (yyvsp[(5) - (5)].node);
			fixpos((yyval.node), (yyvsp[(1) - (5)].node));
		    /*%
			$$ = dispatch4(command_call, $1, ripper_id2sym('.'), $3, $4);
			$$ = method_add_block($$, $5);
		    %*/
		   ;}
    break;

  case 63:
#line 1375 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_CALL((yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].id), (yyvsp[(4) - (4)].node));
			fixpos((yyval.node), (yyvsp[(1) - (4)].node));
		    /*%
			$$ = dispatch4(command_call, $1, ripper_intern("::"), $3, $4);
		    %*/
		    ;}
    break;

  case 64:
#line 1384 "parse.y"
    {
		    /*%%%*/
			block_dup_check((yyvsp[(4) - (5)].node),(yyvsp[(5) - (5)].node));
		        (yyvsp[(5) - (5)].node)->nd_iter = NEW_CALL((yyvsp[(1) - (5)].node), (yyvsp[(3) - (5)].id), (yyvsp[(4) - (5)].node));
			(yyval.node) = (yyvsp[(5) - (5)].node);
			fixpos((yyval.node), (yyvsp[(1) - (5)].node));
		    /*%
			$$ = dispatch4(command_call, $1, ripper_intern("::"), $3, $4);
			$$ = method_add_block($$, $5);
		    %*/
		   ;}
    break;

  case 65:
#line 1396 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_SUPER((yyvsp[(2) - (2)].node));
			fixpos((yyval.node), (yyvsp[(2) - (2)].node));
		    /*%
			$$ = dispatch1(super, $2);
		    %*/
		    ;}
    break;

  case 66:
#line 1405 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = new_yield((yyvsp[(2) - (2)].node));
			fixpos((yyval.node), (yyvsp[(2) - (2)].node));
		    /*%
			$$ = dispatch1(yield, $2);
		    %*/
		    ;}
    break;

  case 68:
#line 1417 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = (yyvsp[(2) - (3)].node);
		    /*%
			$$ = dispatch1(mlhs_paren, $2);
		    %*/
		    ;}
    break;

  case 70:
#line 1428 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_MASGN(NEW_LIST((yyvsp[(2) - (3)].node)), 0);
		    /*%
			$$ = dispatch1(mlhs_paren, $2);
		    %*/
		    ;}
    break;

  case 71:
#line 1438 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_MASGN((yyvsp[(1) - (1)].node), 0);
		    /*%
			$$ = $1;
		    %*/
		    ;}
    break;

  case 72:
#line 1446 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_MASGN(list_append((yyvsp[(1) - (2)].node),(yyvsp[(2) - (2)].node)), 0);
		    /*%
			$$ = mlhs_add($1, $2);
		    %*/
		    ;}
    break;

  case 73:
#line 1454 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_MASGN((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
		    /*%
			$$ = mlhs_add_star($1, $3);
		    %*/
		    ;}
    break;

  case 74:
#line 1462 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_MASGN((yyvsp[(1) - (5)].node), NEW_POSTARG((yyvsp[(3) - (5)].node),(yyvsp[(5) - (5)].node)));
		    /*%
			$$ = mlhs_add_star($1, $3);
		    %*/
		    ;}
    break;

  case 75:
#line 1470 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_MASGN((yyvsp[(1) - (2)].node), -1);
		    /*%
			$$ = mlhs_add_star($1, Qnil);
		    %*/
		    ;}
    break;

  case 76:
#line 1478 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_MASGN((yyvsp[(1) - (4)].node), NEW_POSTARG(-1, (yyvsp[(4) - (4)].node)));
		    /*%
			$$ = mlhs_add_star($1, Qnil);
		    %*/
		    ;}
    break;

  case 77:
#line 1486 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_MASGN(0, (yyvsp[(2) - (2)].node));
		    /*%
			$$ = mlhs_add_star(mlhs_new(), $2);
		    %*/
		    ;}
    break;

  case 78:
#line 1494 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_MASGN(0, NEW_POSTARG((yyvsp[(2) - (4)].node),(yyvsp[(4) - (4)].node)));
		    /*%
			$$ = mlhs_add_star(mlhs_new(), $2);
		    %*/
		    ;}
    break;

  case 79:
#line 1502 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_MASGN(0, -1);
		    /*%
			$$ = mlhs_add_star(mlhs_new(), Qnil);
		    %*/
		    ;}
    break;

  case 80:
#line 1510 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_MASGN(0, NEW_POSTARG(-1, (yyvsp[(3) - (3)].node)));
		    /*%
			$$ = mlhs_add_star(mlhs_new(), Qnil);
		    %*/
		    ;}
    break;

  case 82:
#line 1521 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = (yyvsp[(2) - (3)].node);
		    /*%
			$$ = dispatch1(mlhs_paren, $2);
		    %*/
		    ;}
    break;

  case 83:
#line 1531 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_LIST((yyvsp[(1) - (2)].node));
		    /*%
			$$ = mlhs_add(mlhs_new(), $1);
		    %*/
		    ;}
    break;

  case 84:
#line 1539 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = list_append((yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node));
		    /*%
			$$ = mlhs_add($1, $2);
		    %*/
		    ;}
    break;

  case 85:
#line 1549 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_LIST((yyvsp[(1) - (1)].node));
		    /*%
			$$ = mlhs_add(mlhs_new(), $1);
		    %*/
		    ;}
    break;

  case 86:
#line 1557 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = list_append((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
		    /*%
			$$ = mlhs_add($1, $3);
		    %*/
		    ;}
    break;

  case 87:
#line 1567 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = assignable((yyvsp[(1) - (1)].id), 0);
		    /*%
			$$ = $1;
		    %*/
		    ;}
    break;

  case 88:
#line 1575 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = aryset((yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].node));
		    /*%
			$$ = dispatch2(aref_field, $1, escape_Qundef($3));
		    %*/
		    ;}
    break;

  case 89:
#line 1583 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = attrset((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].id));
		    /*%
			$$ = dispatch3(field, $1, ripper_id2sym('.'), $3);
		    %*/
		    ;}
    break;

  case 90:
#line 1591 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = attrset((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].id));
		    /*%
			$$ = dispatch2(const_path_field, $1, $3);
		    %*/
		    ;}
    break;

  case 91:
#line 1599 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = attrset((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].id));
		    /*%
			$$ = dispatch3(field, $1, ripper_id2sym('.'), $3);
		    %*/
		    ;}
    break;

  case 92:
#line 1607 "parse.y"
    {
		    /*%%%*/
			if (in_def || in_single)
			    yyerror("dynamic constant assignment");
			(yyval.node) = NEW_CDECL(0, 0, NEW_COLON2((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].id)));
		    /*%
			if (in_def || in_single)
			    yyerror("dynamic constant assignment");
			$$ = dispatch2(const_path_field, $1, $3);
		    %*/
		    ;}
    break;

  case 93:
#line 1619 "parse.y"
    {
		    /*%%%*/
			if (in_def || in_single)
			    yyerror("dynamic constant assignment");
			(yyval.node) = NEW_CDECL(0, 0, NEW_COLON3((yyvsp[(2) - (2)].id)));
		    /*%
			$$ = dispatch1(top_const_field, $2);
		    %*/
		    ;}
    break;

  case 94:
#line 1629 "parse.y"
    {
		    /*%%%*/
			rb_backref_error((yyvsp[(1) - (1)].node));
			(yyval.node) = NEW_BEGIN(0);
		    /*%
			$$ = dispatch1(var_field, $1);
			$$ = dispatch1(assign_error, $$);
		    %*/
		    ;}
    break;

  case 95:
#line 1641 "parse.y"
    {
		    /*%%%*/
			if (!((yyval.node) = assignable((yyvsp[(1) - (1)].id), 0))) (yyval.node) = NEW_BEGIN(0);
		    /*%
			$$ = dispatch1(var_field, $1);
		    %*/
		    ;}
    break;

  case 96:
#line 1649 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = aryset((yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].node));
		    /*%
			$$ = dispatch2(aref_field, $1, escape_Qundef($3));
		    %*/
		    ;}
    break;

  case 97:
#line 1657 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = attrset((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].id));
		    /*%
			$$ = dispatch3(field, $1, ripper_id2sym('.'), $3);
		    %*/
		    ;}
    break;

  case 98:
#line 1665 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = attrset((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].id));
		    /*%
			$$ = dispatch3(field, $1, ripper_intern("::"), $3);
		    %*/
		    ;}
    break;

  case 99:
#line 1673 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = attrset((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].id));
		    /*%
			$$ = dispatch3(field, $1, ripper_id2sym('.'), $3);
		    %*/
		    ;}
    break;

  case 100:
#line 1681 "parse.y"
    {
		    /*%%%*/
			if (in_def || in_single)
			    yyerror("dynamic constant assignment");
			(yyval.node) = NEW_CDECL(0, 0, NEW_COLON2((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].id)));
		    /*%
			$$ = dispatch2(const_path_field, $1, $3);
			if (in_def || in_single) {
			    $$ = dispatch1(assign_error, $$);
			}
		    %*/
		    ;}
    break;

  case 101:
#line 1694 "parse.y"
    {
		    /*%%%*/
			if (in_def || in_single)
			    yyerror("dynamic constant assignment");
			(yyval.node) = NEW_CDECL(0, 0, NEW_COLON3((yyvsp[(2) - (2)].id)));
		    /*%
			$$ = dispatch1(top_const_field, $2);
			if (in_def || in_single) {
			    $$ = dispatch1(assign_error, $$);
			}
		    %*/
		    ;}
    break;

  case 102:
#line 1707 "parse.y"
    {
		    /*%%%*/
			rb_backref_error((yyvsp[(1) - (1)].node));
			(yyval.node) = NEW_BEGIN(0);
		    /*%
			$$ = dispatch1(assign_error, $1);
		    %*/
		    ;}
    break;

  case 103:
#line 1718 "parse.y"
    {
		    /*%%%*/
			yyerror("class/module name must be CONSTANT");
		    /*%
			$$ = dispatch1(class_name_error, $1);
		    %*/
		    ;}
    break;

  case 105:
#line 1729 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_COLON3((yyvsp[(2) - (2)].id));
		    /*%
			$$ = dispatch1(top_const_ref, $2);
		    %*/
		    ;}
    break;

  case 106:
#line 1737 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_COLON2(0, (yyval.node));
		    /*%
			$$ = dispatch1(const_ref, $1);
		    %*/
		    ;}
    break;

  case 107:
#line 1745 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_COLON2((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].id));
		    /*%
			$$ = dispatch2(const_path_ref, $1, $3);
		    %*/
		    ;}
    break;

  case 111:
#line 1758 "parse.y"
    {
		    /*%%%*/
			lex_state = EXPR_END;
			(yyval.id) = (yyvsp[(1) - (1)].id);
		    /*%
			lex_state = EXPR_END;
			$$ = $1;
		    %*/
		    ;}
    break;

  case 112:
#line 1768 "parse.y"
    {
		    /*%%%*/
			lex_state = EXPR_END;
			(yyval.id) = (yyvsp[(1) - (1)].id);
		    /*%
			lex_state = EXPR_END;
			$$ = $1;
		    %*/
		    ;}
    break;

  case 115:
#line 1784 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_LIT(ID2SYM((yyvsp[(1) - (1)].id)));
		    /*%
			$$ = dispatch1(symbol_literal, $1);
		    %*/
		    ;}
    break;

  case 117:
#line 1795 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_UNDEF((yyvsp[(1) - (1)].node));
		    /*%
			$$ = rb_ary_new3(1, $1);
		    %*/
		    ;}
    break;

  case 118:
#line 1802 "parse.y"
    {lex_state = EXPR_FNAME;;}
    break;

  case 119:
#line 1803 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = block_append((yyvsp[(1) - (4)].node), NEW_UNDEF((yyvsp[(4) - (4)].node)));
		    /*%
			rb_ary_push($1, $4);
		    %*/
		    ;}
    break;

  case 120:
#line 1812 "parse.y"
    { ifndef_ripper((yyval.id) = '|'); ;}
    break;

  case 121:
#line 1813 "parse.y"
    { ifndef_ripper((yyval.id) = '^'); ;}
    break;

  case 122:
#line 1814 "parse.y"
    { ifndef_ripper((yyval.id) = '&'); ;}
    break;

  case 123:
#line 1815 "parse.y"
    { ifndef_ripper((yyval.id) = tCMP); ;}
    break;

  case 124:
#line 1816 "parse.y"
    { ifndef_ripper((yyval.id) = tEQ); ;}
    break;

  case 125:
#line 1817 "parse.y"
    { ifndef_ripper((yyval.id) = tEQQ); ;}
    break;

  case 126:
#line 1818 "parse.y"
    { ifndef_ripper((yyval.id) = tMATCH); ;}
    break;

  case 127:
#line 1819 "parse.y"
    { ifndef_ripper((yyval.id) = tNMATCH); ;}
    break;

  case 128:
#line 1820 "parse.y"
    { ifndef_ripper((yyval.id) = '>'); ;}
    break;

  case 129:
#line 1821 "parse.y"
    { ifndef_ripper((yyval.id) = tGEQ); ;}
    break;

  case 130:
#line 1822 "parse.y"
    { ifndef_ripper((yyval.id) = '<'); ;}
    break;

  case 131:
#line 1823 "parse.y"
    { ifndef_ripper((yyval.id) = tLEQ); ;}
    break;

  case 132:
#line 1824 "parse.y"
    { ifndef_ripper((yyval.id) = tNEQ); ;}
    break;

  case 133:
#line 1825 "parse.y"
    { ifndef_ripper((yyval.id) = tLSHFT); ;}
    break;

  case 134:
#line 1826 "parse.y"
    { ifndef_ripper((yyval.id) = tRSHFT); ;}
    break;

  case 135:
#line 1827 "parse.y"
    { ifndef_ripper((yyval.id) = '+'); ;}
    break;

  case 136:
#line 1828 "parse.y"
    { ifndef_ripper((yyval.id) = '-'); ;}
    break;

  case 137:
#line 1829 "parse.y"
    { ifndef_ripper((yyval.id) = '*'); ;}
    break;

  case 138:
#line 1830 "parse.y"
    { ifndef_ripper((yyval.id) = '*'); ;}
    break;

  case 139:
#line 1831 "parse.y"
    { ifndef_ripper((yyval.id) = '/'); ;}
    break;

  case 140:
#line 1832 "parse.y"
    { ifndef_ripper((yyval.id) = '%'); ;}
    break;

  case 141:
#line 1833 "parse.y"
    { ifndef_ripper((yyval.id) = tPOW); ;}
    break;

  case 142:
#line 1834 "parse.y"
    { ifndef_ripper((yyval.id) = '!'); ;}
    break;

  case 143:
#line 1835 "parse.y"
    { ifndef_ripper((yyval.id) = '~'); ;}
    break;

  case 144:
#line 1836 "parse.y"
    { ifndef_ripper((yyval.id) = tUPLUS); ;}
    break;

  case 145:
#line 1837 "parse.y"
    { ifndef_ripper((yyval.id) = tUMINUS); ;}
    break;

  case 146:
#line 1838 "parse.y"
    { ifndef_ripper((yyval.id) = tAREF); ;}
    break;

  case 147:
#line 1839 "parse.y"
    { ifndef_ripper((yyval.id) = tASET); ;}
    break;

  case 148:
#line 1840 "parse.y"
    { ifndef_ripper((yyval.id) = '`'); ;}
    break;

  case 191:
#line 1858 "parse.y"
    {
			(yyval.node) = (yyvsp[(1) - (1)].node);
		    ;}
    break;

  case 192:
#line 1863 "parse.y"
    {
		    /*%%%*/
		      
			value_expr((yyvsp[(3) - (3)].node));
			(yyval.node) = node_assign((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
		    /*%
			$$ = dispatch2(assign, $1, $3);
		    %*/
		    ;}
    break;

  case 193:
#line 1873 "parse.y"
    {
		    /*%%%*/
			value_expr((yyvsp[(3) - (5)].node));
		        (yyvsp[(3) - (5)].node) = NEW_RESCUE((yyvsp[(3) - (5)].node), NEW_RESBODY(0,(yyvsp[(5) - (5)].node),0), 0);
			(yyval.node) = node_assign((yyvsp[(1) - (5)].node), (yyvsp[(3) - (5)].node));
		    /*%
			$$ = dispatch2(assign, $1, dispatch2(rescue_mod, $3, $5));
		    %*/
		    ;}
    break;

  case 194:
#line 1883 "parse.y"
    {
		    /*%%%*/
			value_expr((yyvsp[(3) - (3)].node));
			if ((yyvsp[(1) - (3)].node)) {
			    ID vid = (yyvsp[(1) - (3)].node)->nd_vid;
			    if ((yyvsp[(2) - (3)].id) == tOROP) {
				(yyvsp[(1) - (3)].node)->nd_value = (yyvsp[(3) - (3)].node);
				(yyval.node) = NEW_OP_ASGN_OR(gettable(vid), (yyvsp[(1) - (3)].node));
				if (is_asgn_or_id(vid)) {
				    (yyval.node)->nd_aid = vid;
				}
			    }
			    else if ((yyvsp[(2) - (3)].id) == tANDOP) {
				(yyvsp[(1) - (3)].node)->nd_value = (yyvsp[(3) - (3)].node);
				(yyval.node) = NEW_OP_ASGN_AND(gettable(vid), (yyvsp[(1) - (3)].node));
			    }
			    else {
				(yyval.node) = (yyvsp[(1) - (3)].node);
				(yyval.node)->nd_value = NEW_CALL(gettable(vid), (yyvsp[(2) - (3)].id), NEW_LIST((yyvsp[(3) - (3)].node)));
			    }
			}
			else {
			    (yyval.node) = NEW_BEGIN(0);
			}
		    /*%
			$$ = dispatch3(opassign, $1, $2, $3);
		    %*/
		    ;}
    break;

  case 195:
#line 1912 "parse.y"
    {
		    /*%%%*/
			value_expr((yyvsp[(3) - (5)].node));
		        (yyvsp[(3) - (5)].node) = NEW_RESCUE((yyvsp[(3) - (5)].node), NEW_RESBODY(0,(yyvsp[(5) - (5)].node),0), 0);
			if ((yyvsp[(1) - (5)].node)) {
			    ID vid = (yyvsp[(1) - (5)].node)->nd_vid;
			    if ((yyvsp[(2) - (5)].id) == tOROP) {
				(yyvsp[(1) - (5)].node)->nd_value = (yyvsp[(3) - (5)].node);
				(yyval.node) = NEW_OP_ASGN_OR(gettable(vid), (yyvsp[(1) - (5)].node));
				if (is_asgn_or_id(vid)) {
				    (yyval.node)->nd_aid = vid;
				}
			    }
			    else if ((yyvsp[(2) - (5)].id) == tANDOP) {
				(yyvsp[(1) - (5)].node)->nd_value = (yyvsp[(3) - (5)].node);
				(yyval.node) = NEW_OP_ASGN_AND(gettable(vid), (yyvsp[(1) - (5)].node));
			    }
			    else {
				(yyval.node) = (yyvsp[(1) - (5)].node);
				(yyval.node)->nd_value = NEW_CALL(gettable(vid), (yyvsp[(2) - (5)].id), NEW_LIST((yyvsp[(3) - (5)].node)));
			    }
			}
			else {
			    (yyval.node) = NEW_BEGIN(0);
			}
		    /*%
			$3 = dispatch2(rescue_mod, $3, $5);
			$$ = dispatch3(opassign, $1, $2, $3);
		    %*/
		    ;}
    break;

  case 196:
#line 1943 "parse.y"
    {
		    /*%%%*/
			NODE *args;

			value_expr((yyvsp[(6) - (6)].node));
			if (!(yyvsp[(3) - (6)].node)) (yyvsp[(3) - (6)].node) = NEW_ZARRAY();
			args = arg_concat((yyvsp[(6) - (6)].node), (yyvsp[(3) - (6)].node));
			if ((yyvsp[(5) - (6)].id) == tOROP) {
			    (yyvsp[(5) - (6)].id) = 0;
			}
			else if ((yyvsp[(5) - (6)].id) == tANDOP) {
			    (yyvsp[(5) - (6)].id) = 1;
			}
			(yyval.node) = NEW_OP_ASGN1((yyvsp[(1) - (6)].node), (yyvsp[(5) - (6)].id), args);
			fixpos((yyval.node), (yyvsp[(1) - (6)].node));
		    /*%
			$1 = dispatch2(aref_field, $1, escape_Qundef($3));
			$$ = dispatch3(opassign, $1, $5, $6);
		    %*/
		    ;}
    break;

  case 197:
#line 1964 "parse.y"
    {
		    /*%%%*/
			value_expr((yyvsp[(5) - (5)].node));
			if ((yyvsp[(4) - (5)].id) == tOROP) {
			    (yyvsp[(4) - (5)].id) = 0;
			}
			else if ((yyvsp[(4) - (5)].id) == tANDOP) {
			    (yyvsp[(4) - (5)].id) = 1;
			}
			(yyval.node) = NEW_OP_ASGN2((yyvsp[(1) - (5)].node), (yyvsp[(3) - (5)].id), (yyvsp[(4) - (5)].id), (yyvsp[(5) - (5)].node));
			fixpos((yyval.node), (yyvsp[(1) - (5)].node));
		    /*%
			$1 = dispatch3(field, $1, ripper_id2sym('.'), $3);
			$$ = dispatch3(opassign, $1, $4, $5);
		    %*/
		    ;}
    break;

  case 198:
#line 1981 "parse.y"
    {
		    /*%%%*/
			value_expr((yyvsp[(5) - (5)].node));
			if ((yyvsp[(4) - (5)].id) == tOROP) {
			    (yyvsp[(4) - (5)].id) = 0;
			}
			else if ((yyvsp[(4) - (5)].id) == tANDOP) {
			    (yyvsp[(4) - (5)].id) = 1;
			}
			(yyval.node) = NEW_OP_ASGN2((yyvsp[(1) - (5)].node), (yyvsp[(3) - (5)].id), (yyvsp[(4) - (5)].id), (yyvsp[(5) - (5)].node));
			fixpos((yyval.node), (yyvsp[(1) - (5)].node));
		    /*%
			$1 = dispatch3(field, $1, ripper_id2sym('.'), $3);
			$$ = dispatch3(opassign, $1, $4, $5);
		    %*/
		    ;}
    break;

  case 199:
#line 1998 "parse.y"
    {
		    /*%%%*/
			value_expr((yyvsp[(5) - (5)].node));
			if ((yyvsp[(4) - (5)].id) == tOROP) {
			    (yyvsp[(4) - (5)].id) = 0;
			}
			else if ((yyvsp[(4) - (5)].id) == tANDOP) {
			    (yyvsp[(4) - (5)].id) = 1;
			}
			(yyval.node) = NEW_OP_ASGN2((yyvsp[(1) - (5)].node), (yyvsp[(3) - (5)].id), (yyvsp[(4) - (5)].id), (yyvsp[(5) - (5)].node));
			fixpos((yyval.node), (yyvsp[(1) - (5)].node));
		    /*%
			$1 = dispatch3(field, $1, ripper_intern("::"), $3);
			$$ = dispatch3(opassign, $1, $4, $5);
		    %*/
		    ;}
    break;

  case 200:
#line 2015 "parse.y"
    {
		    /*%%%*/
			yyerror("constant re-assignment");
			(yyval.node) = NEW_BEGIN(0);
		    /*%
			$$ = dispatch2(const_path_field, $1, $3);
			$$ = dispatch3(opassign, $$, $4, $5);
			$$ = dispatch1(assign_error, $$);
		    %*/
		    ;}
    break;

  case 201:
#line 2026 "parse.y"
    {
		    /*%%%*/
			yyerror("constant re-assignment");
			(yyval.node) = NEW_BEGIN(0);
		    /*%
			$$ = dispatch1(top_const_field, $2);
			$$ = dispatch3(opassign, $$, $3, $4);
			$$ = dispatch1(assign_error, $$);
		    %*/
		    ;}
    break;

  case 202:
#line 2037 "parse.y"
    {
		    /*%%%*/
			rb_backref_error((yyvsp[(1) - (3)].node));
			(yyval.node) = NEW_BEGIN(0);
		    /*%
			$$ = dispatch1(var_field, $1);
			$$ = dispatch3(opassign, $$, $2, $3);
			$$ = dispatch1(assign_error, $$);
		    %*/
		    ;}
    break;

  case 203:
#line 2048 "parse.y"
    {
		    /*%%%*/
			value_expr((yyvsp[(1) - (3)].node));
			value_expr((yyvsp[(3) - (3)].node));
			(yyval.node) = NEW_DOT2((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
			if (nd_type((yyvsp[(1) - (3)].node)) == NODE_LIT && FIXNUM_P((yyvsp[(1) - (3)].node)->nd_lit) &&
			    nd_type((yyvsp[(3) - (3)].node)) == NODE_LIT && FIXNUM_P((yyvsp[(3) - (3)].node)->nd_lit)) {
			    deferred_nodes = list_append(deferred_nodes, (yyval.node));
			}
		    /*%
			$$ = dispatch2(dot2, $1, $3);
		    %*/
		    ;}
    break;

  case 204:
#line 2062 "parse.y"
    {
		    /*%%%*/
			value_expr((yyvsp[(1) - (3)].node));
			value_expr((yyvsp[(3) - (3)].node));
			(yyval.node) = NEW_DOT3((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
			if (nd_type((yyvsp[(1) - (3)].node)) == NODE_LIT && FIXNUM_P((yyvsp[(1) - (3)].node)->nd_lit) &&
			    nd_type((yyvsp[(3) - (3)].node)) == NODE_LIT && FIXNUM_P((yyvsp[(3) - (3)].node)->nd_lit)) {
			    deferred_nodes = list_append(deferred_nodes, (yyval.node));
			}
		    /*%
			$$ = dispatch2(dot3, $1, $3);
		    %*/
		    ;}
    break;

  case 205:
#line 2076 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = call_bin_op((yyvsp[(1) - (3)].node), '+', (yyvsp[(3) - (3)].node));
		    /*%
			$$ = dispatch3(binary, $1, ID2SYM('+'), $3);
		    %*/
		    ;}
    break;

  case 206:
#line 2084 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = call_bin_op((yyvsp[(1) - (3)].node), '-', (yyvsp[(3) - (3)].node));
		    /*%
			$$ = dispatch3(binary, $1, ID2SYM('-'), $3);
		    %*/
		    ;}
    break;

  case 207:
#line 2092 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = call_bin_op((yyvsp[(1) - (3)].node), '*', (yyvsp[(3) - (3)].node));
		    /*%
			$$ = dispatch3(binary, $1, ID2SYM('*'), $3);
		    %*/
		    ;}
    break;

  case 208:
#line 2100 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = call_bin_op((yyvsp[(1) - (3)].node), '/', (yyvsp[(3) - (3)].node));
		    /*%
			$$ = dispatch3(binary, $1, ID2SYM('/'), $3);
		    %*/
		    ;}
    break;

  case 209:
#line 2108 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = call_bin_op((yyvsp[(1) - (3)].node), '%', (yyvsp[(3) - (3)].node));
		    /*%
			$$ = dispatch3(binary, $1, ID2SYM('%'), $3);
		    %*/
		    ;}
    break;

  case 210:
#line 2116 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = call_bin_op((yyvsp[(1) - (3)].node), tPOW, (yyvsp[(3) - (3)].node));
		    /*%
			$$ = dispatch3(binary, $1, ripper_intern("**"), $3);
		    %*/
		    ;}
    break;

  case 211:
#line 2124 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_CALL(call_bin_op((yyvsp[(2) - (4)].node), tPOW, (yyvsp[(4) - (4)].node)), tUMINUS, 0);
		    /*%
			$$ = dispatch3(binary, $2, ripper_intern("**"), $4);
			$$ = dispatch2(unary, ripper_intern("-@"), $$);
		    %*/
		    ;}
    break;

  case 212:
#line 2133 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_CALL(call_bin_op((yyvsp[(2) - (4)].node), tPOW, (yyvsp[(4) - (4)].node)), tUMINUS, 0);
		    /*%
			$$ = dispatch3(binary, $2, ripper_intern("**"), $4);
			$$ = dispatch2(unary, ripper_intern("-@"), $$);
		    %*/
		    ;}
    break;

  case 213:
#line 2142 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = call_uni_op((yyvsp[(2) - (2)].node), tUPLUS);
		    /*%
			$$ = dispatch2(unary, ripper_intern("+@"), $2);
		    %*/
		    ;}
    break;

  case 214:
#line 2150 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = call_uni_op((yyvsp[(2) - (2)].node), tUMINUS);
		    /*%
			$$ = dispatch2(unary, ripper_intern("-@"), $2);
		    %*/
		    ;}
    break;

  case 215:
#line 2158 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = call_bin_op((yyvsp[(1) - (3)].node), '|', (yyvsp[(3) - (3)].node));
		    /*%
			$$ = dispatch3(binary, $1, ID2SYM('|'), $3);
		    %*/
		    ;}
    break;

  case 216:
#line 2166 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = call_bin_op((yyvsp[(1) - (3)].node), '^', (yyvsp[(3) - (3)].node));
		    /*%
			$$ = dispatch3(binary, $1, ID2SYM('^'), $3);
		    %*/
		    ;}
    break;

  case 217:
#line 2174 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = call_bin_op((yyvsp[(1) - (3)].node), '&', (yyvsp[(3) - (3)].node));
		    /*%
			$$ = dispatch3(binary, $1, ID2SYM('&'), $3);
		    %*/
		    ;}
    break;

  case 218:
#line 2182 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = call_bin_op((yyvsp[(1) - (3)].node), tCMP, (yyvsp[(3) - (3)].node));
		    /*%
			$$ = dispatch3(binary, $1, ripper_intern("<=>"), $3);
		    %*/
		    ;}
    break;

  case 219:
#line 2190 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = call_bin_op((yyvsp[(1) - (3)].node), '>', (yyvsp[(3) - (3)].node));
		    /*%
			$$ = dispatch3(binary, $1, ID2SYM('>'), $3);
		    %*/
		    ;}
    break;

  case 220:
#line 2198 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = call_bin_op((yyvsp[(1) - (3)].node), tGEQ, (yyvsp[(3) - (3)].node));
		    /*%
			$$ = dispatch3(binary, $1, ripper_intern(">="), $3);
		    %*/
		    ;}
    break;

  case 221:
#line 2206 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = call_bin_op((yyvsp[(1) - (3)].node), '<', (yyvsp[(3) - (3)].node));
		    /*%
			$$ = dispatch3(binary, $1, ID2SYM('<'), $3);
		    %*/
		    ;}
    break;

  case 222:
#line 2214 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = call_bin_op((yyvsp[(1) - (3)].node), tLEQ, (yyvsp[(3) - (3)].node));
		    /*%
			$$ = dispatch3(binary, $1, ripper_intern("<="), $3);
		    %*/
		    ;}
    break;

  case 223:
#line 2222 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = call_bin_op((yyvsp[(1) - (3)].node), tEQ, (yyvsp[(3) - (3)].node));
		    /*%
			$$ = dispatch3(binary, $1, ripper_intern("=="), $3);
		    %*/
		    ;}
    break;

  case 224:
#line 2230 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = call_bin_op((yyvsp[(1) - (3)].node), tEQQ, (yyvsp[(3) - (3)].node));
		    /*%
			$$ = dispatch3(binary, $1, ripper_intern("==="), $3);
		    %*/
		    ;}
    break;

  case 225:
#line 2238 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = call_bin_op((yyvsp[(1) - (3)].node), tNEQ, (yyvsp[(3) - (3)].node));
		    /*%
			$$ = dispatch3(binary, $1, ripper_intern("!="), $3);
		    %*/
		    ;}
    break;

  case 226:
#line 2246 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = match_op((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
                        if (nd_type((yyvsp[(1) - (3)].node)) == NODE_LIT && TYPE((yyvsp[(1) - (3)].node)->nd_lit) == T_REGEXP) {
                            (yyval.node) = reg_named_capture_assign((yyvsp[(1) - (3)].node)->nd_lit, (yyval.node));
                        }
		    /*%
			$$ = dispatch3(binary, $1, ripper_intern("=~"), $3);
		    %*/
		    ;}
    break;

  case 227:
#line 2257 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = call_bin_op((yyvsp[(1) - (3)].node), tNMATCH, (yyvsp[(3) - (3)].node));
		    /*%
			$$ = dispatch3(binary, $1, ripper_intern("!~"), $3);
		    %*/
		    ;}
    break;

  case 228:
#line 2265 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = call_uni_op(cond((yyvsp[(2) - (2)].node)), '!');
		    /*%
			$$ = dispatch2(unary, ID2SYM('!'), $2);
		    %*/
		    ;}
    break;

  case 229:
#line 2273 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = call_uni_op((yyvsp[(2) - (2)].node), '~');
		    /*%
			$$ = dispatch2(unary, ID2SYM('~'), $2);
		    %*/
		    ;}
    break;

  case 230:
#line 2281 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = call_bin_op((yyvsp[(1) - (3)].node), tLSHFT, (yyvsp[(3) - (3)].node));
		    /*%
			$$ = dispatch3(binary, $1, ripper_intern("<<"), $3);
		    %*/
		    ;}
    break;

  case 231:
#line 2289 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = call_bin_op((yyvsp[(1) - (3)].node), tRSHFT, (yyvsp[(3) - (3)].node));
		    /*%
			$$ = dispatch3(binary, $1, ripper_intern(">>"), $3);
		    %*/
		    ;}
    break;

  case 232:
#line 2297 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = logop(NODE_AND, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
		    /*%
			$$ = dispatch3(binary, $1, ripper_intern("&&"), $3);
		    %*/
		    ;}
    break;

  case 233:
#line 2305 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = logop(NODE_OR, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
		    /*%
			$$ = dispatch3(binary, $1, ripper_intern("||"), $3);
		    %*/
		    ;}
    break;

  case 234:
#line 2312 "parse.y"
    {in_defined = 1;;}
    break;

  case 235:
#line 2313 "parse.y"
    {
		    /*%%%*/
			in_defined = 0;
			(yyval.node) = NEW_DEFINED((yyvsp[(4) - (4)].node));
		    /*%
			in_defined = 0;
			$$ = dispatch1(defined, $4);
		    %*/
		    ;}
    break;

  case 236:
#line 2323 "parse.y"
    {
		    /*%%%*/
			value_expr((yyvsp[(1) - (6)].node));
			(yyval.node) = NEW_IF(cond((yyvsp[(1) - (6)].node)), (yyvsp[(3) - (6)].node), (yyvsp[(6) - (6)].node));
			fixpos((yyval.node), (yyvsp[(1) - (6)].node));
		    /*%
			$$ = dispatch3(ifop, $1, $3, $6);
		    %*/
		    ;}
    break;

  case 237:
#line 2333 "parse.y"
    {
			(yyval.node) = (yyvsp[(1) - (1)].node);
		    ;}
    break;

  case 238:
#line 2339 "parse.y"
    {
		    /*%%%*/
			value_expr((yyvsp[(1) - (1)].node));
			(yyval.node) = (yyvsp[(1) - (1)].node);
		        if (!(yyval.node)) (yyval.node) = NEW_NIL();
		    /*%
			$$ = $1;
		    %*/
		    ;}
    break;

  case 239:
#line 2350 "parse.y"
    {
		    /*%%%*/
			value_expr((yyvsp[(1) - (1)].node));
			(yyval.node) = (yyvsp[(1) - (1)].node);
		        if (!(yyval.node)) (yyval.node) = NEW_NIL();
		    /*%
			$$ = $1;
		    %*/
		    ;}
    break;

  case 241:
#line 2363 "parse.y"
    {
			(yyval.node) = (yyvsp[(1) - (2)].node);
		    ;}
    break;

  case 242:
#line 2367 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = arg_append((yyvsp[(1) - (4)].node), NEW_HASH((yyvsp[(3) - (4)].node)));
		    /*%
			$$ = arg_add_assocs($1, $3);
		    %*/
		    ;}
    break;

  case 243:
#line 2375 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_LIST(NEW_HASH((yyvsp[(1) - (2)].node)));
		    /*%
			$$ = arg_add_assocs(arg_new(), $1);
		    %*/
		    ;}
    break;

  case 244:
#line 2385 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = (yyvsp[(2) - (3)].node);
		    /*%
			$$ = dispatch1(arg_paren, escape_Qundef($2));
		    %*/
		    ;}
    break;

  case 249:
#line 2403 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_LIST((yyvsp[(1) - (1)].node));
		    /*%
			$$ = arg_add(arg_new(), $1);
		    %*/
		    ;}
    break;

  case 250:
#line 2411 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = arg_blk_pass((yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
		    /*%
			$$ = arg_add_optblock($1, $2);
		    %*/
		    ;}
    break;

  case 251:
#line 2419 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_LIST(NEW_HASH((yyvsp[(1) - (2)].node)));
			(yyval.node) = arg_blk_pass((yyval.node), (yyvsp[(2) - (2)].node));
		    /*%
			$$ = arg_add_assocs(arg_new(), $1);
			$$ = arg_add_optblock($$, $2);
		    %*/
		    ;}
    break;

  case 252:
#line 2429 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = arg_append((yyvsp[(1) - (4)].node), NEW_HASH((yyvsp[(3) - (4)].node)));
			(yyval.node) = arg_blk_pass((yyval.node), (yyvsp[(4) - (4)].node));
		    /*%
			$$ = arg_add_optblock(arg_add_assocs($1, $3), $4);
		    %*/
		    ;}
    break;

  case 254:
#line 2446 "parse.y"
    {
			(yyval.num) = cmdarg_stack;
			CMDARG_PUSH(1);
		    ;}
    break;

  case 255:
#line 2451 "parse.y"
    {
			/* CMDARG_POP() */
			cmdarg_stack = (yyvsp[(1) - (2)].num);
			(yyval.node) = (yyvsp[(2) - (2)].node);
		    ;}
    break;

  case 256:
#line 2459 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_BLOCK_PASS((yyvsp[(2) - (2)].node));
		    /*%
			$$ = $2;
		    %*/
		    ;}
    break;

  case 257:
#line 2469 "parse.y"
    {
			(yyval.node) = (yyvsp[(2) - (2)].node);
		    ;}
    break;

  case 258:
#line 2473 "parse.y"
    {
			(yyval.node) = 0;
		    ;}
    break;

  case 259:
#line 2477 "parse.y"
    {
			(yyval.node) = 0;
		    ;}
    break;

  case 260:
#line 2482 "parse.y"
    {
		    /*%%%*/
		      patern_match_set=0;
			(yyval.node) = NEW_LIST((yyvsp[(1) - (1)].node));
		    /*%
			$$ = arg_add(arg_new(), $1);
		    %*/
		    ;}
    break;

  case 261:
#line 2493 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_LIST((yyvsp[(1) - (1)].node));
		    /*%
			$$ = arg_add(arg_new(), $1);
		    %*/
		    ;}
    break;

  case 262:
#line 2501 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_SPLAT((yyvsp[(2) - (2)].node));
		    /*%
			$$ = arg_add_star(arg_new(), $2);
		    %*/
		    ;}
    break;

  case 263:
#line 2509 "parse.y"
    {
		    /*%%%*/
			NODE *n1;
			if ((n1 = splat_array((yyvsp[(1) - (3)].node))) != 0) {
			    (yyval.node) = list_append(n1, (yyvsp[(3) - (3)].node));
			}
			else {
			    (yyval.node) = arg_append((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
			}
		    /*%
			$$ = arg_add($1, $3);
		    %*/
		    ;}
    break;

  case 264:
#line 2523 "parse.y"
    {
		    /*%%%*/
			NODE *n1;
			if ((nd_type((yyvsp[(4) - (4)].node)) == NODE_ARRAY) && (n1 = splat_array((yyvsp[(1) - (4)].node))) != 0) {
			    (yyval.node) = list_concat(n1, (yyvsp[(4) - (4)].node));
			}
			else {
			    (yyval.node) = arg_concat((yyvsp[(1) - (4)].node), (yyvsp[(4) - (4)].node));
			}
		    /*%
			$$ = arg_add_star($1, $4);
		    %*/
		    ;}
    break;

  case 265:
#line 2539 "parse.y"
    {
		    /*%%%*/
			NODE *n1;
			if ((n1 = splat_array((yyvsp[(1) - (3)].node))) != 0) {
			    (yyval.node) = list_append(n1, (yyvsp[(3) - (3)].node));
			}
			else {
			    (yyval.node) = arg_append((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
			}
		    /*%
			$$ = mrhs_add(args2mrhs($1), $3);
		    %*/
		    ;}
    break;

  case 266:
#line 2553 "parse.y"
    {
		    /*%%%*/
			NODE *n1;
			if (nd_type((yyvsp[(4) - (4)].node)) == NODE_ARRAY &&
			    (n1 = splat_array((yyvsp[(1) - (4)].node))) != 0) {
			    (yyval.node) = list_concat(n1, (yyvsp[(4) - (4)].node));
			}
			else {
			    (yyval.node) = arg_concat((yyvsp[(1) - (4)].node), (yyvsp[(4) - (4)].node));
			}
		    /*%
			$$ = mrhs_add_star(args2mrhs($1), $4);
		    %*/
		    ;}
    break;

  case 267:
#line 2568 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_SPLAT((yyvsp[(2) - (2)].node));
		    /*%
			$$ = mrhs_add_star(mrhs_new(), $2);
		    %*/
		    ;}
    break;

  case 268:
#line 2577 "parse.y"
    {
		    /*%%%*/
			if ((yyvsp[(2) - (3)].node) == 0) {
			    (yyval.node) = NEW_ZARRAY(); /* zero length array*/
			}
			else {
			    (yyval.node) = (yyvsp[(2) - (3)].node);
			}
		    /*%
			$$ = dispatch1(array, escape_Qundef($2));
		    %*/
		    ;}
    break;

  case 277:
#line 2599 "parse.y"
    {
		    /*%%%*/
		     
			(yyval.node) = NEW_FCALL((yyvsp[(1) - (1)].id), 0);
		    /*%
			$$ = method_arg(dispatch1(fcall, $1), arg_new());
		    %*/
		    ;}
    break;

  case 278:
#line 2608 "parse.y"
    {
		    /*%%%*/
			(yyval.num) = ruby_sourceline;
		    /*%
		    %*/
		    ;}
    break;

  case 279:
#line 2616 "parse.y"
    {
		    /*%%%*/
			if ((yyvsp[(3) - (4)].node) == NULL) {
			    (yyval.node) = NEW_NIL();
			}
			else {
			    if (nd_type((yyvsp[(3) - (4)].node)) == NODE_RESCUE ||
				nd_type((yyvsp[(3) - (4)].node)) == NODE_ENSURE)
				nd_set_line((yyvsp[(3) - (4)].node), (yyvsp[(2) - (4)].num));
			    (yyval.node) = NEW_BEGIN((yyvsp[(3) - (4)].node));
			}
			nd_set_line((yyval.node), (yyvsp[(2) - (4)].num));
		    /*%
			$$ = dispatch1(begin, $3);
		    %*/
		    ;}
    break;

  case 280:
#line 2632 "parse.y"
    {lex_state = EXPR_ENDARG;;}
    break;

  case 281:
#line 2633 "parse.y"
    {
			rb_warning0("(...) interpreted as grouped expression");
		    /*%%%*/
			(yyval.node) = (yyvsp[(2) - (4)].node);
		    /*%
			$$ = dispatch1(paren, $2);
		    %*/
		    ;}
    break;

  case 282:
#line 2642 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = (yyvsp[(2) - (3)].node);
		    /*%
			$$ = dispatch1(paren, $2);
		    %*/
		    ;}
    break;

  case 283:
#line 2650 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_COLON2((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].id));
		    /*%
			$$ = dispatch2(const_path_ref, $1, $3);
		    %*/
		    ;}
    break;

  case 284:
#line 2658 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_COLON3((yyvsp[(2) - (2)].id));
		    /*%
			$$ = dispatch1(top_const_ref, $2);
		    %*/
		    ;}
    break;

  case 285:
#line 2666 "parse.y"
    {
		    /*%%%*/
			if ((yyvsp[(2) - (3)].node) == 0) {
			    (yyval.node) = NEW_ZARRAY(); /* zero length array*/
			}
			else {
			    (yyval.node) = (yyvsp[(2) - (3)].node);
			}
		    /*%
			$$ = dispatch1(array, escape_Qundef($2));
		    %*/
		    ;}
    break;

  case 286:
#line 2679 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_HASH((yyvsp[(2) - (3)].node));
		    /*%
			$$ = dispatch1(hash, escape_Qundef($2));
		    %*/
		    ;}
    break;

  case 287:
#line 2687 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_RETURN(0);
		    /*%
			$$ = dispatch0(return0);
		    %*/
		    ;}
    break;

  case 288:
#line 2695 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = new_yield((yyvsp[(3) - (4)].node));
		    /*%
			$$ = dispatch1(yield, dispatch1(paren, $3));
		    %*/
		    ;}
    break;

  case 289:
#line 2703 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_YIELD(0, Qfalse);
		    /*%
			$$ = dispatch1(yield, dispatch1(paren, arg_new()));
		    %*/
		    ;}
    break;

  case 290:
#line 2711 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_YIELD(0, Qfalse);
		    /*%
			$$ = dispatch0(yield0);
		    %*/
		    ;}
    break;

  case 291:
#line 2718 "parse.y"
    {in_defined = 1;;}
    break;

  case 292:
#line 2719 "parse.y"
    {
		    /*%%%*/
			in_defined = 0;
			(yyval.node) = NEW_DEFINED((yyvsp[(5) - (6)].node));
		    /*%
			in_defined = 0;
			$$ = dispatch1(defined, $5);
		    %*/
		    ;}
    break;

  case 293:
#line 2729 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = call_uni_op(cond((yyvsp[(3) - (4)].node)), '!');
		    /*%
			$$ = dispatch2(unary, ripper_intern("not"), $3);
		    %*/
		    ;}
    break;

  case 294:
#line 2737 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = call_uni_op(cond(NEW_NIL()), '!');
		    /*%
			$$ = dispatch2(unary, ripper_intern("not"), Qnil);
		    %*/
		    ;}
    break;

  case 295:
#line 2745 "parse.y"
    {
		    /*%%%*/
		       
			(yyvsp[(2) - (2)].node)->nd_iter = NEW_FCALL((yyvsp[(1) - (2)].id), 0);
			(yyval.node) = (yyvsp[(2) - (2)].node);
			fixpos((yyvsp[(2) - (2)].node)->nd_iter, (yyvsp[(2) - (2)].node));
		    /*%
			$$ = method_arg(dispatch1(fcall, $1), arg_new());
			$$ = method_add_block($$, $2);
		    %*/
		    ;}
    break;

  case 297:
#line 2758 "parse.y"
    {
		    /*%%%*/
			block_dup_check((yyvsp[(1) - (2)].node)->nd_args, (yyvsp[(2) - (2)].node));
			(yyvsp[(2) - (2)].node)->nd_iter = (yyvsp[(1) - (2)].node);
			(yyval.node) = (yyvsp[(2) - (2)].node);
			fixpos((yyval.node), (yyvsp[(1) - (2)].node));
		    /*%
			$$ = method_add_block($1, $2);
		    %*/
		    ;}
    break;

  case 298:
#line 2769 "parse.y"
    {
			(yyval.node) = (yyvsp[(2) - (2)].node);
		    ;}
    break;

  case 299:
#line 2776 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_IF(cond((yyvsp[(2) - (6)].node)), (yyvsp[(4) - (6)].node), (yyvsp[(5) - (6)].node));
			fixpos((yyval.node), (yyvsp[(2) - (6)].node));
		    /*%
			$$ = dispatch3(if, $2, $4, escape_Qundef($5));
		    %*/
		    ;}
    break;

  case 300:
#line 2788 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_UNLESS(cond((yyvsp[(2) - (6)].node)), (yyvsp[(4) - (6)].node), (yyvsp[(5) - (6)].node));
			fixpos((yyval.node), (yyvsp[(2) - (6)].node));
		    /*%
			$$ = dispatch3(unless, $2, $4, escape_Qundef($5));
		    %*/
		    ;}
    break;

  case 301:
#line 2796 "parse.y"
    {COND_PUSH(1);;}
    break;

  case 302:
#line 2796 "parse.y"
    {COND_POP();;}
    break;

  case 303:
#line 2799 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_WHILE(cond((yyvsp[(3) - (7)].node)), (yyvsp[(6) - (7)].node), 1);
			fixpos((yyval.node), (yyvsp[(3) - (7)].node));
		    /*%
			$$ = dispatch2(while, $3, $6);
		    %*/
		    ;}
    break;

  case 304:
#line 2807 "parse.y"
    {COND_PUSH(1);;}
    break;

  case 305:
#line 2807 "parse.y"
    {COND_POP();;}
    break;

  case 306:
#line 2810 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_UNTIL(cond((yyvsp[(3) - (7)].node)), (yyvsp[(6) - (7)].node), 1);
			fixpos((yyval.node), (yyvsp[(3) - (7)].node));
		    /*%
			$$ = dispatch2(until, $3, $6);
		    %*/
		    ;}
    break;

  case 307:
#line 2821 "parse.y"
    {
		    /*%%%*/
		      (yyval.node) = NEW_PATERN((yyvsp[(2) - (5)].node), (yyvsp[(4) - (5)].node));
		      fixpos((yyval.node), (yyvsp[(2) - (5)].node));
		    /*%
			$$ = dispatch2(case, $2, $4);
		    %*/
		    ;}
    break;

  case 308:
#line 2833 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_CASE((yyvsp[(2) - (5)].node), (yyvsp[(4) - (5)].node));
			fixpos((yyval.node), (yyvsp[(2) - (5)].node));
		    /*%
			$$ = dispatch2(case, $2, $4);
		    %*/
		    ;}
    break;

  case 309:
#line 2842 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_CASE(0, (yyvsp[(3) - (4)].node));
		    /*%
			$$ = dispatch2(case, Qnil, $3);
		    %*/
		    ;}
    break;

  case 310:
#line 2850 "parse.y"
    {COND_PUSH(1);;}
    break;

  case 311:
#line 2852 "parse.y"
    {COND_POP();;}
    break;

  case 312:
#line 2855 "parse.y"
    {
		    /*%%%*/
			/*
			 *  for a, b, c in e
			 *  #=>
			 *  e.each{|*x| a, b, c = x
			 *
			 *  for a in e
			 *  #=>
			 *  e.each{|x| a, = x}
			 */
			ID id = internal_id();
			ID *tbl = ALLOC_N(ID, 2);
			NODE *m = NEW_ARGS_AUX(0, 0);
			NODE *args, *scope;

			if (nd_type((yyvsp[(2) - (9)].node)) == NODE_MASGN) {
			    /* if args.length == 1 && args[0].kind_of?(Array)
			     *   args = args[0]
			     * end
			     */
			    NODE *one = NEW_LIST(NEW_LIT(INT2FIX(1)));
			    NODE *zero = NEW_LIST(NEW_LIT(INT2FIX(0)));
			    m->nd_next = block_append(
				NEW_IF(
				    NEW_NODE(NODE_AND,
					     NEW_CALL(NEW_CALL(NEW_DVAR(id), rb_intern("length"), 0),
						      rb_intern("=="), one),
					     NEW_CALL(NEW_CALL(NEW_DVAR(id), rb_intern("[]"), zero),
						      rb_intern("kind_of?"), NEW_LIST(NEW_LIT(rb_cArray))),
					     0),
				    NEW_DASGN_CURR(id,
						   NEW_CALL(NEW_DVAR(id), rb_intern("[]"), zero)),
				    0),
				node_assign((yyvsp[(2) - (9)].node), NEW_DVAR(id)));

			    args = new_args(m, 0, id, 0, 0);
			}
			else {
			    if (nd_type((yyvsp[(2) - (9)].node)) == NODE_LASGN ||
				nd_type((yyvsp[(2) - (9)].node)) == NODE_DASGN ||
				nd_type((yyvsp[(2) - (9)].node)) == NODE_DASGN_CURR) {
				(yyvsp[(2) - (9)].node)->nd_value = NEW_DVAR(id);
				m->nd_plen = 1;
				m->nd_next = (yyvsp[(2) - (9)].node);
				args = new_args(m, 0, 0, 0, 0);
			    }
			    else {
				m->nd_next = node_assign(NEW_MASGN(NEW_LIST((yyvsp[(2) - (9)].node)), 0), NEW_DVAR(id));
				args = new_args(m, 0, id, 0, 0);
			    }
			}
			scope = NEW_NODE(NODE_SCOPE, tbl, (yyvsp[(8) - (9)].node), args);
			tbl[0] = 1; tbl[1] = id;
			(yyval.node) = NEW_FOR(0, (yyvsp[(5) - (9)].node), scope);
			fixpos((yyval.node), (yyvsp[(2) - (9)].node));
		    /*%
			$$ = dispatch3(for, $2, $5, $8);
		    %*/
		    ;}
    break;

  case 313:
#line 2916 "parse.y"
    {
			if (in_def || in_single)
			    yyerror("class definition in method body");
		    /*%%%*/
			local_push(0);
			(yyval.num) = ruby_sourceline;
		    /*%
		    %*/
		    ;}
    break;

  case 314:
#line 2927 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_CLASS((yyvsp[(2) - (6)].node), (yyvsp[(5) - (6)].node), (yyvsp[(3) - (6)].node));
			nd_set_line((yyval.node), (yyvsp[(4) - (6)].num));
			local_pop();
		    /*%
			$$ = dispatch3(class, $2, $3, $5);
		    %*/
		    ;}
    break;

  case 315:
#line 2937 "parse.y"
    {
			(yyval.num) = in_def;
			in_def = 0;
		    ;}
    break;

  case 316:
#line 2942 "parse.y"
    {
			(yyval.num) = in_single;
			in_single = 0;
		    /*%%%*/
			local_push(0);
		    /*%
		    %*/
		    ;}
    break;

  case 317:
#line 2952 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_SCLASS((yyvsp[(3) - (8)].node), (yyvsp[(7) - (8)].node));
			fixpos((yyval.node), (yyvsp[(3) - (8)].node));
			local_pop();
		    /*%
			$$ = dispatch2(sclass, $3, $7);
		    %*/
			in_def = (yyvsp[(4) - (8)].num);
			in_single = (yyvsp[(6) - (8)].num);
		    ;}
    break;

  case 318:
#line 2964 "parse.y"
    {
			if (in_def || in_single)
			    yyerror("module definition in method body");
		    /*%%%*/
			local_push(0);
			(yyval.num) = ruby_sourceline;
		    /*%
		    %*/
		    ;}
    break;

  case 319:
#line 2975 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_MODULE((yyvsp[(2) - (5)].node), (yyvsp[(4) - (5)].node));
			nd_set_line((yyval.node), (yyvsp[(3) - (5)].num));
			local_pop();
		    /*%
			$$ = dispatch2(module, $2, $4);
		    %*/
		    ;}
    break;

  case 320:
#line 2985 "parse.y"
    {
			(yyval.id) = cur_mid;
			cur_mid = (yyvsp[(2) - (2)].id);
			in_def++;
		    /*%%%*/
			local_push(0);
		    /*%
		    %*/
		    ;}
    break;

  case 321:
#line 2997 "parse.y"
    {
		    /*%%%*/
			NODE *body = remove_begin((yyvsp[(5) - (6)].node));
			reduce_nodes(&body);
			(yyval.node) = NEW_DEFN((yyvsp[(2) - (6)].id), (yyvsp[(4) - (6)].node), body, NOEX_PRIVATE);
			fixpos((yyval.node), (yyvsp[(4) - (6)].node));
			fixpos((yyval.node)->nd_defn, (yyvsp[(4) - (6)].node));
			local_pop();
		    /*%
			$$ = dispatch3(def, $2, $4, $5);
		    %*/
			in_def--;
			cur_mid = (yyvsp[(3) - (6)].id);
		    ;}
    break;

  case 322:
#line 3011 "parse.y"
    {lex_state = EXPR_FNAME;;}
    break;

  case 323:
#line 3012 "parse.y"
    {
			in_single++;
			lex_state = EXPR_END; /* force for args */
		    /*%%%*/
			local_push(0);
		    /*%
		    %*/
		    ;}
    break;

  case 324:
#line 3023 "parse.y"
    {
		    /*%%%*/
			NODE *body = remove_begin((yyvsp[(8) - (9)].node));
			reduce_nodes(&body);
			(yyval.node) = NEW_DEFS((yyvsp[(2) - (9)].node), (yyvsp[(5) - (9)].id), (yyvsp[(7) - (9)].node), body);
			fixpos((yyval.node), (yyvsp[(2) - (9)].node));
			fixpos((yyval.node)->nd_defn, (yyvsp[(2) - (9)].node));
			local_pop();
		    /*%
			$$ = dispatch5(defs, $2, $3, $5, $7, $8);
		    %*/
			in_single--;
		    ;}
    break;

  case 325:
#line 3037 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_BREAK(0);
		    /*%
			$$ = dispatch1(break, arg_new());
		    %*/
		    ;}
    break;

  case 326:
#line 3045 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_NEXT(0);
		    /*%
			$$ = dispatch1(next, arg_new());
		    %*/
		    ;}
    break;

  case 327:
#line 3053 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_REDO();
		    /*%
			$$ = dispatch0(redo);
		    %*/
		    ;}
    break;

  case 328:
#line 3061 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_RETRY();
		    /*%
			$$ = dispatch0(retry);
		    %*/
		    ;}
    break;

  case 329:
#line 3071 "parse.y"
    {
		    /*%%%*/
			value_expr((yyvsp[(1) - (1)].node));
			(yyval.node) = (yyvsp[(1) - (1)].node);
		        if (!(yyval.node)) (yyval.node) = NEW_NIL();
		    /*%
			$$ = $1;
		    %*/
		    ;}
    break;

  case 330:
#line 3083 "parse.y"
    {
#ifndef RIPPER
			if (RTEST(ruby_verbose)) token_info_push(parser, "begin");
#endif
		    ;}
    break;

  case 331:
#line 3090 "parse.y"
    {
#ifndef RIPPER
			if (RTEST(ruby_verbose)) token_info_push(parser, "if");
#endif
		    ;}
    break;

  case 332:
#line 3097 "parse.y"
    {
#ifndef RIPPER
			if (RTEST(ruby_verbose)) token_info_push(parser, "unless");
#endif
		    ;}
    break;

  case 333:
#line 3104 "parse.y"
    {
#ifndef RIPPER
			if (RTEST(ruby_verbose)) token_info_push(parser, "while");
#endif
		    ;}
    break;

  case 334:
#line 3111 "parse.y"
    {
#ifndef RIPPER
			if (RTEST(ruby_verbose)) token_info_push(parser, "until");
#endif
		    ;}
    break;

  case 335:
#line 3118 "parse.y"
    {
#ifndef RIPPER
			if (RTEST(ruby_verbose)) token_info_push(parser, "case");
#endif
		    ;}
    break;

  case 336:
#line 3124 "parse.y"
    {
#ifndef RIPPER
                  if (RTEST(ruby_verbose)) token_info_push(parser, "match");
#endif
                  ;}
    break;

  case 337:
#line 3130 "parse.y"
    {
#ifndef RIPPER
			if (RTEST(ruby_verbose)) token_info_push(parser, "for");
#endif
		    ;}
    break;

  case 338:
#line 3137 "parse.y"
    {
#ifndef RIPPER
			if (RTEST(ruby_verbose)) token_info_push(parser, "class");
#endif
		    ;}
    break;

  case 339:
#line 3144 "parse.y"
    {
#ifndef RIPPER
			if (RTEST(ruby_verbose)) token_info_push(parser, "module");
#endif
		    ;}
    break;

  case 340:
#line 3151 "parse.y"
    {
#ifndef RIPPER
			if (RTEST(ruby_verbose)) token_info_push(parser, "def");
#endif
		    ;}
    break;

  case 341:
#line 3158 "parse.y"
    {
#ifndef RIPPER
			if (RTEST(ruby_verbose)) token_info_pop(parser, "end");  /* POP */
#endif
		    ;}
    break;

  case 348:
#line 3189 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_IF(cond((yyvsp[(2) - (5)].node)), (yyvsp[(4) - (5)].node), (yyvsp[(5) - (5)].node));
			fixpos((yyval.node), (yyvsp[(2) - (5)].node));
		    /*%
			$$ = dispatch3(elsif, $2, $4, escape_Qundef($5));
		    %*/
		    ;}
    break;

  case 350:
#line 3201 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = (yyvsp[(2) - (2)].node);
		    /*%
			$$ = dispatch1(else, $2);
		    %*/
		    ;}
    break;

  case 353:
#line 3215 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = assignable((yyvsp[(1) - (1)].id), 0);
		    /*%
			$$ = dispatch1(mlhs_paren, $1);
		    %*/
		    ;}
    break;

  case 354:
#line 3223 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = (yyvsp[(2) - (3)].node);
		    /*%
			$$ = dispatch1(mlhs_paren, $2);
		    %*/
		    ;}
    break;

  case 355:
#line 3233 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_LIST((yyvsp[(1) - (1)].node));
		    /*%
			$$ = mlhs_add(mlhs_new(), $1);
		    %*/
		    ;}
    break;

  case 356:
#line 3241 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = list_append((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
		    /*%
			$$ = mlhs_add($1, $3);
		    %*/
		    ;}
    break;

  case 357:
#line 3251 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_MASGN((yyvsp[(1) - (1)].node), 0);
		    /*%
			$$ = $1;
		    %*/
		    ;}
    break;

  case 358:
#line 3259 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_MASGN((yyvsp[(1) - (4)].node), assignable((yyvsp[(4) - (4)].id), 0));
		    /*%
			$$ = mlhs_add_star($1, $4);
		    %*/
		    ;}
    break;

  case 359:
#line 3267 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_MASGN((yyvsp[(1) - (6)].node), NEW_POSTARG(assignable((yyvsp[(4) - (6)].id), 0), (yyvsp[(6) - (6)].node)));
		    /*%
			$$ = mlhs_add_star($1, $4);
		    %*/
		    ;}
    break;

  case 360:
#line 3275 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_MASGN((yyvsp[(1) - (3)].node), -1);
		    /*%
			$$ = mlhs_add_star($1, Qnil);
		    %*/
		    ;}
    break;

  case 361:
#line 3283 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_MASGN((yyvsp[(1) - (5)].node), NEW_POSTARG(-1, (yyvsp[(5) - (5)].node)));
		    /*%
			$$ = mlhs_add_star($1, $5);
		    %*/
		    ;}
    break;

  case 362:
#line 3291 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_MASGN(0, assignable((yyvsp[(2) - (2)].id), 0));
		    /*%
			$$ = mlhs_add_star(mlhs_new(), $2);
		    %*/
		    ;}
    break;

  case 363:
#line 3299 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_MASGN(0, NEW_POSTARG(assignable((yyvsp[(2) - (4)].id), 0), (yyvsp[(4) - (4)].node)));
		    /*%
		      #if 0
		      TODO: Check me
		      #endif
			$$ = mlhs_add_star($2, $4);
		    %*/
		    ;}
    break;

  case 364:
#line 3310 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_MASGN(0, -1);
		    /*%
			$$ = mlhs_add_star(mlhs_new(), Qnil);
		    %*/
		    ;}
    break;

  case 365:
#line 3318 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_MASGN(0, NEW_POSTARG(-1, (yyvsp[(3) - (3)].node)));
		    /*%
			$$ = mlhs_add_star(mlhs_new(), Qnil);
		    %*/
		    ;}
    break;

  case 366:
#line 3328 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = new_args((yyvsp[(1) - (6)].node), (yyvsp[(3) - (6)].node), (yyvsp[(5) - (6)].id), 0, (yyvsp[(6) - (6)].id));
		    /*%
			$$ = params_new($1, $3, $5, Qnil, escape_Qundef($6));
		    %*/
		    ;}
    break;

  case 367:
#line 3336 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = new_args((yyvsp[(1) - (8)].node), (yyvsp[(3) - (8)].node), (yyvsp[(5) - (8)].id), (yyvsp[(7) - (8)].node), (yyvsp[(8) - (8)].id));
		    /*%
			$$ = params_new($1, $3, $5, $7, escape_Qundef($8));
		    %*/
		    ;}
    break;

  case 368:
#line 3344 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = new_args((yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].node), 0, 0, (yyvsp[(4) - (4)].id));
		    /*%
			$$ = params_new($1, $3, Qnil, Qnil, escape_Qundef($4));
		    %*/
		    ;}
    break;

  case 369:
#line 3352 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = new_args((yyvsp[(1) - (6)].node), (yyvsp[(3) - (6)].node), 0, (yyvsp[(5) - (6)].node), (yyvsp[(6) - (6)].id));
		    /*%
			$$ = params_new($1, $3, Qnil, $5, escape_Qundef($6));
		    %*/
		    ;}
    break;

  case 370:
#line 3360 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = new_args((yyvsp[(1) - (4)].node), 0, (yyvsp[(3) - (4)].id), 0, (yyvsp[(4) - (4)].id));
		    /*%
			$$ = params_new($1, Qnil, $3, Qnil, escape_Qundef($4));
		    %*/
		    ;}
    break;

  case 371:
#line 3368 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = new_args((yyvsp[(1) - (2)].node), 0, 1, 0, 0);
		    /*%
			$$ = params_new($1, Qnil, Qnil, Qnil, Qnil);
                        dispatch1(excessed_comma, $$);
		    %*/
		    ;}
    break;

  case 372:
#line 3377 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = new_args((yyvsp[(1) - (6)].node), 0, (yyvsp[(3) - (6)].id), (yyvsp[(5) - (6)].node), (yyvsp[(6) - (6)].id));
		    /*%
			$$ = params_new($1, Qnil, $3, $5, escape_Qundef($6));
		    %*/
		    ;}
    break;

  case 373:
#line 3385 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = new_args((yyvsp[(1) - (2)].node), 0, 0, 0, (yyvsp[(2) - (2)].id));
		    /*%
			$$ = params_new($1, Qnil,Qnil, Qnil, escape_Qundef($2));
		    %*/
		    ;}
    break;

  case 374:
#line 3393 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = new_args(0, (yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].id), 0, (yyvsp[(4) - (4)].id));
		    /*%
			$$ = params_new(Qnil, $1, $3, Qnil, escape_Qundef($4));
		    %*/
		    ;}
    break;

  case 375:
#line 3401 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = new_args(0, (yyvsp[(1) - (6)].node), (yyvsp[(3) - (6)].id), (yyvsp[(5) - (6)].node), (yyvsp[(6) - (6)].id));
		    /*%
			$$ = params_new(Qnil, $1, $3, $5, escape_Qundef($6));
		    %*/
		    ;}
    break;

  case 376:
#line 3409 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = new_args(0, (yyvsp[(1) - (2)].node), 0, 0, (yyvsp[(2) - (2)].id));
		    /*%
			$$ = params_new(Qnil, $1, Qnil, Qnil,escape_Qundef($2));
		    %*/
		    ;}
    break;

  case 377:
#line 3417 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = new_args(0, (yyvsp[(1) - (4)].node), 0, (yyvsp[(3) - (4)].node), (yyvsp[(4) - (4)].id));
		    /*%
			$$ = params_new(Qnil, $1, Qnil, $3, escape_Qundef($4));
		    %*/
		    ;}
    break;

  case 378:
#line 3425 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = new_args(0, 0, (yyvsp[(1) - (2)].id), 0, (yyvsp[(2) - (2)].id));
		    /*%
			$$ = params_new(Qnil, Qnil, $1, Qnil, escape_Qundef($2));
		    %*/
		    ;}
    break;

  case 379:
#line 3433 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = new_args(0, 0, (yyvsp[(1) - (4)].id), (yyvsp[(3) - (4)].node), (yyvsp[(4) - (4)].id));
		    /*%
			$$ = params_new(Qnil, Qnil, $1, $3, escape_Qundef($4));
		    %*/
		    ;}
    break;

  case 380:
#line 3441 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = new_args(0, 0, 0, 0, (yyvsp[(1) - (1)].id));
		    /*%
			$$ = params_new(Qnil, Qnil, Qnil, Qnil, $1);
		    %*/
		    ;}
    break;

  case 382:
#line 3452 "parse.y"
    {
			command_start = Qtrue;
		    ;}
    break;

  case 383:
#line 3458 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = 0;
		    /*%
			$$ = blockvar_new(params_new(Qnil,Qnil,Qnil,Qnil,Qnil),
                                          escape_Qundef($2));
		    %*/
		    ;}
    break;

  case 384:
#line 3467 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = 0;
		    /*%
			$$ = blockvar_new(params_new(Qnil,Qnil,Qnil,Qnil,Qnil),
                                          Qnil);
		    %*/
		    ;}
    break;

  case 385:
#line 3476 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = (yyvsp[(2) - (4)].node);
		    /*%
			$$ = blockvar_new(escape_Qundef($2), escape_Qundef($3));
		    %*/
		    ;}
    break;

  case 387:
#line 3488 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = 0;
		    /*%
			$$ = $2;
		    %*/
		    ;}
    break;

  case 390:
#line 3514 "parse.y"
    {
		    /*%%%*/
			new_bv((yyvsp[(1) - (1)].id));
		    /*%
			$$ = $1;
		    %*/
		    ;}
    break;

  case 391:
#line 3522 "parse.y"
    {
			(yyval.node) = 0;
		    ;}
    break;

  case 392:
#line 3527 "parse.y"
    {
		    /*%%%*/
			dyna_push();
		    /*%
		    %*/
			(yyval.num) = lpar_beg;
			lpar_beg = ++paren_nest;
		    ;}
    break;

  case 393:
#line 3537 "parse.y"
    {
			lpar_beg = (yyvsp[(1) - (3)].num);
		    /*%%%*/
			(yyval.node) = (yyvsp[(2) - (3)].node);
			(yyval.node)->nd_body = NEW_SCOPE((yyvsp[(2) - (3)].node)->nd_head, (yyvsp[(3) - (3)].node));
			dyna_pop();
		    /*%
			$$ = dispatch2(lambda, $2, $3);
		    %*/
		    ;}
    break;

  case 394:
#line 3550 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_LAMBDA((yyvsp[(2) - (4)].node));
		    /*%
			$$ = dispatch1(paren, $2);
		    %*/
		    ;}
    break;

  case 395:
#line 3558 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_LAMBDA((yyvsp[(1) - (1)].node));
		    /*%
			$$ = $1;
		    %*/
		    ;}
    break;

  case 396:
#line 3568 "parse.y"
    {
			(yyval.node) = (yyvsp[(2) - (3)].node);
		    ;}
    break;

  case 397:
#line 3572 "parse.y"
    {
			(yyval.node) = (yyvsp[(2) - (3)].node);
		    ;}
    break;

  case 398:
#line 3578 "parse.y"
    {
		    /*%%%*/
			dyna_push();
			(yyval.num) = ruby_sourceline;
		    /*% %*/
		    ;}
    break;

  case 399:
#line 3587 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_ITER((yyvsp[(3) - (5)].node),(yyvsp[(4) - (5)].node));
			nd_set_line((yyval.node), (yyvsp[(2) - (5)].num));
			dyna_pop();
		    /*%
			$$ = dispatch2(do_block, escape_Qundef($3), $4);
		    %*/
		    ;}
    break;

  case 400:
#line 3599 "parse.y"
    {
		    /*%%%*/
			if (nd_type((yyvsp[(1) - (2)].node)) == NODE_YIELD) {
			    compile_error(PARSER_ARG "block given to yield");
			}
			else {
			    block_dup_check((yyvsp[(1) - (2)].node)->nd_args, (yyvsp[(2) - (2)].node));
			}    
			(yyvsp[(2) - (2)].node)->nd_iter = (yyvsp[(1) - (2)].node);
			(yyval.node) = (yyvsp[(2) - (2)].node);
			fixpos((yyval.node), (yyvsp[(1) - (2)].node));
		    /*%
			$$ = method_add_block($1, $2);
		    %*/
		    ;}
    break;

  case 401:
#line 3615 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_CALL((yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].id), (yyvsp[(4) - (4)].node));
		    /*%
			$$ = dispatch3(call, $1, ripper_id2sym('.'), $3);
			$$ = method_optarg($$, $4);
		    %*/
		    ;}
    break;

  case 402:
#line 3624 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_CALL((yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].id), (yyvsp[(4) - (4)].node));
		    /*%
			$$ = dispatch3(call, $1, ripper_intern("::"), $3);
			$$ = method_optarg($$, $4);
		    %*/
		    ;}
    break;

  case 403:
#line 3635 "parse.y"
    {
		    /*%%%*/
		      
			(yyval.node) = NEW_FCALL((yyvsp[(1) - (2)].id), (yyvsp[(2) - (2)].node));
			fixpos((yyval.node), (yyvsp[(2) - (2)].node));
		    /*%
			$$ = method_arg(dispatch1(fcall, $1), $2);
		    %*/
		    ;}
    break;

  case 404:
#line 3645 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_CALL((yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].id), (yyvsp[(4) - (4)].node));
			fixpos((yyval.node), (yyvsp[(1) - (4)].node));
		    /*%
			$$ = dispatch3(call, $1, ripper_id2sym('.'), $3);
			$$ = method_optarg($$, $4);
		    %*/
		    ;}
    break;

  case 405:
#line 3655 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_CALL((yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].id), (yyvsp[(4) - (4)].node));
			fixpos((yyval.node), (yyvsp[(1) - (4)].node));
		    /*%
			$$ = dispatch3(call, $1, ripper_id2sym('.'), $3);
			$$ = method_optarg($$, $4);
		    %*/
		    ;}
    break;

  case 406:
#line 3665 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_CALL((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].id), 0);
		    /*%
			$$ = dispatch3(call, $1, ripper_intern("::"), $3);
		    %*/
		    ;}
    break;

  case 407:
#line 3673 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_CALL((yyvsp[(1) - (3)].node), rb_intern("call"), (yyvsp[(3) - (3)].node));
			fixpos((yyval.node), (yyvsp[(1) - (3)].node));
		    /*%
			$$ = dispatch3(call, dispatch1(paren, $1),
				       ripper_id2sym('.'), rb_intern("call"));
			$$ = method_optarg($$, $3);
		    %*/
		    ;}
    break;

  case 408:
#line 3684 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_CALL((yyvsp[(1) - (3)].node), rb_intern("call"), (yyvsp[(3) - (3)].node));
			fixpos((yyval.node), (yyvsp[(1) - (3)].node));
		    /*%
			$$ = dispatch3(call, dispatch1(paren, $1),
				       ripper_id2sym('.'), rb_intern("call"));
			$$ = method_optarg($$, $3);
		    %*/
		    ;}
    break;

  case 409:
#line 3695 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_SUPER((yyvsp[(2) - (2)].node));
		    /*%
			$$ = dispatch1(super, $2);
		    %*/
		    ;}
    break;

  case 410:
#line 3703 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_ZSUPER();
		    /*%
			$$ = dispatch0(zsuper);
		    %*/
		    ;}
    break;

  case 411:
#line 3711 "parse.y"
    {
		    /*%%%*/
		      if ((yyvsp[(1) - (4)].node) && nd_type((yyvsp[(1) - (4)].node)) == NODE_SELF)
			    (yyval.node) = NEW_FCALL(tAREF, (yyvsp[(3) - (4)].node));
			else
			    (yyval.node) = NEW_CALL((yyvsp[(1) - (4)].node), tAREF, (yyvsp[(3) - (4)].node));
			fixpos((yyval.node), (yyvsp[(1) - (4)].node));
		    /*%
			$$ = dispatch2(aref, $1, escape_Qundef($3));
		    %*/
		    ;}
    break;

  case 412:
#line 3725 "parse.y"
    {
		    /*%%%*/
			dyna_push();
			(yyval.num) = ruby_sourceline;
		    /*%
                    %*/
		    ;}
    break;

  case 413:
#line 3734 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_ITER((yyvsp[(3) - (5)].node),(yyvsp[(4) - (5)].node));
			nd_set_line((yyval.node), (yyvsp[(2) - (5)].num));
			nd_set_line((yyval.node)->nd_body, (yyvsp[(2) - (5)].num));
			nd_set_line((yyval.node)->nd_body->nd_body, (yyvsp[(2) - (5)].num));
			dyna_pop();
		    /*%
			$$ = dispatch2(brace_block, escape_Qundef($3), $4);
		    %*/
		    ;}
    break;

  case 414:
#line 3746 "parse.y"
    {
		    /*%%%*/
			dyna_push();
			(yyval.num) = ruby_sourceline;
		    /*%
                    %*/
		    ;}
    break;

  case 415:
#line 3755 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_ITER((yyvsp[(3) - (5)].node),(yyvsp[(4) - (5)].node));
			nd_set_line((yyval.node), (yyvsp[(2) - (5)].num));
			dyna_pop();
		    /*%
			$$ = dispatch2(do_block, escape_Qundef($3), $4);
		    %*/
		    ;}
    break;

  case 416:
#line 3766 "parse.y"
    {
                        patern_match_set=1;
                    ;}
    break;

  case 417:
#line 3773 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_WHEN((yyvsp[(2) - (5)].node), (yyvsp[(4) - (5)].node), (yyvsp[(5) - (5)].node));
		    /*%
			$$ = dispatch3(when, $2, $4, escape_Qundef($5));
		    %*/
		    ;}
    break;

  case 418:
#line 3785 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_WHEN((yyvsp[(2) - (5)].node), (yyvsp[(4) - (5)].node), (yyvsp[(5) - (5)].node));
		    /*%
			$$ = dispatch3(when, $2, $4, escape_Qundef($5));
		    %*/
		    ;}
    break;

  case 423:
#line 3803 "parse.y"
    {
		    /*%%%*/
			if ((yyvsp[(3) - (6)].node)) {
			    (yyvsp[(3) - (6)].node) = node_assign((yyvsp[(3) - (6)].node), NEW_ERRINFO());
			    (yyvsp[(5) - (6)].node) = block_append((yyvsp[(3) - (6)].node), (yyvsp[(5) - (6)].node));
			}
			(yyval.node) = NEW_RESBODY((yyvsp[(2) - (6)].node), (yyvsp[(5) - (6)].node), (yyvsp[(6) - (6)].node));
			fixpos((yyval.node), (yyvsp[(2) - (6)].node)?(yyvsp[(2) - (6)].node):(yyvsp[(5) - (6)].node));
		    /*%
			$$ = dispatch4(rescue,
				       escape_Qundef($2),
				       escape_Qundef($3),
				       escape_Qundef($5),
				       escape_Qundef($6));
		    %*/
		    ;}
    break;

  case 425:
#line 3823 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_LIST((yyvsp[(1) - (1)].node));
		    /*%
			$$ = rb_ary_new3(1, $1);
		    %*/
		    ;}
    break;

  case 426:
#line 3831 "parse.y"
    {
		    /*%%%*/
			if (!((yyval.node) = splat_array((yyvsp[(1) - (1)].node)))) (yyval.node) = (yyvsp[(1) - (1)].node);
		    /*%
			$$ = $1;
		    %*/
		    ;}
    break;

  case 428:
#line 3842 "parse.y"
    {
			(yyval.node) = (yyvsp[(2) - (2)].node);
		    ;}
    break;

  case 430:
#line 3849 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = (yyvsp[(2) - (2)].node);
		    /*%
			$$ = dispatch1(ensure, $2);
		    %*/
		    ;}
    break;

  case 433:
#line 3861 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_LIT(ID2SYM((yyvsp[(1) - (1)].id)));
		    /*%
			$$ = dispatch1(symbol_literal, $1);
		    %*/
		    ;}
    break;

  case 435:
#line 3872 "parse.y"
    {
		    /*%%%*/
			NODE *node = (yyvsp[(1) - (1)].node);
			if (!node) {
			    node = NEW_STR(STR_NEW0());
			}
			else {
			    node = evstr2dstr(node);
			}
			(yyval.node) = node;
		    /*%
			$$ = $1;
		    %*/
		    ;}
    break;

  case 438:
#line 3891 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = literal_concat((yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
		    /*%
			$$ = dispatch2(string_concat, $1, $2);
		    %*/
		    ;}
    break;

  case 439:
#line 3901 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = (yyvsp[(2) - (3)].node);
		    /*%
			$$ = dispatch1(string_literal, $2);
		    %*/
		    ;}
    break;

  case 440:
#line 3911 "parse.y"
    {
		    /*%%%*/
			NODE *node = (yyvsp[(2) - (3)].node);
			if (!node) {
			    node = NEW_XSTR(STR_NEW0());
			}
			else {
			    switch (nd_type(node)) {
			      case NODE_STR:
				nd_set_type(node, NODE_XSTR);
				break;
			      case NODE_DSTR:
				nd_set_type(node, NODE_DXSTR);
				break;
			      default:
				node = NEW_NODE(NODE_DXSTR, STR_NEW0(), 1, NEW_LIST(node));
				break;
			    }
			}
			(yyval.node) = node;
		    /*%
			$$ = dispatch1(xstring_literal, $2);
		    %*/
		    ;}
    break;

  case 441:
#line 3938 "parse.y"
    {
		    /*%%%*/
			int options = (yyvsp[(3) - (3)].num);
			NODE *node = (yyvsp[(2) - (3)].node);
                        NODE *list;
			if (!node) {
			    node = NEW_LIT(reg_compile(STR_NEW0(), options));
			}
			else switch (nd_type(node)) {
			  case NODE_STR:
			    {
				VALUE src = node->nd_lit;
				nd_set_type(node, NODE_LIT);
				node->nd_lit = reg_compile(src, options);
			    }
			    break;
			  default:
			    node = NEW_NODE(NODE_DSTR, STR_NEW0(), 1, NEW_LIST(node));
			  case NODE_DSTR:
			    if (options & RE_OPTION_ONCE) {
				nd_set_type(node, NODE_DREGX_ONCE);
			    }
			    else {
				nd_set_type(node, NODE_DREGX);
			    }
			    node->nd_cflag = options & RE_OPTION_MASK;
                            reg_fragment_check(node->nd_lit, options);
                            for (list = node->nd_next; list; list = list->nd_next) {
                                if (nd_type(list->nd_head) == NODE_STR) {
                                    reg_fragment_check(list->nd_head->nd_lit, options);
                                }
                            }
			    break;
			}
			(yyval.node) = node;
		    /*%
			$$ = dispatch2(regexp_literal, $2, $3);
		    %*/
		    ;}
    break;

  case 442:
#line 3980 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_ZARRAY();
		    /*%
			$$ = dispatch0(words_new);
		    %*/
		    ;}
    break;

  case 443:
#line 3988 "parse.y"
    {
			(yyval.node) = (yyvsp[(2) - (3)].node);
		    ;}
    break;

  case 444:
#line 3994 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = 0;
		    /*%
			$$ = dispatch0(words_new);
		    %*/
		    ;}
    break;

  case 445:
#line 4002 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = list_append((yyvsp[(1) - (3)].node), evstr2dstr((yyvsp[(2) - (3)].node)));
		    /*%
			$$ = dispatch2(words_add, $1, $2);
		    %*/
		    ;}
    break;

  case 447:
#line 4020 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = literal_concat((yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
		    /*%
			$$ = dispatch2(word_add, $1, $2);
		    %*/
		    ;}
    break;

  case 448:
#line 4030 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_ZARRAY();
		    /*%
			$$ = dispatch0(qwords_new);
		    %*/
		    ;}
    break;

  case 449:
#line 4038 "parse.y"
    {
			(yyval.node) = (yyvsp[(2) - (3)].node);
		    ;}
    break;

  case 450:
#line 4044 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = 0;
		    /*%
			$$ = dispatch0(qwords_new);
		    %*/
		    ;}
    break;

  case 451:
#line 4052 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = list_append((yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node));
		    /*%
			$$ = dispatch2(qwords_add, $1, $2);
		    %*/
		    ;}
    break;

  case 452:
#line 4062 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = 0;
		    /*%
			$$ = dispatch0(string_content);
		    %*/
		    ;}
    break;

  case 453:
#line 4070 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = literal_concat((yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
		    /*%
			$$ = dispatch2(string_add, $1, $2);
		    %*/
		    ;}
    break;

  case 454:
#line 4080 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = 0;
		    /*%
			$$ = dispatch0(xstring_new);
		    %*/
		    ;}
    break;

  case 455:
#line 4088 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = literal_concat((yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
		    /*%
			$$ = dispatch2(xstring_add, $1, $2);
		    %*/
		    ;}
    break;

  case 457:
#line 4099 "parse.y"
    {
			(yyval.node) = lex_strterm;
			lex_strterm = 0;
			lex_state = EXPR_BEG;
		    ;}
    break;

  case 458:
#line 4105 "parse.y"
    {
		    /*%%%*/
			lex_strterm = (yyvsp[(2) - (3)].node);
			(yyval.node) = NEW_EVSTR((yyvsp[(3) - (3)].node));
		    /*%
			lex_strterm = $<node>2;
			$$ = dispatch1(string_dvar, $3);
		    %*/
		    ;}
    break;

  case 459:
#line 4115 "parse.y"
    {
			(yyval.node) = lex_strterm;
			lex_strterm = 0;
			lex_state = EXPR_BEG;
			COND_PUSH(0);
			CMDARG_PUSH(0);
		    ;}
    break;

  case 460:
#line 4123 "parse.y"
    {
			lex_strterm = (yyvsp[(2) - (4)].node);
			COND_LEXPOP();
			CMDARG_LEXPOP();
		    /*%%%*/
			if ((yyvsp[(3) - (4)].node)) (yyvsp[(3) - (4)].node)->flags &= ~NODE_FL_NEWLINE;
			(yyval.node) = new_evstr((yyvsp[(3) - (4)].node));
		    /*%
			$$ = dispatch1(string_embexpr, $3);
		    %*/
		    ;}
    break;

  case 461:
#line 4137 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_GVAR((yyvsp[(1) - (1)].id));
		    /*%
			$$ = dispatch1(var_ref, $1);
		    %*/
		    ;}
    break;

  case 462:
#line 4145 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_IVAR((yyvsp[(1) - (1)].id));
		    /*%
			$$ = dispatch1(var_ref, $1);
		    %*/
		    ;}
    break;

  case 463:
#line 4153 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_CVAR((yyvsp[(1) - (1)].id));
		    /*%
			$$ = dispatch1(var_ref, $1);
		    %*/
		    ;}
    break;

  case 465:
#line 4164 "parse.y"
    {
		    /*%%%*/
			lex_state = EXPR_END;
			(yyval.id) = (yyvsp[(2) - (2)].id);
		    /*%
			lex_state = EXPR_END;
			$$ = dispatch1(symbol, $2);
		    %*/
		    ;}
    break;

  case 470:
#line 4182 "parse.y"
    {
		    /*%%%*/
			lex_state = EXPR_END;
			if (!((yyval.node) = (yyvsp[(2) - (3)].node))) {
			    (yyval.node) = NEW_LIT(ID2SYM(rb_intern("")));
			}
			else {
			    VALUE lit;

			    switch (nd_type((yyval.node))) {
			      case NODE_DSTR:
				nd_set_type((yyval.node), NODE_DSYM);
				break;
			      case NODE_STR:
				lit = (yyval.node)->nd_lit;
				(yyval.node)->nd_lit = ID2SYM(rb_intern_str(lit));
				nd_set_type((yyval.node), NODE_LIT);
				break;
			      default:
				(yyval.node) = NEW_NODE(NODE_DSYM, STR_NEW0(), 1, NEW_LIST((yyval.node)));
				break;
			    }
			}
		    /*%
			lex_state = EXPR_END;
			$$ = dispatch1(dyna_symbol, $2);
		    %*/
		    ;}
    break;

  case 473:
#line 4215 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = negate_lit((yyvsp[(2) - (2)].node));
		    /*%
			$$ = dispatch2(unary, ripper_intern("-@"), $2);
		    %*/
		    ;}
    break;

  case 474:
#line 4223 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = negate_lit((yyvsp[(2) - (2)].node));
		    /*%
			$$ = dispatch2(unary, ripper_intern("-@"), $2);
		    %*/
		    ;}
    break;

  case 480:
#line 4237 "parse.y"
    {ifndef_ripper((yyval.id) = keyword_nil);;}
    break;

  case 481:
#line 4238 "parse.y"
    {ifndef_ripper((yyval.id) = keyword_self);;}
    break;

  case 482:
#line 4239 "parse.y"
    {ifndef_ripper((yyval.id) = keyword_true);;}
    break;

  case 483:
#line 4240 "parse.y"
    {ifndef_ripper((yyval.id) = keyword_false);;}
    break;

  case 484:
#line 4241 "parse.y"
    {ifndef_ripper((yyval.id) = keyword__FILE__);;}
    break;

  case 485:
#line 4242 "parse.y"
    {ifndef_ripper((yyval.id) = keyword__LINE__);;}
    break;

  case 486:
#line 4243 "parse.y"
    {ifndef_ripper((yyval.id) = keyword__ENCODING__);;}
    break;

  case 487:
#line 4247 "parse.y"
    {
		    /*%%%*/
		      
			if (!((yyval.node) = gettable((yyvsp[(1) - (1)].id)))) (yyval.node) = NEW_BEGIN(0);
		    /*%
			$$ = dispatch1(var_ref, $1);
		    %*/
		    ;}
    break;

  case 488:
#line 4258 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = assignable((yyvsp[(1) - (1)].id), 0);
		    /*%
			$$ = dispatch1(var_field, $1);
		    %*/
		    ;}
    break;

  case 491:
#line 4272 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = 0;
		    /*%
			$$ = Qnil;
		    %*/
		    ;}
    break;

  case 492:
#line 4280 "parse.y"
    {
			lex_state = EXPR_BEG;
		    ;}
    break;

  case 493:
#line 4284 "parse.y"
    {
			(yyval.node) = (yyvsp[(3) - (4)].node);
		    ;}
    break;

  case 494:
#line 4288 "parse.y"
    {
		    /*%%%*/
			yyerrok;
			(yyval.node) = 0;
		    /*%
			yyerrok;
			$$ = Qnil;
		    %*/
		    ;}
    break;

  case 495:
#line 4300 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = (yyvsp[(2) - (3)].node);
			lex_state = EXPR_BEG;
			command_start = Qtrue;
		    /*%
			$$ = dispatch1(paren, $2);
			lex_state = EXPR_BEG;
			command_start = Qtrue;
		    %*/
		    ;}
    break;

  case 496:
#line 4312 "parse.y"
    {
			(yyval.node) = (yyvsp[(1) - (2)].node);
		    ;}
    break;

  case 497:
#line 4318 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = new_args((yyvsp[(1) - (6)].node), (yyvsp[(3) - (6)].node), (yyvsp[(5) - (6)].id), 0, (yyvsp[(6) - (6)].id));
		    /*%
			$$ = params_new($1, $3, $5, Qnil, escape_Qundef($6));
		    %*/
		    ;}
    break;

  case 498:
#line 4326 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = new_args((yyvsp[(1) - (8)].node), (yyvsp[(3) - (8)].node), (yyvsp[(5) - (8)].id), (yyvsp[(7) - (8)].node), (yyvsp[(8) - (8)].id));
		    /*%
			$$ = params_new($1, $3, $5, $7, escape_Qundef($8));
		    %*/
		    ;}
    break;

  case 499:
#line 4334 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = new_args((yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].node), 0, 0, (yyvsp[(4) - (4)].id));
		    /*%
			$$ = params_new($1, $3, Qnil, Qnil, escape_Qundef($4));
		    %*/
		    ;}
    break;

  case 500:
#line 4342 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = new_args((yyvsp[(1) - (6)].node), (yyvsp[(3) - (6)].node), 0, (yyvsp[(5) - (6)].node), (yyvsp[(6) - (6)].id));
		    /*%
			$$ = params_new($1, $3, Qnil, $5, escape_Qundef($6));
		    %*/
		    ;}
    break;

  case 501:
#line 4350 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = new_args((yyvsp[(1) - (4)].node), 0, (yyvsp[(3) - (4)].id), 0, (yyvsp[(4) - (4)].id));
		    /*%
			$$ = params_new($1, Qnil, $3, Qnil, escape_Qundef($4));
		    %*/
		    ;}
    break;

  case 502:
#line 4358 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = new_args((yyvsp[(1) - (6)].node), 0, (yyvsp[(3) - (6)].id), (yyvsp[(5) - (6)].node), (yyvsp[(6) - (6)].id));
		    /*%
			$$ = params_new($1, Qnil, $3, $5, escape_Qundef($6));
		    %*/
		    ;}
    break;

  case 503:
#line 4366 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = new_args((yyvsp[(1) - (2)].node), 0, 0, 0, (yyvsp[(2) - (2)].id));
		    /*%
			$$ = params_new($1, Qnil, Qnil, Qnil,escape_Qundef($2));
		    %*/
		    ;}
    break;

  case 504:
#line 4374 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = new_args(0, (yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].id), 0, (yyvsp[(4) - (4)].id));
		    /*%
			$$ = params_new(Qnil, $1, $3, Qnil, escape_Qundef($4));
		    %*/
		    ;}
    break;

  case 505:
#line 4382 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = new_args(0, (yyvsp[(1) - (6)].node), (yyvsp[(3) - (6)].id), (yyvsp[(5) - (6)].node), (yyvsp[(6) - (6)].id));
		    /*%
			$$ = params_new(Qnil, $1, $3, $5, escape_Qundef($6));
		    %*/
		    ;}
    break;

  case 506:
#line 4390 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = new_args(0, (yyvsp[(1) - (2)].node), 0, 0, (yyvsp[(2) - (2)].id));
		    /*%
			$$ = params_new(Qnil, $1, Qnil, Qnil,escape_Qundef($2));
		    %*/
		    ;}
    break;

  case 507:
#line 4398 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = new_args(0, (yyvsp[(1) - (4)].node), 0, (yyvsp[(3) - (4)].node), (yyvsp[(4) - (4)].id));
		    /*%
			$$ = params_new(Qnil, $1, Qnil, $3, escape_Qundef($4));
		    %*/
		    ;}
    break;

  case 508:
#line 4406 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = new_args(0, 0, (yyvsp[(1) - (2)].id), 0, (yyvsp[(2) - (2)].id));
		    /*%
			$$ = params_new(Qnil, Qnil, $1, Qnil,escape_Qundef($2));
		    %*/
		    ;}
    break;

  case 509:
#line 4414 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = new_args(0, 0, (yyvsp[(1) - (4)].id), (yyvsp[(3) - (4)].node), (yyvsp[(4) - (4)].id));
		    /*%
			$$ = params_new(Qnil, Qnil, $1, $3, escape_Qundef($4));
		    %*/
		    ;}
    break;

  case 510:
#line 4422 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = new_args(0, 0, 0, 0, (yyvsp[(1) - (1)].id));
		    /*%
			$$ = params_new(Qnil, Qnil, Qnil, Qnil, $1);
		    %*/
		    ;}
    break;

  case 511:
#line 4430 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = new_args(0, 0, 0, 0, 0);
		    /*%
			$$ = params_new(Qnil, Qnil, Qnil, Qnil, Qnil);
		    %*/
		    ;}
    break;

  case 512:
#line 4440 "parse.y"
    {
		    /*%%%*/
			yyerror("formal argument cannot be a constant");
			(yyval.id) = 0;
		    /*%
			$$ = dispatch1(param_error, $1);
		    %*/
		    ;}
    break;

  case 513:
#line 4449 "parse.y"
    {
		    /*%%%*/
			yyerror("formal argument cannot be an instance variable");
			(yyval.id) = 0;
		    /*%
			$$ = dispatch1(param_error, $1);
		    %*/
		    ;}
    break;

  case 514:
#line 4458 "parse.y"
    {
		    /*%%%*/
			yyerror("formal argument cannot be a global variable");
			(yyval.id) = 0;
		    /*%
			$$ = dispatch1(param_error, $1);
		    %*/
		    ;}
    break;

  case 515:
#line 4467 "parse.y"
    {
		    /*%%%*/
			yyerror("formal argument cannot be a class variable");
			(yyval.id) = 0;
		    /*%
			$$ = dispatch1(param_error, $1);
		    %*/
		    ;}
    break;

  case 517:
#line 4479 "parse.y"
    {
		    /*%%%*/
			if (!is_local_id((yyvsp[(1) - (1)].id)))
			    yyerror("formal argument must be local variable");
			shadowing_lvar((yyvsp[(1) - (1)].id));
		    /*%
		    %*/
			(yyval.id) = (yyvsp[(1) - (1)].id);
		    ;}
    break;

  case 518:
#line 4491 "parse.y"
    {
		    /*%%%*/
			arg_var((yyvsp[(1) - (1)].id));
			(yyval.node) = NEW_ARGS_AUX((yyvsp[(1) - (1)].id), 1);
		    /*%
		    %*/
		    ;}
    break;

  case 519:
#line 4499 "parse.y"
    {
		    /*%%%*/
			ID tid = internal_id();
			arg_var(tid);
			if (dyna_in_block()) {
			    (yyvsp[(2) - (3)].node)->nd_value = NEW_DVAR(tid);
			}
			else {
			    (yyvsp[(2) - (3)].node)->nd_value = NEW_LVAR(tid);
			}
			(yyval.node) = NEW_ARGS_AUX(tid, 1);
			(yyval.node)->nd_next = (yyvsp[(2) - (3)].node);
		    /*%
			$$ = dispatch1(mlhs_paren, $2);
		    %*/
		    ;}
    break;

  case 521:
#line 4525 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = (yyvsp[(1) - (3)].node);
			(yyval.node)->nd_plen++;
			(yyval.node)->nd_next = block_append((yyval.node)->nd_next, (yyvsp[(3) - (3)].node)->nd_next);
			rb_gc_force_recycle((VALUE)(yyvsp[(3) - (3)].node));
		    /*%
			$$ = rb_ary_push($1, $3);
		    %*/
		    ;}
    break;

  case 522:
#line 4538 "parse.y"
    {
		    /*%%%*/
		      
			if (!is_local_id((yyvsp[(1) - (3)].id)))
			    yyerror("formal argument must be local variable");
			shadowing_lvar((yyvsp[(1) - (3)].id));
			arg_var((yyvsp[(1) - (3)].id));
			(yyval.node) = NEW_OPT_ARG(0, assignable((yyvsp[(1) - (3)].id), (yyvsp[(3) - (3)].node)));
		    /*%
			$$ = rb_assoc_new($1, $3);
		    %*/
		    ;}
    break;

  case 523:
#line 4553 "parse.y"
    {
		    /*%%%*/
		      
			if (!is_local_id((yyvsp[(1) - (3)].id)))
			    yyerror("formal argument must be local variable");
			shadowing_lvar((yyvsp[(1) - (3)].id));
			arg_var((yyvsp[(1) - (3)].id));
			(yyval.node) = NEW_OPT_ARG(0, assignable((yyvsp[(1) - (3)].id), (yyvsp[(3) - (3)].node)));
		    /*%
			$$ = rb_assoc_new($1, $3);
		    %*/
		    ;}
    break;

  case 524:
#line 4568 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = (yyvsp[(1) - (1)].node);
		    /*%
			$$ = rb_ary_new3(1, $1);
		    %*/
		    ;}
    break;

  case 525:
#line 4576 "parse.y"
    {
		    /*%%%*/
			NODE *opts = (yyvsp[(1) - (3)].node);

			while (opts->nd_next) {
			    opts = opts->nd_next;
			}
			opts->nd_next = (yyvsp[(3) - (3)].node);
			(yyval.node) = (yyvsp[(1) - (3)].node);
		    /*%
			$$ = rb_ary_push($1, $3);
		    %*/
		    ;}
    break;

  case 526:
#line 4592 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = (yyvsp[(1) - (1)].node);
		    /*%
			$$ = rb_ary_new3(1, $1);
		    %*/
		    ;}
    break;

  case 527:
#line 4600 "parse.y"
    {
		    /*%%%*/
			NODE *opts = (yyvsp[(1) - (3)].node);

			while (opts->nd_next) {
			    opts = opts->nd_next;
			}
			opts->nd_next = (yyvsp[(3) - (3)].node);
			(yyval.node) = (yyvsp[(1) - (3)].node);
		    /*%
			$$ = rb_ary_push($1, $3);
		    %*/
		    ;}
    break;

  case 530:
#line 4620 "parse.y"
    {
		    /*%%%*/
			if (!is_local_id((yyvsp[(2) - (2)].id)))
			    yyerror("rest argument must be local variable");
			shadowing_lvar((yyvsp[(2) - (2)].id));
			arg_var((yyvsp[(2) - (2)].id));
			(yyval.id) = (yyvsp[(2) - (2)].id);
		    /*%
			$$ = dispatch1(rest_param, $2);
		    %*/
		    ;}
    break;

  case 531:
#line 4632 "parse.y"
    {
		    /*%%%*/
			(yyval.id) = internal_id();
			arg_var((yyval.id));
		    /*%
			$$ = dispatch1(rest_param, Qnil);
		    %*/
		    ;}
    break;

  case 534:
#line 4647 "parse.y"
    {
		    /*%%%*/
			if (!is_local_id((yyvsp[(2) - (2)].id)))
			    yyerror("block argument must be local variable");
			else if (!dyna_in_block() && local_id((yyvsp[(2) - (2)].id)))
			    yyerror("duplicated block argument name");
			shadowing_lvar((yyvsp[(2) - (2)].id));
			arg_var((yyvsp[(2) - (2)].id));
			(yyval.id) = (yyvsp[(2) - (2)].id);
		    /*%
			$$ = dispatch1(blockarg, $2);
		    %*/
		    ;}
    break;

  case 535:
#line 4663 "parse.y"
    {
			(yyval.id) = (yyvsp[(2) - (2)].id);
		    ;}
    break;

  case 536:
#line 4667 "parse.y"
    {
		    /*%%%*/
			(yyval.id) = 0;
		    /*%
			$$ = Qundef;
		    %*/
		    ;}
    break;

  case 537:
#line 4677 "parse.y"
    {
		    /*%%%*/
			value_expr((yyvsp[(1) - (1)].node));
			(yyval.node) = (yyvsp[(1) - (1)].node);
		        if (!(yyval.node)) (yyval.node) = NEW_NIL();
		    /*%
			$$ = $1;
		    %*/
		    ;}
    break;

  case 538:
#line 4686 "parse.y"
    {lex_state = EXPR_BEG;;}
    break;

  case 539:
#line 4687 "parse.y"
    {
		    /*%%%*/
			if ((yyvsp[(3) - (4)].node) == 0) {
			    yyerror("can't define singleton method for ().");
			}
			else {
			    switch (nd_type((yyvsp[(3) - (4)].node))) {
			      case NODE_STR:
			      case NODE_DSTR:
			      case NODE_XSTR:
			      case NODE_DXSTR:
			      case NODE_DREGX:
			      case NODE_LIT:
			      case NODE_ARRAY:
			      case NODE_ZARRAY:
				yyerror("can't define singleton method for literals");
			      default:
				value_expr((yyvsp[(3) - (4)].node));
				break;
			    }
			}
			(yyval.node) = (yyvsp[(3) - (4)].node);
		    /*%
			$$ = dispatch1(paren, $3);
		    %*/
		    ;}
    break;

  case 541:
#line 4717 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = (yyvsp[(1) - (2)].node);
		    /*%
			$$ = dispatch1(assoclist_from_args, $1);
		    %*/
		    ;}
    break;

  case 543:
#line 4734 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = list_concat((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
		    /*%
			$$ = rb_ary_push($1, $3);
		    %*/
		    ;}
    break;

  case 544:
#line 4744 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = list_append(NEW_LIST((yyvsp[(1) - (3)].node)), (yyvsp[(3) - (3)].node));
		    /*%
			$$ = dispatch2(assoc_new, $1, $3);
		    %*/
		    ;}
    break;

  case 545:
#line 4752 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = list_append(NEW_LIST(NEW_LIT(ID2SYM((yyvsp[(1) - (2)].id)))), (yyvsp[(2) - (2)].node));
		    /*%
			$$ = dispatch2(assoc_new, $1, $2);
		    %*/
		    ;}
    break;

  case 567:
#line 4808 "parse.y"
    {yyerrok;;}
    break;

  case 570:
#line 4813 "parse.y"
    {yyerrok;;}
    break;

  case 571:
#line 4817 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = 0;
		    /*%
			$$ = Qundef;
		    %*/
		    ;}
    break;


/* Line 1267 of yacc.c.  */
#line 9990 "parse.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      parser_yyerror (parser, YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    parser_yyerror (parser, yymsg);
	  }
	else
	  {
	    parser_yyerror (parser, YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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
		      yytoken, &yylval, parser);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, parser);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  parser_yyerror (parser, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, parser);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, parser);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 4825 "parse.y"

# undef parser
# undef yylex
# undef yylval
# define yylval  (*((YYSTYPE*)(parser->parser_yylval)))

static int parser_regx_options(struct parser_params*);
static int parser_tokadd_string(struct parser_params*,int,int,int,long*,rb_encoding**);
static void parser_tokaddmbc(struct parser_params *parser, int c, rb_encoding *enc);
static int parser_parse_string(struct parser_params*,NODE*);
static int parser_here_document(struct parser_params*,NODE*);


# define nextc()                   parser_nextc(parser)
# define pushback(c)               parser_pushback(parser, c)
# define newtok()                  parser_newtok(parser)
# define tokspace(n)               parser_tokspace(parser, n)
# define tokadd(c)                 parser_tokadd(parser, c)
# define tok_hex(numlen)           parser_tok_hex(parser, numlen)
# define read_escape(flags,e)      parser_read_escape(parser, flags, e)
# define tokadd_escape(e)          parser_tokadd_escape(parser, e)
# define regx_options()            parser_regx_options(parser)
# define tokadd_string(f,t,p,n,e)  parser_tokadd_string(parser,f,t,p,n,e)
# define parse_string(n)           parser_parse_string(parser,n)
# define tokaddmbc(c, enc)         parser_tokaddmbc(parser, c, enc)
# define here_document(n)          parser_here_document(parser,n)
# define heredoc_identifier()      parser_heredoc_identifier(parser)
# define heredoc_restore(n)        parser_heredoc_restore(parser,n)
# define whole_match_p(e,l,i)      parser_whole_match_p(parser,e,l,i)

#ifdef RIPPER
/* FIXME */
# define local_id(x)       1
# define dyna_in_block()   1
#endif /* RIPPER */

#ifndef RIPPER
# define set_yylval_str(x) yylval.node = NEW_STR(x)
# define set_yylval_num(x) yylval.num = x
# define set_yylval_id(x)  yylval.id = x
# define set_yylval_literal(x) yylval.node = NEW_LIT(x)
# define set_yylval_node(x) yylval.node = x
# define yylval_id() yylval.id
#else
# define set_yylval_str(x) (void)(x)
# define set_yylval_num(x) (void)(x)
# define set_yylval_id(x) (void)(x)
# define set_yylval_literal(x) (void)(x)
# define set_yylval_node(x) (void)(x)
# define yylval_id() SYM2ID(yylval.val)
#endif

#ifdef RIPPER
#define ripper_flush(p) (p->tokp = p->parser_lex_p)

static void
ripper_dispatch_scan_event(struct parser_params *parser, int t)
{
    VALUE str;

    if (lex_p < parser->tokp) rb_raise(rb_eRuntimeError, "lex_p < tokp");
    if (lex_p == parser->tokp) return;
    str = STR_NEW(parser->tokp, lex_p - parser->tokp);
    yylval.val = ripper_dispatch1(parser, ripper_token2eventid(t), str);
    ripper_flush(parser);
}

static void
ripper_dispatch_delayed_token(struct parser_params *parser, int t)
{
    int saved_line = ruby_sourceline;
    const char *saved_tokp = parser->tokp;

    ruby_sourceline = parser->delayed_line;
    parser->tokp = lex_pbeg + parser->delayed_col;
    yylval.val = ripper_dispatch1(parser, ripper_token2eventid(t), parser->delayed);
    parser->delayed = Qnil;
    ruby_sourceline = saved_line;
    parser->tokp = saved_tokp;
}
#endif /* RIPPER */

#include "ruby/regex.h"
#include "ruby/util.h"

/* We remove any previous definition of `SIGN_EXTEND_CHAR',
   since ours (we hope) works properly with all combinations of
   machines, compilers, `char' and `unsigned char' argument types.
   (Per Bothner suggested the basic approach.)  */
#undef SIGN_EXTEND_CHAR
#if __STDC__
# define SIGN_EXTEND_CHAR(c) ((signed char)(c))
#else  /* not __STDC__ */
/* As in Harbison and Steele.  */
# define SIGN_EXTEND_CHAR(c) ((((unsigned char)(c)) ^ 128) - 128)
#endif

#define parser_encoding_name()  (parser->enc->name)
#define parser_mbclen()  mbclen((lex_p-1),lex_pend,parser->enc)
#define parser_precise_mbclen()  rb_enc_precise_mbclen((lex_p-1),lex_pend,parser->enc)
#define is_identchar(p,e,enc) (rb_enc_isalnum(*p,enc) || (*p) == '_' || !ISASCII(*p))
#define parser_is_identchar() (!parser->eofp && is_identchar((lex_p-1),lex_pend,parser->enc))

#define parser_isascii() ISASCII(*(lex_p-1))

#ifndef RIPPER
static int
token_info_get_column(struct parser_params *parser, const char *token)
{
    int column = 1;
    const char *p, *pend = lex_p - strlen(token);
    for (p = lex_pbeg; p < pend; p++) {
	if (*p == '\t') {
	    column = (((column - 1) / 8) + 1) * 8;
	}
	column++;
    }
    return column;
}

static int
token_info_has_nonspaces(struct parser_params *parser, const char *token)
{
    const char *p, *pend = lex_p - strlen(token);
    for (p = lex_pbeg; p < pend; p++) {
	if (*p != ' ' && *p != '\t') {
	    return 1;
	}
    }
    return 0;
}

static void
token_info_push(struct parser_params *parser, const char *token)
{
    token_info *ptinfo;

    if (compile_for_eval) return;
    ptinfo = ALLOC(token_info);
    ptinfo->token = token;
    ptinfo->linenum = ruby_sourceline;
    ptinfo->column = token_info_get_column(parser, token);
    ptinfo->nonspc = token_info_has_nonspaces(parser, token);
    ptinfo->next = parser->parser_token_info;

    parser->parser_token_info = ptinfo;
}

static void
token_info_pop(struct parser_params *parser, const char *token)
{
    int linenum;
    token_info *ptinfo = parser->parser_token_info;

    if (!ptinfo) return;
    parser->parser_token_info = ptinfo->next;
    if (token_info_get_column(parser, token) == ptinfo->column) { /* OK */
	goto finish;
    }
    linenum = ruby_sourceline;
    if (linenum == ptinfo->linenum) { /* SKIP */
	goto finish;
    }
    if (token_info_has_nonspaces(parser, token) || ptinfo->nonspc) { /* SKIP */
	goto finish;
    }
    rb_compile_warning(ruby_sourcefile, linenum,
               "mismatched indentations at '%s' with '%s' at %d",
	       token, ptinfo->token, ptinfo->linenum);

  finish:
    xfree(ptinfo);
}
#endif	/* RIPPER */

static int
parser_yyerror(struct parser_params *parser, const char *msg)
{
#ifndef RIPPER
    const int max_line_margin = 30;
    const char *p, *pe;
    char *buf;
    int len, i;

    compile_error(PARSER_ARG "%s", msg);
    p = lex_p;
    while (lex_pbeg <= p) {
	if (*p == '\n') break;
	p--;
    }
    p++;

    pe = lex_p;
    while (pe < lex_pend) {
	if (*pe == '\n') break;
	pe++;
    }

    len = pe - p;
    if (len > 4) {
	char *p2;
	const char *pre = "", *post = "";

	if (len > max_line_margin * 2 + 10) {
	    if (lex_p - p > max_line_margin) {
		p = rb_enc_prev_char(p, lex_p - max_line_margin, pe, rb_enc_get(lex_lastline));
		pre = "...";
	    }
	    if (pe - lex_p > max_line_margin) {
		pe = rb_enc_prev_char(lex_p, lex_p + max_line_margin, pe, rb_enc_get(lex_lastline));
		post = "...";
	    }
	    len = pe - p;
	}
	buf = ALLOCA_N(char, len+2);
	MEMCPY(buf, p, char, len);
	buf[len] = '\0';
	rb_compile_error_append("%s%s%s", pre, buf, post);

	i = lex_p - p;
	p2 = buf; pe = buf + len;

	while (p2 < pe) {
	    if (*p2 != '\t') *p2 = ' ';
	    p2++;
	}
	buf[i] = '^';
	buf[i+1] = '\0';
	rb_compile_error_append("%s%s", pre, buf);
    }
#else
    dispatch1(parse_error, STR_NEW2(msg));
#endif /* !RIPPER */
    return 0;
}

static void parser_prepare(struct parser_params *parser);

#ifndef RIPPER
VALUE ruby_suppress_tracing(VALUE (*func)(VALUE, int), VALUE arg, int always);

static VALUE
debug_lines(const char *f)
{
    if (rb_const_defined_at(rb_cObject, rb_intern("SCRIPT_LINES__"))) {
	VALUE hash = rb_const_get_at(rb_cObject, rb_intern("SCRIPT_LINES__"));
	if (TYPE(hash) == T_HASH) {
	    VALUE fname = rb_str_new2(f);
	    VALUE lines = rb_ary_new();
	    rb_hash_aset(hash, fname, lines);
	    return lines;
	}
    }
    return 0;
}

static VALUE
coverage(const char *f, int n)
{
    extern VALUE rb_get_coverages(void);
    VALUE coverages = rb_get_coverages();
    if (RTEST(coverages) && RBASIC(coverages)->klass == 0) {
	VALUE fname = rb_str_new2(f);
	VALUE lines = rb_ary_new2(n);
	int i;
	RBASIC(lines)->klass = 0;
	for (i = 0; i < n; i++) RARRAY_PTR(lines)[i] = Qnil;
	RARRAY(lines)->as.heap.len = n;
	rb_hash_aset(coverages, fname, lines);
	return lines;
    }
    return 0;
}

static int
e_option_supplied(struct parser_params *parser)
{
    if (strcmp(ruby_sourcefile, "-e") == 0)
	return Qtrue;
    return Qfalse;
}

static VALUE
yycompile0(VALUE arg, int tracing)
{
    int n;
    NODE *tree;
    struct parser_params *parser = (struct parser_params *)arg;

    if (!compile_for_eval && rb_safe_level() == 0) {
	ruby_debug_lines = debug_lines(ruby_sourcefile);
	if (ruby_debug_lines && ruby_sourceline > 0) {
	    VALUE str = STR_NEW0();
	    n = ruby_sourceline;
	    do {
		rb_ary_push(ruby_debug_lines, str);
	    } while (--n);
	}

	if (!e_option_supplied(parser)) {
	    ruby_coverage = coverage(ruby_sourcefile, ruby_sourceline);
	}
    }

    parser_prepare(parser);
    deferred_nodes = 0;
    n = yyparse((void*)parser);
    ruby_debug_lines = 0;
    ruby_coverage = 0;
    compile_for_eval = 0;

    lex_strterm = 0;
    lex_p = lex_pbeg = lex_pend = 0;
    lex_lastline = lex_nextline = 0;
    if (parser->nerr) {
	return 0;
    }
    tree = ruby_eval_tree;
    if (!tree) {
	tree = NEW_NIL();
    }
    if (ruby_eval_tree_begin) {
	NODE *scope = ruby_eval_tree;

        if (scope) {
	    scope->nd_body = NEW_PRELUDE(ruby_eval_tree_begin, scope->nd_body);
	}
	tree = scope;
    }
    else {
	tree = ruby_eval_tree;
    }
    return (VALUE)tree;
}

static NODE*
yycompile(struct parser_params *parser, const char *f, int line)
{
    ruby_sourcefile = ruby_strdup(f);
    ruby_sourceline = line - 1;
    return (NODE *)ruby_suppress_tracing(yycompile0, (VALUE)parser, Qtrue);
}
#endif /* !RIPPER */

static VALUE
lex_get_str(struct parser_params *parser, VALUE s)
{
    char *beg, *end, *pend;

    beg = RSTRING_PTR(s);
    if (lex_gets_ptr) {
	if (RSTRING_LEN(s) == lex_gets_ptr) return Qnil;
	beg += lex_gets_ptr;
    }
    pend = RSTRING_PTR(s) + RSTRING_LEN(s);
    end = beg;
    while (end < pend) {
	if (*end++ == '\n') break;
    }
    lex_gets_ptr = end - RSTRING_PTR(s);
    return rb_enc_str_new(beg, end - beg, rb_enc_get(s));
}

static VALUE
lex_getline(struct parser_params *parser)
{
    VALUE line = (*parser->parser_lex_gets)(parser, parser->parser_lex_input);
#ifndef RIPPER
    if (ruby_debug_lines && !NIL_P(line)) {
	rb_ary_push(ruby_debug_lines, line);
    }
    if (ruby_coverage && !NIL_P(line)) {
	rb_ary_push(ruby_coverage, Qnil);
    }
#endif
    return line;
}

#ifndef RIPPER
NODE*
rb_compile_string(const char *f, VALUE s, int line)
{
    VALUE volatile vparser = rb_parser_new();

    return rb_parser_compile_string(vparser, f, s, line);
}

NODE*
rb_parser_compile_string(volatile VALUE vparser, const char *f, VALUE s, int line)
{
    struct parser_params *parser;
    NODE *node;
    volatile VALUE tmp;

    Data_Get_Struct(vparser, struct parser_params, parser);
    lex_gets = lex_get_str;
    lex_gets_ptr = 0;
    lex_input = s;
    lex_pbeg = lex_p = lex_pend = 0;
    compile_for_eval = rb_parse_in_eval();

    node = yycompile(parser, f, line);
    tmp = vparser; /* prohibit tail call optimization */

    return node;
}

NODE*
rb_compile_cstr(const char *f, const char *s, int len, int line)
{
    return rb_compile_string(f, rb_str_new(s, len), line);
}

NODE*
rb_parser_compile_cstr(volatile VALUE vparser, const char *f, const char *s, int len, int line)
{
    return rb_parser_compile_string(vparser, f, rb_str_new(s, len), line);
}

static VALUE
lex_io_gets(struct parser_params *parser, VALUE io)
{
    return rb_io_gets(io);
}

NODE*
rb_compile_file(const char *f, VALUE file, int start)
{
    VALUE volatile vparser = rb_parser_new();

    return rb_parser_compile_file(vparser, f, file, start);
}

NODE*
rb_parser_compile_file(volatile VALUE vparser, const char *f, VALUE file, int start)
{
    struct parser_params *parser;
    volatile VALUE tmp;
    NODE *node;

    Data_Get_Struct(vparser, struct parser_params, parser);
    lex_gets = lex_io_gets;
    lex_input = file;
    lex_pbeg = lex_p = lex_pend = 0;
    compile_for_eval = rb_parse_in_eval();

    node = yycompile(parser, f, start);
    tmp = vparser; /* prohibit tail call optimization */

    return node;
}
#endif  /* !RIPPER */

#define STR_FUNC_ESCAPE 0x01
#define STR_FUNC_EXPAND 0x02
#define STR_FUNC_REGEXP 0x04
#define STR_FUNC_QWORDS 0x08
#define STR_FUNC_SYMBOL 0x10
#define STR_FUNC_INDENT 0x20

enum string_type {
    str_squote = (0),
    str_dquote = (STR_FUNC_EXPAND),
    str_xquote = (STR_FUNC_EXPAND),
    str_regexp = (STR_FUNC_REGEXP|STR_FUNC_ESCAPE|STR_FUNC_EXPAND),
    str_sword  = (STR_FUNC_QWORDS),
    str_dword  = (STR_FUNC_QWORDS|STR_FUNC_EXPAND),
    str_ssym   = (STR_FUNC_SYMBOL),
    str_dsym   = (STR_FUNC_SYMBOL|STR_FUNC_EXPAND)
};

static VALUE
parser_str_new(const char *p, long n, rb_encoding *enc, int func, rb_encoding *enc0)
{
    VALUE str;

    str = rb_enc_str_new(p, n, enc);
    if (!(func & STR_FUNC_REGEXP) && rb_enc_asciicompat(enc)) {
	if (rb_enc_str_coderange(str) == ENC_CODERANGE_7BIT) {
	}
	else if (enc0 == rb_usascii_encoding() && enc != rb_utf8_encoding()) {
	    rb_enc_associate(str, rb_ascii8bit_encoding());
	}
    }

    return str;
}

#define lex_goto_eol(parser) (parser->parser_lex_p = parser->parser_lex_pend)
#define peek(c) (lex_p < lex_pend && (c) == *lex_p)

static inline int
parser_nextc(struct parser_params *parser)
{
    int c;

    if (lex_p == lex_pend) {
	VALUE v = lex_nextline;
	lex_nextline = 0;
	if (!v) {
	    if (parser->eofp)
		return -1;

	    if (!lex_input || NIL_P(v = lex_getline(parser))) {
		parser->eofp = Qtrue;
		lex_goto_eol(parser);
		return -1;
	    }
	}
	{
#ifdef RIPPER
	    if (parser->tokp < lex_pend) {
		if (NIL_P(parser->delayed)) {
		    parser->delayed = rb_str_buf_new(1024);
		    rb_str_buf_cat(parser->delayed,
				   parser->tokp, lex_pend - parser->tokp);
		    parser->delayed_line = ruby_sourceline;
		    parser->delayed_col = parser->tokp - lex_pbeg;
		}
		else {
		    rb_str_buf_cat(parser->delayed,
				   parser->tokp, lex_pend - parser->tokp);
		}
	    }
#endif
	    if (heredoc_end > 0) {
		ruby_sourceline = heredoc_end;
		heredoc_end = 0;
	    }
	    ruby_sourceline++;
	    parser->line_count++;
	    lex_pbeg = lex_p = RSTRING_PTR(v);
	    lex_pend = lex_p + RSTRING_LEN(v);
#ifdef RIPPER
	    ripper_flush(parser);
#endif
	    lex_lastline = v;
	}
    }
    c = (unsigned char)*lex_p++;
    if (c == '\r' && peek('\n')) {
	lex_p++;
	c = '\n';
    }

    return c;
}

static void
parser_pushback(struct parser_params *parser, int c)
{
    if (c == -1) return;
    lex_p--;
    if (lex_p > lex_pbeg && lex_p[0] == '\n' && lex_p[-1] == '\r') {
	lex_p--;
    }
}

#define was_bol() (lex_p == lex_pbeg + 1)

#define tokfix() (tokenbuf[tokidx]='\0')
#define tok() tokenbuf
#define toklen() tokidx
#define toklast() (tokidx>0?tokenbuf[tokidx-1]:0)

static char*
parser_newtok(struct parser_params *parser)
{
    tokidx = 0;
    if (!tokenbuf) {
	toksiz = 60;
	tokenbuf = ALLOC_N(char, 60);
    }
    if (toksiz > 4096) {
	toksiz = 60;
	REALLOC_N(tokenbuf, char, 60);
    }
    return tokenbuf;
}

static char *
parser_tokspace(struct parser_params *parser, int n)
{
    tokidx += n;

    if (tokidx >= toksiz) {
	do {toksiz *= 2;} while (toksiz < tokidx);
	REALLOC_N(tokenbuf, char, toksiz);
    }
    return &tokenbuf[tokidx-n];
}

static void
parser_tokadd(struct parser_params *parser, int c)
{
    tokenbuf[tokidx++] = (char)c;
    if (tokidx >= toksiz) {
	toksiz *= 2;
	REALLOC_N(tokenbuf, char, toksiz);
    }
}

static int
parser_tok_hex(struct parser_params *parser, int *numlen)
{
    int c;

    c = scan_hex(lex_p, 2, numlen);
    if (!*numlen) {
	yyerror("invalid hex escape");
	return 0;
    }
    lex_p += *numlen;
    return c;
}

#define tokcopy(n) memcpy(tokspace(n), lex_p - (n), (n))

static int
parser_tokadd_utf8(struct parser_params *parser, rb_encoding **encp,
                   int string_literal, int symbol_literal, int regexp_literal)
{
    /*
     * If string_literal is true, then we allow multiple codepoints
     * in \u{}, and add the codepoints to the current token.
     * Otherwise we're parsing a character literal and return a single
     * codepoint without adding it
     */

    int codepoint;
    int numlen;

    if (regexp_literal) { tokadd('\\'); tokadd('u'); }

    if (peek('{')) {  /* handle \u{...} form */
	do {
            if (regexp_literal) { tokadd(*lex_p); }
	    nextc();
	    codepoint = scan_hex(lex_p, 6, &numlen);
	    if (numlen == 0)  {
		yyerror("invalid Unicode escape");
		return 0;
	    }
	    if (codepoint > 0x10ffff) {
		yyerror("invalid Unicode codepoint (too large)");
		return 0;
	    }
	    lex_p += numlen;
            if (regexp_literal) {
                tokcopy(numlen);
            }
            else if (codepoint >= 0x80) {
		*encp = UTF8_ENC();
		if (string_literal) tokaddmbc(codepoint, *encp);
	    }
	    else if (string_literal) {
		if (codepoint == 0 && symbol_literal) {
		    yyerror("symbol cannot contain '\\u{0}'");
		    return 0;
		}

		tokadd(codepoint);
	    }
	} while (string_literal && (peek(' ') || peek('\t')));

	if (!peek('}')) {
	    yyerror("unterminated Unicode escape");
	    return 0;
	}

        if (regexp_literal) { tokadd('}'); }
	nextc();
    }
    else {			/* handle \uxxxx form */
	codepoint = scan_hex(lex_p, 4, &numlen);
	if (numlen < 4) {
	    yyerror("invalid Unicode escape");
	    return 0;
	}
	lex_p += 4;
        if (regexp_literal) {
            tokcopy(4);
        }
	else if (codepoint >= 0x80) {
	    *encp = UTF8_ENC();
	    if (string_literal) tokaddmbc(codepoint, *encp);
	}
	else if (string_literal) {
	    if (codepoint == 0 && symbol_literal) {
		yyerror("symbol cannot contain '\\u0000'");
		return 0;
	    }

	    tokadd(codepoint);
	}
    }

    return codepoint;
}

#define ESCAPE_CONTROL 1
#define ESCAPE_META    2

static int
parser_read_escape(struct parser_params *parser, int flags,
		   rb_encoding **encp)
{
    int c;
    int numlen;

    switch (c = nextc()) {
      case '\\':	/* Backslash */
	return c;

      case 'n':	/* newline */
	return '\n';

      case 't':	/* horizontal tab */
	return '\t';

      case 'r':	/* carriage-return */
	return '\r';

      case 'f':	/* form-feed */
	return '\f';

      case 'v':	/* vertical tab */
	return '\13';

      case 'a':	/* alarm(bell) */
	return '\007';

      case 'e':	/* escape */
	return 033;

      case '0': case '1': case '2': case '3': /* octal constant */
      case '4': case '5': case '6': case '7':
	if (flags & (ESCAPE_CONTROL|ESCAPE_META)) goto eof;
	{
	    int numlen;

	    pushback(c);
	    c = scan_oct(lex_p, 3, &numlen);
	    lex_p += numlen;
	}
	return c;

      case 'x':	/* hex constant */
	if (flags & (ESCAPE_CONTROL|ESCAPE_META)) goto eof;
	c = tok_hex(&numlen);
	if (numlen == 0) return 0;
	return c;

      case 'b':	/* backspace */
	return '\010';

      case 's':	/* space */
	return ' ';

      case 'M':
	if (flags & ESCAPE_META) goto eof;
	if ((c = nextc()) != '-') {
	    pushback(c);
	    goto eof;
	}
	if ((c = nextc()) == '\\') {
	    return read_escape(flags|ESCAPE_META, encp) | 0x80;
	}
	else if (c == -1 || !ISASCII(c)) goto eof;
	else {
	    return ((c & 0xff) | 0x80);
	}

      case 'C':
	if ((c = nextc()) != '-') {
	    pushback(c);
	    goto eof;
	}
      case 'c':
	if (flags & ESCAPE_CONTROL) goto eof;
	if ((c = nextc())== '\\') {
	    c = read_escape(flags|ESCAPE_CONTROL, encp);
	}
	else if (c == '?')
	    return 0177;
	else if (c == -1 || !ISASCII(c)) goto eof;
	return c & 0x9f;

      eof:
      case -1:
        yyerror("Invalid escape character syntax");
	return '\0';

      default:
	return c;
    }
}

static void
parser_tokaddmbc(struct parser_params *parser, int c, rb_encoding *enc)
{
    int len = rb_enc_codelen(c, enc);
    rb_enc_mbcput(c, tokspace(len), enc);
}

static int
parser_tokadd_escape(struct parser_params *parser, rb_encoding **encp)
{
    int c;
    int flags = 0;

  first:
    switch (c = nextc()) {
      case '\n':
	return 0;		/* just ignore */

      case '0': case '1': case '2': case '3': /* octal constant */
      case '4': case '5': case '6': case '7':
	if (flags & (ESCAPE_CONTROL|ESCAPE_META)) goto eof;
	{
	    int numlen;
	    int oct;

	    oct = scan_oct(--lex_p, 3, &numlen);
	    if (numlen == 0) goto eof;
	    lex_p += numlen;
	    tokcopy(numlen + 1);
	}
	return 0;

      case 'x':	/* hex constant */
	if (flags & (ESCAPE_CONTROL|ESCAPE_META)) goto eof;
	{
	    int numlen;
	    int hex;

	    hex = tok_hex(&numlen);
	    if (numlen == 0) goto eof;
	    tokcopy(numlen + 2);
	}
	return 0;

      case 'M':
	if (flags & ESCAPE_META) goto eof;
	if ((c = nextc()) != '-') {
	    pushback(c);
	    goto eof;
	}
	tokcopy(3);
	flags |= ESCAPE_META;
	goto escaped;

      case 'C':
	if (flags & ESCAPE_CONTROL) goto eof;
	if ((c = nextc()) != '-') {
	    pushback(c);
	    goto eof;
	}
	tokcopy(3);
	goto escaped;

      case 'c':
	if (flags & ESCAPE_CONTROL) goto eof;
	tokcopy(2);
	flags |= ESCAPE_CONTROL;
      escaped:
	if ((c = nextc()) == '\\') {
	    goto first;
	}
	else if (c == -1) goto eof;
	tokadd(c);
	return 0;

      eof:
      case -1:
        yyerror("Invalid escape character syntax");
	return -1;

      default:
        tokadd('\\');
	tokadd(c);
    }
    return 0;
}

extern int rb_char_to_option_kcode(int c, int *option, int *kcode);

static int
parser_regx_options(struct parser_params *parser)
{
    int kcode = 0;
    int options = 0;
    int c, opt, kc;

    newtok();
    while (c = nextc(), ISALPHA(c)) {
        if (c == 'o') {
            options |= RE_OPTION_ONCE;
        }
        else if (rb_char_to_option_kcode(c, &opt, &kc)) {
            options |= opt;
	    if (kc >= 0) kcode = c;
        }
        else {
	    tokadd(c);
        }
    }
    pushback(c);
    if (toklen()) {
	tokfix();
	compile_error(PARSER_ARG "unknown regexp option%s - %s",
		      toklen() > 1 ? "s" : "", tok());
    }
    return options | RE_OPTION_ENCODING(kcode);
}

static void
dispose_string(VALUE str)
{
    /* TODO: should use another API? */
    if (RBASIC(str)->flags & RSTRING_NOEMBED)
	xfree(RSTRING_PTR(str));
    rb_gc_force_recycle(str);
}

static int
parser_tokadd_mbchar(struct parser_params *parser, int c)
{
    int len = parser_precise_mbclen();
    if (!MBCLEN_CHARFOUND_P(len)) {
	compile_error(PARSER_ARG "invalid multibyte char (%s)", parser_encoding_name());
	return -1;
    }
    tokadd(c);
    lex_p += --len;
    if (len > 0) tokcopy(len);
    return c;
}

#define tokadd_mbchar(c) parser_tokadd_mbchar(parser, c)

static int
parser_tokadd_string(struct parser_params *parser,
		     int func, int term, int paren, long *nest,
		     rb_encoding **encp)
{
    int c;
    int has_nonascii = 0;
    rb_encoding *enc = *encp;
    char *errbuf = 0;
    static const char mixed_msg[] = "%s mixed within %s source";

#define mixed_error(enc1, enc2) if (!errbuf) {	\
	int len = sizeof(mixed_msg) - 4;	\
	len += strlen(rb_enc_name(enc1));	\
	len += strlen(rb_enc_name(enc2));	\
	errbuf = ALLOCA_N(char, len);		\
	snprintf(errbuf, len, mixed_msg,	\
		 rb_enc_name(enc1),		\
		 rb_enc_name(enc2));		\
	yyerror(errbuf);			\
    }
#define mixed_escape(beg, enc1, enc2) do {	\
	const char *pos = lex_p;		\
	lex_p = beg;				\
	mixed_error(enc1, enc2);		\
	lex_p = pos;				\
    } while (0)

    while ((c = nextc()) != -1) {
	if (paren && c == paren) {
	    ++*nest;
	}
	else if (c == term) {
	    if (!nest || !*nest) {
		pushback(c);
		break;
	    }
	    --*nest;
	}
	else if ((func & STR_FUNC_EXPAND) && c == '#' && lex_p < lex_pend) {
	    int c2 = *lex_p;
	    if (c2 == '$' || c2 == '@' || c2 == '{') {
		pushback(c);
		break;
	    }
	}
	else if (c == '\\') {
	    const char *beg = lex_p - 1;
	    c = nextc();
	    switch (c) {
	      case '\n':
		if (func & STR_FUNC_QWORDS) break;
		if (func & STR_FUNC_EXPAND) continue;
		tokadd('\\');
		break;

	      case '\\':
		if (func & STR_FUNC_ESCAPE) tokadd(c);
		break;

	      case 'u':
		if ((func & STR_FUNC_EXPAND) == 0) {
		    tokadd('\\');
		    break;
		}
		parser_tokadd_utf8(parser, &enc, 1,
				   func & STR_FUNC_SYMBOL,
                                   func & STR_FUNC_REGEXP);
		if (has_nonascii && enc != *encp) {
		    mixed_escape(beg, enc, *encp);
		}
		continue;

	      default:
		if (func & STR_FUNC_REGEXP) {
		    pushback(c);
		    if ((c = tokadd_escape(&enc)) < 0)
			return -1;
		    if (has_nonascii && enc != *encp) {
			mixed_escape(beg, enc, *encp);
		    }
		    continue;
		}
		else if (func & STR_FUNC_EXPAND) {
		    pushback(c);
		    if (func & STR_FUNC_ESCAPE) tokadd('\\');
		    c = read_escape(0, &enc);
		}
		else if ((func & STR_FUNC_QWORDS) && ISSPACE(c)) {
		    /* ignore backslashed spaces in %w */
		}
		else if (c != term && !(paren && c == paren)) {
		    tokadd('\\');
		}
	    }
	}
	else if (!parser_isascii()) {
	    has_nonascii = 1;
	    if (enc != *encp) {
		mixed_error(enc, *encp);
		continue;
	    }
	    if (tokadd_mbchar(c) == -1) return -1;
	    continue;
	}
	else if ((func & STR_FUNC_QWORDS) && ISSPACE(c)) {
	    pushback(c);
	    break;
	}
	if (!c && (func & STR_FUNC_SYMBOL)) {
	    func &= ~STR_FUNC_SYMBOL;
	    compile_error(PARSER_ARG "symbol cannot contain '\\0'");
	    continue;
	}
        if (c & 0x80) {
            has_nonascii = 1;
	    if (enc != *encp) {
		mixed_error(enc, *encp);
		continue;
	    }
        }
	tokadd(c);
    }
    *encp = enc;
    return c;
}

#define NEW_STRTERM(func, term, paren) \
	rb_node_newnode(NODE_STRTERM, (func), (term) | ((paren) << (CHAR_BIT * 2)), 0)

static int
parser_parse_string(struct parser_params *parser, NODE *quote)
{
    int func = quote->nd_func;
    int term = nd_term(quote);
    int paren = nd_paren(quote);
    int c, space = 0;
    rb_encoding *enc = parser->enc;

    if (func == -1) return tSTRING_END;
    c = nextc();
    if ((func & STR_FUNC_QWORDS) && ISSPACE(c)) {
	do {c = nextc();} while (ISSPACE(c));
	space = 1;
    }
    if (c == term && !quote->nd_nest) {
	if (func & STR_FUNC_QWORDS) {
	    quote->nd_func = -1;
	    return ' ';
	}
	if (!(func & STR_FUNC_REGEXP)) return tSTRING_END;
        set_yylval_num(regx_options());
	return tREGEXP_END;
    }
    if (space) {
	pushback(c);
	return ' ';
    }
    newtok();
    if ((func & STR_FUNC_EXPAND) && c == '#') {
	switch (c = nextc()) {
	  case '$':
	  case '@':
	    pushback(c);
	    return tSTRING_DVAR;
	  case '{':
	    return tSTRING_DBEG;
	}
	tokadd('#');
    }
    pushback(c);
    if (tokadd_string(func, term, paren, &quote->nd_nest,
		      &enc) == -1) {
	ruby_sourceline = nd_line(quote);
	if (func & STR_FUNC_REGEXP) {
	    if (parser->eofp)
		compile_error(PARSER_ARG "unterminated regexp meets end of file");
	    return tREGEXP_END;
	}
	else {
	    if (parser->eofp)
		compile_error(PARSER_ARG "unterminated string meets end of file");
	    return tSTRING_END;
	}
    }

    tokfix();
    set_yylval_str(STR_NEW3(tok(), toklen(), enc, func));
    return tSTRING_CONTENT;
}

static int
parser_heredoc_identifier(struct parser_params *parser)
{
    int c = nextc(), term, func = 0, len;

    if (c == '-') {
	c = nextc();
	func = STR_FUNC_INDENT;
    }
    switch (c) {
      case '\'':
	func |= str_squote; goto quoted;
      case '"':
	func |= str_dquote; goto quoted;
      case '`':
	func |= str_xquote;
      quoted:
	newtok();
	tokadd(func);
	term = c;
	while ((c = nextc()) != -1 && c != term) {
	    if (tokadd_mbchar(c) == -1) return 0;
	}
	if (c == -1) {
	    compile_error(PARSER_ARG "unterminated here document identifier");
	    return 0;
	}
	break;

      default:
	if (!parser_is_identchar()) {
	    pushback(c);
	    if (func & STR_FUNC_INDENT) {
		pushback('-');
	    }
	    return 0;
	}
	newtok();
	term = '"';
	tokadd(func |= str_dquote);
	do {
	    if (tokadd_mbchar(c) == -1) return 0;
	} while ((c = nextc()) != -1 && parser_is_identchar());
	pushback(c);
	break;
    }

    tokfix();
#ifdef RIPPER
    ripper_dispatch_scan_event(parser, tHEREDOC_BEG);
#endif
    len = lex_p - lex_pbeg;
    lex_goto_eol(parser);
    lex_strterm = rb_node_newnode(NODE_HEREDOC,
				  STR_NEW(tok(), toklen()),	/* nd_lit */
				  len,				/* nd_nth */
				  lex_lastline);		/* nd_orig */
    nd_set_line(lex_strterm, ruby_sourceline);
#ifdef RIPPER
    ripper_flush(parser);
#endif
    return term == '`' ? tXSTRING_BEG : tSTRING_BEG;
}

static void
parser_heredoc_restore(struct parser_params *parser, NODE *here)
{
    VALUE line;

#ifdef RIPPER
    if (!NIL_P(parser->delayed))
	ripper_dispatch_delayed_token(parser, tSTRING_CONTENT);
    lex_goto_eol(parser);
    ripper_dispatch_scan_event(parser, tHEREDOC_END);
#endif
    line = here->nd_orig;
    lex_lastline = line;
    lex_pbeg = RSTRING_PTR(line);
    lex_pend = lex_pbeg + RSTRING_LEN(line);
    lex_p = lex_pbeg + here->nd_nth;
    heredoc_end = ruby_sourceline;
    ruby_sourceline = nd_line(here);
    dispose_string(here->nd_lit);
    rb_gc_force_recycle((VALUE)here);
#ifdef RIPPER
    ripper_flush(parser);
#endif
}

static int
parser_whole_match_p(struct parser_params *parser,
    const char *eos, int len, int indent)
{
    const char *p = lex_pbeg;
    int n;

    if (indent) {
	while (*p && ISSPACE(*p)) p++;
    }
    n= lex_pend - (p + len);
    if (n < 0 || (n > 0 && p[len] != '\n' && p[len] != '\r')) return Qfalse;
    if (strncmp(eos, p, len) == 0) return Qtrue;
    return Qfalse;
}

static int
parser_here_document(struct parser_params *parser, NODE *here)
{
    int c, func, indent = 0;
    const char *eos, *p, *pend;
    long len;
    VALUE str = 0;

    eos = RSTRING_PTR(here->nd_lit);
    len = RSTRING_LEN(here->nd_lit) - 1;
    indent = (func = *eos++) & STR_FUNC_INDENT;

    if ((c = nextc()) == -1) {
      error:
	compile_error(PARSER_ARG "can't find string \"%s\" anywhere before EOF", eos);
      restore:
	heredoc_restore(lex_strterm);
	lex_strterm = 0;
	return 0;
    }
    if (was_bol() && whole_match_p(eos, len, indent)) {
	heredoc_restore(lex_strterm);
	return tSTRING_END;
    }

    if (!(func & STR_FUNC_EXPAND)) {
	do {
	    p = RSTRING_PTR(lex_lastline);
	    pend = lex_pend;
	    if (pend > p) {
		switch (pend[-1]) {
		  case '\n':
		    if (--pend == p || pend[-1] != '\r') {
			pend++;
			break;
		    }
		  case '\r':
		    --pend;
		}
	    }
	    if (str)
		rb_str_cat(str, p, pend - p);
	    else
		str = STR_NEW(p, pend - p);
	    if (pend < lex_pend) rb_str_cat(str, "\n", 1);
	    lex_goto_eol(parser);
	    if (nextc() == -1) {
		if (str) dispose_string(str);
		goto error;
	    }
	} while (!whole_match_p(eos, len, indent));
    }
    else {
	/*	int mb = ENC_CODERANGE_7BIT, *mbp = &mb;*/
	rb_encoding *enc = parser->enc;
	newtok();
	if (c == '#') {
	    switch (c = nextc()) {
	      case '$':
	      case '@':
		pushback(c);
		return tSTRING_DVAR;
	      case '{':
		return tSTRING_DBEG;
	    }
	    tokadd('#');
	}
	do {
	    pushback(c);
	    if ((c = tokadd_string(func, '\n', 0, NULL, &enc)) == -1) {
		if (parser->eofp) goto error;
		goto restore;
	    }
	    if (c != '\n') {
		set_yylval_str(STR_NEW3(tok(), toklen(), enc, func));
		return tSTRING_CONTENT;
	    }
	    tokadd(nextc());
	    /*	    if (mbp && mb == ENC_CODERANGE_UNKNOWN) mbp = 0;*/
	    if ((c = nextc()) == -1) goto error;
	} while (!whole_match_p(eos, len, indent));
	str = STR_NEW3(tok(), toklen(), enc, func);
    }
    heredoc_restore(lex_strterm);
    lex_strterm = NEW_STRTERM(-1, 0, 0);
    set_yylval_str(str);
    return tSTRING_CONTENT;
}

#include "lex.c"

#ifndef RIPPER
static void
arg_ambiguous_gen(struct parser_params *parser)
{
    rb_warning0("ambiguous first argument; put parentheses or even spaces");
}
#else
static void
arg_ambiguous_gen(struct parser_params *parser)
{
    dispatch0(arg_ambiguous);
}
#endif
#define arg_ambiguous() arg_ambiguous_gen(parser)

static int
lvar_defined_gen(struct parser_params *parser, ID id)
{
#ifndef RIPPER
    return (dyna_in_block() && dvar_defined(id)) || local_id(id);
#else
    return 0;
#endif
}

/* emacsen -*- hack */
static int
parser_encode_length(struct parser_params *parser, const char *name, int len)
{
    int nlen;

    if (len > 5 && name[nlen = len - 5] == '-') {
	if (rb_memcicmp(name + nlen + 1, "unix", 4) == 0)
	    return nlen;
    }
    if (len > 4 && name[nlen = len - 5] == '-') {
	if (rb_memcicmp(name + nlen + 1, "dos", 3) == 0)
	    return nlen;
	if (rb_memcicmp(name + nlen + 1, "mac", 3) == 0)
	    return nlen;
    }
    return len;
}

static void
parser_set_encode(struct parser_params *parser, const char *name)
{
    int idx = rb_enc_find_index(name);
    rb_encoding *enc;
    VALUE excargs[3];

    if (idx < 0) {
	VALUE rb_make_backtrace(void);
	VALUE rb_make_exception(int, VALUE*);

	excargs[1] = rb_sprintf("unknown encoding name: %s", name);
      error:
	excargs[0] = rb_eArgError;
	excargs[2] = rb_make_backtrace();
	rb_ary_unshift(excargs[2], rb_sprintf("%s:%d", ruby_sourcefile, ruby_sourceline));
	rb_exc_raise(rb_make_exception(3, excargs));
    }
    enc = rb_enc_from_index(idx);
    if (!rb_enc_asciicompat(enc)) {
	excargs[1] = rb_sprintf("%s is not ASCII compatible", rb_enc_name(enc));
	goto error;
    }
    parser->enc = enc;
}

static int
comment_at_top(struct parser_params *parser)
{
    const char *p = lex_pbeg, *pend = lex_p - 1;
    if (parser->line_count != (parser->has_shebang ? 2 : 1)) return 0;
    while (p < pend) {
	if (!ISSPACE(*p)) return 0;
	p++;
    }
    return 1;
}

#ifndef RIPPER
typedef int (*rb_magic_comment_length_t)(struct parser_params *parser, const char *name, int len);
typedef void (*rb_magic_comment_setter_t)(struct parser_params *parser, const char *name, const char *val);

static void
magic_comment_encoding(struct parser_params *parser, const char *name, const char *val)
{
    if (!comment_at_top(parser)) {
	rb_warningS("encoding '%s' is ignored, valid only in the first line except for shebang line.",
		    val);
	return;
    }
    parser_set_encode(parser, val);
}

struct magic_comment {
    const char *name;
    rb_magic_comment_setter_t func;
    rb_magic_comment_length_t length;
};

static const struct magic_comment magic_comments[] = {
    {"coding", magic_comment_encoding, parser_encode_length},
    {"encoding", magic_comment_encoding, parser_encode_length},
};
#endif

static const char *
magic_comment_marker(const char *str, int len)
{
    int i = 2;

    while (i < len) {
	switch (str[i]) {
	  case '-':
	    if (str[i-1] == '*' && str[i-2] == '-') {
		return str + i + 1;
	    }
	    i += 2;
	    break;
	  case '*':
	    if (i + 1 >= len) return 0;
	    if (str[i+1] != '-') {
		i += 4;
	    }
	    else if (str[i-1] != '-') {
		i += 2;
	    }
	    else {
		return str + i + 2;
	    }
	    break;
	  default:
	    i += 3;
	    break;
	}
    }
    return 0;
}

static int
parser_magic_comment(struct parser_params *parser, const char *str, int len)
{
    VALUE name = 0, val = 0;
    const char *beg, *end, *vbeg, *vend;
#define str_copy(_s, _p, _n) ((_s) \
	? (rb_str_resize((_s), (_n)), \
	   MEMCPY(RSTRING_PTR(_s), (_p), char, (_n)), (_s)) \
	: ((_s) = STR_NEW((_p), (_n))))

    if (len <= 7) return Qfalse;
    if (!(beg = magic_comment_marker(str, len))) return Qfalse;
    if (!(end = magic_comment_marker(beg, str + len - beg))) return Qfalse;
    str = beg;
    len = end - beg - 3;

    /* %r"([^\\s\'\":;]+)\\s*:\\s*(\"(?:\\\\.|[^\"])*\"|[^\"\\s;]+)[\\s;]*" */
    while (len > 0) {
#ifndef RIPPER
	const struct magic_comment *p = magic_comments;
#endif
	char *s;
	int i, n = 0;

	for (; len > 0 && *str; str++, --len) {
	    switch (*str) {
	      case '\'': case '"': case ':': case ';':
		continue;
	    }
	    if (!ISSPACE(*str)) break;
	}
	for (beg = str; len > 0; str++, --len) {
	    switch (*str) {
	      case '\'': case '"': case ':': case ';':
		break;
	      default:
		if (ISSPACE(*str)) break;
		continue;
	    }
	    break;
	}
	for (end = str; len > 0 && ISSPACE(*str); str++, --len);
	if (!len) break;
	if (*str != ':') continue;

	do str++; while (--len > 0 && ISSPACE(*str));
	if (!len) break;
	if (*str == '"') {
	    for (vbeg = ++str; --len > 0 && *str != '"'; str++) {
		if (*str == '\\') {
		    --len;
		    ++str;
		}
	    }
	    vend = str;
	    if (len) {
		--len;
		++str;
	    }
	}
	else {
	    for (vbeg = str; len > 0 && *str != '"' && *str != ';' && !ISSPACE(*str); --len, str++);
	    vend = str;
	}
	while (len > 0 && (*str == ';' || ISSPACE(*str))) --len, str++;

	n = end - beg;
	str_copy(name, beg, n);
	s = RSTRING_PTR(name);
	for (i = 0; i < n; ++i) {
	    if (*s == '-') *s = '_';
	}
#ifndef RIPPER
	do {
	    if (STRNCASECMP(p->name, s, n) == 0) {
		n = vend - vbeg;
		if (p->length) {
		    n = (*p->length)(parser, vbeg, n);
		}
		str_copy(val, vbeg, n);
		(*p->func)(parser, s, RSTRING_PTR(val));
		break;
	    }
	} while (++p < magic_comments + sizeof(magic_comments) / sizeof(*p));
#else
	dispatch2(magic_comment, name, val);
#endif
    }

    return Qtrue;
}

static void
set_file_encoding(struct parser_params *parser, const char *str, const char *send)
{
    int sep = 0;
    const char *beg = str;
    VALUE s;

    for (;;) {
	if (send - str <= 6) return;
	switch (str[6]) {
	  case 'C': case 'c': str += 6; continue;
	  case 'O': case 'o': str += 5; continue;
	  case 'D': case 'd': str += 4; continue;
	  case 'I': case 'i': str += 3; continue;
	  case 'N': case 'n': str += 2; continue;
	  case 'G': case 'g': str += 1; continue;
	  case '=': case ':':
	    sep = 1;
	    str += 6;
	    break;
	  default:
	    str += 6;
	    if (ISSPACE(*str)) break;
	    continue;
	}
	if (STRNCASECMP(str-6, "coding", 6) == 0) break;
    }
    for (;;) {
	do {
	    if (++str >= send) return;
	} while (ISSPACE(*str));
	if (sep) break;
	if (*str != '=' && *str != ':') return;
	sep = 1;
	str++;
    }
    beg = str;
    while ((*str == '-' || *str == '_' || ISALNUM(*str)) && ++str < send);
    s = rb_str_new(beg, parser_encode_length(parser, beg, str - beg));
    parser_set_encode(parser, RSTRING_PTR(s));
    rb_str_resize(s, 0);
}

static void
parser_prepare(struct parser_params *parser)
{
    int c = nextc();
    switch (c) {
      case '#':
	if (peek('!')) parser->has_shebang = 1;
	break;
      case 0xef:		/* UTF-8 BOM marker */
	if (lex_pend - lex_p >= 2 &&
	    (unsigned char)lex_p[0] == 0xbb &&
	    (unsigned char)lex_p[1] == 0xbf) {
	    parser->enc = rb_utf8_encoding();
	    lex_p += 2;
	    lex_pbeg = lex_p;
	    return;
	}
	break;
      case EOF:
	return;
    }
    pushback(c);
    parser->enc = rb_enc_get(lex_lastline);
}

#define IS_ARG() (lex_state == EXPR_ARG || lex_state == EXPR_CMDARG)
#define IS_BEG() (lex_state == EXPR_BEG || lex_state == EXPR_MID || lex_state == EXPR_VALUE || lex_state == EXPR_CLASS)

static int
parser_yylex(struct parser_params *parser)
{
    register int c;
    int space_seen = 0;
    int cmd_state;
    enum lex_state_e last_state;
    rb_encoding *enc;
    int mb;
#ifdef RIPPER
    int fallthru = Qfalse;
#endif

    if (lex_strterm) {
	int token;
	if (nd_type(lex_strterm) == NODE_HEREDOC) {
	    token = here_document(lex_strterm);
	    if (token == tSTRING_END) {
		lex_strterm = 0;
		lex_state = EXPR_END;
	    }
	}
	else {
	    token = parse_string(lex_strterm);
	    if (token == tSTRING_END || token == tREGEXP_END) {
		rb_gc_force_recycle((VALUE)lex_strterm);
		lex_strterm = 0;
		lex_state = EXPR_END;
	    }
	}
	return token;
    }
    cmd_state = command_start;
    command_start = Qfalse;
  retry:
    switch (c = nextc()) {
      case '\0':		/* NUL */
      case '\004':		/* ^D */
      case '\032':		/* ^Z */
      case -1:			/* end of script. */
	return 0;

	/* white spaces */
      case ' ': case '\t': case '\f': case '\r':
      case '\13': /* '\v' */
	space_seen++;
#ifdef RIPPER
	while ((c = nextc())) {
	    switch (c) {
	      case ' ': case '\t': case '\f': case '\r':
	      case '\13': /* '\v' */
		break;
	      default:
		goto outofloop;
	    }
	}
      outofloop:
	pushback(c);
	ripper_dispatch_scan_event(parser, tSP);
#endif
	goto retry;

      case '#':		/* it's a comment */
	/* no magic_comment in shebang line */
	if (!parser_magic_comment(parser, lex_p, lex_pend - lex_p)) {
	    if (comment_at_top(parser)) {
		set_file_encoding(parser, lex_p, lex_pend);
	    }
	}
	lex_p = lex_pend;
#ifdef RIPPER
        ripper_dispatch_scan_event(parser, tCOMMENT);
        fallthru = Qtrue;
#endif
	/* fall through */
      case '\n':
	switch (lex_state) {
	  case EXPR_BEG:
	  case EXPR_FNAME:
	  case EXPR_DOT:
	  case EXPR_CLASS:
	  case EXPR_VALUE:
#ifdef RIPPER
            if (!fallthru) {
                ripper_dispatch_scan_event(parser, tIGNORED_NL);
            }
            fallthru = Qfalse;
#endif
	    goto retry;
	  default:
	    break;
	}
	while ((c = nextc())) {
	    switch (c) {
	      case ' ': case '\t': case '\f': case '\r':
	      case '\13': /* '\v' */
		space_seen++;
		break;
	      case '.': {
		  if ((c = nextc()) != '.') {
		      pushback(c);
		      pushback('.');
		      goto retry;
		  }
	      }
	      default:
		--ruby_sourceline;
		lex_nextline = lex_lastline;
	      case -1:		/* EOF no decrement*/
		lex_goto_eol(parser);
#ifdef RIPPER
		if (c != -1) {
		    parser->tokp = lex_p;
		}
#endif
		goto normal_newline;
	    }
	}
      normal_newline:
	command_start = Qtrue;
	lex_state = EXPR_BEG;
	return '\n';

      case '*':
	if ((c = nextc()) == '*') {
	    if ((c = nextc()) == '=') {
                set_yylval_id(tPOW);
		lex_state = EXPR_BEG;
		return tOP_ASGN;
	    }
	    pushback(c);
	    c = tPOW;
	}
	else {
	    if (c == '=') {
                set_yylval_id('*');
		lex_state = EXPR_BEG;
		return tOP_ASGN;
	    }
	    pushback(c);
	    if (IS_ARG() && space_seen && !ISSPACE(c)) {
		rb_warning0("`*' interpreted as argument prefix");
		c = tSTAR;
	    }
	    else if (IS_BEG()) {
		c = tSTAR;
	    }
	    else {
		c = '*';
	    }
	}
	switch (lex_state) {
	  case EXPR_FNAME: case EXPR_DOT:
	    lex_state = EXPR_ARG; break;
	  default:
	    lex_state = EXPR_BEG; break;
	}
	return c;

      case '!':
	c = nextc();
	if (lex_state == EXPR_FNAME || lex_state == EXPR_DOT) {
	    lex_state = EXPR_ARG;
	    if (c == '@') {
		return '!';
	    }
	}
	else {
	    lex_state = EXPR_BEG;
	}
	if (c == '=') {
	    return tNEQ;
	}
	if (c == '~') {
	    return tNMATCH;
	}
	pushback(c);
	return '!';

      case '=':
	if (was_bol()) {
	    /* skip embedded rd document */
	    if (strncmp(lex_p, "begin", 5) == 0 && ISSPACE(lex_p[5])) {
#ifdef RIPPER
                int first_p = Qtrue;

                lex_goto_eol(parser);
                ripper_dispatch_scan_event(parser, tEMBDOC_BEG);
#endif
		for (;;) {
		    lex_goto_eol(parser);
#ifdef RIPPER
                    if (!first_p) {
                        ripper_dispatch_scan_event(parser, tEMBDOC);
                    }
                    first_p = Qfalse;
#endif
		    c = nextc();
		    if (c == -1) {
			compile_error(PARSER_ARG "embedded document meets end of file");
			return 0;
		    }
		    if (c != '=') continue;
		    if (strncmp(lex_p, "end", 3) == 0 &&
			(lex_p + 3 == lex_pend || ISSPACE(lex_p[3]))) {
			break;
		    }
		}
		lex_goto_eol(parser);
#ifdef RIPPER
                ripper_dispatch_scan_event(parser, tEMBDOC_END);
#endif
		goto retry;
	    }
	}

	switch (lex_state) {
	  case EXPR_FNAME: case EXPR_DOT:
	    lex_state = EXPR_ARG; break;
	  default:
	    lex_state = EXPR_BEG; break;
	}
	if ((c = nextc()) == '=') {
	    if ((c = nextc()) == '=') {
		return tEQQ;
	    }
	    pushback(c);
	    return tEQ;
	}
	if (c == '~') {
	    return tMATCH;
	}
	else if (c == '>') {
	    return tASSOC;
	}
	pushback(c);
	return '=';

      case '<':
	c = nextc();
	if (c == '<' &&
	    lex_state != EXPR_END &&
	    lex_state != EXPR_DOT &&
	    lex_state != EXPR_ENDARG &&
	    lex_state != EXPR_CLASS &&
	    (!IS_ARG() || space_seen)) {
	    int token = heredoc_identifier();
	    if (token) return token;
	}
	switch (lex_state) {
	  case EXPR_FNAME: case EXPR_DOT:
	    lex_state = EXPR_ARG; break;
	  default:
	    lex_state = EXPR_BEG; break;
	}
	if (c == '=') {
	    if ((c = nextc()) == '>') {
		return tCMP;
	    }
	    pushback(c);
	    return tLEQ;
	}
	if (c == '<') {
	    if ((c = nextc()) == '=') {
                set_yylval_id(tLSHFT);
		lex_state = EXPR_BEG;
		return tOP_ASGN;
	    }
	    pushback(c);
	    return tLSHFT;
	}
	pushback(c);
	return '<';

      case '>':
	switch (lex_state) {
	  case EXPR_FNAME: case EXPR_DOT:
	    lex_state = EXPR_ARG; break;
	  default:
	    lex_state = EXPR_BEG; break;
	}
	if ((c = nextc()) == '=') {
	    return tGEQ;
	}
	if (c == '>') {
	    if ((c = nextc()) == '=') {
                set_yylval_id(tRSHFT);
		lex_state = EXPR_BEG;
		return tOP_ASGN;
	    }
	    pushback(c);
	    return tRSHFT;
	}
	pushback(c);
	return '>';

      case '"':
	lex_strterm = NEW_STRTERM(str_dquote, '"', 0);
	return tSTRING_BEG;

      case '`':
	if (lex_state == EXPR_FNAME) {
	    lex_state = EXPR_END;
	    return c;
	}
	if (lex_state == EXPR_DOT) {
	    if (cmd_state)
		lex_state = EXPR_CMDARG;
	    else
		lex_state = EXPR_ARG;
	    return c;
	}
	lex_strterm = NEW_STRTERM(str_xquote, '`', 0);
	return tXSTRING_BEG;

      case '\'':
	lex_strterm = NEW_STRTERM(str_squote, '\'', 0);
	return tSTRING_BEG;

      case '?':
	if (lex_state == EXPR_END || lex_state == EXPR_ENDARG) {
	    lex_state = EXPR_VALUE;
	    return '?';
	}
	c = nextc();
	if (c == -1) {
	    compile_error(PARSER_ARG "incomplete character syntax");
	    return 0;
	}
	if (rb_enc_isspace(c, parser->enc)) {
	    if (!IS_ARG()) {
		int c2 = 0;
		switch (c) {
		  case ' ':
		    c2 = 's';
		    break;
		  case '\n':
		    c2 = 'n';
		    break;
		  case '\t':
		    c2 = 't';
		    break;
		  case '\v':
		    c2 = 'v';
		    break;
		  case '\r':
		    c2 = 'r';
		    break;
		  case '\f':
		    c2 = 'f';
		    break;
		}
		if (c2) {
		    rb_warnI("invalid character syntax; use ?\\%c", c2);
		}
	    }
	  ternary:
	    pushback(c);
	    lex_state = EXPR_VALUE;
	    return '?';
	}
	newtok();
	enc = parser->enc;
	if (!parser_isascii()) {
	    if (tokadd_mbchar(c) == -1) return 0;
	}
	else if ((rb_enc_isalnum(c, parser->enc) || c == '_') &&
		 lex_p < lex_pend && is_identchar(lex_p, lex_pend, parser->enc)) {
	    goto ternary;
	}
        else if (c == '\\') {
            if (peek('u')) {
                nextc();
                c = parser_tokadd_utf8(parser, &enc, 0, 0, 0);
                if (0x80 <= c) {
                    tokaddmbc(c, enc);
                }
                else {
                    tokadd(c);
                }
            }
            else {
                c = read_escape(0, &enc);
                tokadd(c);
            }
        }
        else {
	    tokadd(c);
        }
	tokfix();
	set_yylval_str(STR_NEW3(tok(), toklen(), enc, 0));
	lex_state = EXPR_END;
	return tCHAR;

      case '&':
	if ((c = nextc()) == '&') {
	    lex_state = EXPR_BEG;
	    if ((c = nextc()) == '=') {
                set_yylval_id(tANDOP);
		lex_state = EXPR_BEG;
		return tOP_ASGN;
	    }
	    pushback(c);
	    return tANDOP;
	}
	else if (c == '=') {
            set_yylval_id('&');
	    lex_state = EXPR_BEG;
	    return tOP_ASGN;
	}
	pushback(c);
	if (IS_ARG() && space_seen && !ISSPACE(c)) {
	    rb_warning0("`&' interpreted as argument prefix");
	    c = tAMPER;
	}
	else if (IS_BEG()) {
	    c = tAMPER;
	}
	else {
	    c = '&';
	}
	switch (lex_state) {
	  case EXPR_FNAME: case EXPR_DOT:
	    lex_state = EXPR_ARG; break;
	  default:
	    lex_state = EXPR_BEG;
	}
	return c;

      case '|':
	if ((c = nextc()) == '|') {
	    lex_state = EXPR_BEG;
	    if ((c = nextc()) == '=') {
                set_yylval_id(tOROP);
		lex_state = EXPR_BEG;
		return tOP_ASGN;
	    }
	    pushback(c);
	    return tOROP;
	}
	if (c == '=') {
            set_yylval_id('|');
	    lex_state = EXPR_BEG;
	    return tOP_ASGN;
	}
	if (lex_state == EXPR_FNAME || lex_state == EXPR_DOT) {
	    lex_state = EXPR_ARG;
	}
	else {
	    lex_state = EXPR_BEG;
	}
	pushback(c);
	return '|';

      case '+':
	c = nextc();
	if (lex_state == EXPR_FNAME || lex_state == EXPR_DOT) {
	    lex_state = EXPR_ARG;
	    if (c == '@') {
		return tUPLUS;
	    }
	    pushback(c);
	    return '+';
	}
	if (c == '=') {
            set_yylval_id('+');
	    lex_state = EXPR_BEG;
	    return tOP_ASGN;
	}
	if (IS_BEG() ||
	    (IS_ARG() && space_seen && !ISSPACE(c))) {
	    if (IS_ARG()) arg_ambiguous();
	    lex_state = EXPR_BEG;
	    pushback(c);
	    if (c != -1 && ISDIGIT(c)) {
		c = '+';
		goto start_num;
	    }
	    return tUPLUS;
	}
	lex_state = EXPR_BEG;
	pushback(c);
	return '+';

      case '-':
	c = nextc();
	if (lex_state == EXPR_FNAME || lex_state == EXPR_DOT) {
	    lex_state = EXPR_ARG;
	    if (c == '@') {
		return tUMINUS;
	    }
	    pushback(c);
	    return '-';
	}
	if (c == '=') {
            set_yylval_id('-');
	    lex_state = EXPR_BEG;
	    return tOP_ASGN;
	}
	if (c == '>') {
	    lex_state = EXPR_ARG;
	    return tLAMBDA;
	}
	if (IS_BEG() ||
	    (IS_ARG() && space_seen && !ISSPACE(c))) {
	    if (IS_ARG()) arg_ambiguous();
	    lex_state = EXPR_BEG;
	    pushback(c);
	    if (c != -1 && ISDIGIT(c)) {
		return tUMINUS_NUM;
	    }
	    return tUMINUS;
	}
	lex_state = EXPR_BEG;
	pushback(c);
	return '-';

      case '.':
	lex_state = EXPR_BEG;
	if ((c = nextc()) == '.') {
	    if ((c = nextc()) == '.') {
		return tDOT3;
	    }
	    pushback(c);
	    return tDOT2;
	}
	pushback(c);
	if (c != -1 && ISDIGIT(c)) {
	    yyerror("no .<digit> floating literal anymore; put 0 before dot");
	}
	lex_state = EXPR_DOT;
	return '.';

      start_num:
      case '0': case '1': case '2': case '3': case '4':
      case '5': case '6': case '7': case '8': case '9':
	{
	    int is_float, seen_point, seen_e, nondigit;

	    is_float = seen_point = seen_e = nondigit = 0;
	    lex_state = EXPR_END;
	    newtok();
	    if (c == '-' || c == '+') {
		tokadd(c);
		c = nextc();
	    }
	    if (c == '0') {
		int start = toklen();
		c = nextc();
		if (c == 'x' || c == 'X') {
		    /* hexadecimal */
		    c = nextc();
		    if (c != -1 && ISXDIGIT(c)) {
			do {
			    if (c == '_') {
				if (nondigit) break;
				nondigit = c;
				continue;
			    }
			    if (!ISXDIGIT(c)) break;
			    nondigit = 0;
			    tokadd(c);
			} while ((c = nextc()) != -1);
		    }
		    pushback(c);
		    tokfix();
		    if (toklen() == start) {
			yyerror("numeric literal without digits");
		    }
		    else if (nondigit) goto trailing_uc;
                    set_yylval_literal(rb_cstr_to_inum(tok(), 16, Qfalse));
		    return tINTEGER;
		}
		if (c == 'b' || c == 'B') {
		    /* binary */
		    c = nextc();
		    if (c == '0' || c == '1') {
			do {
			    if (c == '_') {
				if (nondigit) break;
				nondigit = c;
				continue;
			    }
			    if (c != '0' && c != '1') break;
			    nondigit = 0;
			    tokadd(c);
			} while ((c = nextc()) != -1);
		    }
		    pushback(c);
		    tokfix();
		    if (toklen() == start) {
			yyerror("numeric literal without digits");
		    }
		    else if (nondigit) goto trailing_uc;
                    set_yylval_literal(rb_cstr_to_inum(tok(), 2, Qfalse));
		    return tINTEGER;
		}
		if (c == 'd' || c == 'D') {
		    /* decimal */
		    c = nextc();
		    if (c != -1 && ISDIGIT(c)) {
			do {
			    if (c == '_') {
				if (nondigit) break;
				nondigit = c;
				continue;
			    }
			    if (!ISDIGIT(c)) break;
			    nondigit = 0;
			    tokadd(c);
			} while ((c = nextc()) != -1);
		    }
		    pushback(c);
		    tokfix();
		    if (toklen() == start) {
			yyerror("numeric literal without digits");
		    }
		    else if (nondigit) goto trailing_uc;
                    set_yylval_literal(rb_cstr_to_inum(tok(), 10, Qfalse));
		    return tINTEGER;
		}
		if (c == '_') {
		    /* 0_0 */
		    goto octal_number;
		}
		if (c == 'o' || c == 'O') {
		    /* prefixed octal */
		    c = nextc();
		    if (c == -1 || c == '_' || !ISDIGIT(c)) {
			yyerror("numeric literal without digits");
		    }
		}
		if (c >= '0' && c <= '7') {
		    /* octal */
		  octal_number:
	            do {
			if (c == '_') {
			    if (nondigit) break;
			    nondigit = c;
			    continue;
			}
			if (c < '0' || c > '9') break;
			if (c > '7') goto invalid_octal;
			nondigit = 0;
			tokadd(c);
		    } while ((c = nextc()) != -1);
		    if (toklen() > start) {
			pushback(c);
			tokfix();
			if (nondigit) goto trailing_uc;
                        set_yylval_literal(rb_cstr_to_inum(tok(), 8, Qfalse));
			return tINTEGER;
		    }
		    if (nondigit) {
			pushback(c);
			goto trailing_uc;
		    }
		}
		if (c > '7' && c <= '9') {
		  invalid_octal:
		    yyerror("Invalid octal digit");
		}
		else if (c == '.' || c == 'e' || c == 'E') {
		    tokadd('0');
		}
		else {
		    pushback(c);
                    set_yylval_literal(INT2FIX(0));
		    return tINTEGER;
		}
	    }

	    for (;;) {
		switch (c) {
		  case '0': case '1': case '2': case '3': case '4':
		  case '5': case '6': case '7': case '8': case '9':
		    nondigit = 0;
		    tokadd(c);
		    break;

		  case '.':
		    if (nondigit) goto trailing_uc;
		    if (seen_point || seen_e) {
			goto decode_num;
		    }
		    else {
			int c0 = nextc();
			if (c0 == -1 || !ISDIGIT(c0)) {
			    pushback(c0);
			    goto decode_num;
			}
			c = c0;
		    }
		    tokadd('.');
		    tokadd(c);
		    is_float++;
		    seen_point++;
		    nondigit = 0;
		    break;

		  case 'e':
		  case 'E':
		    if (nondigit) {
			pushback(c);
			c = nondigit;
			goto decode_num;
		    }
		    if (seen_e) {
			goto decode_num;
		    }
		    tokadd(c);
		    seen_e++;
		    is_float++;
		    nondigit = c;
		    c = nextc();
		    if (c != '-' && c != '+') continue;
		    tokadd(c);
		    nondigit = c;
		    break;

		  case '_':	/* `_' in number just ignored */
		    if (nondigit) goto decode_num;
		    nondigit = c;
		    break;

		  default:
		    goto decode_num;
		}
		c = nextc();
	    }

	  decode_num:
	    pushback(c);
	    tokfix();
	    if (nondigit) {
		char tmp[30];
	      trailing_uc:
		sprintf(tmp, "trailing `%c' in number", nondigit);
		yyerror(tmp);
	    }
	    if (is_float) {
		double d = strtod(tok(), 0);
		if (errno == ERANGE) {
		    rb_warningS("Float %s out of range", tok());
		    errno = 0;
		}
                set_yylval_literal(DBL2NUM(d));
		return tFLOAT;
	    }
            set_yylval_literal(rb_cstr_to_inum(tok(), 10, Qfalse));
	    return tINTEGER;
	}

      case ')':
      case ']':
	paren_nest--;
      case '}':
	COND_LEXPOP();
	CMDARG_LEXPOP();
	if (c == ')')
	    lex_state = EXPR_END;
	else
	    lex_state = EXPR_ENDARG;
	return c;

      case ':':
	c = nextc();
	if (c == ':') {
	    if (IS_BEG() ||
		lex_state == EXPR_CLASS || (IS_ARG() && space_seen)) {
		lex_state = EXPR_BEG;
		return tCOLON3;
	    }
	    lex_state = EXPR_DOT;
	    return tCOLON2;
	}
	if (lex_state == EXPR_END || lex_state == EXPR_ENDARG || (c != -1 && ISSPACE(c))) {
	    pushback(c);
	    lex_state = EXPR_BEG;
	    return ':';
	}
	switch (c) {
	  case '\'':
	    lex_strterm = NEW_STRTERM(str_ssym, c, 0);
	    break;
	  case '"':
	    lex_strterm = NEW_STRTERM(str_dsym, c, 0);
	    break;
	  default:
	    pushback(c);
	    break;
	}
	lex_state = EXPR_FNAME;
	return tSYMBEG;

      case '/':
	if (IS_BEG()) {
	    lex_strterm = NEW_STRTERM(str_regexp, '/', 0);
	    return tREGEXP_BEG;
	}
	if ((c = nextc()) == '=') {
            set_yylval_id('/');
	    lex_state = EXPR_BEG;
	    return tOP_ASGN;
	}
	pushback(c);
	if (IS_ARG() && space_seen) {
	    if (!ISSPACE(c)) {
		arg_ambiguous();
		lex_strterm = NEW_STRTERM(str_regexp, '/', 0);
		return tREGEXP_BEG;
	    }
	}
	switch (lex_state) {
	  case EXPR_FNAME: case EXPR_DOT:
	    lex_state = EXPR_ARG; break;
	  default:
	    lex_state = EXPR_BEG; break;
	}
	return '/';

      case '^':
	if ((c = nextc()) == '=') {
            set_yylval_id('^');
	    lex_state = EXPR_BEG;
	    return tOP_ASGN;
	}
	switch (lex_state) {
	  case EXPR_FNAME: case EXPR_DOT:
	    lex_state = EXPR_ARG; break;
	  default:
	    lex_state = EXPR_BEG; break;
	}
	pushback(c);
	return '^';

      case ';':
	lex_state = EXPR_BEG;
	command_start = Qtrue;
	return ';';

      case ',':
	lex_state = EXPR_BEG;
	return ',';

      case '~':
	if (lex_state == EXPR_FNAME || lex_state == EXPR_DOT) {
	    if ((c = nextc()) != '@') {
		pushback(c);
	    }
	    lex_state = EXPR_ARG;
	}
	else {
	    lex_state = EXPR_BEG;
	}
	return '~';

      case '(':
	if (IS_BEG()) {
	    c = tLPAREN;
	}
	else if (space_seen) {
	    if (IS_ARG()) {
		c = tLPAREN_ARG;
	    }
	}
	paren_nest++;
	COND_PUSH(0);
	CMDARG_PUSH(0);
	lex_state = EXPR_BEG;
	return c;

      case '[':
	paren_nest++;
	if (lex_state == EXPR_FNAME || lex_state == EXPR_DOT) {
	    lex_state = EXPR_ARG;
	    if ((c = nextc()) == ']') {
		if ((c = nextc()) == '=') {
		    return tASET;
		}
		pushback(c);
		return tAREF;
	    }
	    pushback(c);
	    return '[';
	}
	else if (IS_BEG()) {
	    c = tLBRACK;
	}
	else if (IS_ARG() && space_seen) {
	    c = tLBRACK;
	}
	lex_state = EXPR_BEG;
	COND_PUSH(0);
	CMDARG_PUSH(0);
	return c;

      case '{':
	if (lpar_beg && lpar_beg == paren_nest) {
	    lex_state = EXPR_BEG;
	    lpar_beg = 0;
	    --paren_nest;
	    return tLAMBEG;
	}
	if (IS_ARG() || lex_state == EXPR_END)
	    c = '{';          /* block (primary) */
	else if (lex_state == EXPR_ENDARG)
	    c = tLBRACE_ARG;  /* block (expr) */
	else
	    c = tLBRACE;      /* hash */
	COND_PUSH(0);
	CMDARG_PUSH(0);
	lex_state = EXPR_BEG;
	if (c != tLBRACE) command_start = Qtrue;
	return c;

      case '\\':
	c = nextc();
	if (c == '\n') {
	    space_seen = 1;
#ifdef RIPPER
	    ripper_dispatch_scan_event(parser, tSP);
#endif
	    goto retry; /* skip \\n */
	}
	pushback(c);
	return '\\';

      case '%':
	if (IS_BEG()) {
	    int term;
	    int paren;

	    c = nextc();
	  quotation:
	    if (c == -1 || !ISALNUM(c)) {
		term = c;
		c = 'Q';
	    }
	    else {
		term = nextc();
		if (rb_enc_isalnum(term, parser->enc) || !parser_isascii()) {
		    yyerror("unknown type of %string");
		    return 0;
		}
	    }
	    if (c == -1 || term == -1) {
		compile_error(PARSER_ARG "unterminated quoted string meets end of file");
		return 0;
	    }
	    paren = term;
	    if (term == '(') term = ')';
	    else if (term == '[') term = ']';
	    else if (term == '{') term = '}';
	    else if (term == '<') term = '>';
	    else paren = 0;

	    switch (c) {
	      case 'Q':
		lex_strterm = NEW_STRTERM(str_dquote, term, paren);
		return tSTRING_BEG;

	      case 'q':
		lex_strterm = NEW_STRTERM(str_squote, term, paren);
		return tSTRING_BEG;

	      case 'W':
		lex_strterm = NEW_STRTERM(str_dword, term, paren);
		do {c = nextc();} while (ISSPACE(c));
		pushback(c);
		return tWORDS_BEG;

	      case 'w':
		lex_strterm = NEW_STRTERM(str_sword, term, paren);
		do {c = nextc();} while (ISSPACE(c));
		pushback(c);
		return tQWORDS_BEG;

	      case 'x':
		lex_strterm = NEW_STRTERM(str_xquote, term, paren);
		return tXSTRING_BEG;

	      case 'r':
		lex_strterm = NEW_STRTERM(str_regexp, term, paren);
		return tREGEXP_BEG;

	      case 's':
		lex_strterm = NEW_STRTERM(str_ssym, term, paren);
		lex_state = EXPR_FNAME;
		return tSYMBEG;

	      default:
		yyerror("unknown type of %string");
		return 0;
	    }
	}
	if ((c = nextc()) == '=') {
            set_yylval_id('%');
	    lex_state = EXPR_BEG;
	    return tOP_ASGN;
	}
	if (IS_ARG() && space_seen && !ISSPACE(c)) {
	    goto quotation;
	}
	switch (lex_state) {
	  case EXPR_FNAME: case EXPR_DOT:
	    lex_state = EXPR_ARG; break;
	  default:
	    lex_state = EXPR_BEG; break;
	}
	pushback(c);
	return '%';

      case '$':
	last_state = lex_state;
	lex_state = EXPR_END;
	newtok();
	c = nextc();
	switch (c) {
	  case '_':		/* $_: last read line string */
	    c = nextc();
	    if (parser_is_identchar()) {
		tokadd('$');
		tokadd('_');
		break;
	    }
	    pushback(c);
	    c = '_';
	    /* fall through */
	  case '~':		/* $~: match-data */
	  case '*':		/* $*: argv */
	  case '$':		/* $$: pid */
	  case '?':		/* $?: last status */
	  case '!':		/* $!: error string */
	  case '@':		/* $@: error position */
	  case '/':		/* $/: input record separator */
	  case '\\':		/* $\: output record separator */
	  case ';':		/* $;: field separator */
	  case ',':		/* $,: output field separator */
	  case '.':		/* $.: last read line number */
	  case '=':		/* $=: ignorecase */
	  case ':':		/* $:: load path */
	  case '<':		/* $<: reading filename */
	  case '>':		/* $>: default output handle */
	  case '\"':		/* $": already loaded files */
	    tokadd('$');
	    tokadd(c);
	    tokfix();
            set_yylval_id(rb_intern(tok()));
	    return tGVAR;

	  case '-':
	    tokadd('$');
	    tokadd(c);
	    c = nextc();
	    if (parser_is_identchar()) {
		if (tokadd_mbchar(c) == -1) return 0;
	    }
	    else {
		pushback(c);
	    }
	  gvar:
	    tokfix();
            set_yylval_id(rb_intern(tok()));
	    return tGVAR;

	  case '&':		/* $&: last match */
	  case '`':		/* $`: string before last match */
	  case '\'':		/* $': string after last match */
	  case '+':		/* $+: string matches last paren. */
	    if (last_state == EXPR_FNAME) {
		tokadd('$');
		tokadd(c);
		goto gvar;
	    }
	    set_yylval_node(NEW_BACK_REF(c));
	    return tBACK_REF;

	  case '1': case '2': case '3':
	  case '4': case '5': case '6':
	  case '7': case '8': case '9':
	    tokadd('$');
	    do {
		tokadd(c);
		c = nextc();
	    } while (c != -1 && ISDIGIT(c));
	    pushback(c);
	    if (last_state == EXPR_FNAME) goto gvar;
	    tokfix();
	    set_yylval_node(NEW_NTH_REF(atoi(tok()+1)));
	    return tNTH_REF;

	  default:
	    if (!parser_is_identchar()) {
		pushback(c);
		return '$';
	    }
	  case '0':
	    tokadd('$');
	}
	break;

      case '@':
	c = nextc();
	newtok();
	tokadd('@');
	if (c == '@') {
	    tokadd('@');
	    c = nextc();
	}
	if (c != -1 && ISDIGIT(c)) {
	    if (tokidx == 1) {
		compile_error(PARSER_ARG "`@%c' is not allowed as an instance variable name", c);
	    }
	    else {
		compile_error(PARSER_ARG "`@@%c' is not allowed as a class variable name", c);
	    }
	    return 0;
	}
	if (!parser_is_identchar()) {
	    pushback(c);
	    return '@';
	}
	break;

      case '_':
	if (was_bol() && whole_match_p("__END__", 7, 0)) {
	    ruby__end__seen = 1;
	    parser->eofp = Qtrue;
#ifndef RIPPER
	    return -1;
#else
            lex_goto_eol(parser);
            ripper_dispatch_scan_event(parser, k__END__);
            return 0;
#endif
	}
	newtok();
	break;

      default:
	if (!parser_is_identchar()) {
	    rb_compile_error(PARSER_ARG  "Invalid char `\\x%02X' in expression", c);
	    goto retry;
	}

	newtok();
	break;
    }

    mb = ENC_CODERANGE_7BIT;
    do {
	if (!ISASCII(c)) mb = ENC_CODERANGE_UNKNOWN;
	if (tokadd_mbchar(c) == -1) return 0;
	c = nextc();
    } while (parser_is_identchar());
    switch (tok()[0]) {
      case '@': case '$':
	pushback(c);
	break;
      default:
	if ((c == '!' || c == '?') && !peek('=')) {
	    tokadd(c);
	}
	else {
	    pushback(c);
	}
    }
    tokfix();

    {
	int result = 0;

	last_state = lex_state;
	switch (tok()[0]) {
	  case '$':
	    lex_state = EXPR_END;
	    result = tGVAR;
	    break;
	  case '@':
	    lex_state = EXPR_END;
	    if (tok()[1] == '@')
		result = tCVAR;
	    else
		result = tIVAR;
	    break;

	  default:
	    if (toklast() == '!' || toklast() == '?') {
		result = tFID;
	    }
	    else {
		if (lex_state == EXPR_FNAME) {
		    if ((c = nextc()) == '=' && !peek('~') && !peek('>') &&
			(!peek('=') || (lex_p + 1 < lex_pend && lex_p[1] == '>'))) {
			result = tIDENTIFIER;
			tokadd(c);
			tokfix();
		    }
		    else {
			pushback(c);
		    }
		}
		if (result == 0 && ISUPPER(tok()[0])) {
		    result = tCONSTANT;
		}
		else {
		    result = tIDENTIFIER;
		}
	    }

	    if ((lex_state == EXPR_BEG && !cmd_state) ||
		lex_state == EXPR_ARG ||
		lex_state == EXPR_CMDARG) {
		if (peek(':') && !(lex_p + 1 < lex_pend && lex_p[1] == ':')) {
		    lex_state = EXPR_BEG;
		    nextc();
		    set_yylval_id(TOK_INTERN(!ENC_SINGLE(mb)));
		    return tLABEL;
		}
	    }
	    if (mb == ENC_CODERANGE_7BIT && lex_state != EXPR_DOT) {
		const struct kwtable *kw;

		/* See if it is a reserved word.  */
		kw = rb_reserved_word(tok(), toklen());
		if (kw) {
		    enum lex_state_e state = lex_state;
		    lex_state = kw->state;
		    if (state == EXPR_FNAME) {
                        set_yylval_id(rb_intern(kw->name));
			return kw->id[0];
		    }
		    if (kw->id[0] == keyword_do) {
			command_start = Qtrue;
			if (lpar_beg && lpar_beg == paren_nest) {
			    lpar_beg = 0;
			    --paren_nest;
			    return keyword_do_LAMBDA;
			}
			if (COND_P()) return keyword_do_cond;
			if (CMDARG_P() && state != EXPR_CMDARG)
			    return keyword_do_block;
			if (state == EXPR_ENDARG || state == EXPR_BEG)
			    return keyword_do_block;
			return keyword_do;
		    }
		    if (state == EXPR_BEG || state == EXPR_VALUE)
			return kw->id[0];
		    else {
			if (kw->id[0] != kw->id[1])
			    lex_state = EXPR_BEG;
			return kw->id[1];
		    }
		}
	    }

	    if (IS_BEG() ||
		lex_state == EXPR_DOT ||
		IS_ARG()) {
		if (cmd_state) {
		    lex_state = EXPR_CMDARG;
		}
		else {
		    lex_state = EXPR_ARG;
		}
	    }
	    else {
		lex_state = EXPR_END;
	    }
	}
        {
            ID ident = TOK_INTERN(!ENC_SINGLE(mb));

            set_yylval_id(ident);
            if (last_state != EXPR_DOT && is_local_id(ident) && lvar_defined(ident)) {
                lex_state = EXPR_END;
            }
        }
	return result;
    }
}

#if YYPURE
static int
yylex(void *lval, void *p)
#else
yylex(void *p)
#endif
{
    struct parser_params *parser = (struct parser_params*)p;
    int t;

#if YYPURE
    parser->parser_yylval = lval;
    parser->parser_yylval->val = Qundef;
#endif
    t = parser_yylex(parser);
#ifdef RIPPER
    if (!NIL_P(parser->delayed)) {
	ripper_dispatch_delayed_token(parser, t);
	return t;
    }
    if (t != 0)
	ripper_dispatch_scan_event(parser, t);
#endif

    return t;
}

#ifndef RIPPER
static NODE*
node_newnode(struct parser_params *parser, enum node_type type, VALUE a0, VALUE a1, VALUE a2)
{
    NODE *n = (rb_node_newnode)(type, a0, a1, a2);
    nd_set_line(n, ruby_sourceline);
    return n;
}

enum node_type
nodetype(NODE *node)			/* for debug */
{
    return (enum node_type)nd_type(node);
}

int
nodeline(NODE *node)
{
    return nd_line(node);
}

static NODE*
newline_node(NODE *node)
{
    if (node) {
	node = remove_begin(node);
	node->flags |= NODE_FL_NEWLINE;
    }
    return node;
}

static void
fixpos(NODE *node, NODE *orig)
{
    if (!node) return;
    if (!orig) return;
    if (orig == (NODE*)1) return;
    nd_set_line(node, nd_line(orig));
}

static void
parser_warning(struct parser_params *parser, NODE *node, const char *mesg)
{
    rb_compile_warning(ruby_sourcefile, nd_line(node), "%s", mesg);
}
#define parser_warning(node, mesg) parser_warning(parser, node, mesg)

static void
parser_warn(struct parser_params *parser, NODE *node, const char *mesg)
{
    rb_compile_warn(ruby_sourcefile, nd_line(node), "%s", mesg);
}
#define parser_warn(node, mesg) parser_warn(parser, node, mesg)

static NODE*
block_append_gen(struct parser_params *parser, NODE *head, NODE *tail)
{
    NODE *end, *h = head, *nd;

    if (tail == 0) return head;

    if (h == 0) return tail;
    switch (nd_type(h)) {
      case NODE_LIT:
      case NODE_STR:
      case NODE_SELF:
      case NODE_TRUE:
      case NODE_FALSE:
      case NODE_NIL:
	parser_warning(h, "unused literal ignored");
	return tail;
      default:
	h = end = NEW_BLOCK(head);
	end->nd_end = end;
	fixpos(end, head);
	head = end;
	break;
      case NODE_BLOCK:
	end = h->nd_end;
	break;
    }

    nd = end->nd_head;
    switch (nd_type(nd)) {
      case NODE_RETURN:
      case NODE_BREAK:
      case NODE_NEXT:
      case NODE_REDO:
      case NODE_RETRY:
	if (RTEST(ruby_verbose)) {
	    parser_warning(nd, "statement not reached");
	}
	break;

      default:
	break;
    }

    if (nd_type(tail) != NODE_BLOCK) {
	tail = NEW_BLOCK(tail);
	tail->nd_end = tail;
    }
    end->nd_next = tail;
    h->nd_end = tail->nd_end;
    return head;
}

/* append item to the list */
static NODE*
list_append_gen(struct parser_params *parser, NODE *list, NODE *item)
{
    NODE *last;

    if (list == 0) return NEW_LIST(item);
    if (list->nd_next) {
	last = list->nd_next->nd_end;
    }
    else {
	last = list;
    }

    list->nd_alen += 1;
    last->nd_next = NEW_LIST(item);
    list->nd_next->nd_end = last->nd_next;
    return list;
}

/* concat two lists */
static NODE*
list_concat_gen(struct parser_params *parser, NODE *head, NODE *tail)
{
    NODE *last;

    if (head->nd_next) {
	last = head->nd_next->nd_end;
    }
    else {
	last = head;
    }

    head->nd_alen += tail->nd_alen;
    last->nd_next = tail;
    if (tail->nd_next) {
	head->nd_next->nd_end = tail->nd_next->nd_end;
    }
    else {
	head->nd_next->nd_end = tail;
    }

    return head;
}

static int
literal_concat0(struct parser_params *parser, VALUE head, VALUE tail)
{
    if (!rb_enc_compatible(head, tail)) {
	compile_error(PARSER_ARG "string literal encodings differ (%s / %s)",
		      rb_enc_name(rb_enc_get(head)),
		      rb_enc_name(rb_enc_get(tail)));
	rb_str_resize(head, 0);
	rb_str_resize(tail, 0);
	return 0;
    }
    rb_str_buf_append(head, tail);
    return 1;
}

/* concat two string literals */
static NODE *
literal_concat_gen(struct parser_params *parser, NODE *head, NODE *tail)
{
    enum node_type htype;

    if (!head) return tail;
    if (!tail) return head;

    htype = nd_type(head);
    if (htype == NODE_EVSTR) {
	NODE *node = NEW_DSTR(STR_NEW0());
	head = list_append(node, head);
    }
    switch (nd_type(tail)) {
      case NODE_STR:
	if (htype == NODE_STR) {
	    if (!literal_concat0(parser, head->nd_lit, tail->nd_lit)) {
	      error:
		rb_gc_force_recycle((VALUE)head);
		rb_gc_force_recycle((VALUE)tail);
		return 0;
	    }
	    rb_gc_force_recycle((VALUE)tail);
	}
	else {
	    list_append(head, tail);
	}
	break;

      case NODE_DSTR:
	if (htype == NODE_STR) {
	    if (!literal_concat0(parser, head->nd_lit, tail->nd_lit))
		goto error;
	    tail->nd_lit = head->nd_lit;
	    rb_gc_force_recycle((VALUE)head);
	    head = tail;
	}
	else {
	    nd_set_type(tail, NODE_ARRAY);
	    tail->nd_head = NEW_STR(tail->nd_lit);
	    list_concat(head, tail);
	}
	break;

      case NODE_EVSTR:
	if (htype == NODE_STR) {
	    nd_set_type(head, NODE_DSTR);
	    head->nd_alen = 1;
	}
	list_append(head, tail);
	break;
    }
    return head;
}

static NODE *
evstr2dstr_gen(struct parser_params *parser, NODE *node)
{
    if (nd_type(node) == NODE_EVSTR) {
	node = list_append(NEW_DSTR(STR_NEW0()), node);
    }
    return node;
}

static NODE *
new_evstr_gen(struct parser_params *parser, NODE *node)
{
    NODE *head = node;

    if (node) {
	switch (nd_type(node)) {
	  case NODE_STR: case NODE_DSTR: case NODE_EVSTR:
	    return node;
	}
    }
    return NEW_EVSTR(head);
}

static NODE *
call_bin_op_gen(struct parser_params *parser, NODE *recv, ID id, NODE *arg1)
{
    value_expr(recv);
    value_expr(arg1);
    return NEW_CALL(recv, id, NEW_LIST(arg1));
}

static NODE *
call_uni_op_gen(struct parser_params *parser, NODE *recv, ID id)
{
    value_expr(recv);
    return NEW_CALL(recv, id, 0);
}

static NODE*
match_op_gen(struct parser_params *parser, NODE *node1, NODE *node2)
{
    value_expr(node1);
    value_expr(node2);
    if (node1) {
	switch (nd_type(node1)) {
	  case NODE_DREGX:
	  case NODE_DREGX_ONCE:
	    return NEW_MATCH2(node1, node2);

	  case NODE_LIT:
	    if (TYPE(node1->nd_lit) == T_REGEXP) {
		return NEW_MATCH2(node1, node2);
	    }
	}
    }

    if (node2) {
	switch (nd_type(node2)) {
	  case NODE_DREGX:
	  case NODE_DREGX_ONCE:
	    return NEW_MATCH3(node2, node1);

	  case NODE_LIT:
	    if (TYPE(node2->nd_lit) == T_REGEXP) {
		return NEW_MATCH3(node2, node1);
	    }
	}
    }

    return NEW_CALL(node1, tMATCH, NEW_LIST(node2));
}

static NODE*
gettable_gen(struct parser_params *parser, ID id)
{
    if (id == keyword_self) {
	return NEW_SELF();
    }
    else if (id == keyword_nil) {
	return NEW_NIL();
    }
    else if (id == keyword_true) {
	return NEW_TRUE();
    }
    else if (id == keyword_false) {
	return NEW_FALSE();
    }
    else if (id == keyword__FILE__) {
	return NEW_STR(rb_external_str_new_with_enc(ruby_sourcefile, strlen(ruby_sourcefile),
						    rb_filesystem_encoding()));
    }
    else if (id == keyword__LINE__) {
	return NEW_LIT(INT2FIX(ruby_sourceline));
    }
    else if (id == keyword__ENCODING__) {
	return NEW_LIT(rb_enc_from_encoding(parser->enc));
    }
    else if (is_local_id(id)) {
	if (dyna_in_block() && dvar_defined(id)) return NEW_DVAR(id);
	if(patern_match_set == 1){
	  if(!local_id(id)){
	    local_var(id);
	  }
	  //assignable(id, 0);
	  //printf("id: %s\n", rb_id2name(id));
	  return NEW_LIT(ID2SYM(id));
	  }
	if (local_id(id)){ 
	  //printf("local id: %s\n", rb_id2name(id));
	  return NEW_LVAR(id);
	}
	
	/* method call without arguments */
	//printf("id: %s\n", rb_id2name(id));
	return NEW_VCALL(id);
    }
    else if (is_global_id(id)) {
	return NEW_GVAR(id);
    }
    else if (is_instance_id(id)) {
	return NEW_IVAR(id);
    }
    else if (is_const_id(id)) {
	return NEW_CONST(id);
    }
    else if (is_class_id(id)) {
	return NEW_CVAR(id);
    }
    compile_error(PARSER_ARG "identifier %s is not valid to get", rb_id2name(id));
    return 0;
}

static NODE*
assignable_gen(struct parser_params *parser, ID id, NODE *val)
{
    if (!id) return 0;
    if (id == keyword_self) {
	yyerror("Can't change the value of self");
    }
    else if (id == keyword_nil) {
	yyerror("Can't assign to nil");
    }
    else if (id == keyword_true) {
	yyerror("Can't assign to true");
    }
    else if (id == keyword_false) {
	yyerror("Can't assign to false");
    }
    else if (id == keyword__FILE__) {
	yyerror("Can't assign to __FILE__");
    }
    else if (id == keyword__LINE__) {
	yyerror("Can't assign to __LINE__");
    }
    else if (id == keyword__ENCODING__) {
	yyerror("Can't assign to __ENCODING__");
    }
    else if (is_local_id(id)) {
      
	if (dyna_in_block()) {
	    if (dvar_curr(id)) {
	      //printf("dvar_curr: %s\n", rb_id2name(id));
		return NEW_DASGN_CURR(id, val);
	    }
	    else if (dvar_defined(id)) {
	      //printf("dvar_defined: %s\n", rb_id2name(id));
		return NEW_DASGN(id, val);
	    }
	    else if (local_id(id)) {
	      return NEW_LASGN(id, val);
	    }
	    else{
	      //printf("else: %s\n", rb_id2name(id));
		dyna_var(id);
		return NEW_DASGN_CURR(id, val);
	    }
	}
	else {

	    if (!local_id(id)) {
		local_var(id);
	    }
	    
	    return NEW_LASGN(id, val);
	}
    }
    else if (is_global_id(id)) {
	return NEW_GASGN(id, val);
    }
    else if (is_instance_id(id)) {
	return NEW_IASGN(id, val);
    }
    else if (is_const_id(id)) {
	if (in_def || in_single)
	    yyerror("dynamic constant assignment");
	return NEW_CDECL(id, val, 0);
    }
    else if (is_class_id(id)) {
	return NEW_CVASGN(id, val);
    }
    else {
	compile_error(PARSER_ARG "identifier %s is not valid to set", rb_id2name(id));
    }
    return 0;
}

static void
shadowing_lvar_gen(struct parser_params *parser, ID name)
{
    ID uscore;

    CONST_ID(uscore, "_");
    if (uscore == name) return;
    if (dyna_in_block()) {
	if (dvar_curr(name)) {
	    yyerror("duplicated argument name");
	}
	else if (dvar_defined(name) || local_id(name)) {
	    rb_warningS("shadowing outer local variable - %s", rb_id2name(name));
	    vtable_add(lvtbl->vars, name);
	}
    }
    else {
	if (local_id(name)) {
	    yyerror("duplicated argument name");
	}
    }
}

static void
new_bv_gen(struct parser_params *parser, ID name)
{
    if (!name) return;
    if (!is_local_id(name)) {
	compile_error(PARSER_ARG "invalid local variable - %s",
		      rb_id2name(name));
	return;
    }
    shadowing_lvar(name);
    dyna_var(name);
}

static NODE *
aryset_gen(struct parser_params *parser, NODE *recv, NODE *idx)
{
    if (recv && nd_type(recv) == NODE_SELF)
	recv = (NODE *)1;
    return NEW_ATTRASGN(recv, tASET, idx);
}

static void
block_dup_check_gen(struct parser_params *parser, NODE *node1, NODE *node2)
{
    if (node2 && node1 && nd_type(node1) == NODE_BLOCK_PASS) {
	compile_error(PARSER_ARG "both block arg and actual block given");
    }
}

ID
rb_id_attrset(ID id)
{
    id &= ~ID_SCOPE_MASK;
    id |= ID_ATTRSET;
    return id;
}

static NODE *
attrset_gen(struct parser_params *parser, NODE *recv, ID id)
{
    if (recv && nd_type(recv) == NODE_SELF)
	recv = (NODE *)1;
    return NEW_ATTRASGN(recv, rb_id_attrset(id), 0);
}

static void
rb_backref_error_gen(struct parser_params *parser, NODE *node)
{
    switch (nd_type(node)) {
      case NODE_NTH_REF:
	compile_error(PARSER_ARG "Can't set variable $%ld", node->nd_nth);
	break;
      case NODE_BACK_REF:
	compile_error(PARSER_ARG "Can't set variable $%c", (int)node->nd_nth);
	break;
    }
}

static NODE *
arg_concat_gen(struct parser_params *parser, NODE *node1, NODE *node2)
{
    if (!node2) return node1;
    switch (nd_type(node1)) {
      case NODE_BLOCK_PASS:
	node1->nd_iter = arg_concat(node1->nd_iter, node2);
	return node1;
      case NODE_ARGSPUSH:
	if (nd_type(node2) != NODE_ARRAY) break;
	node1->nd_body = list_concat(NEW_LIST(node1->nd_body), node2);
	nd_set_type(node1, NODE_ARGSCAT);
	return node1;
      case NODE_ARGSCAT:
	if (nd_type(node2) != NODE_ARRAY ||
	    nd_type(node1->nd_body) != NODE_ARRAY) break;
	node1->nd_body = list_concat(node1->nd_body, node2);
	return node1;
    }
    return NEW_ARGSCAT(node1, node2);
}

static NODE *
arg_append_gen(struct parser_params *parser, NODE *node1, NODE *node2)
{
    if (!node1) return NEW_LIST(node2);
    switch (nd_type(node1))  {
      case NODE_ARRAY:
	return list_append(node1, node2);
      case NODE_BLOCK_PASS:
	node1->nd_head = arg_append(node1->nd_head, node2);
	return node1;
      case NODE_ARGSPUSH:
	node1->nd_body = list_append(NEW_LIST(node1->nd_body), node2);
	nd_set_type(node1, NODE_ARGSCAT);
	return node1;
    }
    return NEW_ARGSPUSH(node1, node2);
}

static NODE *
splat_array(NODE* node)
{
    if (nd_type(node) == NODE_SPLAT) node = node->nd_head;
    if (nd_type(node) == NODE_ARRAY) return node;
    return 0;
}

static NODE *
node_assign_gen(struct parser_params *parser, NODE *lhs, NODE *rhs)
{
    if (!lhs) return 0;

    switch (nd_type(lhs)) {
      case NODE_GASGN:
      case NODE_IASGN:
      case NODE_IASGN2:
      case NODE_LASGN:
      case NODE_DASGN:
      case NODE_DASGN_CURR:
      case NODE_MASGN:
      case NODE_CDECL:
      case NODE_CVASGN:
	lhs->nd_value = rhs;
	break;

      case NODE_ATTRASGN:
      case NODE_CALL:
	lhs->nd_args = arg_append(lhs->nd_args, rhs);
	break;

      default:
	/* should not happen */
	break;
    }

    return lhs;
}

static int
value_expr_gen(struct parser_params *parser, NODE *node)
{
    int cond = 0;

    if (!node) {
	rb_warning0("empty expression");
    }
    while (node) {
	switch (nd_type(node)) {
	  case NODE_DEFN:
	  case NODE_DEFS:
	    parser_warning(node, "void value expression");
	    return Qfalse;

	  case NODE_RETURN:
	  case NODE_BREAK:
	  case NODE_NEXT:
	  case NODE_REDO:
	  case NODE_RETRY:
	    if (!cond) yyerror("void value expression");
	    /* or "control never reach"? */
	    return Qfalse;

	  case NODE_BLOCK:
	    while (node->nd_next) {
		node = node->nd_next;
	    }
	    node = node->nd_head;
	    break;

	  case NODE_BEGIN:
	    node = node->nd_body;
	    break;

	  case NODE_IF:
	    if (!node->nd_body) {
		node = node->nd_else;
		break;
	    }
	    else if (!node->nd_else) {
		node = node->nd_body;
		break;
	    }
	    if (!value_expr(node->nd_body)) return Qfalse;
	    node = node->nd_else;
	    break;

	  case NODE_AND:
	  case NODE_OR:
	    cond = 1;
	    node = node->nd_2nd;
	    break;

	  default:
	    return Qtrue;
	}
    }

    return Qtrue;
}

static void
void_expr_gen(struct parser_params *parser, NODE *node)
{
    const char *useless = 0;

    if (!RTEST(ruby_verbose)) return;

    if (!node) return;
    switch (nd_type(node)) {
      case NODE_CALL:
	switch (node->nd_mid) {
	  case '+':
	  case '-':
	  case '*':
	  case '/':
	  case '%':
	  case tPOW:
	  case tUPLUS:
	  case tUMINUS:
	  case '|':
	  case '^':
	  case '&':
	  case tCMP:
	  case '>':
	  case tGEQ:
	  case '<':
	  case tLEQ:
	  case tEQ:
	  case tNEQ:
	    useless = rb_id2name(node->nd_mid);
	    break;
	}
	break;

      case NODE_LVAR:
      case NODE_DVAR:
      case NODE_GVAR:
      case NODE_IVAR:
      case NODE_CVAR:
      case NODE_NTH_REF:
      case NODE_BACK_REF:
	useless = "a variable";
	break;
      case NODE_CONST:
	useless = "a constant";
	break;
      case NODE_LIT:
      case NODE_STR:
      case NODE_DSTR:
      case NODE_DREGX:
      case NODE_DREGX_ONCE:
	useless = "a literal";
	break;
      case NODE_COLON2:
      case NODE_COLON3:
	useless = "::";
	break;
      case NODE_DOT2:
	useless = "..";
	break;
      case NODE_DOT3:
	useless = "...";
	break;
      case NODE_SELF:
	useless = "self";
	break;
      case NODE_NIL:
	useless = "nil";
	break;
      case NODE_TRUE:
	useless = "true";
	break;
      case NODE_FALSE:
	useless = "false";
	break;
      case NODE_DEFINED:
	useless = "defined?";
	break;
    }

    if (useless) {
	int line = ruby_sourceline;

	ruby_sourceline = nd_line(node);
	rb_warnS("useless use of %s in void context", useless);
	ruby_sourceline = line;
    }
}

static void
void_stmts_gen(struct parser_params *parser, NODE *node)
{
    if (!RTEST(ruby_verbose)) return;
    if (!node) return;
    if (nd_type(node) != NODE_BLOCK) return;

    for (;;) {
	if (!node->nd_next) return;
	void_expr0(node->nd_head);
	node = node->nd_next;
    }
}

static NODE *
remove_begin(NODE *node)
{
    NODE **n = &node, *n1 = node;
    while (n1 && nd_type(n1) == NODE_BEGIN && n1->nd_body) {
	*n = n1 = n1->nd_body;
    }
    return node;
}

static void
reduce_nodes_gen(struct parser_params *parser, NODE **body)
{
    NODE *node = *body;

    if (!node) {
	*body = NEW_NIL();
	return;
    }
#define subnodes(n1, n2) \
    ((!node->n1) ? (node->n2 ? (body = &node->n2, 1) : 0) : \
     (!node->n2) ? (body = &node->n1, 1) : \
     (reduce_nodes(&node->n1), body = &node->n2, 1))

    while (node) {
	switch (nd_type(node)) {
	  end:
	  case NODE_NIL:
	    *body = 0;
	    return;
	  case NODE_RETURN:
	    *body = node = node->nd_stts;
	    continue;
	  case NODE_BEGIN:
	    *body = node = node->nd_body;
	    continue;
	  case NODE_BLOCK:
	    body = &node->nd_end->nd_head;
	    break;
	  case NODE_IF:
	    if (subnodes(nd_body, nd_else)) break;
	    return;
	  case NODE_CASE:
	    body = &node->nd_body;
	    break;
	  case NODE_WHEN:
	    if (!subnodes(nd_body, nd_next)) goto end;
	    break;
	  case NODE_ENSURE:
	    if (!subnodes(nd_head, nd_resq)) goto end;
	    break;
	  case NODE_RESCUE:
	    if (!subnodes(nd_head, nd_resq)) goto end;
	    break;
	  default:
	    return;
	}
	node = *body;
    }

#undef subnodes
}

static int
assign_in_cond(struct parser_params *parser, NODE *node)
{
    switch (nd_type(node)) {
      case NODE_MASGN:
	yyerror("multiple assignment in conditional");
	return 1;

      case NODE_LASGN:
      case NODE_DASGN:
      case NODE_GASGN:
      case NODE_IASGN:
	break;

      default:
	return 0;
    }

    switch (nd_type(node->nd_value)) {
      case NODE_LIT:
      case NODE_STR:
      case NODE_NIL:
      case NODE_TRUE:
      case NODE_FALSE:
	/* reports always */
	parser_warn(node->nd_value, "found = in conditional, should be ==");
	return 1;

      case NODE_DSTR:
      case NODE_XSTR:
      case NODE_DXSTR:
      case NODE_EVSTR:
      case NODE_DREGX:
      default:
	break;
    }
    return 1;
}

static void
warn_unless_e_option(struct parser_params *parser, NODE *node, const char *str)
{
    if (!e_option_supplied(parser)) parser_warn(node, str);
}

static void
warning_unless_e_option(struct parser_params *parser, NODE *node, const char *str)
{
    if (!e_option_supplied(parser)) parser_warning(node, str);
}

static void
fixup_nodes(NODE **rootnode)
{
    NODE *node, *next, *head;

    for (node = *rootnode; node; node = next) {
	enum node_type type;
	VALUE val;

	next = node->nd_next;
	head = node->nd_head;
	rb_gc_force_recycle((VALUE)node);
	*rootnode = next;
	switch (type = nd_type(head)) {
	  case NODE_DOT2:
	  case NODE_DOT3:
	    val = rb_range_new(head->nd_beg->nd_lit, head->nd_end->nd_lit,
			       type == NODE_DOT3 ? Qtrue : Qfalse);
	    rb_gc_force_recycle((VALUE)head->nd_beg);
	    rb_gc_force_recycle((VALUE)head->nd_end);
	    nd_set_type(head, NODE_LIT);
	    head->nd_lit = val;
	    break;
	  default:
	    break;
	}
    }
}

static NODE *cond0(struct parser_params*,NODE*);

static NODE*
range_op(struct parser_params *parser, NODE *node)
{
    enum node_type type;

    if (node == 0) return 0;

    type = nd_type(node);
    value_expr(node);
    if (type == NODE_LIT && FIXNUM_P(node->nd_lit)) {
	warn_unless_e_option(parser, node, "integer literal in conditional range");
	return NEW_CALL(node, tEQ, NEW_LIST(NEW_GVAR(rb_intern("$."))));
    }
    return cond0(parser, node);
}

static int
literal_node(NODE *node)
{
    if (!node) return 1;	/* same as NODE_NIL */
    switch (nd_type(node)) {
      case NODE_LIT:
      case NODE_STR:
      case NODE_DSTR:
      case NODE_EVSTR:
      case NODE_DREGX:
      case NODE_DREGX_ONCE:
      case NODE_DSYM:
	return 2;
      case NODE_TRUE:
      case NODE_FALSE:
      case NODE_NIL:
	return 1;
    }
    return 0;
}

static NODE*
cond0(struct parser_params *parser, NODE *node)
{
    if (node == 0) return 0;
    assign_in_cond(parser, node);

    switch (nd_type(node)) {
      case NODE_DSTR:
      case NODE_EVSTR:
      case NODE_STR:
	rb_warn0("string literal in condition");
	break;

      case NODE_DREGX:
      case NODE_DREGX_ONCE:
	warning_unless_e_option(parser, node, "regex literal in condition");
	return NEW_MATCH2(node, NEW_GVAR(rb_intern("$_")));

      case NODE_AND:
      case NODE_OR:
	node->nd_1st = cond0(parser, node->nd_1st);
	node->nd_2nd = cond0(parser, node->nd_2nd);
	break;

      case NODE_DOT2:
      case NODE_DOT3:
	node->nd_beg = range_op(parser, node->nd_beg);
	node->nd_end = range_op(parser, node->nd_end);
	if (nd_type(node) == NODE_DOT2) nd_set_type(node,NODE_FLIP2);
	else if (nd_type(node) == NODE_DOT3) nd_set_type(node, NODE_FLIP3);
	if (!e_option_supplied(parser)) {
	    int b = literal_node(node->nd_beg);
	    int e = literal_node(node->nd_end);
	    if ((b == 1 && e == 1) || (b + e >= 2 && RTEST(ruby_verbose))) {
		parser_warn(node, "range literal in condition");
	    }
	}
	break;

      case NODE_DSYM:
	parser_warning(node, "literal in condition");
	break;

      case NODE_LIT:
	if (TYPE(node->nd_lit) == T_REGEXP) {
	    warn_unless_e_option(parser, node, "regex literal in condition");
	    nd_set_type(node, NODE_MATCH);
	}
	else {
	    parser_warning(node, "literal in condition");
	}
      default:
	break;
    }
    return node;
}

static NODE*
cond_gen(struct parser_params *parser, NODE *node)
{
    if (node == 0) return 0;
    return cond0(parser, node);
}

static NODE*
logop_gen(struct parser_params *parser, enum node_type type, NODE *left, NODE *right)
{
    value_expr(left);
    if (left && nd_type(left) == type) {
	NODE *node = left, *second;
	while ((second = node->nd_2nd) != 0 && nd_type(second) == type) {
	    node = second;
	}
	node->nd_2nd = NEW_NODE(type, second, right, 0);
	return left;
    }
    return NEW_NODE(type, left, right, 0);
}

static void
no_blockarg(struct parser_params *parser, NODE *node)
{
    if (node && nd_type(node) == NODE_BLOCK_PASS) {
	compile_error(PARSER_ARG "block argument should not be given");
    }
}

static NODE *
ret_args_gen(struct parser_params *parser, NODE *node)
{
    if (node) {
	no_blockarg(parser, node);
	if (nd_type(node) == NODE_ARRAY) {
	    if (node->nd_next == 0) {
		node = node->nd_head;
	    }
	    else {
		nd_set_type(node, NODE_VALUES);
	    }
	}
    }
    return node;
}

static NODE *
new_yield_gen(struct parser_params *parser, NODE *node)
{
    long state = Qtrue;

    if (node) {
        no_blockarg(parser, node);
	if (node && nd_type(node) == NODE_SPLAT) {
	    state = Qtrue;
	}
    }
    else {
        state = Qfalse;
    }
    return NEW_YIELD(node, state);
}

static NODE*
negate_lit(NODE *node)
{
    switch (TYPE(node->nd_lit)) {
      case T_FIXNUM:
	node->nd_lit = LONG2FIX(-FIX2LONG(node->nd_lit));
	break;
      case T_BIGNUM:
	node->nd_lit = rb_funcall(node->nd_lit,tUMINUS,0,0);
	break;
      case T_FLOAT:
	RFLOAT(node->nd_lit)->float_value = -RFLOAT_VALUE(node->nd_lit);
	break;
      default:
	break;
    }
    return node;
}

static NODE *
arg_blk_pass(NODE *node1, NODE *node2)
{
    if (node2) {
	node2->nd_head = node1;
	return node2;
    }
    return node1;
}

static NODE*
new_args_gen(struct parser_params *parser, NODE *m, NODE *o, ID r, NODE *p, ID b)
{
    int saved_line = ruby_sourceline;
    NODE *node;
    NODE *i1, *i2 = 0;

    node = NEW_ARGS(m ? m->nd_plen : 0, o);
    i1 = m ? m->nd_next : 0;
    node->nd_next = NEW_ARGS_AUX(r, b);

    if (p) {
	i2 = p->nd_next;
	node->nd_next->nd_next = NEW_ARGS_AUX(p->nd_pid, p->nd_plen);
    }
    else if (i1) {
	node->nd_next->nd_next = NEW_ARGS_AUX(0, 0);
    }
    if (i1 || i2) {
	node->nd_next->nd_next->nd_next = NEW_NODE(NODE_AND, i1, i2, 0);
    }
    ruby_sourceline = saved_line;
    return node;
}

static void
local_push_gen(struct parser_params *parser, int inherit_dvars)
{
    struct local_vars *local;

    local = ALLOC(struct local_vars);
    local->prev = lvtbl;
    local->args = vtable_alloc(0);
    local->vars = vtable_alloc(inherit_dvars ? DVARS_INHERIT : DVARS_TOPSCOPE);
    lvtbl = local;
}

static void
local_pop_gen(struct parser_params *parser)
{
    struct local_vars *local = lvtbl->prev;
    vtable_free(lvtbl->args);
    vtable_free(lvtbl->vars);
    xfree(lvtbl);
    lvtbl = local;
}

static ID*
vtable_tblcpy(ID *buf, const struct vtable *src)
{
    int i, cnt = vtable_size(src);

    if (cnt > 0) {
        buf[0] = cnt;
        for (i = 0; i < cnt; i++) {
            buf[i] = src->tbl[i];
        }
        return buf;
    }
    return 0;
}

static ID*
local_tbl_gen(struct parser_params *parser)
{
    int cnt = vtable_size(lvtbl->args) + vtable_size(lvtbl->vars);
    ID *buf;

    if (cnt <= 0) return 0;
    buf = ALLOC_N(ID, cnt + 1);
    vtable_tblcpy(buf+1, lvtbl->args);
    vtable_tblcpy(buf+vtable_size(lvtbl->args)+1, lvtbl->vars);
    buf[0] = cnt;
    return buf;
}

static int
arg_var_gen(struct parser_params *parser, ID id)
{
    vtable_add(lvtbl->args, id);
    return vtable_size(lvtbl->args) - 1;
}

static int
local_var_gen(struct parser_params *parser, ID id)
{
    vtable_add(lvtbl->vars, id);
    return vtable_size(lvtbl->vars) - 1;
}

static int
local_id_gen(struct parser_params *parser, ID id)
{
    struct vtable *vars, *args;

    vars = lvtbl->vars;
    args = lvtbl->args;

    while (vars && POINTER_P(vars->prev)) {
	vars = vars->prev;
	args = args->prev;
    }

    if (vars && vars->prev == DVARS_INHERIT) {
	return rb_local_defined(id);
    }
    else {
	return (vtable_included(args, id) ||
		vtable_included(vars, id));
    }
}

static void
dyna_push_gen(struct parser_params *parser)
{
    lvtbl->args = vtable_alloc(lvtbl->args);
    lvtbl->vars = vtable_alloc(lvtbl->vars);
}

static void
dyna_pop_gen(struct parser_params *parser)
{
    struct vtable *tmp;

    tmp = lvtbl->args;
    lvtbl->args = lvtbl->args->prev;
    vtable_free(tmp);
    tmp = lvtbl->vars;
    lvtbl->vars = lvtbl->vars->prev;
    vtable_free(tmp);
}

static int
dyna_in_block_gen(struct parser_params *parser)
{
    return POINTER_P(lvtbl->vars) && lvtbl->vars->prev != DVARS_TOPSCOPE;
}

static int
dvar_defined_gen(struct parser_params *parser, ID id)
{
    struct vtable *vars, *args;

    args = lvtbl->args;
    vars = lvtbl->vars;

    while (POINTER_P(vars)) {
	if (vtable_included(args, id)) {
	    return 1;
	}
	if (vtable_included(vars, id)) {
	    return 1;
	}
	args = args->prev;
	vars = vars->prev;
    }

    if (vars == DVARS_INHERIT) {
        return rb_dvar_defined(id);
    }

    return 0;
}

static int
dvar_curr_gen(struct parser_params *parser, ID id)
{
    return (vtable_included(lvtbl->args, id) ||
	    vtable_included(lvtbl->vars, id));
}

VALUE rb_reg_compile(VALUE str, int options);
VALUE rb_reg_check_preprocess(VALUE);

static void
reg_fragment_setenc_gen(struct parser_params* parser, VALUE str, int options)
{
    int c = RE_OPTION_ENCODING_IDX(options);

    if (c) {
	int opt, idx;
	rb_char_to_option_kcode(c, &opt, &idx);
	if (idx != ENCODING_GET(str) &&
	    rb_enc_str_coderange(str) != ENC_CODERANGE_7BIT) {
            goto error;
	}
	ENCODING_SET(str, idx);
    }
    else if (RE_OPTION_ENCODING_NONE(options)) {
        if (!ENCODING_IS_ASCII8BIT(str) &&
            rb_enc_str_coderange(str) != ENC_CODERANGE_7BIT) {
            c = 'n';
            goto error;
        }
	rb_enc_associate(str, rb_ascii8bit_encoding());
    }
    else if (parser->enc == rb_usascii_encoding()) {
	if (rb_enc_str_coderange(str) != ENC_CODERANGE_7BIT) {
	    /* raise in re.c */
	    rb_enc_associate(str, rb_usascii_encoding());
	}
	else {
	    rb_enc_associate(str, rb_ascii8bit_encoding());
	}
    }
    return;

  error:
    compile_error(PARSER_ARG
        "regexp encoding option '%c' differs from source encoding '%s'",
        c, rb_enc_name(rb_enc_get(str)));
}

static void
reg_fragment_check_gen(struct parser_params* parser, VALUE str, int options)
{
    VALUE err;
    reg_fragment_setenc_gen(parser, str, options);
    err = rb_reg_check_preprocess(str);
    if (err != Qnil) {
        err = rb_obj_as_string(err);
        compile_error(PARSER_ARG "%s", RSTRING_PTR(err));
	RB_GC_GUARD(err);
    }
}

typedef struct {
    struct parser_params* parser;
    rb_encoding *enc;
    NODE *succ_block;
    NODE *fail_block;
    int num;
} reg_named_capture_assign_t;

static int
reg_named_capture_assign_iter(const OnigUChar *name, const OnigUChar *name_end,
          int back_num, int *back_refs, OnigRegex regex, void *arg0)
{
    reg_named_capture_assign_t *arg = (reg_named_capture_assign_t*)arg0;
    struct parser_params* parser = arg->parser;
    rb_encoding *enc = arg->enc;
    int len = name_end - name;
    const char *s = (const char *)name;
    ID var;

    arg->num++;

    if (arg->succ_block == 0) {
        arg->succ_block = NEW_BEGIN(0);
        arg->fail_block = NEW_BEGIN(0);
    }

    if (!len || (*name != '_' && ISASCII(*name) && !rb_enc_islower(*name, enc)) ||
	rb_reserved_word(s, len) || !rb_enc_symname2_p(s, len, enc)) {
        return ST_CONTINUE;
    }
    var = rb_intern3(s, len, enc);
    if (dvar_defined(var) || local_id(var)) {
        rb_warningS("named capture conflicts a local variable - %s",
                    rb_id2name(var));
    }
    arg->succ_block = block_append(arg->succ_block,
        newline_node(node_assign(assignable(var,0),
            NEW_CALL(
              gettable(rb_intern("$~")),
              idAREF,
              NEW_LIST(NEW_LIT(ID2SYM(var))))
            )));
    arg->fail_block = block_append(arg->fail_block,
        newline_node(node_assign(assignable(var,0), NEW_LIT(Qnil))));
    return ST_CONTINUE;
}

static NODE *
reg_named_capture_assign_gen(struct parser_params* parser, VALUE regexp, NODE *match)
{
    reg_named_capture_assign_t arg;

    arg.parser = parser;
    arg.enc = rb_enc_get(regexp);
    arg.succ_block = 0;
    arg.fail_block = 0;
    arg.num = 0;
    onig_foreach_name(RREGEXP(regexp)->ptr, reg_named_capture_assign_iter, (void*)&arg);

    if (arg.num == 0)
        return match;

    return
        block_append(
            newline_node(match),
            NEW_IF(gettable(rb_intern("$~")),
                block_append(
                    newline_node(arg.succ_block),
                    newline_node(
                        NEW_CALL(
                          gettable(rb_intern("$~")),
                          rb_intern("begin"),
                          NEW_LIST(NEW_LIT(INT2FIX(0)))))),
                block_append(
                    newline_node(arg.fail_block),
                    newline_node(
                        NEW_LIT(Qnil)))));
}

static VALUE
reg_compile_gen(struct parser_params* parser, VALUE str, int options)
{
    VALUE re;
    VALUE err;

    reg_fragment_setenc(str, options);
    err = rb_errinfo();
    re = rb_reg_compile(str, options & RE_OPTION_MASK);
    if (NIL_P(re)) {
	ID mesg = rb_intern("mesg");
	VALUE m = rb_attr_get(rb_errinfo(), mesg);
	rb_set_errinfo(err);
	if (!NIL_P(err)) {
	    rb_str_append(rb_str_cat(rb_attr_get(err, mesg), "\n", 1), m);
	}
	else {
	    compile_error(PARSER_ARG "%s", RSTRING_PTR(m));
	}
	return Qnil;
    }
    return re;
}

void
rb_gc_mark_parser(void)
{
}

NODE*
rb_parser_append_print(VALUE vparser, NODE *node)
{
    NODE *prelude = 0;
    NODE *scope = node;
    struct parser_params *parser;

    if (!node) return node;

    Data_Get_Struct(vparser, struct parser_params, parser);

    node = node->nd_body;

    if (nd_type(node) == NODE_PRELUDE) {
	prelude = node;
	node = node->nd_body;
    }

    node = block_append(node,
			NEW_FCALL(rb_intern("print"),
				  NEW_ARRAY(NEW_GVAR(rb_intern("$_")))));
    if (prelude) {
	prelude->nd_body = node;
	scope->nd_body = prelude;
    }
    else {
	scope->nd_body = node;
    }

    return scope;
}

NODE *
rb_parser_while_loop(VALUE vparser, NODE *node, int chop, int split)
{
    NODE *prelude = 0;
    NODE *scope = node;
    struct parser_params *parser;

    if (!node) return node;

    Data_Get_Struct(vparser, struct parser_params, parser);

    node = node->nd_body;

    if (nd_type(node) == NODE_PRELUDE) {
	prelude = node;
	node = node->nd_body;
    }
    if (split) {
	node = block_append(NEW_GASGN(rb_intern("$F"),
				      NEW_CALL(NEW_GVAR(rb_intern("$_")),
					       rb_intern("split"), 0)),
			    node);
    }
    if (chop) {
	node = block_append(NEW_CALL(NEW_GVAR(rb_intern("$_")),
				     rb_intern("chop!"), 0), node);
    }

    node = NEW_OPT_N(node);

    if (prelude) {
	prelude->nd_body = node;
	scope->nd_body = prelude;
    }
    else {
	scope->nd_body = node;
    }

    return scope;
}

static const struct {
    ID token;
    const char *name;
} op_tbl[] = {
    {tDOT2,	".."},
    {tDOT3,	"..."},
    {'+',	"+(binary)"},
    {'-',	"-(binary)"},
    {tPOW,	"**"},
    {tUPLUS,	"+@"},
    {tUMINUS,	"-@"},
    {tCMP,	"<=>"},
    {tGEQ,	">="},
    {tLEQ,	"<="},
    {tEQ,	"=="},
    {tEQQ,	"==="},
    {tNEQ,	"!="},
    {tMATCH,	"=~"},
    {tNMATCH,	"!~"},
    {tAREF,	"[]"},
    {tASET,	"[]="},
    {tLSHFT,	"<<"},
    {tRSHFT,	">>"},
    {tCOLON2,	"::"},
};

#define op_tbl_count (sizeof(op_tbl) / sizeof(op_tbl[0]))

static struct symbols {
    ID last_id;
    st_table *sym_id;
    st_table *id_str;
    st_table *ivar2_id;
    st_table *id_ivar2;
    VALUE op_sym[tLAST_TOKEN];
} global_symbols = {tLAST_ID};

static const struct st_hash_type symhash = {
    rb_str_hash_cmp,
    rb_str_hash,
};

struct ivar2_key {
    ID id;
    VALUE klass;
};

static int
ivar2_cmp(struct ivar2_key *key1, struct ivar2_key *key2)
{
    if (key1->id == key2->id && key1->klass == key2->klass) {
	return 0;
    }
    return 1;
}

static int
ivar2_hash(struct ivar2_key *key)
{
    return (key->id << 8) ^ (key->klass >> 2);
}

static const struct st_hash_type ivar2_hash_type = {
    ivar2_cmp,
    ivar2_hash,
};

void
Init_sym(void)
{
    global_symbols.sym_id = st_init_table_with_size(&symhash, 1000);
    global_symbols.id_str = st_init_numtable_with_size(1000);
    global_symbols.ivar2_id = st_init_table_with_size(&ivar2_hash_type, 1000);
    global_symbols.id_ivar2 = st_init_numtable_with_size(1000);

    Init_id();
}

void
rb_gc_mark_symbols(void)
{
    rb_mark_tbl(global_symbols.id_str);
    rb_gc_mark_locations(global_symbols.op_sym,
			 global_symbols.op_sym + tLAST_TOKEN);
}

static ID
internal_id_gen(struct parser_params *parser)
{
    ID id = (ID)vtable_size(lvtbl->args) + (ID)vtable_size(lvtbl->vars);
    id += ((tLAST_TOKEN - ID_INTERNAL) >> ID_SCOPE_SHIFT) + 1;
    return ID_INTERNAL | (id << ID_SCOPE_SHIFT);
}

static int
is_special_global_name(const char *m, const char *e, rb_encoding *enc)
{
    int mb = 0;

    if (m >= e) return 0;
    switch (*m) {
      case '~': case '*': case '$': case '?': case '!': case '@':
      case '/': case '\\': case ';': case ',': case '.': case '=':
      case ':': case '<': case '>': case '\"':
      case '&': case '`': case '\'': case '+':
      case '0':
	++m;
	break;
      case '-':
	++m;
	if (m < e && is_identchar(m, e, enc)) {
	    if (!ISASCII(*m)) mb = 1;
	    m += rb_enc_mbclen(m, e, enc);
	}
	break;
      default:
	if (!rb_enc_isdigit(*m, enc)) return 0;
	do {
	    if (!ISASCII(*m)) mb = 1;
	    ++m;
	} while (rb_enc_isdigit(*m, enc));
    }
    return m == e ? mb + 1 : 0;
}

int
rb_symname_p(const char *name)
{
    return rb_enc_symname_p(name, rb_ascii8bit_encoding());
}

int
rb_enc_symname_p(const char *name, rb_encoding *enc)
{
    return rb_enc_symname2_p(name, strlen(name), enc);
}

int
rb_enc_symname2_p(const char *name, int len, rb_encoding *enc)
{
    const char *m = name;
    const char *e = m + len;
    int localid = Qfalse;

    if (!m) return Qfalse;
    switch (*m) {
      case '\0':
	return Qfalse;

      case '$':
	if (is_special_global_name(++m, e, enc)) return Qtrue;
	goto id;

      case '@':
	if (*++m == '@') ++m;
	goto id;

      case '<':
	switch (*++m) {
	  case '<': ++m; break;
	  case '=': if (*++m == '>') ++m; break;
	  default: break;
	}
	break;

      case '>':
	switch (*++m) {
	  case '>': case '=': ++m; break;
	}
	break;

      case '=':
	switch (*++m) {
	  case '~': ++m; break;
	  case '=': if (*++m == '=') ++m; break;
	  default: return Qfalse;
	}
	break;

      case '*':
	if (*++m == '*') ++m;
	break;

      case '+': case '-':
	if (*++m == '@') ++m;
	break;

      case '|': case '^': case '&': case '/': case '%': case '~': case '`':
	++m;
	break;

      case '[':
	if (*++m != ']') return Qfalse;
	if (*++m == '=') ++m;
	break;

      case '!':
	switch (*++m) {
	  case '\0': return Qtrue;
	  case '=': case '~': ++m; break;
	  default: return Qfalse;
	}
	break;

      default:
	localid = !rb_enc_isupper(*m, enc);
      id:
	if (m >= e || (*m != '_' && !rb_enc_isalpha(*m, enc) && ISASCII(*m)))
	    return Qfalse;
	while (m < e && is_identchar(m, e, enc)) m += rb_enc_mbclen(m, e, enc);
	if (localid) {
	    switch (*m) {
	      case '!': case '?': case '=': ++m;
	    }
	}
	break;
    }
    return *m ? Qfalse : Qtrue;
}

static ID
register_symid(ID id, const char *name, long len, rb_encoding *enc)
{
    VALUE str = rb_enc_str_new(name, len, enc);
    OBJ_FREEZE(str);
    st_add_direct(global_symbols.sym_id, (st_data_t)str, id);
    st_add_direct(global_symbols.id_str, id, (st_data_t)str);
    return id;
}

ID
rb_intern3(const char *name, long len, rb_encoding *enc)
{
    const char *m = name;
    const char *e = m + len;
    unsigned char c;
    VALUE str;
    ID id;
    int last;
    int mb;
    struct RString fake_str;
    fake_str.basic.flags = T_STRING|RSTRING_NOEMBED|FL_FREEZE;
    fake_str.basic.klass = rb_cString;
    fake_str.as.heap.len = len;
    fake_str.as.heap.ptr = (char *)name;
    fake_str.as.heap.aux.capa = len;
    str = (VALUE)&fake_str;
    rb_enc_associate(str, enc);

    if (st_lookup(global_symbols.sym_id, str, (st_data_t *)&id))
	return id;

    if (rb_cString && !rb_enc_asciicompat(enc)) {
	id = ID_JUNK;
	goto new_id;
    }
    last = len-1;
    id = 0;
    switch (*m) {
      case '$':
	id |= ID_GLOBAL;
	if ((mb = is_special_global_name(++m, e, enc)) != 0) {
	    if (!--mb) enc = rb_ascii8bit_encoding();
	    goto new_id;
	}
	break;
      case '@':
	if (m[1] == '@') {
	    m++;
	    id |= ID_CLASS;
	}
	else {
	    id |= ID_INSTANCE;
	}
	m++;
	break;
      default:
	c = m[0];
	if (c != '_' && rb_enc_isascii(c, enc) && rb_enc_ispunct(c, enc)) {
	    /* operators */
	    int i;

	    if (len == 1) {
		id = c;
		goto id_register;
	    }
	    for (i = 0; i < op_tbl_count; i++) {
		if (*op_tbl[i].name == *m &&
		    strcmp(op_tbl[i].name, m) == 0) {
		    id = op_tbl[i].token;
		    goto id_register;
		}
	    }
	}

	if (m[last] == '=') {
	    /* attribute assignment */
	    id = rb_intern3(name, last, enc);
	    if (id > tLAST_TOKEN && !is_attrset_id(id)) {
		enc = rb_enc_get(rb_id2str(id));
		id = rb_id_attrset(id);
		goto id_register;
	    }
	    id = ID_ATTRSET;
	}
	else if (rb_enc_isupper(m[0], enc)) {
	    id = ID_CONST;
        }
	else {
	    id = ID_LOCAL;
	}
	break;
    }
    mb = 0;
    if (!rb_enc_isdigit(*m, enc)) {
	while (m <= name + last && is_identchar(m, e, enc)) {
	    if (ISASCII(*m)) {
		m++;
	    }
	    else {
		mb = 1;
		m += rb_enc_mbclen(m, e, enc);
	    }
	}
    }
    if (m - name < len) id = ID_JUNK;
    if (enc != rb_usascii_encoding()) {
	/*
	 * this clause makes sense only when called from other than
	 * rb_intern_str() taking care of code-range.
	 */
	if (!mb) {
	    for (; m <= name + len; ++m) {
		if (!ISASCII(*m)) goto mbstr;
	    }
	    enc = rb_usascii_encoding();
	}
      mbstr:;
    }
  new_id:
    id |= ++global_symbols.last_id << ID_SCOPE_SHIFT;
  id_register:
    return register_symid(id, name, len, enc);
}

ID
rb_intern2(const char *name, long len)
{
    return rb_intern3(name, len, rb_usascii_encoding());
}

#undef rb_intern
ID
rb_intern(const char *name)
{
    return rb_intern2(name, strlen(name));
}

ID
rb_intern_str(VALUE str)
{
    rb_encoding *enc;
    ID id;

    if (rb_enc_str_coderange(str) == ENC_CODERANGE_7BIT) {
	enc = rb_usascii_encoding();
    }
    else {
	enc = rb_enc_get(str);
    }
    id = rb_intern3(RSTRING_PTR(str), RSTRING_LEN(str), enc);
    RB_GC_GUARD(str);
    return id;
}

VALUE
rb_id2str(ID id)
{
    st_data_t data;

    if (id < tLAST_TOKEN) {
	int i = 0;

	if (rb_ispunct(id)) {
	    VALUE str = global_symbols.op_sym[i = (int)id];
	    if (!str) {
		char name[2];
		name[0] = (char)id;
		name[1] = 0;
		str = rb_usascii_str_new(name, 1);
		OBJ_FREEZE(str);
		global_symbols.op_sym[i] = str;
	    }
	    return str;
	}
	for (i = 0; i < op_tbl_count; i++) {
	    if (op_tbl[i].token == id) {
		VALUE str = global_symbols.op_sym[i];
		if (!str) {
		    str = rb_usascii_str_new2(op_tbl[i].name);
		    OBJ_FREEZE(str);
		    global_symbols.op_sym[i] = str;
		}
		return str;
	    }
	}
    }

    if (st_lookup(global_symbols.id_str, id, &data)) {
        VALUE str = (VALUE)data;
        if (RBASIC(str)->klass == 0)
            RBASIC(str)->klass = rb_cString;
	return str;
    }

    if (is_attrset_id(id)) {
	ID id2 = (id & ~ID_SCOPE_MASK) | ID_LOCAL;
	VALUE str;

	while (!(str = rb_id2str(id2))) {
	    if (!is_local_id(id2)) return 0;
	    id2 = (id & ~ID_SCOPE_MASK) | ID_CONST;
	}
	str = rb_str_dup(str);
	rb_str_cat(str, "=", 1);
	rb_intern_str(str);
	if (st_lookup(global_symbols.id_str, id, &data)) {
            VALUE str = (VALUE)data;
            if (RBASIC(str)->klass == 0)
                RBASIC(str)->klass = rb_cString;
            return str;
        }
    }
    return 0;
}

const char *
rb_id2name(ID id)
{
    VALUE str = rb_id2str(id);

    if (!str) return 0;
    return RSTRING_PTR(str);
}

static int
symbols_i(VALUE sym, ID value, VALUE ary)
{
    rb_ary_push(ary, ID2SYM(value));
    return ST_CONTINUE;
}

/*
 *  call-seq:
 *     Symbol.all_symbols    => array
 *
 *  Returns an array of all the symbols currently in Ruby's symbol
 *  table.
 *
 *     Symbol.all_symbols.size    #=> 903
 *     Symbol.all_symbols[1,20]   #=> [:floor, :ARGV, :Binding, :symlink,
 *                                     :chown, :EOFError, :$;, :String,
 *                                     :LOCK_SH, :"setuid?", :$<,
 *                                     :default_proc, :compact, :extend,
 *                                     :Tms, :getwd, :$=, :ThreadGroup,
 *                                     :wait2, :$>]
 */

VALUE
rb_sym_all_symbols(void)
{
    VALUE ary = rb_ary_new2(global_symbols.sym_id->num_entries);

    st_foreach(global_symbols.sym_id, symbols_i, ary);
    return ary;
}

int
rb_is_const_id(ID id)
{
    if (is_const_id(id)) return Qtrue;
    return Qfalse;
}

int
rb_is_class_id(ID id)
{
    if (is_class_id(id)) return Qtrue;
    return Qfalse;
}

int
rb_is_instance_id(ID id)
{
    if (is_instance_id(id)) return Qtrue;
    return Qfalse;
}

int
rb_is_local_id(ID id)
{
    if (is_local_id(id)) return Qtrue;
    return Qfalse;
}

int
rb_is_junk_id(ID id)
{
    if (is_junk_id(id)) return Qtrue;
    return Qfalse;
}

#endif /* !RIPPER */

static void
parser_initialize(struct parser_params *parser)
{
    parser->eofp = Qfalse;

    parser->parser_lex_strterm = 0;
    parser->parser_cond_stack = 0;
    parser->parser_cmdarg_stack = 0;
    parser->parser_class_nest = 0;
    parser->parser_paren_nest = 0;
    parser->parser_lpar_beg = 0;
    parser->parser_in_single = 0;
    parser->parser_in_def = 0;
    parser->parser_in_defined = 0;
    parser->parser_compile_for_eval = 0;
    parser->parser_cur_mid = 0;
    parser->parser_tokenbuf = NULL;
    parser->parser_tokidx = 0;
    parser->parser_toksiz = 0;
    parser->parser_heredoc_end = 0;
    parser->parser_command_start = Qtrue;
    parser->parser_deferred_nodes = 0;
    parser->parser_lex_pbeg = 0;
    parser->parser_lex_p = 0;
    parser->parser_lex_pend = 0;
    parser->parser_lvtbl = 0;
    parser->parser_ruby__end__seen = 0;
    parser->parser_ruby_sourcefile = 0;
#ifndef RIPPER
    parser->is_ripper = 0;
    parser->parser_eval_tree_begin = 0;
    parser->parser_eval_tree = 0;
#else
    parser->is_ripper = 1;
    parser->parser_ruby_sourcefile_string = Qnil;
    parser->delayed = Qnil;

    parser->result = Qnil;
    parser->parsing_thread = Qnil;
    parser->toplevel_p = Qtrue;
#endif
#ifdef YYMALLOC
    parser->heap = NULL;
#endif
    parser->enc = rb_usascii_encoding();
}

#ifdef RIPPER
#define parser_mark ripper_parser_mark
#define parser_free ripper_parser_free
#endif

static void
parser_mark(void *ptr)
{
    struct parser_params *p = (struct parser_params*)ptr;

    rb_gc_mark((VALUE)p->parser_lex_strterm);
    rb_gc_mark((VALUE)p->parser_deferred_nodes);
    rb_gc_mark(p->parser_lex_input);
    rb_gc_mark(p->parser_lex_lastline);
    rb_gc_mark(p->parser_lex_nextline);
#ifndef RIPPER
    rb_gc_mark((VALUE)p->parser_eval_tree_begin) ;
    rb_gc_mark((VALUE)p->parser_eval_tree) ;
    rb_gc_mark(p->debug_lines);
#else
    rb_gc_mark(p->parser_ruby_sourcefile_string);
    rb_gc_mark(p->delayed);
    rb_gc_mark(p->value);
    rb_gc_mark(p->result);
    rb_gc_mark(p->parsing_thread);
#endif
#ifdef YYMALLOC
    rb_gc_mark((VALUE)p->heap);
#endif
}

static void
parser_free(void *ptr)
{
    struct parser_params *p = (struct parser_params*)ptr;
    struct local_vars *local, *prev;

    if (p->parser_tokenbuf) {
        xfree(p->parser_tokenbuf);
    }
    for (local = p->parser_lvtbl; local; local = prev) {
	if (local->vars) xfree(local->vars);
	prev = local->prev;
	xfree(local);
    }
#ifndef RIPPER
    xfree(p->parser_ruby_sourcefile);
#endif
    xfree(p);
}

VALUE rb_parser_get_yydebug(VALUE);
VALUE rb_parser_set_yydebug(VALUE, VALUE);

#ifndef RIPPER
static struct parser_params *
parser_new(void)
{
    struct parser_params *p;

    p = ALLOC_N(struct parser_params, 1);
    MEMZERO(p, struct parser_params, 1);
    parser_initialize(p);
    return p;
}

VALUE
rb_parser_new(void)
{
    struct parser_params *p = parser_new();

    return Data_Wrap_Struct(0, parser_mark, parser_free, p);
}

/*
 *  call-seq:
 *    ripper#end_seen?   -> Boolean
 *
 *  Return if parsed source ended by +\_\_END\_\_+.
 *  This number starts from 1.
 */
VALUE
rb_parser_end_seen_p(VALUE vparser)
{
    struct parser_params *parser;

    Data_Get_Struct(vparser, struct parser_params, parser);
    return ruby__end__seen ? Qtrue : Qfalse;
}

/*
 *  call-seq:
 *    ripper#encoding   -> encoding
 *
 *  Return encoding of the source.
 */
VALUE
rb_parser_encoding(VALUE vparser)
{
    struct parser_params *parser;

    Data_Get_Struct(vparser, struct parser_params, parser);
    return rb_enc_from_encoding(parser->enc);
}

/*
 *  call-seq:
 *    ripper.yydebug   -> true or false
 *
 *  Get yydebug.
 */
VALUE
rb_parser_get_yydebug(VALUE self)
{
    struct parser_params *parser;

    Data_Get_Struct(self, struct parser_params, parser);
    return yydebug ? Qtrue : Qfalse;
}

/*
 *  call-seq:
 *    ripper.yydebug = flag
 *
 *  Set yydebug.
 */
VALUE
rb_parser_set_yydebug(VALUE self, VALUE flag)
{
    struct parser_params *parser;

    Data_Get_Struct(self, struct parser_params, parser);
    yydebug = RTEST(flag);
    return flag;
}

#ifdef YYMALLOC
#define HEAPCNT(n, size) ((n) * (size) / sizeof(YYSTYPE))
#define NEWHEAP() rb_node_newnode(NODE_ALLOCA, 0, (VALUE)parser->heap, 0)
#define ADD2HEAP(n, c, p) ((parser->heap = (n))->u1.node = (p), \
			   (n)->u3.cnt = (c), (p))

void *
rb_parser_malloc(struct parser_params *parser, size_t size)
{
    size_t cnt = HEAPCNT(1, size);
    NODE *n = NEWHEAP();
    void *ptr = xmalloc(size);

    return ADD2HEAP(n, cnt, ptr);
}

void *
rb_parser_calloc(struct parser_params *parser, size_t nelem, size_t size)
{
    size_t cnt = HEAPCNT(nelem, size);
    NODE *n = NEWHEAP();
    void *ptr = xcalloc(nelem, size);

    return ADD2HEAP(n, cnt, ptr);
}

void *
rb_parser_realloc(struct parser_params *parser, void *ptr, size_t size)
{
    NODE *n;
    size_t cnt = HEAPCNT(1, size);

    if (ptr && (n = parser->heap) != NULL) {
	do {
	    if (n->u1.node == ptr) {
		n->u1.node = ptr = xrealloc(ptr, size);
		if (n->u3.cnt) n->u3.cnt = cnt;
		return ptr;
	    }
	} while ((n = n->u2.node) != NULL);
    }
    n = NEWHEAP();
    ptr = xrealloc(ptr, size);
    return ADD2HEAP(n, cnt, ptr);
}

void
rb_parser_free(struct parser_params *parser, void *ptr)
{
    NODE **prev = &parser->heap, *n;

    while ((n = *prev) != NULL) {
	if (n->u1.node == ptr) {
	    *prev = n->u2.node;
	    rb_gc_force_recycle((VALUE)n);
	    break;
	}
	prev = &n->u2.node;
    }
    xfree(ptr);
}
#endif
#endif

#ifdef RIPPER
#ifdef RIPPER_DEBUG
extern int rb_is_pointer_to_heap(VALUE);

/* :nodoc: */
static VALUE
ripper_validate_object(VALUE self, VALUE x)
{
    if (x == Qfalse) return x;
    if (x == Qtrue) return x;
    if (x == Qnil) return x;
    if (x == Qundef)
        rb_raise(rb_eArgError, "Qundef given");
    if (FIXNUM_P(x)) return x;
    if (SYMBOL_P(x)) return x;
    if (!rb_is_pointer_to_heap(x))
        rb_raise(rb_eArgError, "invalid pointer: %p", x);
    switch (TYPE(x)) {
      case T_STRING:
      case T_OBJECT:
      case T_ARRAY:
      case T_BIGNUM:
      case T_FLOAT:
        return x;
      case T_NODE:
        rb_raise(rb_eArgError, "NODE given: %p", x);
      default:
        rb_raise(rb_eArgError, "wrong type of ruby object: %p (%s)",
                 x, rb_obj_classname(x));
    }
    return x;
}
#endif

#define validate(x)

static VALUE
ripper_dispatch0(struct parser_params *parser, ID mid)
{
    return rb_funcall(parser->value, mid, 0);
}

static VALUE
ripper_dispatch1(struct parser_params *parser, ID mid, VALUE a)
{
    validate(a);
    return rb_funcall(parser->value, mid, 1, a);
}

static VALUE
ripper_dispatch2(struct parser_params *parser, ID mid, VALUE a, VALUE b)
{
    validate(a);
    validate(b);
    return rb_funcall(parser->value, mid, 2, a, b);
}

static VALUE
ripper_dispatch3(struct parser_params *parser, ID mid, VALUE a, VALUE b, VALUE c)
{
    validate(a);
    validate(b);
    validate(c);
    return rb_funcall(parser->value, mid, 3, a, b, c);
}

static VALUE
ripper_dispatch4(struct parser_params *parser, ID mid, VALUE a, VALUE b, VALUE c, VALUE d)
{
    validate(a);
    validate(b);
    validate(c);
    validate(d);
    return rb_funcall(parser->value, mid, 4, a, b, c, d);
}

static VALUE
ripper_dispatch5(struct parser_params *parser, ID mid, VALUE a, VALUE b, VALUE c, VALUE d, VALUE e)
{
    validate(a);
    validate(b);
    validate(c);
    validate(d);
    validate(e);
    return rb_funcall(parser->value, mid, 5, a, b, c, d, e);
}

static const struct kw_assoc {
    ID id;
    const char *name;
} keyword_to_name[] = {
    {keyword_class,	"class"},
    {keyword_module,	"module"},
    {keyword_def,	"def"},
    {keyword_undef,	"undef"},
    {keyword_begin,	"begin"},
    {keyword_rescue,	"rescue"},
    {keyword_ensure,	"ensure"},
    {keyword_end,	"end"},
    {keyword_if,	"if"},
    {keyword_unless,	"unless"},
    {keyword_then,	"then"},
    {keyword_elsif,	"elsif"},
    {keyword_else,	"else"},
    {keyword_case,	"case"},
    {keyword_patern,     "match"},
    {keyword_when,	"when"},
    {keyword_while,	"while"},
    {keyword_until,	"until"},
    {keyword_for,	"for"},
    {keyword_break,	"break"},
    {keyword_next,	"next"},
    {keyword_redo,	"redo"},
    {keyword_retry,	"retry"},
    {keyword_in,	"in"},
    {keyword_do,	"do"},
    {keyword_do_cond,	"do"},
    {keyword_do_block,	"do"},
    {keyword_return,	"return"},
    {keyword_yield,	"yield"},
    {keyword_super,	"super"},
    {keyword_self,	"self"},
    {keyword_nil,	"nil"},
    {keyword_true,	"true"},
    {keyword_false,	"false"},
    {keyword_and,	"and"},
    {keyword_or,	"or"},
    {keyword_not,	"not"},
    {modifier_if,	"if"},
    {modifier_unless,	"unless"},
    {modifier_while,	"while"},
    {modifier_until,	"until"},
    {modifier_rescue,	"rescue"},
    {keyword_alias,	"alias"},
    {keyword_defined,	"defined?"},
    {keyword_BEGIN,	"BEGIN"},
    {keyword_END,	"END"},
    {keyword__LINE__,	"__LINE__"},
    {keyword__FILE__,	"__FILE__"},
    {keyword__ENCODING__, "__ENCODING__"},
    {0, NULL}
};

static const char*
keyword_id_to_str(ID id)
{
    const struct kw_assoc *a;

    for (a = keyword_to_name; a->id; a++) {
        if (a->id == id)
            return a->name;
    }
    return NULL;
}

#undef ripper_id2sym
static VALUE
ripper_id2sym(ID id)
{
    const char *name;
    char buf[8];

    if (id <= 256) {
        buf[0] = id;
        buf[1] = '\0';
        return ID2SYM(rb_intern(buf));
    }
    if ((name = keyword_id_to_str(id))) {
        return ID2SYM(rb_intern(name));
    }
    switch (id) {
      case tOROP:
        name = "||";
        break;
      case tANDOP:
        name = "&&";
        break;
      default:
        name = rb_id2name(id);
        if (!name) {
            rb_bug("cannot convert ID to string: %ld", (unsigned long)id);
        }
        break;
    }
    return ID2SYM(rb_intern(name));
}

static VALUE
ripper_intern(const char *s)
{
    return ID2SYM(rb_intern(s));
}

static void
ripper_compile_error(struct parser_params *parser, const char *fmt, ...)
{
    VALUE str;
    va_list args;

    va_start(args, fmt);
    str = rb_vsprintf(fmt, args);
    va_end(args);
    rb_funcall(parser->value, rb_intern("compile_error"), 1, str);
}

static void
ripper_warn0(struct parser_params *parser, const char *fmt)
{
    rb_funcall(parser->value, rb_intern("warn"), 1, STR_NEW2(fmt));
}

static void
ripper_warnI(struct parser_params *parser, const char *fmt, int a)
{
    rb_funcall(parser->value, rb_intern("warn"), 2,
               STR_NEW2(fmt), INT2NUM(a));
}

#if 0
static void
ripper_warnS(struct parser_params *parser, const char *fmt, const char *str)
{
    rb_funcall(parser->value, rb_intern("warn"), 2,
               STR_NEW2(fmt), STR_NEW2(str));
}
#endif

static void
ripper_warning0(struct parser_params *parser, const char *fmt)
{
    rb_funcall(parser->value, rb_intern("warning"), 1, STR_NEW2(fmt));
}

static void
ripper_warningS(struct parser_params *parser, const char *fmt, const char *str)
{
    rb_funcall(parser->value, rb_intern("warning"), 2,
               STR_NEW2(fmt), STR_NEW2(str));
}

static VALUE
ripper_lex_get_generic(struct parser_params *parser, VALUE src)
{
    return rb_funcall(src, ripper_id_gets, 0);
}

static VALUE
ripper_s_allocate(VALUE klass)
{
    struct parser_params *p;
    VALUE self;

    p = ALLOC_N(struct parser_params, 1);
    MEMZERO(p, struct parser_params, 1);
    self = Data_Wrap_Struct(klass, parser_mark, parser_free, p);
    p->value = self;
    return self;
}

#define ripper_initialized_p(r) ((r)->parser_lex_input != 0)

/*
 *  call-seq:
 *    Ripper.new(src, filename="(ripper)", lineno=1) -> ripper
 *
 *  Create a new Ripper object.
 *  _src_ must be a String, an IO, or an Object which has #gets method.
 *
 *  This method does not starts parsing.
 *  See also Ripper#parse and Ripper.parse.
 */
static VALUE
ripper_initialize(int argc, VALUE *argv, VALUE self)
{
    struct parser_params *parser;
    VALUE src, fname, lineno;

    Data_Get_Struct(self, struct parser_params, parser);
    rb_scan_args(argc, argv, "12", &src, &fname, &lineno);
    if (rb_obj_respond_to(src, ripper_id_gets, 0)) {
        parser->parser_lex_gets = ripper_lex_get_generic;
    }
    else {
        StringValue(src);
        parser->parser_lex_gets = lex_get_str;
    }
    parser->parser_lex_input = src;
    parser->eofp = Qfalse;
    if (NIL_P(fname)) {
        fname = STR_NEW2("(ripper)");
    }
    else {
        StringValue(fname);
    }
    parser_initialize(parser);

    parser->parser_ruby_sourcefile_string = fname;
    parser->parser_ruby_sourcefile = RSTRING_PTR(fname);
    parser->parser_ruby_sourceline = NIL_P(lineno) ? 0 : NUM2INT(lineno) - 1;

    return Qnil;
}

extern VALUE rb_thread_pass(void);

struct ripper_args {
    struct parser_params *parser;
    int argc;
    VALUE *argv;
};

static VALUE
ripper_parse0(VALUE parser_v)
{
    struct parser_params *parser;

    Data_Get_Struct(parser_v, struct parser_params, parser);
    parser_prepare(parser);
    ripper_yyparse((void*)parser);
    return parser->result;
}

static VALUE
ripper_ensure(VALUE parser_v)
{
    struct parser_params *parser;

    Data_Get_Struct(parser_v, struct parser_params, parser);
    parser->parsing_thread = Qnil;
    return Qnil;
}

/*
 *  call-seq:
 *    ripper#parse
 *
 *  Start parsing and returns the value of the root action.
 */
static VALUE
ripper_parse(VALUE self)
{
    struct parser_params *parser;

    Data_Get_Struct(self, struct parser_params, parser);
    if (!ripper_initialized_p(parser)) {
        rb_raise(rb_eArgError, "method called for uninitialized object");
    }
    if (!NIL_P(parser->parsing_thread)) {
        if (parser->parsing_thread == rb_thread_current())
            rb_raise(rb_eArgError, "Ripper#parse is not reentrant");
        else
            rb_raise(rb_eArgError, "Ripper#parse is not multithread-safe");
    }
    parser->parsing_thread = rb_thread_current();
    rb_ensure(ripper_parse0, self, ripper_ensure, self);

    return parser->result;
}

/*
 *  call-seq:
 *    ripper#column   -> Integer
 *
 *  Return column number of current parsing line.
 *  This number starts from 0.
 */
static VALUE
ripper_column(VALUE self)
{
    struct parser_params *parser;
    long col;

    Data_Get_Struct(self, struct parser_params, parser);
    if (!ripper_initialized_p(parser)) {
        rb_raise(rb_eArgError, "method called for uninitialized object");
    }
    if (NIL_P(parser->parsing_thread)) return Qnil;
    col = parser->tokp - parser->parser_lex_pbeg;
    return LONG2NUM(col);
}

/*
 *  call-seq:
 *    ripper#lineno   -> Integer
 *
 *  Return line number of current parsing line.
 *  This number starts from 1.
 */
static VALUE
ripper_lineno(VALUE self)
{
    struct parser_params *parser;

    Data_Get_Struct(self, struct parser_params, parser);
    if (!ripper_initialized_p(parser)) {
        rb_raise(rb_eArgError, "method called for uninitialized object");
    }
    if (NIL_P(parser->parsing_thread)) return Qnil;
    return INT2NUM(parser->parser_ruby_sourceline);
}

#ifdef RIPPER_DEBUG
/* :nodoc: */
static VALUE
ripper_assert_Qundef(VALUE self, VALUE obj, VALUE msg)
{
    StringValue(msg);
    if (obj == Qundef) {
        rb_raise(rb_eArgError, "%s", RSTRING_PTR(msg));
    }
    return Qnil;
}

/* :nodoc: */
static VALUE
ripper_value(VALUE self, VALUE obj)
{
    return ULONG2NUM(obj);
}
#endif

void
Init_ripper(void)
{
    VALUE Ripper;

    Ripper = rb_define_class("Ripper", rb_cObject);
    rb_define_const(Ripper, "Version", rb_usascii_str_new2(RIPPER_VERSION));
    rb_define_alloc_func(Ripper, ripper_s_allocate);
    rb_define_method(Ripper, "initialize", ripper_initialize, -1);
    rb_define_method(Ripper, "parse", ripper_parse, 0);
    rb_define_method(Ripper, "column", ripper_column, 0);
    rb_define_method(Ripper, "lineno", ripper_lineno, 0);
    rb_define_method(Ripper, "end_seen?", rb_parser_end_seen_p, 0);
    rb_define_method(Ripper, "encoding", rb_parser_encoding, 0);
    rb_define_method(Ripper, "yydebug", rb_parser_get_yydebug, 0);
    rb_define_method(Ripper, "yydebug=", rb_parser_set_yydebug, 1);
#ifdef RIPPER_DEBUG
    rb_define_method(rb_mKernel, "assert_Qundef", ripper_assert_Qundef, 2);
    rb_define_method(rb_mKernel, "rawVALUE", ripper_value, 1);
    rb_define_method(rb_mKernel, "validate_object", ripper_validate_object, 1);
#endif

    ripper_id_gets = rb_intern("gets");
    ripper_init_eventids1(Ripper);
    ripper_init_eventids2(Ripper);
    /* ensure existing in symbol table */
    rb_intern("||");
    rb_intern("&&");
}
#endif /* RIPPER */

