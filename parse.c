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
     keyword_ialias = 302,
     keyword_defined = 303,
     keyword_BEGIN = 304,
     keyword_END = 305,
     keyword__LINE__ = 306,
     keyword__FILE__ = 307,
     keyword__ENCODING__ = 308,
     tIDENTIFIER = 309,
     tFID = 310,
     tGVAR = 311,
     tIVAR = 312,
     tCONSTANT = 313,
     tCVAR = 314,
     tLABEL = 315,
     tINTEGER = 316,
     tFLOAT = 317,
     tSTRING_CONTENT = 318,
     tCHAR = 319,
     tNTH_REF = 320,
     tBACK_REF = 321,
     tREGEXP_END = 322,
     tUPLUS = 323,
     tUMINUS = 324,
     tPOW = 325,
     tCMP = 326,
     tEQ = 327,
     tEQQ = 328,
     tNEQ = 329,
     tGEQ = 330,
     tLEQ = 331,
     tANDOP = 332,
     tOROP = 333,
     tMATCH = 334,
     tNMATCH = 335,
     tDOT2 = 336,
     tDOT3 = 337,
     tAREF = 338,
     tASET = 339,
     tLSHFT = 340,
     tRSHFT = 341,
     tCOLON2 = 342,
     tCOLON3 = 343,
     tOP_ASGN = 344,
     tASSOC = 345,
     tLPAREN = 346,
     tLPAREN_ARG = 347,
     tRPAREN = 348,
     tLBRACK = 349,
     tLBRACE = 350,
     tLBRACE_ARG = 351,
     tSTAR = 352,
     tAMPER = 353,
     tLAMBDA = 354,
     tSYMBEG = 355,
     tSTRING_BEG = 356,
     tXSTRING_BEG = 357,
     tREGEXP_BEG = 358,
     tWORDS_BEG = 359,
     tQWORDS_BEG = 360,
     tSTRING_DBEG = 361,
     tSTRING_DVAR = 362,
     tSTRING_END = 363,
     tLAMBEG = 364,
     tLOWEST = 365,
     tINFIX_OP = 366,
     tUMINUS_NUM = 367,
     idNULL = 368,
     idRespond_to = 369,
     idIFUNC = 370,
     idCFUNC = 371,
     idThrowState = 372,
     id_core_set_method_alias = 373,
     id_core_set_variable_alias = 374,
     id_core_undef_method = 375,
     id_core_define_method = 376,
     id_core_define_singleton_method = 377,
     id_core_set_postexe = 378,
     tLAST_TOKEN = 379
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
#define keyword_ialias 302
#define keyword_defined 303
#define keyword_BEGIN 304
#define keyword_END 305
#define keyword__LINE__ 306
#define keyword__FILE__ 307
#define keyword__ENCODING__ 308
#define tIDENTIFIER 309
#define tFID 310
#define tGVAR 311
#define tIVAR 312
#define tCONSTANT 313
#define tCVAR 314
#define tLABEL 315
#define tINTEGER 316
#define tFLOAT 317
#define tSTRING_CONTENT 318
#define tCHAR 319
#define tNTH_REF 320
#define tBACK_REF 321
#define tREGEXP_END 322
#define tUPLUS 323
#define tUMINUS 324
#define tPOW 325
#define tCMP 326
#define tEQ 327
#define tEQQ 328
#define tNEQ 329
#define tGEQ 330
#define tLEQ 331
#define tANDOP 332
#define tOROP 333
#define tMATCH 334
#define tNMATCH 335
#define tDOT2 336
#define tDOT3 337
#define tAREF 338
#define tASET 339
#define tLSHFT 340
#define tRSHFT 341
#define tCOLON2 342
#define tCOLON3 343
#define tOP_ASGN 344
#define tASSOC 345
#define tLPAREN 346
#define tLPAREN_ARG 347
#define tRPAREN 348
#define tLBRACK 349
#define tLBRACE 350
#define tLBRACE_ARG 351
#define tSTAR 352
#define tAMPER 353
#define tLAMBDA 354
#define tSYMBEG 355
#define tSTRING_BEG 356
#define tXSTRING_BEG 357
#define tREGEXP_BEG 358
#define tWORDS_BEG 359
#define tQWORDS_BEG 360
#define tSTRING_DBEG 361
#define tSTRING_DVAR 362
#define tSTRING_END 363
#define tLAMBEG 364
#define tLOWEST 365
#define tINFIX_OP 366
#define tUMINUS_NUM 367
#define idNULL 368
#define idRespond_to 369
#define idIFUNC 370
#define idCFUNC 371
#define idThrowState 372
#define id_core_set_method_alias 373
#define id_core_set_variable_alias 374
#define id_core_undef_method 375
#define id_core_define_method 376
#define id_core_define_singleton_method 377
#define id_core_set_postexe 378
#define tLAST_TOKEN 379




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
    EXPR_VALUE,		/* alike EXPR_BEG but label is disallowed. */
    EXPR_INFIX
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
struct infix_ops {
  ID key;
  ID data;
  struct infix_ops *next;
};
 static struct infix_ops *
   infix_ops_add(struct infix_ops *ops, ID i){
   struct infix_ops *next = ALLOC(struct infix_ops);
   ops->key = i;
   ops->data = i;
   ops->next = next;
   next->next=0;
     
   return next;
 }
static struct infix_ops *
  infix_ops_add2(struct infix_ops *ops, ID key,ID data){
   struct infix_ops *next = ALLOC(struct infix_ops);
   ops->key = key;
   ops->data = data;
   ops->next = next;
   next->next=0;
     
   return next;
 }
 static ID serch_infix_ops(struct infix_ops *n, ID id){
   //struct infix_ops *n; 
   //n = parser->top_infix_op_table;
   while(n != 0){
     if(n->key == id){
       return n->data;
     }
     n = n->next;
   }
   return 0;
 }
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
    enum lex_state_e pre_parser_lex_state;
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
  struct infix_ops *infix_op_table;
  struct infix_ops *top_infix_op_table;
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
#define pre_lex_state           (parser->pre_parser_lex_state)
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
#define infix_add_table          (parser->infix_op_table)
#define top_infix_table      (parser->top_infix_op_table)

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
#line 642 "parse.y"
{
    VALUE val;
    NODE *node;
    ID id;
    int num;
}
/* Line 187 of yacc.c.  */
#line 978 "parse.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 991 "parse.c"

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
#define YYLAST   10764

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  152
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  177
/* YYNRULES -- Number of rules.  */
#define YYNRULES  576
/* YYNRULES -- Number of states.  */
#define YYNSTATES  998

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   379

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     151,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,   150,   126,     2,     2,     2,   124,   118,     2,
     146,   148,   122,   119,   144,   120,   143,   123,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   113,   149,
     115,   111,   114,   112,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   142,     2,   147,   117,     2,   145,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   140,   116,   141,   127,     2,     2,     2,
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
     105,   106,   107,   108,   109,   110,   121,   125,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,    10,    12,    14,    18,    21,
      23,    24,    30,    35,    38,    40,    42,    46,    49,    50,
      55,    59,    63,    67,    70,    74,    77,    81,    85,    89,
      93,    97,   102,   106,   110,   114,   121,   127,   133,   139,
     143,   147,   151,   155,   157,   159,   163,   167,   171,   174,
     176,   178,   180,   182,   185,   188,   191,   193,   198,   203,
     204,   210,   213,   217,   222,   228,   233,   239,   242,   245,
     247,   251,   253,   257,   259,   262,   266,   272,   275,   280,
     283,   288,   290,   294,   296,   300,   303,   307,   309,   313,
     315,   320,   324,   328,   332,   336,   339,   341,   343,   348,
     352,   356,   360,   364,   367,   369,   371,   373,   376,   378,
     382,   384,   386,   388,   390,   392,   394,   396,   398,   400,
     402,   403,   408,   410,   412,   414,   416,   418,   420,   422,
     424,   426,   428,   430,   432,   434,   436,   438,   440,   442,
     444,   446,   448,   450,   452,   454,   456,   458,   460,   462,
     464,   466,   468,   470,   472,   474,   476,   478,   480,   482,
     484,   486,   488,   490,   492,   494,   496,   498,   500,   502,
     504,   506,   508,   510,   512,   514,   516,   518,   520,   522,
     524,   526,   528,   530,   532,   534,   536,   538,   540,   542,
     544,   546,   548,   550,   552,   554,   556,   560,   566,   570,
     576,   583,   589,   595,   601,   607,   612,   616,   620,   624,
     628,   632,   636,   640,   644,   648,   653,   658,   661,   664,
     668,   672,   676,   680,   684,   688,   692,   696,   700,   704,
     708,   712,   716,   719,   722,   726,   730,   734,   738,   739,
     744,   751,   755,   757,   759,   761,   763,   766,   771,   774,
     778,   780,   782,   784,   786,   788,   791,   794,   799,   801,
     802,   805,   808,   811,   813,   815,   817,   819,   822,   826,
     831,   835,   840,   843,   847,   849,   851,   853,   855,   857,
     859,   861,   863,   865,   866,   871,   872,   877,   881,   885,
     888,   892,   896,   898,   903,   907,   909,   910,   917,   922,
     926,   929,   931,   934,   937,   944,   951,   952,   953,   961,
     962,   963,   971,   977,   983,   988,   989,   990,  1000,  1001,
    1008,  1009,  1010,  1019,  1020,  1026,  1027,  1034,  1035,  1036,
    1046,  1048,  1050,  1052,  1054,  1056,  1058,  1060,  1062,  1064,
    1066,  1068,  1070,  1072,  1074,  1076,  1078,  1080,  1082,  1084,
    1087,  1089,  1091,  1093,  1099,  1101,  1104,  1106,  1108,  1110,
    1114,  1116,  1120,  1122,  1127,  1134,  1138,  1144,  1147,  1152,
    1154,  1158,  1165,  1174,  1179,  1186,  1191,  1194,  1201,  1204,
    1209,  1216,  1219,  1224,  1227,  1232,  1234,  1236,  1238,  1242,
    1244,  1249,  1251,  1254,  1256,  1260,  1262,  1264,  1265,  1269,
    1274,  1276,  1280,  1284,  1285,  1291,  1294,  1299,  1304,  1307,
    1312,  1317,  1321,  1325,  1329,  1332,  1334,  1339,  1340,  1346,
    1347,  1353,  1355,  1361,  1367,  1369,  1371,  1373,  1375,  1382,
    1384,  1386,  1388,  1390,  1393,  1395,  1398,  1400,  1402,  1404,
    1406,  1408,  1410,  1412,  1415,  1419,  1423,  1427,  1431,  1435,
    1436,  1440,  1442,  1445,  1449,  1453,  1454,  1458,  1459,  1462,
    1463,  1466,  1468,  1469,  1473,  1474,  1479,  1481,  1483,  1485,
    1487,  1490,  1492,  1494,  1496,  1498,  1502,  1504,  1506,  1509,
    1512,  1514,  1516,  1518,  1520,  1522,  1524,  1526,  1528,  1530,
    1532,  1534,  1536,  1538,  1540,  1542,  1544,  1546,  1547,  1552,
    1555,  1559,  1562,  1569,  1578,  1583,  1590,  1595,  1602,  1605,
    1610,  1617,  1620,  1625,  1628,  1633,  1635,  1636,  1638,  1640,
    1642,  1644,  1646,  1648,  1650,  1654,  1656,  1660,  1664,  1668,
    1670,  1674,  1676,  1680,  1682,  1684,  1687,  1689,  1691,  1693,
    1696,  1699,  1701,  1703,  1704,  1709,  1711,  1714,  1716,  1720,
    1724,  1727,  1729,  1731,  1733,  1735,  1737,  1739,  1741,  1743,
    1745,  1747,  1749,  1751,  1752,  1754,  1755,  1757,  1760,  1763,
    1764,  1766,  1768,  1770,  1772,  1774,  1777
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     153,     0,    -1,    -1,   154,   155,    -1,   156,   321,    -1,
     328,    -1,   157,    -1,   156,   327,   157,    -1,     1,   157,
      -1,   162,    -1,    -1,    49,   158,   140,   155,   141,    -1,
     160,   266,   239,   269,    -1,   161,   321,    -1,   328,    -1,
     162,    -1,   161,   327,   162,    -1,     1,   162,    -1,    -1,
      46,   183,   163,   183,    -1,    46,    56,    56,    -1,    46,
      56,    66,    -1,    46,    56,    65,    -1,    47,   181,    -1,
      47,   181,   181,    -1,     6,   184,    -1,   162,    41,   165,
      -1,   162,    42,   165,    -1,   162,    43,   165,    -1,   162,
      44,   165,    -1,   162,    45,   162,    -1,    50,   140,   160,
     141,    -1,   178,   111,   166,    -1,   171,   111,   166,    -1,
     293,    89,   166,    -1,   223,   142,   196,   324,    89,   166,
      -1,   223,   143,    54,    89,   166,    -1,   223,   143,    58,
      89,   166,    -1,   223,    87,    54,    89,   166,    -1,   294,
      89,   166,    -1,   178,   111,   204,    -1,   171,   111,   192,
      -1,   171,   111,   204,    -1,   164,    -1,   166,    -1,   164,
      38,   164,    -1,   164,    39,   164,    -1,    40,   322,   164,
      -1,   126,   166,    -1,   189,    -1,   164,    -1,   170,    -1,
     167,    -1,    31,   197,    -1,    22,   197,    -1,    23,   197,
      -1,   256,    -1,   256,   143,   318,   198,    -1,   256,    87,
     318,   198,    -1,    -1,    96,   169,   245,   160,   141,    -1,
     317,   198,    -1,   317,   198,   168,    -1,   223,   143,   318,
     198,    -1,   223,   143,   318,   198,   168,    -1,   223,    87,
     318,   198,    -1,   223,    87,   318,   198,   168,    -1,    33,
     198,    -1,    32,   198,    -1,   173,    -1,    91,   172,   323,
      -1,   173,    -1,    91,   172,   323,    -1,   175,    -1,   175,
     174,    -1,   175,    97,   177,    -1,   175,    97,   177,   144,
     176,    -1,   175,    97,    -1,   175,    97,   144,   176,    -1,
      97,   177,    -1,    97,   177,   144,   176,    -1,    97,    -1,
      97,   144,   176,    -1,   177,    -1,    91,   172,   323,    -1,
     174,   144,    -1,   175,   174,   144,    -1,   174,    -1,   176,
     144,   174,    -1,   291,    -1,   223,   142,   196,   324,    -1,
     223,   143,    54,    -1,   223,    87,    54,    -1,   223,   143,
      58,    -1,   223,    87,    58,    -1,    88,    58,    -1,   294,
      -1,   291,    -1,   223,   142,   196,   324,    -1,   223,   143,
      54,    -1,   223,    87,    54,    -1,   223,   143,    58,    -1,
     223,    87,    58,    -1,    88,    58,    -1,   294,    -1,    54,
      -1,    58,    -1,    88,   179,    -1,   179,    -1,   223,    87,
     179,    -1,    54,    -1,    58,    -1,    55,    -1,   186,    -1,
     187,    -1,   181,    -1,   287,    -1,   182,    -1,   289,    -1,
     183,    -1,    -1,   184,   144,   185,   183,    -1,   116,    -1,
     117,    -1,   118,    -1,    71,    -1,    72,    -1,    73,    -1,
      79,    -1,    80,    -1,   114,    -1,    75,    -1,   115,    -1,
      76,    -1,    74,    -1,    85,    -1,    86,    -1,   119,    -1,
     120,    -1,   121,    -1,   122,    -1,    97,    -1,   123,    -1,
     124,    -1,    70,    -1,   126,    -1,   127,    -1,    68,    -1,
      69,    -1,    83,    -1,    84,    -1,   145,    -1,    51,    -1,
      52,    -1,    53,    -1,    49,    -1,    50,    -1,    46,    -1,
      47,    -1,    38,    -1,     7,    -1,    22,    -1,    16,    -1,
      17,    -1,     3,    -1,     5,    -1,    48,    -1,    27,    -1,
      15,    -1,    14,    -1,    10,    -1,     9,    -1,    37,    -1,
      21,    -1,    26,    -1,     4,    -1,    23,    -1,    35,    -1,
      40,    -1,    39,    -1,    24,    -1,     8,    -1,    25,    -1,
      31,    -1,    34,    -1,    33,    -1,    13,    -1,    36,    -1,
       6,    -1,    18,    -1,    32,    -1,    11,    -1,    12,    -1,
      19,    -1,    20,    -1,   205,    -1,   178,   111,   189,    -1,
     178,   111,   189,    45,   189,    -1,   293,    89,   189,    -1,
     293,    89,   189,    45,   189,    -1,   223,   142,   196,   324,
      89,   189,    -1,   223,   143,    54,    89,   189,    -1,   223,
     143,    58,    89,   189,    -1,   223,    87,    54,    89,   189,
      -1,   223,    87,    58,    89,   189,    -1,    88,    58,    89,
     189,    -1,   294,    89,   189,    -1,   189,    81,   189,    -1,
     189,    82,   189,    -1,   189,   119,   189,    -1,   189,   120,
     189,    -1,   189,   122,   189,    -1,   189,   123,   189,    -1,
     189,   124,   189,    -1,   189,    70,   189,    -1,   125,    61,
      70,   189,    -1,   125,    62,    70,   189,    -1,    68,   189,
      -1,    69,   189,    -1,   189,   116,   189,    -1,   189,   117,
     189,    -1,   189,   118,   189,    -1,   189,    71,   189,    -1,
     189,   114,   189,    -1,   189,    75,   189,    -1,   189,   115,
     189,    -1,   189,    76,   189,    -1,   189,    72,   189,    -1,
     189,    73,   189,    -1,   189,    74,   189,    -1,   189,    79,
     189,    -1,   189,    80,   189,    -1,   126,   189,    -1,   127,
     189,    -1,   189,    85,   189,    -1,   189,    86,   189,    -1,
     189,    77,   189,    -1,   189,    78,   189,    -1,    -1,    48,
     322,   190,   189,    -1,   189,   112,   189,   322,   113,   189,
      -1,   189,   121,   189,    -1,   206,    -1,   188,    -1,   189,
      -1,   328,    -1,   203,   325,    -1,   203,   144,   315,   325,
      -1,   315,   325,    -1,   146,   196,   323,    -1,   328,    -1,
     194,    -1,   328,    -1,   197,    -1,   170,    -1,   203,   201,
      -1,   315,   201,    -1,   203,   144,   315,   201,    -1,   200,
      -1,    -1,   199,   197,    -1,    98,   192,    -1,   144,   200,
      -1,   144,    -1,   328,    -1,   191,    -1,   192,    -1,    97,
     192,    -1,   203,   144,   192,    -1,   203,   144,    97,   192,
      -1,   203,   144,   192,    -1,   203,   144,    97,   192,    -1,
      97,   192,    -1,    94,   193,   147,    -1,   270,    -1,   271,
      -1,   274,    -1,   275,    -1,   276,    -1,   279,    -1,   292,
      -1,   294,    -1,    55,    -1,    -1,   224,   207,   159,   235,
      -1,    -1,    92,   164,   208,   323,    -1,    91,   160,   148,
      -1,   223,    87,    58,    -1,    88,    58,    -1,    94,   193,
     147,    -1,    95,   314,   141,    -1,    31,    -1,    32,   146,
     197,   323,    -1,    32,   146,   323,    -1,    32,    -1,    -1,
      48,   322,   146,   209,   164,   323,    -1,    40,   146,   164,
     323,    -1,    40,   146,   323,    -1,   317,   258,    -1,   257,
      -1,   257,   258,    -1,    99,   250,    -1,   225,   165,   236,
     160,   238,   235,    -1,   226,   165,   236,   160,   239,   235,
      -1,    -1,    -1,   227,   210,   165,   237,   211,   160,   235,
      -1,    -1,    -1,   228,   212,   165,   237,   213,   160,   235,
      -1,   230,   165,   321,   262,   235,    -1,   229,   165,   321,
     263,   235,    -1,   229,   321,   263,   235,    -1,    -1,    -1,
     231,   240,    26,   214,   165,   237,   215,   160,   235,    -1,
      -1,   232,   180,   295,   216,   159,   235,    -1,    -1,    -1,
     232,    85,   164,   217,   326,   218,   159,   235,    -1,    -1,
     233,   180,   219,   159,   235,    -1,    -1,   234,   181,   220,
     297,   159,   235,    -1,    -1,    -1,   234,   312,   320,   221,
     181,   222,   297,   159,   235,    -1,    22,    -1,    23,    -1,
      24,    -1,    25,    -1,   206,    -1,     7,    -1,    11,    -1,
      12,    -1,    19,    -1,    20,    -1,    16,    -1,    17,    -1,
      21,    -1,     3,    -1,     4,    -1,     5,    -1,    10,    -1,
     326,    -1,    13,    -1,   326,    13,    -1,   326,    -1,    28,
      -1,   239,    -1,    14,   165,   236,   160,   238,    -1,   328,
      -1,    15,   160,    -1,   178,    -1,   171,    -1,   300,    -1,
      91,   243,   323,    -1,   241,    -1,   242,   144,   241,    -1,
     242,    -1,   242,   144,    97,   300,    -1,   242,   144,    97,
     300,   144,   242,    -1,   242,   144,    97,    -1,   242,   144,
      97,   144,   242,    -1,    97,   300,    -1,    97,   300,   144,
     242,    -1,    97,    -1,    97,   144,   242,    -1,   302,   144,
     305,   144,   308,   311,    -1,   302,   144,   305,   144,   308,
     144,   302,   311,    -1,   302,   144,   305,   311,    -1,   302,
     144,   305,   144,   302,   311,    -1,   302,   144,   308,   311,
      -1,   302,   144,    -1,   302,   144,   308,   144,   302,   311,
      -1,   302,   311,    -1,   305,   144,   308,   311,    -1,   305,
     144,   308,   144,   302,   311,    -1,   305,   311,    -1,   305,
     144,   302,   311,    -1,   308,   311,    -1,   308,   144,   302,
     311,    -1,   310,    -1,   328,    -1,   246,    -1,   116,   247,
     116,    -1,    78,    -1,   116,   244,   247,   116,    -1,   328,
      -1,   149,   248,    -1,   249,    -1,   248,   144,   249,    -1,
      54,    -1,   299,    -1,    -1,   251,   252,   253,    -1,   146,
     298,   247,   323,    -1,   298,    -1,   109,   160,   141,    -1,
      30,   160,    10,    -1,    -1,    29,   255,   245,   160,    10,
      -1,   170,   254,    -1,   256,   143,   318,   195,    -1,   256,
      87,   318,   195,    -1,   317,   194,    -1,   223,   143,   318,
     195,    -1,   223,    87,   318,   194,    -1,   223,    87,   319,
      -1,   223,   143,   194,    -1,   223,    87,   194,    -1,    33,
     194,    -1,    33,    -1,   223,   142,   196,   324,    -1,    -1,
     140,   259,   245,   160,   141,    -1,    -1,    27,   260,   245,
     160,    10,    -1,    18,    -1,   261,   202,   236,   160,   265,
      -1,    18,   203,   236,   160,   264,    -1,   239,    -1,   263,
      -1,   239,    -1,   262,    -1,     8,   267,   268,   236,   160,
     266,    -1,   328,    -1,   192,    -1,   204,    -1,   328,    -1,
      90,   178,    -1,   328,    -1,     9,   160,    -1,   328,    -1,
     290,    -1,   287,    -1,   289,    -1,   272,    -1,    64,    -1,
     273,    -1,   272,   273,    -1,   101,   281,   108,    -1,   102,
     282,   108,    -1,   103,   282,    67,    -1,   104,   150,   108,
      -1,   104,   277,   108,    -1,    -1,   277,   278,   150,    -1,
     283,    -1,   278,   283,    -1,   105,   150,   108,    -1,   105,
     280,   108,    -1,    -1,   280,    63,   150,    -1,    -1,   281,
     283,    -1,    -1,   282,   283,    -1,    63,    -1,    -1,   107,
     284,   286,    -1,    -1,   106,   285,   160,   141,    -1,    56,
      -1,    57,    -1,    59,    -1,   294,    -1,   100,   288,    -1,
     181,    -1,    57,    -1,    56,    -1,    59,    -1,   100,   282,
     108,    -1,    61,    -1,    62,    -1,   125,    61,    -1,   125,
      62,    -1,    54,    -1,    57,    -1,    56,    -1,    58,    -1,
      59,    -1,    35,    -1,    34,    -1,    36,    -1,    37,    -1,
      52,    -1,    51,    -1,    53,    -1,   291,    -1,   291,    -1,
      65,    -1,    66,    -1,   326,    -1,    -1,   115,   296,   165,
     326,    -1,     1,   326,    -1,   146,   298,   323,    -1,   298,
     326,    -1,   302,   144,   306,   144,   308,   311,    -1,   302,
     144,   306,   144,   308,   144,   302,   311,    -1,   302,   144,
     306,   311,    -1,   302,   144,   306,   144,   302,   311,    -1,
     302,   144,   308,   311,    -1,   302,   144,   308,   144,   302,
     311,    -1,   302,   311,    -1,   306,   144,   308,   311,    -1,
     306,   144,   308,   144,   302,   311,    -1,   306,   311,    -1,
     306,   144,   302,   311,    -1,   308,   311,    -1,   308,   144,
     302,   311,    -1,   310,    -1,    -1,    58,    -1,    57,    -1,
      56,    -1,    59,    -1,   299,    -1,    54,    -1,   300,    -1,
      91,   243,   323,    -1,   301,    -1,   302,   144,   301,    -1,
      54,   111,   192,    -1,    54,   111,   223,    -1,   304,    -1,
     305,   144,   304,    -1,   303,    -1,   306,   144,   303,    -1,
     122,    -1,    97,    -1,   307,    54,    -1,   307,    -1,   118,
      -1,    98,    -1,   309,    54,    -1,   144,   310,    -1,   328,
      -1,   292,    -1,    -1,   146,   313,   164,   323,    -1,   328,
      -1,   315,   325,    -1,   316,    -1,   315,   144,   316,    -1,
     192,    90,   192,    -1,    60,   192,    -1,    54,    -1,    58,
      -1,    55,    -1,    54,    -1,    58,    -1,    55,    -1,   186,
      -1,    54,    -1,    55,    -1,   186,    -1,   143,    -1,    87,
      -1,    -1,   327,    -1,    -1,   151,    -1,   322,   148,    -1,
     322,   147,    -1,    -1,   151,    -1,   144,    -1,   149,    -1,
     151,    -1,   326,    -1,   327,   149,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   813,   813,   813,   844,   855,   864,   872,   880,   886,
     888,   887,   911,   944,   955,   964,   972,   980,   986,   986,
     994,  1002,  1013,  1023,  1031,  1036,  1045,  1054,  1063,  1076,
    1089,  1098,  1110,  1119,  1129,  1158,  1179,  1196,  1213,  1230,
    1240,  1250,  1260,  1270,  1273,  1274,  1282,  1290,  1298,  1306,
    1309,  1321,  1322,  1323,  1331,  1339,  1349,  1350,  1359,  1371,
    1370,  1392,  1401,  1413,  1422,  1434,  1443,  1455,  1464,  1475,
    1476,  1486,  1487,  1497,  1505,  1513,  1521,  1529,  1537,  1545,
    1553,  1561,  1569,  1579,  1580,  1590,  1598,  1608,  1616,  1626,
    1634,  1642,  1650,  1658,  1666,  1678,  1688,  1700,  1708,  1716,
    1724,  1732,  1740,  1753,  1766,  1777,  1785,  1788,  1796,  1804,
    1814,  1815,  1816,  1817,  1827,  1839,  1840,  1843,  1851,  1854,
    1862,  1862,  1872,  1873,  1874,  1875,  1876,  1877,  1878,  1879,
    1880,  1881,  1882,  1883,  1884,  1885,  1886,  1887,  1888,  1889,
    1890,  1891,  1892,  1893,  1894,  1895,  1896,  1897,  1898,  1899,
    1900,  1901,  1904,  1904,  1904,  1905,  1905,  1906,  1906,  1906,
    1906,  1907,  1907,  1907,  1907,  1908,  1909,  1909,  1909,  1909,
    1910,  1910,  1910,  1911,  1911,  1911,  1911,  1912,  1912,  1912,
    1912,  1913,  1913,  1913,  1913,  1914,  1914,  1914,  1914,  1915,
    1915,  1915,  1915,  1916,  1916,  1918,  1930,  1940,  1950,  1979,
    2010,  2031,  2048,  2065,  2082,  2093,  2104,  2115,  2129,  2143,
    2152,  2160,  2168,  2176,  2184,  2192,  2201,  2210,  2218,  2226,
    2234,  2242,  2250,  2258,  2266,  2274,  2282,  2290,  2298,  2306,
    2314,  2325,  2333,  2341,  2349,  2357,  2365,  2373,  2381,  2381,
    2391,  2401,  2405,  2412,  2423,  2436,  2437,  2441,  2449,  2459,
    2469,  2470,  2473,  2474,  2477,  2485,  2493,  2503,  2512,  2521,
    2521,  2533,  2543,  2547,  2551,  2556,  2567,  2575,  2583,  2597,
    2613,  2627,  2642,  2651,  2665,  2666,  2667,  2668,  2669,  2670,
    2671,  2672,  2673,  2683,  2682,  2707,  2707,  2716,  2724,  2732,
    2740,  2753,  2761,  2769,  2777,  2785,  2793,  2793,  2803,  2811,
    2819,  2831,  2832,  2843,  2847,  2859,  2871,  2871,  2871,  2882,
    2882,  2882,  2893,  2911,  2922,  2931,  2933,  2930,  2997,  2996,
    3018,  3023,  3017,  3045,  3044,  3066,  3065,  3092,  3093,  3092,
    3117,  3125,  3133,  3141,  3151,  3163,  3170,  3177,  3184,  3191,
    3198,  3204,  3210,  3217,  3224,  3231,  3238,  3245,  3250,  3251,
    3258,  3263,  3266,  3267,  3280,  3281,  3291,  3292,  3295,  3303,
    3313,  3321,  3331,  3339,  3347,  3355,  3363,  3371,  3379,  3390,
    3398,  3408,  3416,  3424,  3432,  3440,  3448,  3457,  3465,  3473,
    3481,  3489,  3497,  3505,  3513,  3521,  3531,  3532,  3538,  3547,
    3556,  3567,  3568,  3578,  3585,  3594,  3602,  3608,  3608,  3630,
    3638,  3648,  3652,  3659,  3658,  3679,  3695,  3704,  3715,  3725,
    3735,  3745,  3753,  3764,  3775,  3783,  3791,  3806,  3805,  3827,
    3826,  3846,  3851,  3863,  3875,  3876,  3878,  3879,  3881,  3900,
    3903,  3911,  3919,  3922,  3926,  3929,  3937,  3940,  3941,  3949,
    3952,  3969,  3970,  3971,  3981,  3991,  4018,  4060,  4068,  4075,
    4082,  4092,  4100,  4110,  4118,  4125,  4132,  4143,  4150,  4161,
    4168,  4178,  4180,  4179,  4196,  4195,  4217,  4225,  4233,  4241,
    4244,  4256,  4257,  4258,  4259,  4262,  4293,  4294,  4295,  4303,
    4313,  4314,  4315,  4316,  4317,  4318,  4319,  4320,  4321,  4322,
    4323,  4324,  4327,  4338,  4348,  4349,  4352,  4361,  4360,  4368,
    4380,  4392,  4398,  4406,  4414,  4422,  4430,  4438,  4446,  4454,
    4462,  4470,  4478,  4486,  4494,  4502,  4511,  4520,  4529,  4538,
    4547,  4558,  4559,  4571,  4579,  4598,  4605,  4618,  4633,  4648,
    4656,  4672,  4680,  4696,  4697,  4700,  4712,  4723,  4724,  4727,
    4743,  4747,  4757,  4767,  4767,  4796,  4797,  4807,  4814,  4824,
    4832,  4842,  4843,  4844,  4847,  4848,  4849,  4850,  4853,  4854,
    4855,  4858,  4863,  4870,  4871,  4874,  4875,  4878,  4881,  4884,
    4885,  4886,  4889,  4890,  4893,  4894,  4898
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
  "modifier_until", "modifier_rescue", "keyword_alias", "keyword_ialias",
  "keyword_defined", "keyword_BEGIN", "keyword_END", "keyword__LINE__",
  "keyword__FILE__", "keyword__ENCODING__", "tIDENTIFIER", "tFID", "tGVAR",
  "tIVAR", "tCONSTANT", "tCVAR", "tLABEL", "tINTEGER", "tFLOAT",
  "tSTRING_CONTENT", "tCHAR", "tNTH_REF", "tBACK_REF", "tREGEXP_END",
  "tUPLUS", "tUMINUS", "tPOW", "tCMP", "tEQ", "tEQQ", "tNEQ", "tGEQ",
  "tLEQ", "tANDOP", "tOROP", "tMATCH", "tNMATCH", "tDOT2", "tDOT3",
  "tAREF", "tASET", "tLSHFT", "tRSHFT", "tCOLON2", "tCOLON3", "tOP_ASGN",
  "tASSOC", "tLPAREN", "tLPAREN_ARG", "tRPAREN", "tLBRACK", "tLBRACE",
  "tLBRACE_ARG", "tSTAR", "tAMPER", "tLAMBDA", "tSYMBEG", "tSTRING_BEG",
  "tXSTRING_BEG", "tREGEXP_BEG", "tWORDS_BEG", "tQWORDS_BEG",
  "tSTRING_DBEG", "tSTRING_DVAR", "tSTRING_END", "tLAMBEG", "tLOWEST",
  "'='", "'?'", "':'", "'>'", "'<'", "'|'", "'^'", "'&'", "'+'", "'-'",
  "tINFIX_OP", "'*'", "'/'", "'%'", "tUMINUS_NUM", "'!'", "'~'", "idNULL",
  "idRespond_to", "idIFUNC", "idCFUNC", "idThrowState",
  "id_core_set_method_alias", "id_core_set_variable_alias",
  "id_core_undef_method", "id_core_define_method",
  "id_core_define_singleton_method", "id_core_set_postexe", "tLAST_TOKEN",
  "'{'", "'}'", "'['", "'.'", "','", "'`'", "'('", "']'", "')'", "';'",
  "' '", "'\\n'", "$accept", "program", "@1", "top_compstmt", "top_stmts",
  "top_stmt", "@2", "bodystmt", "compstmt", "stmts", "stmt", "@3", "expr",
  "expr_value", "command_call", "block_command", "cmd_brace_block", "@4",
  "command", "mlhs", "mlhs_inner", "mlhs_basic", "mlhs_item", "mlhs_head",
  "mlhs_post", "mlhs_node", "lhs", "cname", "cpath", "fname", "fsym",
  "fitem", "undef_list", "@5", "op", "reswords", "parg", "arg", "@6",
  "parg_value", "arg_value", "aref_args", "paren_args", "opt_paren_args",
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
     365,    61,    63,    58,    62,    60,   124,    94,    38,    43,
      45,   366,    42,    47,    37,   367,    33,   126,   368,   369,
     370,   371,   372,   373,   374,   375,   376,   377,   378,   379,
     123,   125,    91,    46,    44,    96,    40,    93,    41,    59,
      32,    10
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   152,   154,   153,   155,   156,   156,   156,   156,   157,
     158,   157,   159,   160,   161,   161,   161,   161,   163,   162,
     162,   162,   162,   162,   162,   162,   162,   162,   162,   162,
     162,   162,   162,   162,   162,   162,   162,   162,   162,   162,
     162,   162,   162,   162,   164,   164,   164,   164,   164,   164,
     165,   166,   166,   166,   166,   166,   167,   167,   167,   169,
     168,   170,   170,   170,   170,   170,   170,   170,   170,   171,
     171,   172,   172,   173,   173,   173,   173,   173,   173,   173,
     173,   173,   173,   174,   174,   175,   175,   176,   176,   177,
     177,   177,   177,   177,   177,   177,   177,   178,   178,   178,
     178,   178,   178,   178,   178,   179,   179,   180,   180,   180,
     181,   181,   181,   181,   181,   182,   182,   183,   183,   184,
     185,   184,   186,   186,   186,   186,   186,   186,   186,   186,
     186,   186,   186,   186,   186,   186,   186,   186,   186,   186,
     186,   186,   186,   186,   186,   186,   186,   186,   186,   186,
     186,   186,   187,   187,   187,   187,   187,   187,   187,   187,
     187,   187,   187,   187,   187,   187,   187,   187,   187,   187,
     187,   187,   187,   187,   187,   187,   187,   187,   187,   187,
     187,   187,   187,   187,   187,   187,   187,   187,   187,   187,
     187,   187,   187,   187,   187,   188,   189,   189,   189,   189,
     189,   189,   189,   189,   189,   189,   189,   189,   189,   189,
     189,   189,   189,   189,   189,   189,   189,   189,   189,   189,
     189,   189,   189,   189,   189,   189,   189,   189,   189,   189,
     189,   189,   189,   189,   189,   189,   189,   189,   190,   189,
     189,   189,   189,   191,   192,   193,   193,   193,   193,   194,
     195,   195,   196,   196,   197,   197,   197,   197,   197,   199,
     198,   200,   201,   201,   201,   202,   203,   203,   203,   203,
     204,   204,   204,   205,   206,   206,   206,   206,   206,   206,
     206,   206,   206,   207,   206,   208,   206,   206,   206,   206,
     206,   206,   206,   206,   206,   206,   209,   206,   206,   206,
     206,   206,   206,   206,   206,   206,   210,   211,   206,   212,
     213,   206,   206,   206,   206,   214,   215,   206,   216,   206,
     217,   218,   206,   219,   206,   220,   206,   221,   222,   206,
     206,   206,   206,   206,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   236,   236,
     237,   237,   238,   238,   239,   239,   240,   240,   241,   241,
     242,   242,   243,   243,   243,   243,   243,   243,   243,   243,
     243,   244,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   245,   245,   246,   246,
     246,   247,   247,   248,   248,   249,   249,   251,   250,   252,
     252,   253,   253,   255,   254,   256,   256,   256,   257,   257,
     257,   257,   257,   257,   257,   257,   257,   259,   258,   260,
     258,   261,   262,   263,   264,   264,   265,   265,   266,   266,
     267,   267,   267,   268,   268,   269,   269,   270,   270,   270,
     271,   272,   272,   272,   273,   274,   275,   276,   276,   277,
     277,   278,   278,   279,   279,   280,   280,   281,   281,   282,
     282,   283,   284,   283,   285,   283,   286,   286,   286,   286,
     287,   288,   288,   288,   288,   289,   290,   290,   290,   290,
     291,   291,   291,   291,   291,   291,   291,   291,   291,   291,
     291,   291,   292,   293,   294,   294,   295,   296,   295,   295,
     297,   297,   298,   298,   298,   298,   298,   298,   298,   298,
     298,   298,   298,   298,   298,   298,   298,   299,   299,   299,
     299,   300,   300,   301,   301,   302,   302,   303,   304,   305,
     305,   306,   306,   307,   307,   308,   308,   309,   309,   310,
     311,   311,   312,   313,   312,   314,   314,   315,   315,   316,
     316,   317,   317,   317,   318,   318,   318,   318,   319,   319,
     319,   320,   320,   321,   321,   322,   322,   323,   324,   325,
     325,   325,   326,   326,   327,   327,   328
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     2,     1,     1,     3,     2,     1,
       0,     5,     4,     2,     1,     1,     3,     2,     0,     4,
       3,     3,     3,     2,     3,     2,     3,     3,     3,     3,
       3,     4,     3,     3,     3,     6,     5,     5,     5,     3,
       3,     3,     3,     1,     1,     3,     3,     3,     2,     1,
       1,     1,     1,     2,     2,     2,     1,     4,     4,     0,
       5,     2,     3,     4,     5,     4,     5,     2,     2,     1,
       3,     1,     3,     1,     2,     3,     5,     2,     4,     2,
       4,     1,     3,     1,     3,     2,     3,     1,     3,     1,
       4,     3,     3,     3,     3,     2,     1,     1,     4,     3,
       3,     3,     3,     2,     1,     1,     1,     2,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     4,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     5,     3,     5,
       6,     5,     5,     5,     5,     4,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     4,     4,     2,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     2,     3,     3,     3,     3,     0,     4,
       6,     3,     1,     1,     1,     1,     2,     4,     2,     3,
       1,     1,     1,     1,     1,     2,     2,     4,     1,     0,
       2,     2,     2,     1,     1,     1,     1,     2,     3,     4,
       3,     4,     2,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     4,     0,     4,     3,     3,     2,
       3,     3,     1,     4,     3,     1,     0,     6,     4,     3,
       2,     1,     2,     2,     6,     6,     0,     0,     7,     0,
       0,     7,     5,     5,     4,     0,     0,     9,     0,     6,
       0,     0,     8,     0,     5,     0,     6,     0,     0,     9,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     1,     1,     5,     1,     2,     1,     1,     1,     3,
       1,     3,     1,     4,     6,     3,     5,     2,     4,     1,
       3,     6,     8,     4,     6,     4,     2,     6,     2,     4,
       6,     2,     4,     2,     4,     1,     1,     1,     3,     1,
       4,     1,     2,     1,     3,     1,     1,     0,     3,     4,
       1,     3,     3,     0,     5,     2,     4,     4,     2,     4,
       4,     3,     3,     3,     2,     1,     4,     0,     5,     0,
       5,     1,     5,     5,     1,     1,     1,     1,     6,     1,
       1,     1,     1,     2,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     2,     3,     3,     3,     3,     3,     0,
       3,     1,     2,     3,     3,     0,     3,     0,     2,     0,
       2,     1,     0,     3,     0,     4,     1,     1,     1,     1,
       2,     1,     1,     1,     1,     3,     1,     1,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     4,     2,
       3,     2,     6,     8,     4,     6,     4,     6,     2,     4,
       6,     2,     4,     2,     4,     1,     0,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     3,     3,     3,     1,
       3,     1,     3,     1,     1,     2,     1,     1,     1,     2,
       2,     1,     1,     0,     4,     1,     2,     1,     3,     3,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     1,     0,     1,     2,     2,     0,
       1,     1,     1,     1,     1,     2,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,     0,     1,     0,   343,   344,   345,     0,   335,
     336,   337,   340,   341,   338,   339,   342,   330,   331,   332,
     333,   292,   259,   259,   486,   485,   487,   488,   565,     0,
       0,   565,    10,     0,   490,   489,   491,   480,   553,   482,
     481,   483,   484,   476,   477,   441,   494,   495,     0,     0,
       0,     0,     0,   576,   576,    81,   397,   459,   457,   459,
     459,   449,   455,     0,     0,     0,     3,   563,     6,     9,
      43,    44,    52,    51,     0,    69,     0,    73,    83,     0,
      49,   242,     0,   283,     0,     0,   306,   309,   563,     0,
       0,     0,     0,     0,    56,   301,   274,   275,   440,   442,
     276,   277,   278,   279,   438,   439,   437,   492,   280,     0,
     281,   259,     5,     8,   164,   175,   165,   188,   160,   181,
     171,   170,   191,   192,   186,   169,   168,   162,   163,   189,
     193,   194,   173,   161,   176,   180,   182,   174,   167,   183,
     190,   185,   184,   177,   187,   172,   159,   179,   178,   157,
     158,   166,   155,   156,   152,   153,   154,   110,   112,   111,
     147,   148,   144,   125,   126,   127,   134,   131,   133,   128,
     129,   149,   150,   135,   136,   141,   130,   132,   122,   123,
     124,   137,   138,   139,   140,   142,   143,   145,   146,   151,
     115,   117,   119,    25,   113,   114,   116,   118,   330,   331,
     292,     0,     0,     0,     0,     0,     0,     0,   254,     0,
     244,   266,    54,   258,   576,     0,   492,     0,   281,   576,
     547,    55,    53,   565,    68,     0,   576,   414,    67,   565,
     566,     0,     0,    18,    23,   238,     0,     0,   295,   415,
     217,     0,     0,   218,   289,     0,     0,     0,   563,    15,
     565,    71,    14,   285,     0,   569,   569,   245,     0,     0,
     569,   545,   565,     0,     0,     0,    79,   334,     0,    89,
      96,   303,   516,   473,   472,   474,   471,     0,   470,     0,
       0,     0,     0,     0,     0,     0,   478,   479,    48,   232,
     233,   572,   573,     4,   574,   564,     0,     0,     0,     0,
       0,     0,     0,   403,   405,     0,    85,     0,    77,    74,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   576,
       0,     0,    50,     0,     0,     0,     0,   563,     0,   564,
     563,     0,   357,   356,     0,     0,   492,   281,   105,   106,
       0,     0,   108,     0,     0,   492,   281,   323,   184,   177,
     187,   172,   152,   153,   154,   110,   111,   543,   325,   542,
       0,     0,     0,   419,   417,   302,   443,     0,     0,   408,
      61,   300,   120,   550,   289,   267,   261,     0,     0,   263,
     255,   264,     0,   576,     0,     0,     0,   263,   256,   565,
       0,   294,   260,   565,   253,   252,   565,   299,    47,    20,
      22,    21,     0,    24,   296,     0,     0,     0,     0,     0,
       0,    17,   565,   287,    13,   564,    70,   565,   290,   571,
     570,   246,   571,   248,   291,   546,     0,    95,   478,   479,
      87,    82,     0,     0,   576,     0,   522,   519,   518,   517,
     520,     0,   534,   538,   537,   533,   516,     0,   400,   521,
     523,   525,   576,   531,   576,   536,   576,     0,   515,   461,
     464,   462,   475,   460,   444,   458,   445,   446,   447,   448,
       0,   451,   453,     0,   454,     0,     0,   575,     7,    26,
      27,    28,    29,    30,    45,    46,   576,     0,    33,    41,
       0,    42,   565,     0,    75,    86,    32,   196,   266,    40,
     214,   222,   227,   228,   229,   224,   226,   236,   237,   230,
     231,   207,   208,   234,   235,   565,   223,   225,   219,   220,
     221,   209,   210,   241,   211,   212,   213,   554,   559,   555,
     560,   413,   259,   411,   565,   554,   556,   555,   557,   412,
     259,     0,   576,   348,     0,   347,     0,     0,     0,     0,
       0,     0,     0,   289,     0,   576,     0,   315,   320,   105,
     106,   107,     0,   497,   318,   496,     0,   576,     0,     0,
       0,   516,   562,   561,   327,   554,   555,   259,   259,   576,
     576,    34,   198,    39,   206,    59,    62,     0,   196,   549,
       0,   268,   262,   576,   558,   555,   565,   554,   555,   548,
     293,   567,   249,   298,    19,     0,   239,     0,    31,     0,
     576,   205,    72,    16,   286,   569,     0,    80,    92,    94,
     565,   554,   555,     0,   522,     0,   369,   360,   362,   565,
     358,   576,     0,     0,   398,     0,   508,   541,     0,   511,
     535,     0,   513,   539,     0,     0,   450,   452,   456,   215,
     216,   389,   576,     0,   387,   386,   272,     0,    84,    78,
       0,     0,     0,     0,     0,   410,    65,     0,   416,     0,
       0,   251,   409,    63,   250,   346,   284,   576,   576,   429,
     576,   349,   576,   351,   307,   350,   310,     0,     0,   314,
     421,     0,     0,   558,   288,   565,   554,   555,     0,     0,
     499,     0,     0,   105,   106,   109,   565,     0,   565,   516,
       0,     0,     0,   407,    58,   406,    57,     0,     0,     0,
     576,   121,   269,   257,     0,   416,     0,     0,   565,    11,
     247,    88,    90,   527,   565,     0,   367,     0,   524,     0,
     565,   391,     0,     0,   526,   576,   576,   540,   576,   532,
     576,   576,     0,   466,   467,   468,   463,   469,   522,   576,
       0,   576,   529,   576,   576,   385,     0,     0,   270,    76,
     197,     0,    38,   203,   204,    66,   568,     0,    36,   201,
      37,   202,    64,   430,   431,   576,   432,     0,   576,   354,
       0,     0,   352,     0,     0,     0,   313,     0,     0,   576,
     243,   265,     0,   195,   312,   416,     0,   321,     0,     0,
     416,   324,   544,   565,     0,   501,   328,     0,     0,   199,
       0,     0,   297,   359,   370,     0,   365,   361,   395,   392,
     393,   396,   399,   402,   401,     0,   504,     0,   506,     0,
     512,     0,   509,   514,   465,     0,     0,   388,   376,   378,
       0,   381,     0,   383,   404,   271,   240,    35,   200,     0,
       0,   434,   355,     0,    12,   436,     0,   304,   305,     0,
       0,   268,   576,     0,     0,   316,     0,   498,   319,   500,
     326,   516,   420,   418,     0,     0,   368,     0,   363,     0,
     576,   576,   576,   576,     0,   528,   390,   576,   576,   576,
     530,   576,   576,     0,   433,     0,    97,   104,     0,   435,
       0,   308,   311,   424,   425,   423,   273,   576,     0,     0,
       0,    60,   366,     0,   394,   505,     0,   502,   507,   510,
     289,     0,     0,   373,     0,   375,   382,     0,   379,   384,
     103,     0,   576,     0,   576,   576,   426,   427,   422,     0,
     322,     0,   364,   576,   558,   288,   576,   576,   576,   576,
     558,   102,   565,   554,   555,   428,   353,   317,   329,   503,
     374,     0,   371,   377,   380,   416,   576,   372
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    66,    67,    68,   236,   561,   562,   248,
     249,   422,    70,   343,    71,    72,   606,   740,    73,    74,
     250,    75,    76,    77,   451,    78,   209,   362,   363,   190,
     191,   192,   193,   607,   194,   195,   820,    80,   425,   821,
     211,   254,   551,   692,   413,   414,   224,   225,   213,   400,
     822,   214,   511,   823,    81,   341,   437,   625,   345,   814,
     346,   815,   718,   938,   722,   719,   896,   589,   591,   732,
     901,   241,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,   696,   564,   704,   811,   812,   355,   647,
     648,   649,   779,   673,   674,   760,   849,   850,   271,   272,
     467,   654,   304,   506,    94,    95,   391,   600,   599,   711,
     712,   571,   935,   968,   698,   805,   880,   884,    96,    97,
      98,    99,   100,   101,   102,   283,   490,   103,   285,   279,
     277,   483,   665,   664,   776,   104,   278,   105,   106,   216,
     108,   217,   218,   584,   721,   730,   731,   469,   470,   471,
     472,   473,   782,   783,   474,   475,   476,   477,   767,   656,
     380,   590,   259,   219,   220,   111,   629,   553,   594,   293,
     410,   411,   688,   441,   565,   349,   252
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -772
static const yytype_int16 yypact[] =
{
    -772,   121,  2404,  -772,  7041,  -772,  -772,  -772,  6541,  -772,
    -772,  -772,  -772,  -772,  -772,  -772,  -772,  7265,  7265,  -772,
    -772,  7265,  3026,  2591,  -772,  -772,  -772,  -772,   209,  6398,
    6684,     5,  -772,    27,  -772,  -772,  -772,  5615,  2736,  -772,
    -772,  5746,  -772,  -772,  -772,  -772,  -772,  -772,  8497,  8497,
     153,  4263,  8609,  7489,  7825,  6811,  -772,  6255,  -772,  -772,
    -772,    52,   157,   433,  8721,  8497,  -772,   247,  -772,   811,
     494,  -772,  -772,   296,   220,  -772,   195,  8833,  -772,   277,
    2864,     0,    33,  -772,  8609,  8609,  -772,  -772,  4958,  8609,
    8940,  9047,  9154,  5484,    18,   108,  -772,  -772,   301,  -772,
    -772,  -772,  -772,  -772,  -772,  -772,  -772,   403,  -772,   339,
     439,   100,  -772,  -772,  -772,  -772,  -772,  -772,  -772,  -772,
    -772,  -772,  -772,  -772,  -772,  -772,  -772,  -772,  -772,  -772,
    -772,  -772,  -772,  -772,  -772,  -772,  -772,  -772,  -772,  -772,
    -772,  -772,  -772,  -772,  -772,  -772,  -772,  -772,  -772,  -772,
    -772,  -772,  -772,  -772,  -772,  -772,  -772,  -772,  -772,  -772,
    -772,  -772,  -772,  -772,  -772,  -772,  -772,  -772,  -772,  -772,
    -772,  -772,  -772,  -772,  -772,  -772,  -772,  -772,  -772,  -772,
    -772,  -772,  -772,  -772,  -772,  -772,  -772,  -772,  -772,  -772,
    -772,  -772,  -772,   264,  -772,  -772,  -772,  -772,  -772,  -772,
    -772,   291,  8497,   399,  4412,  8497,  8497,  8497,  -772,   344,
    2864,   406,  -772,  -772,   338,    35,    13,   401,    14,   355,
    -772,  -772,  -772,  4846,  -772,  7265,  7265,  -772,  -772,  5094,
    -772,  8609,   524,  -772,  6684,   356,   365,  4561,   366,   374,
    -772,   271,   100,   466,   473,  7153,  4263,   398,   247,   811,
       5,   429,  -772,   494,   409,   -37,   197,  -772,   406,   423,
     197,  -772,     5,   508,   520,  9261,   425,  -772,   284,   293,
     299,  -772,   585,  -772,  -772,  -772,  -772,    45,  -772,   598,
     629,   547,   464,   682,   468,    54,   504,   529,  -772,  -772,
    -772,  -772,  -772,  -772,  -772,  5206,  8609,  8609,  8609,  8609,
    7153,  8609,  8609,  -772,  -772,  7937,  -772,  4263,  6926,   462,
    7937,  8497,  8497,  8497,  8497,  8497,  8497,  8497,  8497,  8497,
    8497,  8497,  8497,  8497,  8497,  8497,  8497,  8497,  8497,  8497,
    8497,  8497,  8497,  8497,  8497,  8497,  8497,  8497,  9533,  7265,
    9612,  3408,   494,   110,   110,  8609,  8609,   247,   590,   475,
     247,   557,  -772,  -772,   373,   596,    72,   137,   269,   303,
    8609,   232,  -772,   111,   379,  -772,  -772,  -772,    28,    42,
      58,    63,   235,   307,   364,   381,   392,  -772,  -772,  -772,
     396, 10560, 10560,  -772,  -772,  -772,  -772,  8721,  8721,  -772,
     535,  -772,  -772,  -772,    21,  -772,  -772,  8497,  8497,  7377,
    -772,  -772,  9691,  7265,  9770,  8497,  8497,  7601,  -772,     5,
     498,  -772,  -772,     5,  -772,  -772,   116,  -772,  -772,  -772,
    -772,  -772,  6541,  -772,  -772,  8497,  3842,   507,  9691,  9770,
    8497,   811,     5,  -772,  -772,  5337,   506,     5,  -772,  7713,
    -772,  -772,  7825,  -772,  -772,  -772,   356,   384,  -772,  -772,
    -772,   515,  9261,  9849,  7265,  9928,   541,  -772,  -772,  -772,
    -772,  1123,  -772,  -772,  -772,  -772,   804,    56,  -772,  -772,
    -772,  -772,   527,  -772,   530,   619,   542,   625,  -772,  -772,
    -772,  -772,  -772,  -772,  -772,  -772,  -772,  -772,  -772,  -772,
     298,  -772,  -772,   538,  -772,  8497,  8497,  -772,  -772,  -772,
    -772,  -772,  -772,  -772,  -772,  -772,   266,  8497,  -772,   546,
     553,  -772,     5,  9261,   555,  -772,  -772,  2005,  -772,  -772,
     466,  2447,  2447,  2447,  2447,  1087,  1087,  6274,  1069,  2447,
    2447,  3009,  3009,   886,   886,  2719,  1087,  1087,   756,   756,
    1142,   431,   431,   431,   466,   466,   466,  3171,  5994,  3259,
    6111,  -772,   374,  -772,     5,   489,  -772,   516,  -772,  -772,
    2881,   675,   700,  -772,  3557,   696,  3991,   144,   144,   590,
    8049,   675,   698,   143, 10007,  7265, 10086,  -772,   494,  -772,
     384,  -772,   247,  -772,  -772,  -772, 10165,  7265, 10244,  3408,
    8609,   775,  -772,  -772,  -772,  -772,  -772,  2015,  2015,   266,
     266,  -772, 10618,  -772,  2864,  -772,  -772,  6541, 10640,  -772,
    8497,   406,  -772,   355,  5877,  2248,     5,   278,   380,  -772,
    -772,  -772,  -772,  -772,  -772,  8609,  2864,   577,  -772,   374,
     374,  2864,    22,   811,  -772,   197,  9261,   515,   319,   279,
       5,    38,    48,  8497,  -772,  1123,   375,  -772,   575,     5,
    -772,   571,  4710,  4561,  -772,   804,  -772,  -772,   804,  -772,
    -772,  1017,  -772,  -772,  4561,   692,  -772,  -772,  -772,   466,
     466,  -772,   656,  4710,  -772,  -772,   579,  8161,  -772,   515,
    9261,  8497,   608,  8721,  8497,  -772,   535,   586,   534,  8721,
    8721,  -772,  -772,   535,  -772,  -772,  -772,  8273,   709,  -772,
     620,  -772,   709,  -772,  -772,  -772,  -772,   675,    71,  -772,
    -772,   638,   675,    44,    59,     5,   171,   172,  8609,   247,
    -772,  8609,  3408,   319,   279,  -772,     5,   675,   116,   804,
    3408,   247,  6684,  -772,  -772,  -772,  -772,  4710,  4561,  8497,
     266,  -772,  -772,  -772,  8497,   397,  8497,  8497,   116,  -772,
    -772,  -772,   241,  -772,     5,  1165,   611,  1188,  -772,   781,
       5,  -772,   740,   618,  -772,   617,   623,  -772,   628,  -772,
     640,   628,   632,  -772,  -772,  -772,  -772,  -772,   641,   571,
     669,   647,  -772,   648,   649,  -772,   784,  8497,   653,   515,
    2864,  8497,  -772,  2864,  2864,  -772,  -772,  8721,  -772,  2864,
    -772,  2864,  -772,   546,  -772,   710,  -772,  4127,   795,  -772,
    8609,   675,  -772,   675,  4710,  4710,  -772,  8385,  3706,  7489,
    -772,  -772,   110,  -772,  -772,   188,   144,  -772,   247,   675,
    -772,  -772,  -772,     5,   675,  -772,  -772,   797,   667,  2864,
    4561,  8497,  -772,  -772,   665,  1165,   419,  -772,  -772,   666,
    -772,  -772,  -772,  -772,  -772,   804,  -772,  1017,  -772,  1017,
    -772,  1017,  -772,  -772,  -772,  9368,   699,  -772,   882,  -772,
     882,  -772,  1017,  -772,  -772,   668,  2864,  -772,  2864,  9475,
     110,  -772,  -772,  4710,  -772,  -772,   110,  -772,  -772,   675,
     675,  -772,   101,   673,  3706,  -772,  3408,  -772,  -772,  -772,
    -772,   775,  -772,  -772,   680,  1165,   665,  1165,   672,   781,
     628,   679,   628,   628,   766,   400,  -772,   683,   684,   628,
    -772,   686,   628,   785,  -772,   402,   293,   299,  3408,  -772,
    3557,  -772,  -772,  -772,  -772,  -772,  -772,   350,  4710,   675,
    3408,  -772,   665,  1165,  -772,  -772,  1017,  -772,  -772,  -772,
    -772, 10323,   882,  -772,  1017,  -772,  -772,  1017,  -772,  -772,
     384, 10402,  7265, 10481,   700,   620,  -772,  -772,  -772,   675,
    -772,   675,   665,   628,   701,   702,   628,   705,   628,   628,
     124,   279,     5,   123,   127,  -772,  -772,  -772,  -772,  -772,
    -772,  1017,  -772,  -772,  -772,   133,   628,  -772
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -772,  -772,  -772,   420,  -772,    23,  -772,  -543,   677,  -772,
      74,  -772,   936,   -54,   -53,  -772,  -205,  -772,   -16,   769,
    -149,    -9,   -33,  -772,  -372,   -14,  1109,  -331,   772,   -21,
    -772,    -6,  -772,  -772,  -234,  -772,  -772,   722,  -772,  -772,
     -22,    46,   -11,    65,  -336,   113,    15,  -772,   -86,  -203,
    -772,   -39,  -297,  -772,   -29,  -772,  -772,  -772,  -772,  -772,
    -772,  -772,  -772,  -772,  -772,  -772,  -772,  -772,  -772,  -772,
    -772,     4,  -772,  -772,  -772,  -772,  -772,  -772,  -772,  -772,
    -772,  -772,  -772,  -209,  -329,  -549,   -98,  -627,  -772,  -712,
    -654,   223,  -772,  -517,  -772,  -606,  -772,   -38,  -772,  -772,
    -772,  -772,  -772,  -772,  -772,  -772,   787,  -772,  -772,  -772,
     -67,  -541,  -772,  -772,   -80,  -772,  -772,  -772,  -772,  -772,
    -772,   788,  -772,  -772,  -772,  -772,  -772,  -772,  -772,  -772,
     606,  -210,  -772,  -772,  -772,    25,  -772,    31,  -772,  1012,
     792,  1248,  1079,  -772,  -772,   -13,  -262,  -709,  -382,  -612,
     141,  -601,  -771,    24,   234,  -772,  -498,  -772,  -232,   662,
    -772,  -772,  -772,   -36,  -298,  1906,  -291,  -772,  -772,   -23,
     -24,    97,  -587,  -236,   -30,    10,    -2
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -577
static const yytype_int16 yytable[] =
{
     112,   208,   208,   554,   231,   208,    82,   235,    82,   234,
     468,   288,   227,   519,   255,   566,   408,   256,   260,   706,
     443,   215,   215,   233,   445,   215,   267,   113,   707,   745,
     581,   344,   258,   196,   347,   350,   276,   294,   228,   197,
     478,   266,   251,   764,   309,   847,   727,   552,   267,   560,
     851,   257,   261,   752,   196,    82,   215,   769,   294,   268,
     197,   267,   267,   267,   -91,   348,   780,   616,   215,   485,
    -100,   808,   378,   491,   -93,   813,    69,   295,    69,   650,
     637,   268,   737,   738,   563,  -102,   652,  -334,   215,   215,
     597,   598,   215,   215,   354,   364,   364,   432,   -97,   920,
     389,   844,  -493,   406,   550,   381,   558,   439,   479,   619,
     430,   552,   582,   560,   440,  -486,   807,   493,   640,   570,
     338,     3,   402,   563,   -97,  -104,   390,   383,   825,  -485,
     212,   221,  -103,   -70,   222,   383,   -99,  -100,   630,   830,
    -101,   679,  -334,  -334,   619,  -487,   -98,   558,   558,   -91,
    -488,   480,   481,   482,   301,   302,   230,   766,   512,   -93,
     770,   382,   494,  -104,   630,   653,   -84,   237,   550,  -103,
     558,  -486,   703,   866,   784,   339,   340,   403,   404,   829,
     393,   920,   -91,   395,   396,  -485,   -91,   834,   -92,   -91,
    -554,   906,   -93,   847,   550,   558,   -93,   -99,  -101,   -93,
     851,  -487,   282,   -94,   651,  -555,  -488,   208,    82,   208,
     208,   244,   401,   423,   -98,   817,   -89,   401,   294,   550,
     291,   558,   292,   840,   415,   434,   583,   215,   227,   215,
     215,   389,   450,   215,   478,   215,   267,   251,   446,   715,
     384,    82,   499,   500,   501,   502,   226,   764,   384,    82,
      82,   726,   508,   942,   769,   725,   764,   516,   435,   291,
     291,   292,   292,   650,   756,   933,   510,   230,  -416,   268,
    -554,   510,   -99,  -100,   -99,  -100,  -101,   895,  -101,   267,
     667,   -96,   -98,   509,   -98,   630,   579,   -95,   518,   972,
     580,   567,   568,   291,   514,   292,  -551,   630,   251,    82,
     215,   215,   215,   215,    82,   215,   215,   284,   789,   215,
     966,    82,   268,   612,   215,   -91,   -93,   294,   498,   431,
     294,   612,  -490,   208,   569,   303,   417,   572,  -416,   559,
    -552,   305,   -90,   585,   601,   603,   409,   415,   412,   306,
     550,   442,   558,   215,   671,    82,  -558,   436,   440,   215,
     215,   934,   550,   939,   558,   229,  -480,   911,   428,   478,
     230,   479,   709,   613,   215,   807,  -288,   746,   710,    69,
     918,   453,   921,   650,   503,   650,   609,   611,  -490,   818,
    -492,  -416,   672,  -416,  -416,   258,  -281,   208,   310,   -99,
    -483,   215,   215,   559,  -489,   995,   291,   971,   292,   750,
     804,   415,    58,   635,   480,   481,  -558,   215,   392,  -551,
     743,  -480,  -480,   403,   429,  -551,   624,   611,   559,   450,
     258,  -288,  -288,   267,   112,  -555,   454,   455,   387,   644,
      82,   457,   458,   459,   460,  -492,  -492,   229,   208,    82,
     785,  -281,  -281,  -552,   559,  -483,  -483,   196,   666,  -552,
    -489,  -491,   415,   197,   977,   397,   268,   394,   215,  -558,
     574,  -558,  -558,   650,   908,  -554,   586,   833,  -480,   747,
     657,  -289,   657,   644,   657,   457,   458,   459,   460,  -483,
     450,   795,   399,   592,   267,   676,   841,   951,   802,   961,
     405,  -101,  -493,   894,   286,   287,   398,   478,   816,   407,
      69,   311,   424,   824,   675,   426,   620,  -491,   -98,   633,
     622,   682,   223,   623,   -97,   575,   576,   268,   831,   755,
     226,   587,   588,   650,  -480,   650,  -289,  -289,   388,   632,
     687,   708,   301,   302,   634,  -483,   311,   705,   705,   593,
     -69,   685,   587,   588,   962,   963,   433,   -89,   518,   691,
    -104,   928,   720,   335,   336,   337,   438,   930,   694,   208,
     699,   650,   430,   907,   444,   559,   447,   686,    82,   452,
      82,   208,   488,   415,   495,   693,   492,   559,   689,   215,
     419,   448,   449,   -96,  -103,   415,   691,   691,   742,   420,
     421,   215,   687,    82,   215,   694,   694,   675,   675,   496,
     -99,   741,   887,   751,   888,   690,   515,   267,   570,   678,
     479,   401,   734,   736,   487,   573,   687,   -95,   685,   691,
     898,   753,   577,   797,   497,   900,   982,  -101,   694,   215,
     792,   605,   196,   -91,   810,   807,   798,   800,   197,   456,
     268,   457,   458,   459,   460,   -98,   621,   450,   628,   761,
     -84,   267,   643,   480,   481,   788,    82,    82,   510,   636,
     -93,   479,   733,   735,   826,   280,   281,   828,    82,   478,
     761,   655,   630,   660,   658,   803,   461,    82,   -90,   663,
     931,   932,   462,   463,   268,   695,   661,   215,   668,   827,
    -266,   687,   479,   215,   215,   806,   809,   677,   809,   680,
     809,   835,   687,   464,   480,   481,   484,   465,   697,   701,
     778,   836,   457,   458,   459,   460,   710,   550,   749,   757,
     759,   791,   215,  -267,   807,   215,    82,   550,   247,   558,
     970,   466,   819,   796,    82,   480,   481,   486,   675,   210,
     210,    82,    82,   210,   877,   479,   758,   461,   773,   774,
     853,   775,   865,   462,   463,   845,   886,    46,    47,   854,
     987,   855,   988,   657,   657,   875,   657,   857,   657,   657,
     240,   243,   859,   864,   464,   210,   210,   761,   465,   657,
     255,   657,   657,   256,   861,   867,   289,   290,   480,   481,
     489,   868,   870,   872,   874,   891,   705,  -268,   897,   768,
     879,   215,   771,   881,   883,   759,   885,   902,   903,   905,
     909,    82,  -269,   781,   215,   916,   943,   257,    82,    82,
     936,   941,    82,   946,   950,   832,   311,   952,   954,   456,
     957,   457,   458,   459,   460,   848,   267,   457,   458,   459,
     460,   324,   325,   960,    82,   842,   627,  -554,  -555,   991,
     267,   843,   296,   297,   298,   299,   300,   852,   456,   352,
     457,   458,   459,   460,   367,   893,   461,   986,   754,   915,
     967,   944,   462,   463,   331,   332,   333,   334,   335,   336,
     337,   247,   385,   925,   985,   379,   386,    82,   940,   765,
     809,     0,   917,   464,     0,   461,     0,   465,    82,     0,
      82,   462,   463,     0,     0,     0,     0,     0,   657,   657,
     657,   657,     0,     0,   427,   657,   657,   657,     0,   657,
     657,   729,   464,   247,   210,     0,   465,   210,   210,   289,
     899,     0,    82,     0,    82,   809,   778,     0,   457,   458,
     459,   460,    82,     0,    82,   210,   208,   210,   210,     0,
       0,     0,   559,     0,     0,     0,   311,     0,   687,     0,
     415,     0,   699,   809,     0,     0,   215,     0,     0,     0,
       0,   657,     0,   461,   657,   657,   657,   657,     0,   462,
     463,     0,     0,     0,   247,     0,     0,     0,   253,     0,
       0,     0,     0,     0,   657,     0,   910,     0,   912,     0,
     464,     0,   913,     0,   465,   332,   333,   334,   335,   336,
     337,   919,     0,   922,   107,     0,   107,     0,     0,     0,
     342,   342,     0,     0,   342,   342,     0,   210,     0,     0,
       0,     0,   517,   520,   521,   522,   523,   524,   525,   526,
     527,   528,   529,   530,   531,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   541,   542,   543,   544,   545,   546,
       0,   210,     0,   107,     0,     0,     0,   269,     0,     0,
       0,   644,     0,   457,   458,   459,   460,     0,     0,     0,
       0,   110,     0,   110,     0,     0,     0,   973,     0,   269,
       0,     0,     0,   976,     0,   978,     0,     0,   979,     0,
       0,     0,   356,   365,   365,   365,     0,     0,   461,   602,
     604,    79,     0,    79,     0,   463,     0,     0,     0,   608,
     210,   210,     0,     0,     0,   210,     0,   602,   604,   210,
     110,     0,   996,     0,   270,   464,   659,     0,   662,   311,
     312,   313,   314,   315,   316,   317,   318,   626,   320,   321,
       0,     0,   631,     0,   324,   325,   270,   311,     0,     0,
      79,   210,     0,     0,   210,   416,     0,   418,     0,   357,
     366,   366,   324,   325,     0,     0,   210,   644,     0,   457,
     458,   459,   460,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,     0,     0,     0,     0,     0,   353,
       0,     0,     0,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   311,     0,   645,     0,   107,   669,   670,   644,
     646,   457,   458,   459,   460,     0,     0,   324,   325,   210,
       0,     0,   342,   342,   342,   342,     0,   504,   505,     0,
       0,   700,   644,   702,   457,   458,   459,   460,     0,   107,
     109,     0,   109,     0,     0,     0,   645,   107,   107,     0,
       0,   332,   333,   334,   335,   336,   337,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   269,     0,   645,
       0,   342,   342,   110,     0,   846,     0,     0,     0,     0,
       0,     0,   210,     0,     0,     0,   578,   210,     0,   109,
       0,     0,     0,     0,     0,     0,     0,   107,     0,   210,
       0,     0,   107,    79,     0,     0,   110,     0,     0,   107,
     269,     0,     0,     0,   110,   110,     0,     0,     0,   762,
     763,     0,   210,     0,     0,     0,     0,     0,     0,     0,
       0,   772,     0,     0,   270,     0,    79,     0,     0,     0,
     786,     0,     0,   107,    79,    79,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   210,     0,     0,     0,     0,
       0,     0,     0,     0,   110,     0,     0,     0,     0,   110,
       0,     0,     0,     0,     0,     0,   110,   270,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   210,
       0,     0,     0,   790,    79,   793,   794,     0,     0,    79,
       0,   799,   801,     0,   837,   838,    79,     0,     0,   210,
     110,     0,     0,     0,     0,     0,     0,   856,   858,     0,
     860,     0,   862,   863,     0,     0,     0,     0,   107,     0,
       0,     0,     0,   869,     0,   871,   873,   107,     0,     0,
      79,     0,   109,     0,     0,     0,     0,     0,     0,     0,
       0,   839,     0,     0,   269,     0,   793,     0,   799,   801,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   882,   109,     0,     0,     0,     0,
       0,   889,   890,   109,   109,   892,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   110,     0,     0,     0,   210,
       0,     0,     0,   876,   110,     0,     0,   904,     0,   878,
       0,     0,     0,     0,     0,   269,   728,     0,     0,     0,
       0,   270,     0,     0,     0,    79,     0,     0,     0,   210,
       0,   210,     0,   109,    79,     0,     0,     0,   109,     0,
       0,     0,     0,     0,     0,   109,     0,     0,     0,     0,
     929,   748,     0,   878,     0,     0,     0,     0,     0,     0,
       0,   937,   945,   947,   948,   949,   107,     0,   107,   953,
     955,   956,     0,   958,   959,     0,     0,     0,     0,   109,
       0,     0,   270,     0,     0,     0,     0,     0,     0,     0,
       0,   107,     0,     0,     0,   964,     0,   965,     0,     0,
       0,     0,     0,     0,     0,   969,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   989,     0,     0,   990,   992,
     993,   994,     0,   110,     0,   110,     0,     0,   269,     0,
       0,     0,     0,     0,   342,     0,     0,   342,   997,     0,
       0,     0,     0,     0,   107,   107,     0,     0,   110,     0,
       0,     0,     0,    79,   109,    79,   107,     0,     0,     0,
       0,     0,     0,   109,   210,   107,     0,     0,     0,     0,
       0,     0,   269,     0,     0,     0,     0,     0,    79,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   270,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   110,   110,     0,   107,     0,     0,     0,     0,     0,
       0,     0,   107,   110,   777,     0,   342,     0,     0,   107,
     107,     0,   110,     0,     0,     0,     0,     0,     0,   270,
       0,    79,    79,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    79,     0,     0,     0,     0,     0,     0,
       0,     0,    79,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   110,     0,     0,     0,     0,     0,     0,     0,   110,
       0,     0,   109,     0,   109,     0,   110,   110,     0,   107,
       0,     0,     0,     0,     0,     0,   107,   107,     0,     0,
     107,    79,     0,     0,     0,     0,     0,   109,     0,    79,
       0,     0,     0,     0,     0,     0,    79,    79,     0,     0,
       0,     0,   107,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   365,     0,     0,
       0,     0,     0,     0,     0,     0,   110,     0,     0,     0,
       0,   926,     0,   110,   110,   107,     0,   110,     0,     0,
     109,   109,     0,     0,     0,     0,   107,     0,   107,     0,
       0,     0,   109,     0,     0,     0,    79,     0,     0,   110,
       0,   109,     0,    79,    79,     0,     0,    79,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     107,     0,   107,     0,   366,     0,     0,     0,     0,    79,
     107,     0,   107,     0,   242,   242,     0,     0,   927,   242,
     242,   242,   110,     0,     0,     0,     0,     0,     0,     0,
     109,   242,     0,   110,     0,   110,     0,     0,   109,     0,
       0,     0,     0,   242,     0,   109,   109,     0,   924,     0,
       0,     0,    79,     0,     0,     0,   242,   242,   242,     0,
       0,     0,     0,    79,     0,    79,     0,   110,     0,   110,
       0,     0,     0,     0,     0,  -576,     0,   110,     0,   110,
       0,     0,     0,  -576,  -576,  -576,     0,     0,  -576,  -576,
    -576,     0,     0,  -576,     0,     0,     0,    79,     0,    79,
       0,     0,     0,  -576,     0,     0,     0,    79,     0,    79,
     681,     0,     0,  -576,  -576,   109,  -576,  -576,  -576,  -576,
    -576,     0,   109,   109,     0,     0,   109,     0,     0,     0,
       0,     0,     0,     0,     0,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   109,     0,
     324,   325,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -576,     0,     0,     0,     0,     0,   242,     0,
       0,   242,   242,   242,     0,     0,     0,   326,     0,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
       0,   109,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   109,     0,   109,     0,     0,     0,     0,  -244,
       0,     0,     0,     0,     0,     0,  -576,     0,  -576,     0,
       0,   226,     0,  -576,  -576,     0,  -576,     0,     0,     0,
       0,   242,     0,     0,     0,     0,   109,     0,   109,     0,
       0,     0,     0,     0,     0,     0,   109,     0,   109,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   242,     0,     0,   242,   242,   242,
     242,   242,   242,   242,   242,   242,   242,   242,   242,   242,
     242,   242,   242,   242,   242,   242,   242,   242,   242,   242,
     242,   242,   242,   242,     0,     0,     0,     0,  -288,     0,
       0,     0,     0,     0,     0,     0,  -288,  -288,  -288,     0,
       0,  -288,  -288,  -288,     0,     0,  -288,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -288,  -288,  -288,     0,
       0,     0,     0,     0,     0,     0,  -288,  -288,     0,  -288,
    -288,  -288,  -288,  -288,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   242,   242,   242,     0,     0,     0,     0,
       0,   242,   242,   242,     0,     0,     0,     0,  -288,  -288,
    -288,  -288,  -288,  -288,  -288,  -288,  -288,  -288,  -288,  -288,
    -288,   242,     0,  -288,  -288,  -288,   242,   684,  -288,     0,
       0,     0,     0,     0,  -288,   242,     0,     0,   242,     0,
       0,     0,     0,     0,     0,     0,     0,  -288,   242,  -102,
    -288,  -288,  -288,  -288,  -288,  -288,  -288,  -288,  -288,  -288,
    -288,  -288,  -288,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -288,
    -288,  -288,  -288,     0,     0,  -288,  -288,  -288,     0,  -288,
       0,   242,   242,     0,  -576,     4,     0,     5,     6,     7,
       8,     9,     0,   242,     0,    10,    11,     0,     0,   242,
      12,    13,     0,    14,    15,    16,    17,    18,    19,    20,
       0,     0,     0,     0,     0,    21,    22,    23,    24,    25,
      26,    27,     0,     0,    28,     0,     0,     0,     0,     0,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,     0,    43,    44,     0,    45,    46,
      47,     0,    48,    49,     0,     0,   242,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    50,     0,     0,    51,    52,     0,    53,    54,
       0,    55,     0,    56,    57,    58,    59,    60,    61,    62,
       0,     0,     0,     0,     0,     0,   242,   311,  -577,  -577,
    -577,  -577,   316,   317,     0,     0,  -577,  -577,     0,    63,
      64,    65,   324,   325,     0,     0,     0,     0,     0,     0,
       0,     0,   242,     0,     0,     0,     0,     0,     0,   242,
       0,     0,     0,  -576,     0,  -576,     0,     0,     0,     0,
       0,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   242,     0,     0,   242,   242,     0,     0,
     242,  -415,     0,     0,     0,     0,     0,     0,     0,  -415,
    -415,  -415,     0,   242,  -415,  -415,  -415,     0,     0,  -415,
       0,     0,     0,     0,     0,     0,     0,     0,  -415,  -415,
    -415,     0,     0,     0,     0,     0,     0,     0,     0,  -415,
    -415,     0,  -415,  -415,  -415,  -415,  -415,     0,     0,     0,
       0,     0,     0,     0,     0,   242,     0,     0,     0,     0,
     242,     0,   242,   242,     0,     0,     0,     0,     0,     0,
       0,  -415,  -415,  -415,  -415,  -415,  -415,  -415,  -415,  -415,
    -415,  -415,  -415,  -415,     0,     0,  -415,  -415,  -415,     0,
       0,  -415,     0,     0,     0,     0,     0,  -415,     0,     0,
       0,     0,     0,   242,     0,     0,     0,   242,     0,     0,
       0,     0,     0,  -415,     0,  -415,  -415,  -415,  -415,  -415,
    -415,  -415,  -415,  -415,  -415,  -415,     0,     0,     0,     0,
       0,     0,     0,   242,     0,   242,     0,     0,     0,     0,
       0,  -415,  -415,  -415,  -415,  -415,  -282,   226,  -415,  -415,
    -415,     0,  -415,     0,  -282,  -282,  -282,   242,     0,  -282,
    -282,  -282,     0,     0,  -282,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -282,  -282,  -282,     0,     0,     0,
       0,   242,     0,     0,  -282,  -282,     0,  -282,  -282,  -282,
    -282,  -282,     0,     0,     0,   242,     0,     0,     0,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,     0,     0,   324,   325,  -282,  -282,  -282,  -282,
    -282,  -282,  -282,  -282,  -282,  -282,  -282,  -282,  -282,     0,
       0,  -282,  -282,  -282,     0,     0,  -282,     0,     0,     0,
       0,   326,  -282,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,     0,  -282,     0,     0,  -282,  -282,
    -282,  -282,  -282,  -282,  -282,  -282,  -282,  -282,  -282,  -282,
    -282,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     230,     0,     0,     0,     0,     0,     0,  -282,  -282,  -282,
    -282,  -576,     0,  -282,  -282,  -282,     0,  -282,     0,  -576,
    -576,  -576,     0,     0,  -576,  -576,  -576,     0,     0,  -576,
       0,     0,     0,     0,     0,     0,     0,     0,  -576,  -576,
    -576,     0,     0,     0,     0,     0,     0,     0,     0,  -576,
    -576,     0,  -576,  -576,  -576,  -576,  -576,     0,     0,     0,
       0,     0,     0,     0,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,     0,     0,   324,
     325,  -576,  -576,  -576,  -576,  -576,  -576,  -576,  -576,  -576,
    -576,  -576,  -576,  -576,     0,     0,  -576,  -576,  -576,     0,
       0,  -576,     0,     0,     0,     0,   326,  -576,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,     0,
       0,     0,     0,  -576,     0,  -576,  -576,  -576,  -576,  -576,
    -576,  -576,  -576,  -576,  -576,  -576,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -576,  -576,  -576,  -576,  -576,  -295,   226,  -576,  -576,
    -576,     0,  -576,     0,  -295,  -295,  -295,     0,     0,  -295,
    -295,  -295,     0,     0,  -295,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -295,  -295,     0,     0,     0,     0,
       0,     0,     0,     0,  -295,  -295,     0,  -295,  -295,  -295,
    -295,  -295,     0,     0,     0,     0,     0,     0,     0,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
    -577,  -577,     0,     0,   324,   325,  -295,  -295,  -295,  -295,
    -295,  -295,  -295,  -295,  -295,  -295,  -295,  -295,  -295,     0,
       0,  -295,  -295,  -295,     0,     0,  -295,     0,     0,     0,
       0,     0,  -295,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,     0,     0,     0,     0,  -295,     0,
    -295,  -295,  -295,  -295,  -295,  -295,  -295,  -295,  -295,  -295,
    -295,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -295,  -295,  -295,
    -295,  -558,   223,  -295,  -295,  -295,     0,  -295,     0,  -558,
    -558,  -558,     0,     0,     0,  -558,  -558,     0,     0,  -558,
       0,     0,     0,     0,     0,     0,     0,     0,  -558,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -558,
    -558,     0,  -558,  -558,  -558,  -558,  -558,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,
    -558,  -558,  -558,  -558,     0,     0,  -558,  -558,  -558,  -288,
     683,     0,     0,     0,     0,     0,     0,  -288,  -288,  -288,
       0,     0,     0,  -288,  -288,     0,     0,  -288,     0,     0,
       0,     0,  -100,  -558,     0,  -558,  -558,  -558,  -558,  -558,
    -558,  -558,  -558,  -558,  -558,  -558,     0,  -288,  -288,     0,
    -288,  -288,  -288,  -288,  -288,     0,     0,     0,     0,     0,
       0,  -558,  -558,  -558,  -558,   -92,     0,     0,     0,  -558,
    -558,     0,  -558,     0,     0,     0,     0,     0,     0,  -288,
    -288,  -288,  -288,  -288,  -288,  -288,  -288,  -288,  -288,  -288,
    -288,  -288,     0,     0,  -288,  -288,  -288,     0,   684,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -102,  -288,     0,  -288,  -288,  -288,  -288,  -288,  -288,  -288,
    -288,  -288,  -288,  -288,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -288,  -288,  -288,   -94,     0,     0,     0,  -288,  -288,   245,
    -288,     5,     6,     7,     8,     9,  -576,  -576,  -576,    10,
      11,     0,     0,  -576,    12,    13,     0,    14,    15,    16,
      17,    18,    19,    20,     0,     0,     0,     0,     0,    21,
      22,    23,    24,    25,    26,    27,     0,     0,    28,     0,
       0,     0,     0,     0,    29,    30,    31,     0,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,     0,    43,
      44,     0,    45,    46,    47,     0,    48,    49,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    50,     0,     0,    51,
      52,     0,    53,    54,     0,    55,     0,    56,    57,    58,
      59,    60,    61,    62,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    63,    64,    65,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -576,   245,  -576,
       5,     6,     7,     8,     9,     0,     0,  -576,    10,    11,
       0,  -576,  -576,    12,    13,     0,    14,    15,    16,    17,
      18,    19,    20,     0,     0,     0,     0,     0,    21,    22,
      23,    24,    25,    26,    27,     0,     0,    28,     0,     0,
       0,     0,     0,    29,    30,    31,     0,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,     0,    43,    44,
       0,    45,    46,    47,     0,    48,    49,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    50,     0,     0,    51,    52,
       0,    53,    54,     0,    55,     0,    56,    57,    58,    59,
      60,    61,    62,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    63,    64,    65,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -576,   245,  -576,     5,
       6,     7,     8,     9,     0,     0,  -576,    10,    11,     0,
       0,  -576,    12,    13,  -576,    14,    15,    16,    17,    18,
      19,    20,     0,     0,     0,     0,     0,    21,    22,    23,
      24,    25,    26,    27,     0,     0,    28,     0,     0,     0,
       0,     0,    29,    30,    31,     0,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,     0,    43,    44,     0,
      45,    46,    47,     0,    48,    49,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    50,     0,     0,    51,    52,     0,
      53,    54,     0,    55,     0,    56,    57,    58,    59,    60,
      61,    62,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    63,    64,    65,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     4,     0,     5,     6,     7,     8,     9,
       0,     0,     0,    10,    11,  -576,     0,  -576,    12,    13,
       0,    14,    15,    16,    17,    18,    19,    20,     0,     0,
       0,     0,     0,    21,    22,    23,    24,    25,    26,    27,
       0,     0,    28,     0,     0,     0,     0,     0,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,     0,    43,    44,     0,    45,    46,    47,     0,
      48,    49,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      50,     0,     0,    51,    52,     0,    53,    54,     0,    55,
       0,    56,    57,    58,    59,    60,    61,    62,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    63,    64,    65,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -576,     0,     0,     0,     0,     0,     0,
       0,  -576,   245,  -576,     5,     6,     7,     8,     9,     0,
       0,  -576,    10,    11,     0,     0,  -576,    12,    13,     0,
      14,    15,    16,    17,    18,    19,    20,     0,     0,     0,
       0,     0,    21,    22,    23,    24,    25,    26,    27,     0,
       0,    28,     0,     0,     0,     0,     0,    29,    30,    31,
       0,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,     0,    43,    44,     0,    45,    46,    47,     0,    48,
      49,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    50,
       0,     0,    51,    52,     0,    53,    54,     0,    55,     0,
      56,    57,    58,    59,    60,    61,    62,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    63,    64,    65,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   245,     0,
       5,     6,     7,     8,     9,     0,  -576,  -576,    10,    11,
    -576,     0,  -576,    12,    13,     0,    14,    15,    16,    17,
      18,    19,    20,     0,     0,     0,     0,     0,    21,    22,
      23,    24,    25,    26,    27,     0,     0,    28,     0,     0,
       0,     0,     0,    29,    30,    31,     0,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,     0,    43,    44,
       0,    45,    46,    47,     0,    48,    49,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    50,     0,     0,    51,    52,
       0,    53,    54,     0,    55,     0,    56,    57,    58,    59,
      60,    61,    62,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    63,    64,    65,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   245,     0,     5,     6,     7,     8,
       9,     0,     0,     0,    10,    11,  -576,     0,  -576,    12,
      13,     0,    14,    15,    16,    17,    18,    19,    20,     0,
       0,     0,     0,     0,    21,    22,    23,    24,    25,    26,
      27,     0,     0,    28,     0,     0,     0,     0,     0,    29,
      30,    31,     0,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,     0,    43,    44,     0,    45,    46,    47,
       0,    48,    49,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    50,     0,     0,   246,    52,     0,    53,    54,     0,
      55,     0,    56,    57,    58,    59,    60,    61,    62,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    63,    64,
      65,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -576,  -576,   245,  -576,     5,     6,     7,     8,     9,
       0,     0,     0,    10,    11,     0,     0,     0,    12,    13,
       0,    14,    15,    16,    17,    18,    19,    20,     0,     0,
       0,     0,     0,    21,    22,    23,    24,    25,    26,    27,
       0,     0,    28,     0,     0,     0,     0,     0,    29,    30,
      31,     0,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,     0,    43,    44,     0,    45,    46,    47,     0,
      48,    49,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      50,     0,     0,    51,    52,     0,    53,    54,     0,    55,
       0,    56,    57,    58,    59,    60,    61,    62,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    63,    64,    65,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -576,  -576,   245,  -576,     5,     6,     7,     8,     9,     0,
       0,     0,    10,    11,     0,     0,     0,    12,    13,     0,
      14,    15,    16,    17,    18,    19,    20,     0,     0,     0,
       0,     0,    21,    22,    23,    24,    25,    26,    27,     0,
       0,    28,     0,     0,     0,     0,     0,    29,    30,    31,
       0,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,     0,    43,    44,     0,    45,    46,    47,     0,    48,
      49,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    50,
       0,     0,    51,    52,     0,    53,    54,     0,    55,     0,
      56,    57,    58,    59,    60,    61,    62,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    63,    64,    65,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -576,     0,     0,     0,     0,     0,     0,     0,
    -576,   245,  -576,     5,     6,     7,     8,     9,     0,     0,
    -576,    10,    11,     0,     0,     0,    12,    13,     0,    14,
      15,    16,    17,    18,    19,    20,     0,     0,     0,     0,
       0,    21,    22,    23,    24,    25,    26,    27,     0,     0,
      28,     0,     0,     0,     0,     0,    29,    30,    31,     0,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
       0,    43,    44,     0,    45,    46,    47,     0,    48,    49,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    50,     0,
       0,    51,    52,     0,    53,    54,     0,    55,     0,    56,
      57,    58,    59,    60,    61,    62,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    63,    64,    65,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     5,
       6,     7,     0,     9,     0,     0,     0,    10,    11,  -576,
       0,  -576,    12,    13,     0,    14,    15,    16,   198,   199,
      19,    20,     0,     0,     0,     0,     0,   200,    22,    23,
      24,    25,    26,    27,     0,     0,   201,     0,     0,     0,
       0,     0,     0,     0,    31,     0,     0,    34,    35,    36,
      37,    38,    39,    40,    41,    42,   202,    43,    44,     0,
      45,    46,    47,     0,    48,    49,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   203,     0,     0,   204,    52,     0,
      53,    54,     0,   205,   206,    56,    57,    58,    59,    60,
      61,    62,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     5,     6,     7,     0,     9,     0,     0,     0,    10,
      11,    63,   207,    65,    12,    13,     0,    14,    15,    16,
      17,    18,    19,    20,     0,     0,     0,     0,     0,    21,
      22,    23,    24,    25,    26,    27,     0,   230,    28,     0,
       0,     0,     0,     0,     0,     0,    31,     0,     0,    34,
      35,    36,    37,    38,    39,    40,    41,    42,     0,    43,
      44,     0,    45,    46,    47,     0,    48,    49,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   203,     0,     0,   204,
      52,     0,    53,    54,     0,     0,     0,    56,    57,    58,
      59,    60,    61,    62,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    63,    64,    65,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     5,     6,     7,
       0,     9,     0,     0,     0,    10,    11,   291,     0,   292,
      12,    13,     0,    14,    15,    16,    17,    18,    19,    20,
       0,     0,     0,     0,     0,    21,    22,    23,    24,    25,
      26,    27,     0,     0,    28,     0,     0,     0,     0,     0,
       0,     0,    31,     0,     0,    34,    35,    36,    37,    38,
      39,    40,    41,    42,     0,    43,    44,     0,    45,    46,
      47,     0,    48,    49,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   203,     0,     0,   204,    52,     0,    53,    54,
       0,     0,     0,    56,    57,    58,    59,    60,    61,    62,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     5,
       6,     7,     8,     9,     0,     0,     0,    10,    11,    63,
      64,    65,    12,    13,     0,    14,    15,    16,    17,    18,
      19,    20,     0,     0,     0,     0,     0,    21,    22,    23,
      24,    25,    26,    27,     0,   230,    28,     0,     0,     0,
       0,     0,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,     0,    43,    44,     0,
      45,    46,    47,     0,    48,    49,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    50,     0,     0,    51,    52,     0,
      53,    54,     0,    55,     0,    56,    57,    58,    59,    60,
      61,    62,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    63,    64,    65,     0,     0,     0,     0,     0,     0,
       5,     6,     7,     8,     9,     0,     0,     0,    10,    11,
       0,     0,     0,    12,    13,   497,    14,    15,    16,    17,
      18,    19,    20,     0,     0,     0,     0,     0,    21,    22,
      23,    24,    25,    26,    27,     0,     0,    28,     0,     0,
       0,     0,     0,    29,    30,    31,     0,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,     0,    43,    44,
       0,    45,    46,    47,     0,    48,    49,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    50,     0,     0,    51,    52,
       0,    53,    54,     0,    55,     0,    56,    57,    58,    59,
      60,    61,    62,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    63,    64,    65,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   497,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,     0,     0,     0,   139,   140,   141,   368,   369,
     370,   371,   146,   147,   148,     0,     0,     0,     0,     0,
     149,   150,   151,   152,   153,   372,   373,   374,   375,   158,
      39,    40,   376,    42,     0,     0,     0,     0,     0,     0,
       0,     0,   160,   161,   162,   163,   164,   165,   166,   167,
     168,     0,     0,   169,   170,     0,     0,   171,   172,   173,
     174,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   175,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,     0,
     187,   188,     0,     0,     0,     0,     0,     0,  -551,  -551,
    -551,     0,  -551,     0,     0,     0,  -551,  -551,     0,   189,
     377,  -551,  -551,     0,  -551,  -551,  -551,  -551,  -551,  -551,
    -551,     0,  -551,     0,     0,     0,  -551,  -551,  -551,  -551,
    -551,  -551,  -551,     0,     0,  -551,     0,     0,     0,     0,
       0,     0,     0,  -551,     0,     0,  -551,  -551,  -551,  -551,
    -551,  -551,  -551,  -551,  -551,  -551,  -551,  -551,     0,  -551,
    -551,  -551,     0,  -551,  -551,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -551,     0,     0,  -551,  -551,     0,  -551,
    -551,     0,  -551,  -551,  -551,  -551,  -551,  -551,  -551,  -551,
    -551,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -551,  -551,  -551,     0,     0,     0,     0,     0,     0,  -552,
    -552,  -552,     0,  -552,     0,  -551,     0,  -552,  -552,     0,
       0,  -551,  -552,  -552,     0,  -552,  -552,  -552,  -552,  -552,
    -552,  -552,     0,  -552,     0,     0,     0,  -552,  -552,  -552,
    -552,  -552,  -552,  -552,     0,     0,  -552,     0,     0,     0,
       0,     0,     0,     0,  -552,     0,     0,  -552,  -552,  -552,
    -552,  -552,  -552,  -552,  -552,  -552,  -552,  -552,  -552,     0,
    -552,  -552,  -552,     0,  -552,  -552,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -552,     0,     0,  -552,  -552,     0,
    -552,  -552,     0,  -552,  -552,  -552,  -552,  -552,  -552,  -552,
    -552,  -552,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -552,  -552,  -552,     0,     0,     0,     0,     0,     0,
    -554,  -554,  -554,     0,  -554,     0,  -552,     0,  -554,  -554,
       0,     0,  -552,  -554,  -554,     0,  -554,  -554,  -554,  -554,
    -554,  -554,  -554,     0,     0,     0,     0,     0,  -554,  -554,
    -554,  -554,  -554,  -554,  -554,     0,     0,  -554,     0,     0,
       0,     0,     0,     0,     0,  -554,     0,     0,  -554,  -554,
    -554,  -554,  -554,  -554,  -554,  -554,  -554,  -554,  -554,  -554,
       0,  -554,  -554,  -554,     0,  -554,  -554,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -554,   744,     0,  -554,  -554,
       0,  -554,  -554,     0,  -554,  -554,  -554,  -554,  -554,  -554,
    -554,  -554,  -554,     0,     0,     0,     0,     0,  -100,     0,
       0,     0,     0,     0,     0,     0,     0,  -556,  -556,  -556,
       0,  -556,  -554,  -554,  -554,  -556,  -556,     0,     0,     0,
    -556,  -556,     0,  -556,  -556,  -556,  -556,  -556,  -556,  -556,
       0,     0,     0,  -554,     0,  -556,  -556,  -556,  -556,  -556,
    -556,  -556,     0,     0,  -556,     0,     0,     0,     0,     0,
       0,     0,  -556,     0,     0,  -556,  -556,  -556,  -556,  -556,
    -556,  -556,  -556,  -556,  -556,  -556,  -556,     0,  -556,  -556,
    -556,     0,  -556,  -556,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -556,     0,     0,  -556,  -556,     0,  -556,  -556,
       0,  -556,  -556,  -556,  -556,  -556,  -556,  -556,  -556,  -556,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -557,  -557,  -557,     0,  -557,  -556,
    -556,  -556,  -557,  -557,     0,     0,     0,  -557,  -557,     0,
    -557,  -557,  -557,  -557,  -557,  -557,  -557,     0,     0,     0,
    -556,     0,  -557,  -557,  -557,  -557,  -557,  -557,  -557,     0,
       0,  -557,     0,     0,     0,     0,     0,     0,     0,  -557,
       0,     0,  -557,  -557,  -557,  -557,  -557,  -557,  -557,  -557,
    -557,  -557,  -557,  -557,     0,  -557,  -557,  -557,     0,  -557,
    -557,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -557,
       0,     0,  -557,  -557,     0,  -557,  -557,     0,  -557,  -557,
    -557,  -557,  -557,  -557,  -557,  -557,  -557,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -557,  -557,  -557,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -557,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,     0,     0,     0,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,     0,     0,     0,     0,
       0,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   273,   274,   159,   275,     0,     0,     0,     0,     0,
       0,     0,     0,   160,   161,   162,   163,   164,   165,   166,
     167,   168,     0,     0,   169,   170,     0,     0,   171,   172,
     173,   174,     0,     0,   311,   312,   313,   314,   315,   316,
     317,     0,   175,   320,   321,     0,     0,     0,     0,   324,
     325,     0,     0,     0,     0,     0,     0,     0,     0,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
       0,   187,   188,     0,     0,     0,     0,     0,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,     0,
     189,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,     0,     0,     0,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,     0,
       0,     0,     0,     0,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   232,     0,   159,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   160,   161,   162,   163,
     164,   165,   166,   167,   168,     0,     0,   169,   170,     0,
       0,   171,   172,   173,   174,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   175,     0,     0,    57,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,     0,   187,   188,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   189,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,     0,
       0,     0,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,     0,     0,     0,     0,     0,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,     0,     0,   159,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   160,
     161,   162,   163,   164,   165,   166,   167,   168,     0,     0,
     169,   170,     0,     0,   171,   172,   173,   174,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   175,     0,
       0,    57,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,     0,   187,   188,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   189,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,     0,     0,     0,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,     0,     0,     0,     0,     0,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
       0,     0,   159,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   160,   161,   162,   163,   164,   165,   166,   167,
     168,     0,     0,   169,   170,     0,     0,   171,   172,   173,
     174,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   175,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,     0,
     187,   188,     0,     0,     5,     6,     7,     0,     9,     0,
       0,     0,    10,    11,     0,     0,     0,    12,    13,   189,
      14,    15,    16,   198,   199,    19,    20,     0,     0,     0,
       0,     0,   200,   238,   239,    24,    25,    26,    27,     0,
       0,   201,     0,     0,     0,     0,     0,     0,     0,   262,
       0,     0,    34,    35,    36,    37,    38,    39,    40,    41,
      42,     0,    43,    44,     0,    45,    46,    47,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   263,
       0,     0,   204,    52,     0,    53,    54,     0,     0,     0,
      56,    57,    58,    59,    60,    61,    62,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     5,
       6,     7,     0,     9,     0,     0,   264,    10,    11,     0,
       0,     0,    12,    13,     0,    14,    15,    16,   198,   199,
      19,    20,     0,     0,     0,   265,     0,   200,   238,   239,
      24,    25,    26,    27,     0,     0,   201,     0,     0,     0,
       0,     0,     0,     0,   262,     0,     0,    34,    35,    36,
      37,    38,    39,    40,    41,    42,     0,    43,    44,     0,
      45,    46,    47,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   263,     0,     0,   204,    52,     0,
      53,    54,     0,     0,     0,    56,    57,    58,    59,    60,
      61,    62,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     5,     6,     7,     8,     9,     0,
       0,   264,    10,    11,     0,     0,     0,    12,    13,     0,
      14,    15,    16,    17,    18,    19,    20,     0,     0,     0,
     513,     0,    21,    22,    23,    24,    25,    26,    27,     0,
       0,    28,     0,     0,     0,     0,     0,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,     0,    43,    44,     0,    45,    46,    47,     0,    48,
      49,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    50,
       0,     0,    51,    52,     0,    53,    54,     0,    55,     0,
      56,    57,    58,    59,    60,    61,    62,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     5,     6,     7,     8,
       9,     0,     0,     0,    10,    11,    63,    64,    65,    12,
      13,     0,    14,    15,    16,    17,    18,    19,    20,     0,
       0,     0,     0,     0,    21,    22,    23,    24,    25,    26,
      27,     0,     0,    28,     0,     0,     0,     0,     0,    29,
      30,    31,     0,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,     0,    43,    44,     0,    45,    46,    47,
       0,    48,    49,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    50,     0,     0,    51,    52,     0,    53,    54,     0,
      55,     0,    56,    57,    58,    59,    60,    61,    62,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     5,     6,
       7,     0,     9,     0,     0,     0,    10,    11,    63,    64,
      65,    12,    13,     0,    14,    15,    16,   198,   199,    19,
      20,     0,     0,     0,     0,     0,   200,    22,    23,    24,
      25,    26,    27,     0,     0,   201,     0,     0,     0,     0,
       0,     0,     0,    31,     0,     0,    34,    35,    36,    37,
      38,    39,    40,    41,    42,   202,    43,    44,     0,    45,
      46,    47,     0,    48,    49,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   203,     0,     0,   204,    52,     0,    53,
      54,     0,   205,   206,    56,    57,    58,    59,    60,    61,
      62,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       5,     6,     7,     0,     9,     0,     0,     0,    10,    11,
      63,   207,    65,    12,    13,     0,    14,    15,    16,   198,
     199,    19,    20,     0,     0,     0,     0,     0,   200,   238,
     239,    24,    25,    26,    27,     0,     0,   201,     0,     0,
       0,     0,     0,     0,     0,    31,     0,     0,    34,    35,
      36,    37,    38,    39,    40,    41,    42,   202,    43,    44,
       0,    45,    46,    47,     0,    48,    49,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   203,     0,     0,   204,    52,
       0,    53,    54,     0,   610,   206,    56,    57,    58,    59,
      60,    61,    62,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     5,     6,     7,     0,     9,     0,     0,     0,
      10,    11,    63,   207,    65,    12,    13,     0,    14,    15,
      16,   198,   199,    19,    20,     0,     0,     0,     0,     0,
     200,   238,   239,    24,    25,    26,    27,     0,     0,   201,
       0,     0,     0,     0,     0,     0,     0,    31,     0,     0,
      34,    35,    36,    37,    38,    39,    40,    41,    42,   202,
      43,    44,     0,    45,    46,    47,     0,    48,    49,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   203,     0,     0,
     204,    52,     0,    53,    54,     0,   205,     0,    56,    57,
      58,    59,    60,    61,    62,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     5,     6,     7,     0,     9,     0,
       0,     0,    10,    11,    63,   207,    65,    12,    13,     0,
      14,    15,    16,   198,   199,    19,    20,     0,     0,     0,
       0,     0,   200,   238,   239,    24,    25,    26,    27,     0,
       0,   201,     0,     0,     0,     0,     0,     0,     0,    31,
       0,     0,    34,    35,    36,    37,    38,    39,    40,    41,
      42,   202,    43,    44,     0,    45,    46,    47,     0,    48,
      49,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   203,
       0,     0,   204,    52,     0,    53,    54,     0,     0,   206,
      56,    57,    58,    59,    60,    61,    62,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     5,     6,     7,     0,
       9,     0,     0,     0,    10,    11,    63,   207,    65,    12,
      13,     0,    14,    15,    16,   198,   199,    19,    20,     0,
       0,     0,     0,     0,   200,   238,   239,    24,    25,    26,
      27,     0,     0,   201,     0,     0,     0,     0,     0,     0,
       0,    31,     0,     0,    34,    35,    36,    37,    38,    39,
      40,    41,    42,   202,    43,    44,     0,    45,    46,    47,
       0,    48,    49,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   203,     0,     0,   204,    52,     0,    53,    54,     0,
     610,     0,    56,    57,    58,    59,    60,    61,    62,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     5,     6,
       7,     0,     9,     0,     0,     0,    10,    11,    63,   207,
      65,    12,    13,     0,    14,    15,    16,   198,   199,    19,
      20,     0,     0,     0,     0,     0,   200,   238,   239,    24,
      25,    26,    27,     0,     0,   201,     0,     0,     0,     0,
       0,     0,     0,    31,     0,     0,    34,    35,    36,    37,
      38,    39,    40,    41,    42,   202,    43,    44,     0,    45,
      46,    47,     0,    48,    49,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   203,     0,     0,   204,    52,     0,    53,
      54,     0,     0,     0,    56,    57,    58,    59,    60,    61,
      62,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       5,     6,     7,     0,     9,     0,     0,     0,    10,    11,
      63,   207,    65,    12,    13,     0,    14,    15,    16,    17,
      18,    19,    20,     0,     0,     0,     0,     0,    21,    22,
      23,    24,    25,    26,    27,     0,     0,   201,     0,     0,
       0,     0,     0,     0,     0,    31,     0,     0,    34,    35,
      36,    37,    38,    39,    40,    41,    42,     0,    43,    44,
       0,    45,    46,    47,     0,    48,    49,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   203,     0,     0,   204,    52,
       0,    53,    54,     0,   507,     0,    56,    57,    58,    59,
      60,    61,    62,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     5,     6,     7,     0,     9,     0,     0,     0,
      10,    11,    63,   207,    65,    12,    13,     0,    14,    15,
      16,   198,   199,    19,    20,     0,     0,     0,     0,     0,
     200,   238,   239,    24,    25,    26,    27,     0,     0,   201,
       0,     0,     0,     0,     0,     0,     0,    31,     0,     0,
      34,    35,    36,    37,    38,    39,    40,    41,    42,     0,
      43,    44,     0,    45,    46,    47,     0,    48,    49,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   203,     0,     0,
     204,    52,     0,    53,    54,     0,   205,     0,    56,    57,
      58,    59,    60,    61,    62,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     5,     6,     7,     0,     9,     0,
       0,     0,    10,    11,    63,   207,    65,    12,    13,     0,
      14,    15,    16,   198,   199,    19,    20,     0,     0,     0,
       0,     0,   200,   238,   239,    24,    25,    26,    27,     0,
       0,   201,     0,     0,     0,     0,     0,     0,     0,    31,
       0,     0,    34,    35,    36,    37,    38,    39,    40,    41,
      42,     0,    43,    44,     0,    45,    46,    47,     0,    48,
      49,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   203,
       0,     0,   204,    52,     0,    53,    54,     0,   787,     0,
      56,    57,    58,    59,    60,    61,    62,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     5,     6,     7,     0,
       9,     0,     0,     0,    10,    11,    63,   207,    65,    12,
      13,     0,    14,    15,    16,   198,   199,    19,    20,     0,
       0,     0,     0,     0,   200,   238,   239,    24,    25,    26,
      27,     0,     0,   201,     0,     0,     0,     0,     0,     0,
       0,    31,     0,     0,    34,    35,    36,    37,    38,    39,
      40,    41,    42,     0,    43,    44,     0,    45,    46,    47,
       0,    48,    49,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   203,     0,     0,   204,    52,     0,    53,    54,     0,
     507,     0,    56,    57,    58,    59,    60,    61,    62,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     5,     6,
       7,     0,     9,     0,     0,     0,    10,    11,    63,   207,
      65,    12,    13,     0,    14,    15,    16,   198,   199,    19,
      20,     0,     0,     0,     0,     0,   200,   238,   239,    24,
      25,    26,    27,     0,     0,   201,     0,     0,     0,     0,
       0,     0,     0,    31,     0,     0,    34,    35,    36,    37,
      38,    39,    40,    41,    42,     0,    43,    44,     0,    45,
      46,    47,     0,    48,    49,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   203,     0,     0,   204,    52,     0,    53,
      54,     0,   610,     0,    56,    57,    58,    59,    60,    61,
      62,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       5,     6,     7,     0,     9,     0,     0,     0,    10,    11,
      63,   207,    65,    12,    13,     0,    14,    15,    16,   198,
     199,    19,    20,     0,     0,     0,     0,     0,   200,   238,
     239,    24,    25,    26,    27,     0,     0,   201,     0,     0,
       0,     0,     0,     0,     0,    31,     0,     0,    34,    35,
      36,    37,    38,    39,    40,    41,    42,     0,    43,    44,
       0,    45,    46,    47,     0,    48,    49,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   203,     0,     0,   204,    52,
       0,    53,    54,     0,     0,     0,    56,    57,    58,    59,
      60,    61,    62,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     5,     6,     7,     0,     9,     0,     0,     0,
      10,    11,    63,   207,    65,    12,    13,     0,    14,    15,
      16,    17,    18,    19,    20,     0,     0,     0,     0,     0,
      21,    22,    23,    24,    25,    26,    27,     0,     0,    28,
       0,     0,     0,     0,     0,     0,     0,    31,     0,     0,
      34,    35,    36,    37,    38,    39,    40,    41,    42,     0,
      43,    44,     0,    45,    46,    47,     0,    48,    49,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   203,     0,     0,
     204,    52,     0,    53,    54,     0,     0,     0,    56,    57,
      58,    59,    60,    61,    62,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     5,     6,     7,     0,     9,     0,
       0,     0,    10,    11,    63,    64,    65,    12,    13,     0,
      14,    15,    16,    17,    18,    19,    20,     0,     0,     0,
       0,     0,    21,    22,    23,    24,    25,    26,    27,     0,
       0,   201,     0,     0,     0,     0,     0,     0,     0,    31,
       0,     0,    34,    35,    36,    37,    38,    39,    40,    41,
      42,     0,    43,    44,     0,    45,    46,    47,     0,    48,
      49,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   203,
       0,     0,   204,    52,     0,    53,    54,     0,     0,     0,
      56,    57,    58,    59,    60,    61,    62,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     5,     6,     7,     0,
       9,     0,     0,     0,    10,    11,    63,   207,    65,    12,
      13,     0,    14,    15,    16,   198,   199,    19,    20,     0,
       0,     0,     0,     0,   200,   238,   239,    24,    25,    26,
      27,     0,     0,   201,     0,     0,     0,     0,     0,     0,
       0,   262,     0,     0,    34,    35,    36,    37,    38,    39,
      40,    41,    42,     0,    43,    44,     0,    45,    46,    47,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   263,     0,     0,   307,    52,     0,    53,    54,     0,
     308,     0,    56,    57,    58,    59,    60,    61,    62,     0,
       0,     0,     0,     5,     6,     7,     0,     9,     0,     0,
       0,    10,    11,     0,     0,     0,    12,    13,   264,    14,
      15,    16,   198,   199,    19,    20,     0,     0,     0,     0,
       0,   200,   238,   239,    24,    25,    26,    27,     0,     0,
     201,     0,     0,     0,     0,     0,     0,     0,   262,     0,
       0,    34,    35,    36,    37,    38,    39,    40,    41,    42,
       0,    43,    44,     0,    45,    46,    47,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   351,     0,
       0,    51,    52,     0,    53,    54,     0,    55,     0,    56,
      57,    58,    59,    60,    61,    62,     0,     0,     0,     0,
       5,     6,     7,     0,     9,     0,     0,     0,    10,    11,
       0,     0,     0,    12,    13,   264,    14,    15,    16,   198,
     199,    19,    20,     0,     0,     0,     0,     0,   200,   238,
     239,    24,    25,    26,    27,     0,     0,   201,     0,     0,
       0,     0,     0,     0,     0,   262,     0,     0,    34,    35,
      36,   358,    38,    39,    40,   359,    42,     0,    43,    44,
       0,    45,    46,    47,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   360,     0,     0,   361,     0,     0,   204,    52,
       0,    53,    54,     0,     0,     0,    56,    57,    58,    59,
      60,    61,    62,     0,     0,     0,     0,     5,     6,     7,
       0,     9,     0,     0,     0,    10,    11,     0,     0,     0,
      12,    13,   264,    14,    15,    16,   198,   199,    19,    20,
       0,     0,     0,     0,     0,   200,   238,   239,    24,    25,
      26,    27,     0,     0,   201,     0,     0,     0,     0,     0,
       0,     0,   262,     0,     0,    34,    35,    36,   358,    38,
      39,    40,   359,    42,     0,    43,    44,     0,    45,    46,
      47,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   361,     0,     0,   204,    52,     0,    53,    54,
       0,     0,     0,    56,    57,    58,    59,    60,    61,    62,
       0,     0,     0,     0,     5,     6,     7,     0,     9,     0,
       0,     0,    10,    11,     0,     0,     0,    12,    13,   264,
      14,    15,    16,   198,   199,    19,    20,     0,     0,     0,
       0,     0,   200,   238,   239,    24,    25,    26,    27,     0,
       0,   201,     0,     0,     0,     0,     0,     0,     0,   262,
       0,     0,    34,    35,    36,    37,    38,    39,    40,    41,
      42,     0,    43,    44,     0,    45,    46,    47,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   263,
       0,     0,   307,    52,     0,    53,    54,     0,     0,     0,
      56,    57,    58,    59,    60,    61,    62,     0,     0,     0,
       0,     5,     6,     7,     0,     9,     0,     0,     0,    10,
      11,     0,     0,     0,    12,    13,   264,    14,    15,    16,
     198,   199,    19,    20,     0,     0,     0,     0,     0,   200,
     238,   239,    24,    25,    26,    27,     0,     0,   201,     0,
       0,     0,     0,     0,     0,     0,   262,     0,     0,    34,
      35,    36,    37,    38,    39,    40,    41,    42,     0,    43,
      44,     0,    45,    46,    47,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   914,     0,     0,   204,
      52,     0,    53,    54,     0,     0,     0,    56,    57,    58,
      59,    60,    61,    62,     0,     0,     0,     0,     5,     6,
       7,     0,     9,     0,     0,     0,    10,    11,     0,     0,
       0,    12,    13,   264,    14,    15,    16,   198,   199,    19,
      20,     0,     0,     0,     0,     0,   200,   238,   239,    24,
      25,    26,    27,     0,     0,   201,     0,     0,     0,     0,
       0,     0,     0,   262,     0,     0,    34,    35,    36,    37,
      38,    39,    40,    41,    42,     0,    43,    44,     0,    45,
      46,    47,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   923,     0,     0,   204,    52,     0,    53,
      54,     0,     0,     0,    56,    57,    58,    59,    60,    61,
      62,     0,     0,     0,     0,     0,     0,   547,   548,     0,
       0,   549,     0,     0,     0,     0,     0,     0,     0,     0,
     264,   160,   161,   162,   163,   164,   165,   166,   167,   168,
       0,     0,   169,   170,     0,     0,   171,   172,   173,   174,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     175,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,     0,   187,
     188,     0,     0,     0,     0,     0,   555,   556,     0,     0,
     557,     0,     0,     0,     0,     0,     0,     0,   189,   226,
     160,   161,   162,   163,   164,   165,   166,   167,   168,     0,
       0,   169,   170,     0,     0,   171,   172,   173,   174,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   175,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,     0,   187,   188,
       0,     0,     0,     0,     0,   614,   548,     0,     0,   615,
       0,     0,     0,     0,     0,     0,     0,   189,   226,   160,
     161,   162,   163,   164,   165,   166,   167,   168,     0,     0,
     169,   170,     0,     0,   171,   172,   173,   174,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   175,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,     0,   187,   188,     0,
       0,     0,     0,     0,   617,   556,     0,     0,   618,     0,
       0,     0,     0,     0,     0,     0,   189,   226,   160,   161,
     162,   163,   164,   165,   166,   167,   168,     0,     0,   169,
     170,     0,     0,   171,   172,   173,   174,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   175,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,     0,   187,   188,     0,     0,
       0,     0,     0,   638,   548,     0,     0,   639,     0,     0,
       0,     0,     0,     0,     0,   189,   226,   160,   161,   162,
     163,   164,   165,   166,   167,   168,     0,     0,   169,   170,
       0,     0,   171,   172,   173,   174,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   175,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,     0,   187,   188,     0,     0,     0,
       0,     0,   641,   556,     0,     0,   642,     0,     0,     0,
       0,     0,     0,     0,   189,   226,   160,   161,   162,   163,
     164,   165,   166,   167,   168,     0,     0,   169,   170,     0,
       0,   171,   172,   173,   174,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   175,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,     0,   187,   188,     0,     0,     0,     0,
       0,   713,   548,     0,     0,   714,     0,     0,     0,     0,
       0,     0,     0,   189,   226,   160,   161,   162,   163,   164,
     165,   166,   167,   168,     0,     0,   169,   170,     0,     0,
     171,   172,   173,   174,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   175,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,     0,   187,   188,     0,     0,     0,     0,     0,
     716,   556,     0,     0,   717,     0,     0,     0,     0,     0,
       0,     0,   189,   226,   160,   161,   162,   163,   164,   165,
     166,   167,   168,     0,     0,   169,   170,     0,     0,   171,
     172,   173,   174,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   175,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,     0,   187,   188,     0,     0,     0,     0,     0,   723,
     548,     0,     0,   724,     0,     0,     0,     0,     0,     0,
       0,   189,   226,   160,   161,   162,   163,   164,   165,   166,
     167,   168,     0,     0,   169,   170,     0,     0,   171,   172,
     173,   174,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   175,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
       0,   187,   188,     0,     0,     0,     0,     0,   595,   556,
       0,     0,   596,     0,     0,     0,     0,     0,     0,     0,
     189,   226,   160,   161,   162,   163,   164,   165,   166,   167,
     168,     0,     0,   169,   170,     0,     0,   171,   172,   173,
     174,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   175,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,     0,
     187,   188,     0,     0,     0,     0,     0,   974,   548,     0,
       0,   975,     0,     0,     0,     0,     0,     0,     0,   189,
     226,   160,   161,   162,   163,   164,   165,   166,   167,   168,
       0,     0,   169,   170,     0,     0,   171,   172,   173,   174,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     175,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,     0,   187,
     188,     0,     0,     0,     0,     0,   980,   548,     0,     0,
     981,     0,     0,     0,     0,     0,     0,     0,   189,   226,
     160,   161,   162,   163,   164,   165,   166,   167,   168,     0,
       0,   169,   170,     0,     0,   171,   172,   173,   174,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   175,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,     0,   187,   188,
       0,     0,     0,     0,     0,   983,   556,     0,     0,   984,
       0,     0,     0,     0,     0,     0,     0,   189,   226,   160,
     161,   162,   163,   164,   165,   166,   167,   168,     0,     0,
     169,   170,     0,     0,   171,   172,   173,   174,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   175,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,     0,   187,   188,     0,
       0,     0,     0,     0,   595,   556,     0,     0,   596,     0,
       0,     0,     0,     0,     0,     0,   189,   226,   160,   161,
     162,   163,   164,   165,   166,   167,   168,     0,     0,   169,
     170,     0,     0,   171,   172,   173,   174,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   175,     0,     0,
       0,     0,     0,   739,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   681,   187,   188,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,     0,     0,   324,   325,   189,     0,     0,     0,     0,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,     0,     0,   324,   325,     0,     0,     0,
     326,     0,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   326,     0,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337
};

static const yytype_int16 yycheck[] =
{
       2,    17,    18,   339,    28,    21,     2,    31,     4,    30,
     272,    64,    23,   310,    53,   344,   219,    53,    54,   568,
     256,    17,    18,    29,   260,    21,    55,     4,   569,   616,
     361,    85,    54,     8,    88,    89,    57,    67,    23,     8,
     272,    55,    51,   655,    77,   757,   589,   338,    77,   340,
     759,    53,    54,   640,    29,    51,    52,   658,    88,    55,
      29,    90,    91,    92,    26,    88,   672,   403,    64,   279,
      26,   698,    93,   283,    26,   702,     2,    67,     4,   461,
     452,    77,   599,   600,    13,    26,    30,    87,    84,    85,
     381,   382,    88,    89,    90,    91,    92,   246,    26,   870,
     111,   755,    89,    89,   338,    87,   340,   144,    63,   407,
      89,   402,     1,   404,   151,    87,    15,    63,   454,    18,
      87,     0,    87,    13,   111,   111,   111,    27,   715,    87,
      17,    18,   111,   111,    21,    27,    13,    13,   429,   726,
      13,   513,   142,   143,   442,    87,    13,   381,   382,   111,
      87,   106,   107,   108,    38,    39,   151,   655,   307,   111,
     658,   143,   108,    26,   455,   109,   144,   140,   402,    26,
     404,   143,    28,   779,   672,   142,   143,   142,   143,   722,
     202,   952,   144,   205,   206,   143,   148,   730,   144,   151,
     146,   845,   144,   905,   428,   429,   148,    26,    26,   151,
     909,   143,   150,   144,   466,   146,   143,   223,   204,   225,
     226,    58,   214,   234,    26,   144,   144,   219,   248,   453,
     149,   455,   151,   740,   226,   248,   115,   223,   239,   225,
     226,   242,   265,   229,   466,   231,   265,   246,   262,   575,
     140,   237,   296,   297,   298,   299,   146,   859,   140,   245,
     246,   587,   305,   907,   855,   586,   868,   310,   248,   149,
     149,   151,   151,   645,   646,   892,   305,   151,    27,   265,
     146,   310,   149,   149,   151,   151,   149,   826,   151,   308,
     490,   144,   149,   305,   151,   576,    54,   144,   310,   943,
      58,   345,   346,   149,   308,   151,    27,   588,   307,   295,
     296,   297,   298,   299,   300,   301,   302,   150,   680,   305,
     937,   307,   308,   399,   310,   144,   144,   347,   295,   245,
     350,   407,    87,   339,   347,    29,   229,   350,    87,   340,
      27,   111,   144,   363,   387,   388,   223,   339,   225,   144,
     574,   144,   576,   339,    78,   341,    27,   250,   151,   345,
     346,   892,   586,   896,   588,   146,    87,   855,    87,   591,
     151,    63,   571,   399,   360,    15,    87,    89,    18,   295,
     868,    87,   870,   755,   300,   757,   398,   399,   143,   708,
      87,   140,   116,   142,   143,   407,    87,   403,   111,   111,
      87,   387,   388,   404,    87,   982,   149,   940,   151,   635,
     697,   403,   101,   439,   106,   107,    87,   403,   144,   140,
     613,   142,   143,   142,   143,   146,   422,   439,   429,   452,
     442,   142,   143,   452,   426,   146,   142,   143,    89,    54,
     426,    56,    57,    58,    59,   142,   143,   146,   454,   435,
     672,   142,   143,   140,   455,   142,   143,   422,   150,   146,
     143,    87,   454,   422,   952,   111,   452,    58,   454,   140,
      87,   142,   143,   845,   846,   146,    87,   729,    87,    89,
     472,    87,   474,    54,   476,    56,    57,    58,    59,    87,
     513,   686,   144,    87,   513,   507,    89,    87,   693,    87,
      89,   111,    89,   822,    61,    62,    90,   729,   707,   144,
     426,    70,   146,   712,   506,   140,   409,   143,   111,   435,
     413,   535,   146,   416,   111,   142,   143,   513,   727,   144,
     146,   142,   143,   905,   143,   907,   142,   143,    89,   432,
     554,   570,    38,    39,   437,   143,    70,   567,   568,   143,
     111,   552,   142,   143,   142,   143,   148,   144,   570,   560,
     111,   880,   582,   122,   123,   124,   147,   886,   560,   575,
     562,   943,    89,   144,   141,   576,    58,   552,   564,   144,
     566,   587,   108,   575,    70,   560,   108,   588,    89,   575,
      56,    61,    62,   144,   111,   587,   597,   598,   610,    65,
      66,   587,   616,   589,   590,   597,   598,   599,   600,    70,
     111,   607,   811,   636,   813,    89,   144,   636,    18,   512,
      63,   613,   597,   598,    67,    58,   640,   144,   629,   630,
     829,   643,    26,    89,   149,   834,   962,   111,   630,   625,
     683,    96,   607,   144,    14,    15,   689,   690,   607,    54,
     636,    56,    57,    58,    59,   111,   148,   680,   141,   651,
     144,   680,   111,   106,   107,   677,   652,   653,   697,   144,
     144,    63,   597,   598,   718,    59,    60,   721,   664,   901,
     672,   144,   963,    54,   144,   697,    91,   673,   144,    54,
     889,   890,    97,    98,   680,    10,   144,   683,   150,   719,
     144,   715,    63,   689,   690,   697,   698,   144,   700,   144,
     702,   731,   726,   118,   106,   107,   108,   122,     8,    13,
      54,   732,    56,    57,    58,    59,    18,   951,   141,   144,
     149,   113,   718,   144,    15,   721,   722,   961,    51,   963,
     939,   146,    94,   147,   730,   106,   107,   108,   740,    17,
      18,   737,   738,    21,   797,    63,   649,    91,    56,    57,
      10,    59,   111,    97,    98,   144,   810,    65,    66,   141,
     969,   144,   971,   765,   766,   787,   768,   144,   770,   771,
      48,    49,   144,   141,   118,    53,    54,   779,   122,   781,
     819,   783,   784,   819,   144,   116,    64,    65,   106,   107,
     108,   144,   144,   144,    10,   817,   826,   144,   828,   658,
      90,   797,   661,   805,     9,   149,   808,    10,   141,   144,
     144,   807,   144,   672,   810,   116,   144,   819,   814,   815,
     147,   141,   818,   144,    58,   728,    70,   144,   144,    54,
     144,    56,    57,    58,    59,    54,   865,    56,    57,    58,
      59,    85,    86,    58,   840,   748,   426,   146,   146,   144,
     879,   754,    41,    42,    43,    44,    45,   760,    54,    90,
      56,    57,    58,    59,    92,   819,    91,   965,   645,   865,
     937,   909,    97,    98,   118,   119,   120,   121,   122,   123,
     124,   204,    95,   879,   964,    93,    98,   883,   901,   655,
     892,    -1,   868,   118,    -1,    91,    -1,   122,   894,    -1,
     896,    97,    98,    -1,    -1,    -1,    -1,    -1,   910,   911,
     912,   913,    -1,    -1,   237,   917,   918,   919,    -1,   921,
     922,   146,   118,   246,   202,    -1,   122,   205,   206,   207,
     833,    -1,   928,    -1,   930,   937,    54,    -1,    56,    57,
      58,    59,   938,    -1,   940,   223,   962,   225,   226,    -1,
      -1,    -1,   963,    -1,    -1,    -1,    70,    -1,   982,    -1,
     962,    -1,   964,   965,    -1,    -1,   962,    -1,    -1,    -1,
      -1,   973,    -1,    91,   976,   977,   978,   979,    -1,    97,
      98,    -1,    -1,    -1,   307,    -1,    -1,    -1,    52,    -1,
      -1,    -1,    -1,    -1,   996,    -1,   855,    -1,   857,    -1,
     118,    -1,   861,    -1,   122,   119,   120,   121,   122,   123,
     124,   870,    -1,   872,     2,    -1,     4,    -1,    -1,    -1,
      84,    85,    -1,    -1,    88,    89,    -1,   305,    -1,    -1,
      -1,    -1,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
      -1,   339,    -1,    51,    -1,    -1,    -1,    55,    -1,    -1,
      -1,    54,    -1,    56,    57,    58,    59,    -1,    -1,    -1,
      -1,     2,    -1,     4,    -1,    -1,    -1,   946,    -1,    77,
      -1,    -1,    -1,   952,    -1,   954,    -1,    -1,   957,    -1,
      -1,    -1,    90,    91,    92,    93,    -1,    -1,    91,   387,
     388,     2,    -1,     4,    -1,    98,    -1,    -1,    -1,   397,
     398,   399,    -1,    -1,    -1,   403,    -1,   405,   406,   407,
      51,    -1,   991,    -1,    55,   118,   474,    -1,   476,    70,
      71,    72,    73,    74,    75,    76,    77,   425,    79,    80,
      -1,    -1,   430,    -1,    85,    86,    77,    70,    -1,    -1,
      51,   439,    -1,    -1,   442,   229,    -1,   231,    -1,    90,
      91,    92,    85,    86,    -1,    -1,   454,    54,    -1,    56,
      57,    58,    59,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,    -1,    -1,    -1,    -1,    -1,    90,
      -1,    -1,    -1,   116,   117,   118,   119,   120,   121,   122,
     123,   124,    70,    -1,    91,    -1,   204,   495,   496,    54,
      97,    56,    57,    58,    59,    -1,    -1,    85,    86,   507,
      -1,    -1,   296,   297,   298,   299,    -1,   301,   302,    -1,
      -1,   564,    54,   566,    56,    57,    58,    59,    -1,   237,
       2,    -1,     4,    -1,    -1,    -1,    91,   245,   246,    -1,
      -1,   119,   120,   121,   122,   123,   124,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   265,    -1,    91,
      -1,   345,   346,   204,    -1,    97,    -1,    -1,    -1,    -1,
      -1,    -1,   570,    -1,    -1,    -1,   360,   575,    -1,    51,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   295,    -1,   587,
      -1,    -1,   300,   204,    -1,    -1,   237,    -1,    -1,   307,
     308,    -1,    -1,    -1,   245,   246,    -1,    -1,    -1,   652,
     653,    -1,   610,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   664,    -1,    -1,   265,    -1,   237,    -1,    -1,    -1,
     673,    -1,    -1,   341,   245,   246,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   643,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   295,    -1,    -1,    -1,    -1,   300,
      -1,    -1,    -1,    -1,    -1,    -1,   307,   308,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   677,
      -1,    -1,    -1,   681,   295,   683,   684,    -1,    -1,   300,
      -1,   689,   690,    -1,   737,   738,   307,    -1,    -1,   697,
     341,    -1,    -1,    -1,    -1,    -1,    -1,   765,   766,    -1,
     768,    -1,   770,   771,    -1,    -1,    -1,    -1,   426,    -1,
      -1,    -1,    -1,   781,    -1,   783,   784,   435,    -1,    -1,
     341,    -1,   204,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   739,    -1,    -1,   452,    -1,   744,    -1,   746,   747,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   807,   237,    -1,    -1,    -1,    -1,
      -1,   814,   815,   245,   246,   818,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   426,    -1,    -1,    -1,   787,
      -1,    -1,    -1,   791,   435,    -1,    -1,   840,    -1,   797,
      -1,    -1,    -1,    -1,    -1,   513,   590,    -1,    -1,    -1,
      -1,   452,    -1,    -1,    -1,   426,    -1,    -1,    -1,   817,
      -1,   819,    -1,   295,   435,    -1,    -1,    -1,   300,    -1,
      -1,    -1,    -1,    -1,    -1,   307,    -1,    -1,    -1,    -1,
     883,   625,    -1,   841,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   894,   910,   911,   912,   913,   564,    -1,   566,   917,
     918,   919,    -1,   921,   922,    -1,    -1,    -1,    -1,   341,
      -1,    -1,   513,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   589,    -1,    -1,    -1,   928,    -1,   930,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   938,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   973,    -1,    -1,   976,   977,
     978,   979,    -1,   564,    -1,   566,    -1,    -1,   636,    -1,
      -1,    -1,    -1,    -1,   718,    -1,    -1,   721,   996,    -1,
      -1,    -1,    -1,    -1,   652,   653,    -1,    -1,   589,    -1,
      -1,    -1,    -1,   564,   426,   566,   664,    -1,    -1,    -1,
      -1,    -1,    -1,   435,   962,   673,    -1,    -1,    -1,    -1,
      -1,    -1,   680,    -1,    -1,    -1,    -1,    -1,   589,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   636,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   652,   653,    -1,   722,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   730,   664,   665,    -1,   810,    -1,    -1,   737,
     738,    -1,   673,    -1,    -1,    -1,    -1,    -1,    -1,   680,
      -1,   652,   653,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   664,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   673,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   722,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   730,
      -1,    -1,   564,    -1,   566,    -1,   737,   738,    -1,   807,
      -1,    -1,    -1,    -1,    -1,    -1,   814,   815,    -1,    -1,
     818,   722,    -1,    -1,    -1,    -1,    -1,   589,    -1,   730,
      -1,    -1,    -1,    -1,    -1,    -1,   737,   738,    -1,    -1,
      -1,    -1,   840,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   865,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   807,    -1,    -1,    -1,
      -1,   879,    -1,   814,   815,   883,    -1,   818,    -1,    -1,
     652,   653,    -1,    -1,    -1,    -1,   894,    -1,   896,    -1,
      -1,    -1,   664,    -1,    -1,    -1,   807,    -1,    -1,   840,
      -1,   673,    -1,   814,   815,    -1,    -1,   818,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     928,    -1,   930,    -1,   865,    -1,    -1,    -1,    -1,   840,
     938,    -1,   940,    -1,    48,    49,    -1,    -1,   879,    53,
      54,    55,   883,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     722,    65,    -1,   894,    -1,   896,    -1,    -1,   730,    -1,
      -1,    -1,    -1,    77,    -1,   737,   738,    -1,   879,    -1,
      -1,    -1,   883,    -1,    -1,    -1,    90,    91,    92,    -1,
      -1,    -1,    -1,   894,    -1,   896,    -1,   928,    -1,   930,
      -1,    -1,    -1,    -1,    -1,     0,    -1,   938,    -1,   940,
      -1,    -1,    -1,     8,     9,    10,    -1,    -1,    13,    14,
      15,    -1,    -1,    18,    -1,    -1,    -1,   928,    -1,   930,
      -1,    -1,    -1,    28,    -1,    -1,    -1,   938,    -1,   940,
      45,    -1,    -1,    38,    39,   807,    41,    42,    43,    44,
      45,    -1,   814,   815,    -1,    -1,   818,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,   840,    -1,
      85,    86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,   202,    -1,
      -1,   205,   206,   207,    -1,    -1,    -1,   112,    -1,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
      -1,   883,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   894,    -1,   896,    -1,    -1,    -1,    -1,   144,
      -1,    -1,    -1,    -1,    -1,    -1,   141,    -1,   143,    -1,
      -1,   146,    -1,   148,   149,    -1,   151,    -1,    -1,    -1,
      -1,   265,    -1,    -1,    -1,    -1,   928,    -1,   930,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   938,    -1,   940,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   308,    -1,    -1,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,    -1,    -1,    -1,    -1,     0,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     8,     9,    10,    -1,
      -1,    13,    14,    15,    -1,    -1,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    29,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    39,    -1,    41,
      42,    43,    44,    45,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   397,   398,   399,    -1,    -1,    -1,    -1,
      -1,   405,   406,   407,    -1,    -1,    -1,    -1,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,   425,    -1,    85,    86,    87,   430,    89,    90,    -1,
      -1,    -1,    -1,    -1,    96,   439,    -1,    -1,   442,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,   452,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,
     142,   143,   144,    -1,    -1,   147,   148,   149,    -1,   151,
      -1,   495,   496,    -1,     0,     1,    -1,     3,     4,     5,
       6,     7,    -1,   507,    -1,    11,    12,    -1,    -1,   513,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,
      36,    37,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    -1,    61,    62,    -1,    64,    65,
      66,    -1,    68,    69,    -1,    -1,   570,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    88,    -1,    -1,    91,    92,    -1,    94,    95,
      -1,    97,    -1,    99,   100,   101,   102,   103,   104,   105,
      -1,    -1,    -1,    -1,    -1,    -1,   610,    70,    71,    72,
      73,    74,    75,    76,    -1,    -1,    79,    80,    -1,   125,
     126,   127,    85,    86,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   636,    -1,    -1,    -1,    -1,    -1,    -1,   643,
      -1,    -1,    -1,   149,    -1,   151,    -1,    -1,    -1,    -1,
      -1,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   677,    -1,    -1,   680,   681,    -1,    -1,
     684,     0,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     8,
       9,    10,    -1,   697,    13,    14,    15,    -1,    -1,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,
      29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      39,    -1,    41,    42,    43,    44,    45,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   739,    -1,    -1,    -1,    -1,
     744,    -1,   746,   747,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    -1,    -1,    85,    86,    87,    -1,
      -1,    90,    -1,    -1,    -1,    -1,    -1,    96,    -1,    -1,
      -1,    -1,    -1,   787,    -1,    -1,    -1,   791,    -1,    -1,
      -1,    -1,    -1,   112,    -1,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   817,    -1,   819,    -1,    -1,    -1,    -1,
      -1,   140,   141,   142,   143,   144,     0,   146,   147,   148,
     149,    -1,   151,    -1,     8,     9,    10,   841,    -1,    13,
      14,    15,    -1,    -1,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    29,    30,    -1,    -1,    -1,
      -1,   865,    -1,    -1,    38,    39,    -1,    41,    42,    43,
      44,    45,    -1,    -1,    -1,   879,    -1,    -1,    -1,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    -1,    -1,    85,    86,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    -1,
      -1,    85,    86,    87,    -1,    -1,    90,    -1,    -1,    -1,
      -1,   112,    96,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,    -1,   109,    -1,    -1,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     151,    -1,    -1,    -1,    -1,    -1,    -1,   141,   142,   143,
     144,     0,    -1,   147,   148,   149,    -1,   151,    -1,     8,
       9,    10,    -1,    -1,    13,    14,    15,    -1,    -1,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,
      29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      39,    -1,    41,    42,    43,    44,    45,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    -1,    -1,    85,
      86,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    -1,    -1,    85,    86,    87,    -1,
      -1,    90,    -1,    -1,    -1,    -1,   112,    96,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,    -1,
      -1,    -1,    -1,   112,    -1,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   140,   141,   142,   143,   144,     0,   146,   147,   148,
     149,    -1,   151,    -1,     8,     9,    10,    -1,    -1,    13,
      14,    15,    -1,    -1,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    29,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    39,    -1,    41,    42,    43,
      44,    45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    -1,    -1,    85,    86,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    -1,
      -1,    85,    86,    87,    -1,    -1,    90,    -1,    -1,    -1,
      -1,    -1,    96,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,    -1,    -1,    -1,    -1,   112,    -1,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,   142,   143,
     144,     0,   146,   147,   148,   149,    -1,   151,    -1,     8,
       9,    10,    -1,    -1,    -1,    14,    15,    -1,    -1,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      39,    -1,    41,    42,    43,    44,    45,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    -1,    -1,    85,    86,    87,     0,
      89,    -1,    -1,    -1,    -1,    -1,    -1,     8,     9,    10,
      -1,    -1,    -1,    14,    15,    -1,    -1,    18,    -1,    -1,
      -1,    -1,   111,   112,    -1,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,    -1,    38,    39,    -1,
      41,    42,    43,    44,    45,    -1,    -1,    -1,    -1,    -1,
      -1,   140,   141,   142,   143,   144,    -1,    -1,    -1,   148,
     149,    -1,   151,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    -1,    -1,    85,    86,    87,    -1,    89,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     111,   112,    -1,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     141,   142,   143,   144,    -1,    -1,    -1,   148,   149,     1,
     151,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,
      32,    33,    34,    35,    36,    37,    -1,    -1,    40,    -1,
      -1,    -1,    -1,    -1,    46,    47,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    -1,    61,
      62,    -1,    64,    65,    66,    -1,    68,    69,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    88,    -1,    -1,    91,
      92,    -1,    94,    95,    -1,    97,    -1,    99,   100,   101,
     102,   103,   104,   105,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   125,   126,   127,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   149,     1,   151,
       3,     4,     5,     6,     7,    -1,    -1,    10,    11,    12,
      -1,    14,    15,    16,    17,    -1,    19,    20,    21,    22,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,
      33,    34,    35,    36,    37,    -1,    -1,    40,    -1,    -1,
      -1,    -1,    -1,    46,    47,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    -1,    61,    62,
      -1,    64,    65,    66,    -1,    68,    69,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    88,    -1,    -1,    91,    92,
      -1,    94,    95,    -1,    97,    -1,    99,   100,   101,   102,
     103,   104,   105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   125,   126,   127,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   149,     1,   151,     3,
       4,     5,     6,     7,    -1,    -1,    10,    11,    12,    -1,
      -1,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,
      34,    35,    36,    37,    -1,    -1,    40,    -1,    -1,    -1,
      -1,    -1,    46,    47,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    -1,    61,    62,    -1,
      64,    65,    66,    -1,    68,    69,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    88,    -1,    -1,    91,    92,    -1,
      94,    95,    -1,    97,    -1,    99,   100,   101,   102,   103,
     104,   105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   125,   126,   127,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    11,    12,   149,    -1,   151,    16,    17,
      -1,    19,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    -1,    31,    32,    33,    34,    35,    36,    37,
      -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    -1,    61,    62,    -1,    64,    65,    66,    -1,
      68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      88,    -1,    -1,    91,    92,    -1,    94,    95,    -1,    97,
      -1,    99,   100,   101,   102,   103,   104,   105,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,   126,   127,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   141,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   149,     1,   151,     3,     4,     5,     6,     7,    -1,
      -1,    10,    11,    12,    -1,    -1,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    -1,    31,    32,    33,    34,    35,    36,    37,    -1,
      -1,    40,    -1,    -1,    -1,    -1,    -1,    46,    47,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    -1,    61,    62,    -1,    64,    65,    66,    -1,    68,
      69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,
      -1,    -1,    91,    92,    -1,    94,    95,    -1,    97,    -1,
      99,   100,   101,   102,   103,   104,   105,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   125,   126,   127,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,
       3,     4,     5,     6,     7,    -1,     9,    10,    11,    12,
     149,    -1,   151,    16,    17,    -1,    19,    20,    21,    22,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,
      33,    34,    35,    36,    37,    -1,    -1,    40,    -1,    -1,
      -1,    -1,    -1,    46,    47,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    -1,    61,    62,
      -1,    64,    65,    66,    -1,    68,    69,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    88,    -1,    -1,    91,    92,
      -1,    94,    95,    -1,    97,    -1,    99,   100,   101,   102,
     103,   104,   105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   125,   126,   127,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    11,    12,   149,    -1,   151,    16,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,    36,
      37,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    46,
      47,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    -1,    61,    62,    -1,    64,    65,    66,
      -1,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    88,    -1,    -1,    91,    92,    -1,    94,    95,    -1,
      97,    -1,    99,   100,   101,   102,   103,   104,   105,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,   126,
     127,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   148,   149,     1,   151,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    11,    12,    -1,    -1,    -1,    16,    17,
      -1,    19,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    -1,    31,    32,    33,    34,    35,    36,    37,
      -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    46,    47,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    -1,    61,    62,    -1,    64,    65,    66,    -1,
      68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      88,    -1,    -1,    91,    92,    -1,    94,    95,    -1,    97,
      -1,    99,   100,   101,   102,   103,   104,   105,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,   126,   127,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     148,   149,     1,   151,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    11,    12,    -1,    -1,    -1,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    -1,    31,    32,    33,    34,    35,    36,    37,    -1,
      -1,    40,    -1,    -1,    -1,    -1,    -1,    46,    47,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    -1,    61,    62,    -1,    64,    65,    66,    -1,    68,
      69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,
      -1,    -1,    91,    92,    -1,    94,    95,    -1,    97,    -1,
      99,   100,   101,   102,   103,   104,   105,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   125,   126,   127,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   141,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     149,     1,   151,     3,     4,     5,     6,     7,    -1,    -1,
      10,    11,    12,    -1,    -1,    -1,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    31,    32,    33,    34,    35,    36,    37,    -1,    -1,
      40,    -1,    -1,    -1,    -1,    -1,    46,    47,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      -1,    61,    62,    -1,    64,    65,    66,    -1,    68,    69,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,    -1,
      -1,    91,    92,    -1,    94,    95,    -1,    97,    -1,    99,
     100,   101,   102,   103,   104,   105,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   125,   126,   127,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,    -1,     7,    -1,    -1,    -1,    11,    12,   149,
      -1,   151,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,
      34,    35,    36,    37,    -1,    -1,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    -1,    -1,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    -1,
      64,    65,    66,    -1,    68,    69,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    88,    -1,    -1,    91,    92,    -1,
      94,    95,    -1,    97,    98,    99,   100,   101,   102,   103,
     104,   105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,    -1,     7,    -1,    -1,    -1,    11,
      12,   125,   126,   127,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,
      32,    33,    34,    35,    36,    37,    -1,   151,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    48,    -1,    -1,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    -1,    61,
      62,    -1,    64,    65,    66,    -1,    68,    69,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    88,    -1,    -1,    91,
      92,    -1,    94,    95,    -1,    -1,    -1,    99,   100,   101,
     102,   103,   104,   105,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   125,   126,   127,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
      -1,     7,    -1,    -1,    -1,    11,    12,   149,    -1,   151,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,
      36,    37,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    -1,    -1,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    -1,    61,    62,    -1,    64,    65,
      66,    -1,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    88,    -1,    -1,    91,    92,    -1,    94,    95,
      -1,    -1,    -1,    99,   100,   101,   102,   103,   104,   105,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    11,    12,   125,
     126,   127,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,
      34,    35,    36,    37,    -1,   151,    40,    -1,    -1,    -1,
      -1,    -1,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    -1,    61,    62,    -1,
      64,    65,    66,    -1,    68,    69,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    88,    -1,    -1,    91,    92,    -1,
      94,    95,    -1,    97,    -1,    99,   100,   101,   102,   103,
     104,   105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   125,   126,   127,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    11,    12,
      -1,    -1,    -1,    16,    17,   149,    19,    20,    21,    22,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,
      33,    34,    35,    36,    37,    -1,    -1,    40,    -1,    -1,
      -1,    -1,    -1,    46,    47,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    -1,    61,    62,
      -1,    64,    65,    66,    -1,    68,    69,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    88,    -1,    -1,    91,    92,
      -1,    94,    95,    -1,    97,    -1,    99,   100,   101,   102,
     103,   104,   105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   125,   126,   127,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   149,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    -1,    -1,    -1,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    -1,    -1,    79,    80,    -1,    -1,    83,    84,    85,
      86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,    -1,
     126,   127,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,    -1,     7,    -1,    -1,    -1,    11,    12,    -1,   145,
     146,    16,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    -1,    27,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    -1,    -1,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    -1,    64,
      65,    66,    -1,    68,    69,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    88,    -1,    -1,    91,    92,    -1,    94,
      95,    -1,    97,    98,    99,   100,   101,   102,   103,   104,
     105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     125,   126,   127,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,    -1,     7,    -1,   140,    -1,    11,    12,    -1,
      -1,   146,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    -1,    27,    -1,    -1,    -1,    31,    32,    33,
      34,    35,    36,    37,    -1,    -1,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    -1,    -1,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    -1,
      64,    65,    66,    -1,    68,    69,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    88,    -1,    -1,    91,    92,    -1,
      94,    95,    -1,    97,    98,    99,   100,   101,   102,   103,
     104,   105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   125,   126,   127,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,    -1,     7,    -1,   140,    -1,    11,    12,
      -1,    -1,   146,    16,    17,    -1,    19,    20,    21,    22,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,
      33,    34,    35,    36,    37,    -1,    -1,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    -1,    -1,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      -1,    64,    65,    66,    -1,    68,    69,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    88,    89,    -1,    91,    92,
      -1,    94,    95,    -1,    97,    98,    99,   100,   101,   102,
     103,   104,   105,    -1,    -1,    -1,    -1,    -1,   111,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
      -1,     7,   125,   126,   127,    11,    12,    -1,    -1,    -1,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,   146,    -1,    31,    32,    33,    34,    35,
      36,    37,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    -1,    -1,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    -1,    64,    65,
      66,    -1,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    88,    -1,    -1,    91,    92,    -1,    94,    95,
      -1,    97,    98,    99,   100,   101,   102,   103,   104,   105,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,    -1,     7,   125,
     126,   127,    11,    12,    -1,    -1,    -1,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
     146,    -1,    31,    32,    33,    34,    35,    36,    37,    -1,
      -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,
      -1,    -1,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    -1,    64,    65,    66,    -1,    68,
      69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,
      -1,    -1,    91,    92,    -1,    94,    95,    -1,    97,    98,
      99,   100,   101,   102,   103,   104,   105,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   125,   126,   127,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   146,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    -1,    -1,    -1,    -1,
      -1,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    -1,    -1,    79,    80,    -1,    -1,    83,    84,
      85,    86,    -1,    -1,    70,    71,    72,    73,    74,    75,
      76,    -1,    97,    79,    80,    -1,    -1,    -1,    -1,    85,
      86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
      -1,   126,   127,    -1,    -1,    -1,    -1,    -1,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,    -1,
     145,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    -1,    -1,    -1,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    -1,
      -1,    -1,    -1,    -1,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    -1,    58,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    -1,    -1,    79,    80,    -1,
      -1,    83,    84,    85,    86,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    97,    -1,    -1,   100,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,    -1,   126,   127,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   145,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    -1,
      -1,    -1,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    -1,    -1,    -1,    -1,    -1,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    -1,    58,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    -1,    -1,
      79,    80,    -1,    -1,    83,    84,    85,    86,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    97,    -1,
      -1,   100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,    -1,   126,   127,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   145,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    -1,    -1,    -1,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    -1,    -1,    79,    80,    -1,    -1,    83,    84,    85,
      86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,    -1,
     126,   127,    -1,    -1,     3,     4,     5,    -1,     7,    -1,
      -1,    -1,    11,    12,    -1,    -1,    -1,    16,    17,   145,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    -1,    31,    32,    33,    34,    35,    36,    37,    -1,
      -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,
      -1,    -1,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    -1,    61,    62,    -1,    64,    65,    66,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,
      -1,    -1,    91,    92,    -1,    94,    95,    -1,    -1,    -1,
      99,   100,   101,   102,   103,   104,   105,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,    -1,     7,    -1,    -1,   125,    11,    12,    -1,
      -1,    -1,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,   144,    -1,    31,    32,    33,
      34,    35,    36,    37,    -1,    -1,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    -1,    -1,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    -1,    61,    62,    -1,
      64,    65,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    88,    -1,    -1,    91,    92,    -1,
      94,    95,    -1,    -1,    -1,    99,   100,   101,   102,   103,
     104,   105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,    -1,
      -1,   125,    11,    12,    -1,    -1,    -1,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
     144,    -1,    31,    32,    33,    34,    35,    36,    37,    -1,
      -1,    40,    -1,    -1,    -1,    -1,    -1,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    -1,    61,    62,    -1,    64,    65,    66,    -1,    68,
      69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,
      -1,    -1,    91,    92,    -1,    94,    95,    -1,    97,    -1,
      99,   100,   101,   102,   103,   104,   105,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    11,    12,   125,   126,   127,    16,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,    36,
      37,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    46,
      47,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    -1,    61,    62,    -1,    64,    65,    66,
      -1,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    88,    -1,    -1,    91,    92,    -1,    94,    95,    -1,
      97,    -1,    99,   100,   101,   102,   103,   104,   105,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,    -1,     7,    -1,    -1,    -1,    11,    12,   125,   126,
     127,    16,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    -1,    -1,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    -1,    64,
      65,    66,    -1,    68,    69,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    88,    -1,    -1,    91,    92,    -1,    94,
      95,    -1,    97,    98,    99,   100,   101,   102,   103,   104,
     105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,    -1,     7,    -1,    -1,    -1,    11,    12,
     125,   126,   127,    16,    17,    -1,    19,    20,    21,    22,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,
      33,    34,    35,    36,    37,    -1,    -1,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    -1,    -1,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      -1,    64,    65,    66,    -1,    68,    69,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    88,    -1,    -1,    91,    92,
      -1,    94,    95,    -1,    97,    98,    99,   100,   101,   102,
     103,   104,   105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,    -1,     7,    -1,    -1,    -1,
      11,    12,   125,   126,   127,    16,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      31,    32,    33,    34,    35,    36,    37,    -1,    -1,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    -1,    -1,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    -1,    64,    65,    66,    -1,    68,    69,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,    -1,    -1,
      91,    92,    -1,    94,    95,    -1,    97,    -1,    99,   100,
     101,   102,   103,   104,   105,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,    -1,     7,    -1,
      -1,    -1,    11,    12,   125,   126,   127,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    -1,    31,    32,    33,    34,    35,    36,    37,    -1,
      -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,
      -1,    -1,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    -1,    64,    65,    66,    -1,    68,
      69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,
      -1,    -1,    91,    92,    -1,    94,    95,    -1,    -1,    98,
      99,   100,   101,   102,   103,   104,   105,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,
       7,    -1,    -1,    -1,    11,    12,   125,   126,   127,    16,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,    36,
      37,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    48,    -1,    -1,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    -1,    64,    65,    66,
      -1,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    88,    -1,    -1,    91,    92,    -1,    94,    95,    -1,
      97,    -1,    99,   100,   101,   102,   103,   104,   105,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,    -1,     7,    -1,    -1,    -1,    11,    12,   125,   126,
     127,    16,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    -1,    -1,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    -1,    64,
      65,    66,    -1,    68,    69,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    88,    -1,    -1,    91,    92,    -1,    94,
      95,    -1,    -1,    -1,    99,   100,   101,   102,   103,   104,
     105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,    -1,     7,    -1,    -1,    -1,    11,    12,
     125,   126,   127,    16,    17,    -1,    19,    20,    21,    22,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,
      33,    34,    35,    36,    37,    -1,    -1,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    -1,    -1,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    -1,    61,    62,
      -1,    64,    65,    66,    -1,    68,    69,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    88,    -1,    -1,    91,    92,
      -1,    94,    95,    -1,    97,    -1,    99,   100,   101,   102,
     103,   104,   105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,    -1,     7,    -1,    -1,    -1,
      11,    12,   125,   126,   127,    16,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      31,    32,    33,    34,    35,    36,    37,    -1,    -1,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    -1,    -1,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    -1,
      61,    62,    -1,    64,    65,    66,    -1,    68,    69,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,    -1,    -1,
      91,    92,    -1,    94,    95,    -1,    97,    -1,    99,   100,
     101,   102,   103,   104,   105,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,    -1,     7,    -1,
      -1,    -1,    11,    12,   125,   126,   127,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    -1,    31,    32,    33,    34,    35,    36,    37,    -1,
      -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,
      -1,    -1,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    -1,    61,    62,    -1,    64,    65,    66,    -1,    68,
      69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,
      -1,    -1,    91,    92,    -1,    94,    95,    -1,    97,    -1,
      99,   100,   101,   102,   103,   104,   105,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,
       7,    -1,    -1,    -1,    11,    12,   125,   126,   127,    16,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,    36,
      37,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    48,    -1,    -1,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    -1,    61,    62,    -1,    64,    65,    66,
      -1,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    88,    -1,    -1,    91,    92,    -1,    94,    95,    -1,
      97,    -1,    99,   100,   101,   102,   103,   104,   105,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,    -1,     7,    -1,    -1,    -1,    11,    12,   125,   126,
     127,    16,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    -1,    -1,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    -1,    61,    62,    -1,    64,
      65,    66,    -1,    68,    69,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    88,    -1,    -1,    91,    92,    -1,    94,
      95,    -1,    97,    -1,    99,   100,   101,   102,   103,   104,
     105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,    -1,     7,    -1,    -1,    -1,    11,    12,
     125,   126,   127,    16,    17,    -1,    19,    20,    21,    22,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,
      33,    34,    35,    36,    37,    -1,    -1,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    -1,    -1,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    -1,    61,    62,
      -1,    64,    65,    66,    -1,    68,    69,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    88,    -1,    -1,    91,    92,
      -1,    94,    95,    -1,    -1,    -1,    99,   100,   101,   102,
     103,   104,   105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,    -1,     7,    -1,    -1,    -1,
      11,    12,   125,   126,   127,    16,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      31,    32,    33,    34,    35,    36,    37,    -1,    -1,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    -1,    -1,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    -1,
      61,    62,    -1,    64,    65,    66,    -1,    68,    69,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,    -1,    -1,
      91,    92,    -1,    94,    95,    -1,    -1,    -1,    99,   100,
     101,   102,   103,   104,   105,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,    -1,     7,    -1,
      -1,    -1,    11,    12,   125,   126,   127,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    -1,    31,    32,    33,    34,    35,    36,    37,    -1,
      -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,
      -1,    -1,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    -1,    61,    62,    -1,    64,    65,    66,    -1,    68,
      69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,
      -1,    -1,    91,    92,    -1,    94,    95,    -1,    -1,    -1,
      99,   100,   101,   102,   103,   104,   105,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,
       7,    -1,    -1,    -1,    11,    12,   125,   126,   127,    16,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,    36,
      37,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    48,    -1,    -1,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    -1,    61,    62,    -1,    64,    65,    66,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    88,    -1,    -1,    91,    92,    -1,    94,    95,    -1,
      97,    -1,    99,   100,   101,   102,   103,   104,   105,    -1,
      -1,    -1,    -1,     3,     4,     5,    -1,     7,    -1,    -1,
      -1,    11,    12,    -1,    -1,    -1,    16,    17,   125,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    31,    32,    33,    34,    35,    36,    37,    -1,    -1,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    -1,
      -1,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      -1,    61,    62,    -1,    64,    65,    66,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,    -1,
      -1,    91,    92,    -1,    94,    95,    -1,    97,    -1,    99,
     100,   101,   102,   103,   104,   105,    -1,    -1,    -1,    -1,
       3,     4,     5,    -1,     7,    -1,    -1,    -1,    11,    12,
      -1,    -1,    -1,    16,    17,   125,    19,    20,    21,    22,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,
      33,    34,    35,    36,    37,    -1,    -1,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    -1,    -1,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    -1,    61,    62,
      -1,    64,    65,    66,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    85,    -1,    -1,    88,    -1,    -1,    91,    92,
      -1,    94,    95,    -1,    -1,    -1,    99,   100,   101,   102,
     103,   104,   105,    -1,    -1,    -1,    -1,     3,     4,     5,
      -1,     7,    -1,    -1,    -1,    11,    12,    -1,    -1,    -1,
      16,    17,   125,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,
      36,    37,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    -1,    -1,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    -1,    61,    62,    -1,    64,    65,
      66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    88,    -1,    -1,    91,    92,    -1,    94,    95,
      -1,    -1,    -1,    99,   100,   101,   102,   103,   104,   105,
      -1,    -1,    -1,    -1,     3,     4,     5,    -1,     7,    -1,
      -1,    -1,    11,    12,    -1,    -1,    -1,    16,    17,   125,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    -1,    31,    32,    33,    34,    35,    36,    37,    -1,
      -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,
      -1,    -1,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    -1,    61,    62,    -1,    64,    65,    66,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,
      -1,    -1,    91,    92,    -1,    94,    95,    -1,    -1,    -1,
      99,   100,   101,   102,   103,   104,   105,    -1,    -1,    -1,
      -1,     3,     4,     5,    -1,     7,    -1,    -1,    -1,    11,
      12,    -1,    -1,    -1,    16,    17,   125,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,
      32,    33,    34,    35,    36,    37,    -1,    -1,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    48,    -1,    -1,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    -1,    61,
      62,    -1,    64,    65,    66,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    88,    -1,    -1,    91,
      92,    -1,    94,    95,    -1,    -1,    -1,    99,   100,   101,
     102,   103,   104,   105,    -1,    -1,    -1,    -1,     3,     4,
       5,    -1,     7,    -1,    -1,    -1,    11,    12,    -1,    -1,
      -1,    16,    17,   125,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    -1,    -1,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    -1,    61,    62,    -1,    64,
      65,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    88,    -1,    -1,    91,    92,    -1,    94,
      95,    -1,    -1,    -1,    99,   100,   101,   102,   103,   104,
     105,    -1,    -1,    -1,    -1,    -1,    -1,    54,    55,    -1,
      -1,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     125,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      -1,    -1,    79,    80,    -1,    -1,    83,    84,    85,    86,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,    -1,   126,
     127,    -1,    -1,    -1,    -1,    -1,    54,    55,    -1,    -1,
      58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   145,   146,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    -1,
      -1,    79,    80,    -1,    -1,    83,    84,    85,    86,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    97,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,    -1,   126,   127,
      -1,    -1,    -1,    -1,    -1,    54,    55,    -1,    -1,    58,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   145,   146,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    -1,    -1,
      79,    80,    -1,    -1,    83,    84,    85,    86,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    97,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,    -1,   126,   127,    -1,
      -1,    -1,    -1,    -1,    54,    55,    -1,    -1,    58,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   145,   146,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    -1,    -1,    79,
      80,    -1,    -1,    83,    84,    85,    86,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    97,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,    -1,   126,   127,    -1,    -1,
      -1,    -1,    -1,    54,    55,    -1,    -1,    58,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   145,   146,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    -1,    -1,    79,    80,
      -1,    -1,    83,    84,    85,    86,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    97,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,    -1,   126,   127,    -1,    -1,    -1,
      -1,    -1,    54,    55,    -1,    -1,    58,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   145,   146,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    -1,    -1,    79,    80,    -1,
      -1,    83,    84,    85,    86,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    97,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,    -1,   126,   127,    -1,    -1,    -1,    -1,
      -1,    54,    55,    -1,    -1,    58,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   145,   146,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    -1,    -1,    79,    80,    -1,    -1,
      83,    84,    85,    86,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    97,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,    -1,   126,   127,    -1,    -1,    -1,    -1,    -1,
      54,    55,    -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   145,   146,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    -1,    -1,    79,    80,    -1,    -1,    83,
      84,    85,    86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    97,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,    -1,   126,   127,    -1,    -1,    -1,    -1,    -1,    54,
      55,    -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   145,   146,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    -1,    -1,    79,    80,    -1,    -1,    83,    84,
      85,    86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
      -1,   126,   127,    -1,    -1,    -1,    -1,    -1,    54,    55,
      -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     145,   146,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    -1,    -1,    79,    80,    -1,    -1,    83,    84,    85,
      86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,    -1,
     126,   127,    -1,    -1,    -1,    -1,    -1,    54,    55,    -1,
      -1,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   145,
     146,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      -1,    -1,    79,    80,    -1,    -1,    83,    84,    85,    86,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,    -1,   126,
     127,    -1,    -1,    -1,    -1,    -1,    54,    55,    -1,    -1,
      58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   145,   146,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    -1,
      -1,    79,    80,    -1,    -1,    83,    84,    85,    86,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    97,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,    -1,   126,   127,
      -1,    -1,    -1,    -1,    -1,    54,    55,    -1,    -1,    58,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   145,   146,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    -1,    -1,
      79,    80,    -1,    -1,    83,    84,    85,    86,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    97,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,    -1,   126,   127,    -1,
      -1,    -1,    -1,    -1,    54,    55,    -1,    -1,    58,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   145,   146,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    -1,    -1,    79,
      80,    -1,    -1,    83,    84,    85,    86,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    97,    -1,    -1,
      -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,    45,   126,   127,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    -1,    -1,    85,    86,   145,    -1,    -1,    -1,    -1,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    -1,    -1,    85,    86,    -1,    -1,    -1,
     112,    -1,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   112,    -1,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   153,   154,     0,     1,     3,     4,     5,     6,     7,
      11,    12,    16,    17,    19,    20,    21,    22,    23,    24,
      25,    31,    32,    33,    34,    35,    36,    37,    40,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    61,    62,    64,    65,    66,    68,    69,
      88,    91,    92,    94,    95,    97,    99,   100,   101,   102,
     103,   104,   105,   125,   126,   127,   155,   156,   157,   162,
     164,   166,   167,   170,   171,   173,   174,   175,   177,   178,
     189,   206,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   256,   257,   270,   271,   272,   273,
     274,   275,   276,   279,   287,   289,   290,   291,   292,   293,
     294,   317,   328,   157,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    58,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    79,
      80,    83,    84,    85,    86,    97,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   126,   127,   145,
     181,   182,   183,   184,   186,   187,   287,   289,    22,    23,
      31,    40,    60,    88,    91,    97,    98,   126,   170,   178,
     189,   192,   197,   200,   203,   223,   291,   293,   294,   315,
     316,   197,   197,   146,   198,   199,   146,   194,   198,   146,
     151,   322,    56,   183,   181,   322,   158,   140,    32,    33,
     189,   223,   317,   189,    58,     1,    91,   160,   161,   162,
     172,   173,   328,   164,   193,   203,   315,   328,   192,   314,
     315,   328,    48,    88,   125,   144,   177,   206,   223,   291,
     294,   250,   251,    56,    57,    59,   181,   282,   288,   281,
     282,   282,   150,   277,   150,   280,    61,    62,   166,   189,
     189,   149,   151,   321,   326,   327,    41,    42,    43,    44,
      45,    38,    39,    29,   254,   111,   144,    91,    97,   174,
     111,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    85,    86,   112,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,    87,   142,
     143,   207,   164,   165,   165,   210,   212,   165,   321,   327,
     165,    88,   171,   178,   223,   240,   291,   294,    54,    58,
      85,    88,   179,   180,   223,   291,   294,   180,    34,    35,
      36,    37,    51,    52,    53,    54,    58,   146,   181,   292,
     312,    87,   143,    27,   140,   258,   273,    89,    89,   194,
     198,   258,   144,   192,    58,   192,   192,   111,    90,   144,
     201,   328,    87,   142,   143,    89,    89,   144,   201,   197,
     322,   323,   197,   196,   197,   328,   164,   323,   164,    56,
      65,    66,   163,   181,   146,   190,   140,   160,    87,   143,
      89,   162,   172,   148,   321,   327,   323,   208,   147,   144,
     151,   325,   144,   325,   141,   325,   322,    58,    61,    62,
     174,   176,   144,    87,   142,   143,    54,    56,    57,    58,
      59,    91,    97,    98,   118,   122,   146,   252,   298,   299,
     300,   301,   302,   303,   306,   307,   308,   309,   310,    63,
     106,   107,   108,   283,   108,   283,   108,    67,   108,   108,
     278,   283,   108,    63,   108,    70,    70,   149,   157,   165,
     165,   165,   165,   162,   164,   164,   255,    97,   166,   192,
     203,   204,   172,   144,   177,   144,   166,   189,   192,   204,
     189,   189,   189,   189,   189,   189,   189,   189,   189,   189,
     189,   189,   189,   189,   189,   189,   189,   189,   189,   189,
     189,   189,   189,   189,   189,   189,   189,    54,    55,    58,
     186,   194,   318,   319,   196,    54,    55,    58,   186,   194,
     318,   159,   160,    13,   236,   326,   236,   165,   165,   321,
      18,   263,   321,    58,    87,   142,   143,    26,   164,    54,
      58,   179,     1,   115,   295,   326,    87,   142,   143,   219,
     313,   220,    87,   143,   320,    54,    58,   318,   318,   260,
     259,   166,   189,   166,   189,    96,   168,   185,   189,   192,
      97,   192,   200,   315,    54,    58,   196,    54,    58,   316,
     323,   148,   323,   323,   183,   209,   189,   155,   141,   318,
     318,   189,   323,   162,   323,   315,   144,   176,    54,    58,
     196,    54,    58,   111,    54,    91,    97,   241,   242,   243,
     300,   298,    30,   109,   253,   144,   311,   328,   144,   311,
      54,   144,   311,    54,   285,   284,   150,   283,   150,   189,
     189,    78,   116,   245,   246,   328,   192,   144,   323,   176,
     144,    45,   322,    89,    89,   194,   198,   322,   324,    89,
      89,   194,   195,   198,   328,    10,   235,     8,   266,   328,
     160,    13,   160,    28,   237,   326,   237,   263,   203,   235,
      18,   261,   262,    54,    58,   196,    54,    58,   214,   217,
     326,   296,   216,    54,    58,   179,   196,   159,   164,   146,
     297,   298,   221,   195,   198,   195,   198,   245,   245,    45,
     169,   183,   192,   201,    89,   324,    89,    89,   164,   141,
     325,   174,   324,   192,   243,   144,   300,   144,   323,   149,
     247,   328,   160,   160,   301,   306,   308,   310,   302,   303,
     308,   302,   160,    56,    57,    59,   286,   294,    54,   244,
     247,   302,   304,   305,   308,   310,   160,    97,   192,   176,
     189,   113,   166,   189,   189,   168,   147,    89,   166,   189,
     166,   189,   168,   192,   204,   267,   328,    15,   239,   328,
      14,   238,   239,   239,   211,   213,   235,   144,   236,    94,
     188,   191,   202,   205,   235,   324,   165,   326,   165,   159,
     324,   235,   323,   298,   159,   326,   181,   160,   160,   189,
     245,    89,   323,   323,   242,   144,    97,   241,    54,   248,
     249,   299,   323,    10,   141,   144,   311,   144,   311,   144,
     311,   144,   311,   311,   141,   111,   247,   116,   144,   311,
     144,   311,   144,   311,    10,   192,   189,   166,   189,    90,
     268,   328,   160,     9,   269,   328,   165,   235,   235,   160,
     160,   192,   160,   193,   236,   237,   218,   326,   235,   323,
     235,   222,    10,   141,   160,   144,   242,   144,   300,   144,
     302,   308,   302,   302,    88,   223,   116,   305,   308,   302,
     304,   308,   302,    88,   178,   223,   291,   294,   236,   160,
     236,   235,   235,   239,   263,   264,   147,   160,   215,   159,
     297,   141,   242,   144,   249,   311,   144,   311,   311,   311,
      58,    87,   144,   311,   144,   311,   311,   144,   311,   311,
      58,    87,   142,   143,   160,   160,   239,   262,   265,   160,
     235,   159,   242,   302,    54,    58,   302,   308,   302,   302,
      54,    58,   196,    54,    58,   266,   238,   235,   235,   311,
     311,   144,   311,   311,   311,   324,   302,   311
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
#line 813 "parse.y"
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
#line 822 "parse.y"
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
#line 845 "parse.y"
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
#line 856 "parse.y"
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
#line 865 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = newline_node((yyvsp[(1) - (1)].node));
		    /*%
			$$ = dispatch2(stmts_add, dispatch0(stmts_new), $1);
		    %*/
		    ;}
    break;

  case 7:
#line 873 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = block_append((yyvsp[(1) - (3)].node), newline_node((yyvsp[(3) - (3)].node)));
		    /*%
			$$ = dispatch2(stmts_add, $1, $3);
		    %*/
		    ;}
    break;

  case 8:
#line 881 "parse.y"
    {
			(yyval.node) = remove_begin((yyvsp[(2) - (2)].node));
		    ;}
    break;

  case 10:
#line 888 "parse.y"
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
#line 898 "parse.y"
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
#line 915 "parse.y"
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
#line 945 "parse.y"
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
#line 956 "parse.y"
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
#line 965 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = newline_node((yyvsp[(1) - (1)].node));
		    /*%
			$$ = dispatch2(stmts_add, dispatch0(stmts_new), $1);
		    %*/
		    ;}
    break;

  case 16:
#line 973 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = block_append((yyvsp[(1) - (3)].node), newline_node((yyvsp[(3) - (3)].node)));
		    /*%
			$$ = dispatch2(stmts_add, $1, $3);
		    %*/
		    ;}
    break;

  case 17:
#line 981 "parse.y"
    {
			(yyval.node) = remove_begin((yyvsp[(2) - (2)].node));
		    ;}
    break;

  case 18:
#line 986 "parse.y"
    {lex_state = EXPR_FNAME;;}
    break;

  case 19:
#line 987 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_ALIAS((yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
		    /*%
			$$ = dispatch2(alias, $2, $4);
		    %*/
		    ;}
    break;

  case 20:
#line 995 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_VALIAS((yyvsp[(2) - (3)].id), (yyvsp[(3) - (3)].id));
		    /*%
			$$ = dispatch2(var_alias, $2, $3);
		    %*/
		    ;}
    break;

  case 21:
#line 1003 "parse.y"
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
#line 1014 "parse.y"
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
#line 1024 "parse.y"
    {
			 
			 infix_add_table = infix_ops_add(infix_add_table, (yyvsp[(2) - (2)].id));
			 //printf("id: %s\n", rb_id2name($2));
			 (yyval.node) = NEW_LIT(ID2SYM((yyvsp[(2) - (2)].id)));
			 //$$ = NEW_BEGIN(0);
		       ;}
    break;

  case 24:
#line 1032 "parse.y"
    {
			 infix_add_table = infix_ops_add2(infix_add_table, (yyvsp[(2) - (3)].id), (yyvsp[(3) - (3)].id));
			 (yyval.node) = NEW_BEGIN(0);
		       ;}
    break;

  case 25:
#line 1037 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = (yyvsp[(2) - (2)].node);
		    /*%
			$$ = dispatch1(undef, $2);
		    %*/
		    ;}
    break;

  case 26:
#line 1046 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_IF(cond((yyvsp[(3) - (3)].node)), remove_begin((yyvsp[(1) - (3)].node)), 0);
			fixpos((yyval.node), (yyvsp[(3) - (3)].node));
		    /*%
			$$ = dispatch2(if_mod, $3, $1);
		    %*/
		    ;}
    break;

  case 27:
#line 1055 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_UNLESS(cond((yyvsp[(3) - (3)].node)), remove_begin((yyvsp[(1) - (3)].node)), 0);
			fixpos((yyval.node), (yyvsp[(3) - (3)].node));
		    /*%
			$$ = dispatch2(unless_mod, $3, $1);
		    %*/
		    ;}
    break;

  case 28:
#line 1064 "parse.y"
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

  case 29:
#line 1077 "parse.y"
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

  case 30:
#line 1090 "parse.y"
    {
		    /*%%%*/
			NODE *resq = NEW_RESBODY(0, remove_begin((yyvsp[(3) - (3)].node)), 0);
			(yyval.node) = NEW_RESCUE(remove_begin((yyvsp[(1) - (3)].node)), resq, 0);
		    /*%
			$$ = dispatch2(rescue_mod, $3, $1);
		    %*/
		    ;}
    break;

  case 31:
#line 1099 "parse.y"
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

  case 32:
#line 1111 "parse.y"
    {
		    /*%%%*/
			value_expr((yyvsp[(3) - (3)].node));
			(yyval.node) = node_assign((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
		    /*%
			$$ = dispatch2(assign, $1, $3);
		    %*/
		    ;}
    break;

  case 33:
#line 1120 "parse.y"
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

  case 34:
#line 1130 "parse.y"
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

  case 35:
#line 1159 "parse.y"
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

  case 36:
#line 1180 "parse.y"
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

  case 37:
#line 1197 "parse.y"
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

  case 38:
#line 1214 "parse.y"
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

  case 39:
#line 1231 "parse.y"
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

  case 40:
#line 1241 "parse.y"
    {
		    /*%%%*/
		      
			value_expr((yyvsp[(3) - (3)].node));
			(yyval.node) = node_assign((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
		    /*%
			$$ = dispatch2(assign, $1, $3);
		    %*/
		    ;}
    break;

  case 41:
#line 1251 "parse.y"
    {
		    /*%%%*/
		      
			(yyvsp[(1) - (3)].node)->nd_value = (yyvsp[(3) - (3)].node);
			(yyval.node) = (yyvsp[(1) - (3)].node);
		    /*%
			$$ = dispatch2(massign, $1, $3);
		    %*/
		    ;}
    break;

  case 42:
#line 1261 "parse.y"
    {
		     
		    /*%%%*/
			(yyvsp[(1) - (3)].node)->nd_value = (yyvsp[(3) - (3)].node);
			(yyval.node) = (yyvsp[(1) - (3)].node);
		    /*%
			$$ = dispatch2(massign, $1, $3);
		    %*/
		    ;}
    break;

  case 45:
#line 1275 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = logop(NODE_AND, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
		    /*%
			$$ = dispatch3(binary, $1, ripper_intern("and"), $3);
		    %*/
		    ;}
    break;

  case 46:
#line 1283 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = logop(NODE_OR, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
		    /*%
			$$ = dispatch3(binary, $1, ripper_intern("or"), $3);
		    %*/
		    ;}
    break;

  case 47:
#line 1291 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = call_uni_op(cond((yyvsp[(3) - (3)].node)), '!');
		    /*%
			$$ = dispatch2(unary, ripper_intern("not"), $3);
		    %*/
		    ;}
    break;

  case 48:
#line 1299 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = call_uni_op(cond((yyvsp[(2) - (2)].node)), '!');
		    /*%
			$$ = dispatch2(unary, ripper_id2sym('!'), $2);
		    %*/
		    ;}
    break;

  case 50:
#line 1310 "parse.y"
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

  case 53:
#line 1324 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_RETURN(ret_args((yyvsp[(2) - (2)].node)));
		    /*%
			$$ = dispatch1(return, $2);
		    %*/
		    ;}
    break;

  case 54:
#line 1332 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_BREAK(ret_args((yyvsp[(2) - (2)].node)));
		    /*%
			$$ = dispatch1(break, $2);
		    %*/
		    ;}
    break;

  case 55:
#line 1340 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_NEXT(ret_args((yyvsp[(2) - (2)].node)));
		    /*%
			$$ = dispatch1(next, $2);
		    %*/
		    ;}
    break;

  case 57:
#line 1351 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_CALL((yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].id), (yyvsp[(4) - (4)].node));
		    /*%
			$$ = dispatch3(call, $1, ripper_id2sym('.'), $3);
			$$ = method_arg($$, $4);
		    %*/
		    ;}
    break;

  case 58:
#line 1360 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_CALL((yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].id), (yyvsp[(4) - (4)].node));
		    /*%
			$$ = dispatch3(call, $1, ripper_intern("::"), $3);
			$$ = method_arg($$, $4);
		    %*/
		    ;}
    break;

  case 59:
#line 1371 "parse.y"
    {
		    /*%%%*/
			dyna_push();
			(yyval.num) = ruby_sourceline;
		    /*%
		    %*/
		    ;}
    break;

  case 60:
#line 1381 "parse.y"
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

  case 61:
#line 1393 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_FCALL((yyvsp[(1) - (2)].id), (yyvsp[(2) - (2)].node));
			fixpos((yyval.node), (yyvsp[(2) - (2)].node));
		    /*%
			$$ = dispatch2(command, $1, $2);
		    %*/
		    ;}
    break;

  case 62:
#line 1402 "parse.y"
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

  case 63:
#line 1414 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_CALL((yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].id), (yyvsp[(4) - (4)].node));
			fixpos((yyval.node), (yyvsp[(1) - (4)].node));
		    /*%
			$$ = dispatch4(command_call, $1, ripper_id2sym('.'), $3, $4);
		    %*/
		    ;}
    break;

  case 64:
#line 1423 "parse.y"
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

  case 65:
#line 1435 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_CALL((yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].id), (yyvsp[(4) - (4)].node));
			fixpos((yyval.node), (yyvsp[(1) - (4)].node));
		    /*%
			$$ = dispatch4(command_call, $1, ripper_intern("::"), $3, $4);
		    %*/
		    ;}
    break;

  case 66:
#line 1444 "parse.y"
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

  case 67:
#line 1456 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_SUPER((yyvsp[(2) - (2)].node));
			fixpos((yyval.node), (yyvsp[(2) - (2)].node));
		    /*%
			$$ = dispatch1(super, $2);
		    %*/
		    ;}
    break;

  case 68:
#line 1465 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = new_yield((yyvsp[(2) - (2)].node));
			fixpos((yyval.node), (yyvsp[(2) - (2)].node));
		    /*%
			$$ = dispatch1(yield, $2);
		    %*/
		    ;}
    break;

  case 70:
#line 1477 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = (yyvsp[(2) - (3)].node);
		    /*%
			$$ = dispatch1(mlhs_paren, $2);
		    %*/
		    ;}
    break;

  case 72:
#line 1488 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_MASGN(NEW_LIST((yyvsp[(2) - (3)].node)), 0);
		    /*%
			$$ = dispatch1(mlhs_paren, $2);
		    %*/
		    ;}
    break;

  case 73:
#line 1498 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_MASGN((yyvsp[(1) - (1)].node), 0);
		    /*%
			$$ = $1;
		    %*/
		    ;}
    break;

  case 74:
#line 1506 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_MASGN(list_append((yyvsp[(1) - (2)].node),(yyvsp[(2) - (2)].node)), 0);
		    /*%
			$$ = mlhs_add($1, $2);
		    %*/
		    ;}
    break;

  case 75:
#line 1514 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_MASGN((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
		    /*%
			$$ = mlhs_add_star($1, $3);
		    %*/
		    ;}
    break;

  case 76:
#line 1522 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_MASGN((yyvsp[(1) - (5)].node), NEW_POSTARG((yyvsp[(3) - (5)].node),(yyvsp[(5) - (5)].node)));
		    /*%
			$$ = mlhs_add_star($1, $3);
		    %*/
		    ;}
    break;

  case 77:
#line 1530 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_MASGN((yyvsp[(1) - (2)].node), -1);
		    /*%
			$$ = mlhs_add_star($1, Qnil);
		    %*/
		    ;}
    break;

  case 78:
#line 1538 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_MASGN((yyvsp[(1) - (4)].node), NEW_POSTARG(-1, (yyvsp[(4) - (4)].node)));
		    /*%
			$$ = mlhs_add_star($1, Qnil);
		    %*/
		    ;}
    break;

  case 79:
#line 1546 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_MASGN(0, (yyvsp[(2) - (2)].node));
		    /*%
			$$ = mlhs_add_star(mlhs_new(), $2);
		    %*/
		    ;}
    break;

  case 80:
#line 1554 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_MASGN(0, NEW_POSTARG((yyvsp[(2) - (4)].node),(yyvsp[(4) - (4)].node)));
		    /*%
			$$ = mlhs_add_star(mlhs_new(), $2);
		    %*/
		    ;}
    break;

  case 81:
#line 1562 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_MASGN(0, -1);
		    /*%
			$$ = mlhs_add_star(mlhs_new(), Qnil);
		    %*/
		    ;}
    break;

  case 82:
#line 1570 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_MASGN(0, NEW_POSTARG(-1, (yyvsp[(3) - (3)].node)));
		    /*%
			$$ = mlhs_add_star(mlhs_new(), Qnil);
		    %*/
		    ;}
    break;

  case 84:
#line 1581 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = (yyvsp[(2) - (3)].node);
		    /*%
			$$ = dispatch1(mlhs_paren, $2);
		    %*/
		    ;}
    break;

  case 85:
#line 1591 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_LIST((yyvsp[(1) - (2)].node));
		    /*%
			$$ = mlhs_add(mlhs_new(), $1);
		    %*/
		    ;}
    break;

  case 86:
#line 1599 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = list_append((yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node));
		    /*%
			$$ = mlhs_add($1, $2);
		    %*/
		    ;}
    break;

  case 87:
#line 1609 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_LIST((yyvsp[(1) - (1)].node));
		    /*%
			$$ = mlhs_add(mlhs_new(), $1);
		    %*/
		    ;}
    break;

  case 88:
#line 1617 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = list_append((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
		    /*%
			$$ = mlhs_add($1, $3);
		    %*/
		    ;}
    break;

  case 89:
#line 1627 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = assignable((yyvsp[(1) - (1)].id), 0);
		    /*%
			$$ = $1;
		    %*/
		    ;}
    break;

  case 90:
#line 1635 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = aryset((yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].node));
		    /*%
			$$ = dispatch2(aref_field, $1, escape_Qundef($3));
		    %*/
		    ;}
    break;

  case 91:
#line 1643 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = attrset((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].id));
		    /*%
			$$ = dispatch3(field, $1, ripper_id2sym('.'), $3);
		    %*/
		    ;}
    break;

  case 92:
#line 1651 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = attrset((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].id));
		    /*%
			$$ = dispatch2(const_path_field, $1, $3);
		    %*/
		    ;}
    break;

  case 93:
#line 1659 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = attrset((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].id));
		    /*%
			$$ = dispatch3(field, $1, ripper_id2sym('.'), $3);
		    %*/
		    ;}
    break;

  case 94:
#line 1667 "parse.y"
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

  case 95:
#line 1679 "parse.y"
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

  case 96:
#line 1689 "parse.y"
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

  case 97:
#line 1701 "parse.y"
    {
		    /*%%%*/
			if (!((yyval.node) = assignable((yyvsp[(1) - (1)].id), 0))) (yyval.node) = NEW_BEGIN(0);
		    /*%
			$$ = dispatch1(var_field, $1);
		    %*/
		    ;}
    break;

  case 98:
#line 1709 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = aryset((yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].node));
		    /*%
			$$ = dispatch2(aref_field, $1, escape_Qundef($3));
		    %*/
		    ;}
    break;

  case 99:
#line 1717 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = attrset((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].id));
		    /*%
			$$ = dispatch3(field, $1, ripper_id2sym('.'), $3);
		    %*/
		    ;}
    break;

  case 100:
#line 1725 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = attrset((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].id));
		    /*%
			$$ = dispatch3(field, $1, ripper_intern("::"), $3);
		    %*/
		    ;}
    break;

  case 101:
#line 1733 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = attrset((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].id));
		    /*%
			$$ = dispatch3(field, $1, ripper_id2sym('.'), $3);
		    %*/
		    ;}
    break;

  case 102:
#line 1741 "parse.y"
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

  case 103:
#line 1754 "parse.y"
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

  case 104:
#line 1767 "parse.y"
    {
		    /*%%%*/
			rb_backref_error((yyvsp[(1) - (1)].node));
			(yyval.node) = NEW_BEGIN(0);
		    /*%
			$$ = dispatch1(assign_error, $1);
		    %*/
		    ;}
    break;

  case 105:
#line 1778 "parse.y"
    {
		    /*%%%*/
			yyerror("class/module name must be CONSTANT");
		    /*%
			$$ = dispatch1(class_name_error, $1);
		    %*/
		    ;}
    break;

  case 107:
#line 1789 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_COLON3((yyvsp[(2) - (2)].id));
		    /*%
			$$ = dispatch1(top_const_ref, $2);
		    %*/
		    ;}
    break;

  case 108:
#line 1797 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_COLON2(0, (yyval.node));
		    /*%
			$$ = dispatch1(const_ref, $1);
		    %*/
		    ;}
    break;

  case 109:
#line 1805 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_COLON2((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].id));
		    /*%
			$$ = dispatch2(const_path_ref, $1, $3);
		    %*/
		    ;}
    break;

  case 113:
#line 1818 "parse.y"
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

  case 114:
#line 1828 "parse.y"
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

  case 117:
#line 1844 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_LIT(ID2SYM((yyvsp[(1) - (1)].id)));
		    /*%
			$$ = dispatch1(symbol_literal, $1);
		    %*/
		    ;}
    break;

  case 119:
#line 1855 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_UNDEF((yyvsp[(1) - (1)].node));
		    /*%
			$$ = rb_ary_new3(1, $1);
		    %*/
		    ;}
    break;

  case 120:
#line 1862 "parse.y"
    {lex_state = EXPR_FNAME;;}
    break;

  case 121:
#line 1863 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = block_append((yyvsp[(1) - (4)].node), NEW_UNDEF((yyvsp[(4) - (4)].node)));
		    /*%
			rb_ary_push($1, $4);
		    %*/
		    ;}
    break;

  case 122:
#line 1872 "parse.y"
    { ifndef_ripper((yyval.id) = '|'); ;}
    break;

  case 123:
#line 1873 "parse.y"
    { ifndef_ripper((yyval.id) = '^'); ;}
    break;

  case 124:
#line 1874 "parse.y"
    { ifndef_ripper((yyval.id) = '&'); ;}
    break;

  case 125:
#line 1875 "parse.y"
    { ifndef_ripper((yyval.id) = tCMP); ;}
    break;

  case 126:
#line 1876 "parse.y"
    { ifndef_ripper((yyval.id) = tEQ); ;}
    break;

  case 127:
#line 1877 "parse.y"
    { ifndef_ripper((yyval.id) = tEQQ); ;}
    break;

  case 128:
#line 1878 "parse.y"
    { ifndef_ripper((yyval.id) = tMATCH); ;}
    break;

  case 129:
#line 1879 "parse.y"
    { ifndef_ripper((yyval.id) = tNMATCH); ;}
    break;

  case 130:
#line 1880 "parse.y"
    { ifndef_ripper((yyval.id) = '>'); ;}
    break;

  case 131:
#line 1881 "parse.y"
    { ifndef_ripper((yyval.id) = tGEQ); ;}
    break;

  case 132:
#line 1882 "parse.y"
    { ifndef_ripper((yyval.id) = '<'); ;}
    break;

  case 133:
#line 1883 "parse.y"
    { ifndef_ripper((yyval.id) = tLEQ); ;}
    break;

  case 134:
#line 1884 "parse.y"
    { ifndef_ripper((yyval.id) = tNEQ); ;}
    break;

  case 135:
#line 1885 "parse.y"
    { ifndef_ripper((yyval.id) = tLSHFT); ;}
    break;

  case 136:
#line 1886 "parse.y"
    { ifndef_ripper((yyval.id) = tRSHFT); ;}
    break;

  case 137:
#line 1887 "parse.y"
    { ifndef_ripper((yyval.id) = '+'); ;}
    break;

  case 138:
#line 1888 "parse.y"
    { ifndef_ripper((yyval.id) = '-'); ;}
    break;

  case 139:
#line 1889 "parse.y"
    { ifndef_ripper((yyval.id) = tINFIX_OP);;}
    break;

  case 140:
#line 1890 "parse.y"
    { ifndef_ripper((yyval.id) = '*'); ;}
    break;

  case 141:
#line 1891 "parse.y"
    { ifndef_ripper((yyval.id) = '*'); ;}
    break;

  case 142:
#line 1892 "parse.y"
    { ifndef_ripper((yyval.id) = '/'); ;}
    break;

  case 143:
#line 1893 "parse.y"
    { ifndef_ripper((yyval.id) = '%'); ;}
    break;

  case 144:
#line 1894 "parse.y"
    { ifndef_ripper((yyval.id) = tPOW); ;}
    break;

  case 145:
#line 1895 "parse.y"
    { ifndef_ripper((yyval.id) = '!'); ;}
    break;

  case 146:
#line 1896 "parse.y"
    { ifndef_ripper((yyval.id) = '~'); ;}
    break;

  case 147:
#line 1897 "parse.y"
    { ifndef_ripper((yyval.id) = tUPLUS); ;}
    break;

  case 148:
#line 1898 "parse.y"
    { ifndef_ripper((yyval.id) = tUMINUS); ;}
    break;

  case 149:
#line 1899 "parse.y"
    { ifndef_ripper((yyval.id) = tAREF); ;}
    break;

  case 150:
#line 1900 "parse.y"
    { ifndef_ripper((yyval.id) = tASET); ;}
    break;

  case 151:
#line 1901 "parse.y"
    { ifndef_ripper((yyval.id) = '`'); ;}
    break;

  case 195:
#line 1919 "parse.y"
    {
			(yyval.node) = (yyvsp[(1) - (1)].node);
		    ;}
    break;

  case 196:
#line 1931 "parse.y"
    {
		    /*%%%*/
		      
			value_expr((yyvsp[(3) - (3)].node));
			(yyval.node) = node_assign((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
		    /*%
			$$ = dispatch2(assign, $1, $3);
		    %*/
		    ;}
    break;

  case 197:
#line 1941 "parse.y"
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

  case 198:
#line 1951 "parse.y"
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

  case 199:
#line 1980 "parse.y"
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

  case 200:
#line 2011 "parse.y"
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

  case 201:
#line 2032 "parse.y"
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

  case 202:
#line 2049 "parse.y"
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

  case 203:
#line 2066 "parse.y"
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

  case 204:
#line 2083 "parse.y"
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

  case 205:
#line 2094 "parse.y"
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

  case 206:
#line 2105 "parse.y"
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

  case 207:
#line 2116 "parse.y"
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

  case 208:
#line 2130 "parse.y"
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

  case 209:
#line 2144 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = call_bin_op((yyvsp[(1) - (3)].node), '+', (yyvsp[(3) - (3)].node));
		    /*%
			$$ = dispatch3(binary, $1, ID2SYM('+'), $3);
		    %*/
		    ;}
    break;

  case 210:
#line 2153 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = call_bin_op((yyvsp[(1) - (3)].node), '-', (yyvsp[(3) - (3)].node));
		    /*%
			$$ = dispatch3(binary, $1, ID2SYM('-'), $3);
		    %*/
		    ;}
    break;

  case 211:
#line 2161 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = call_bin_op((yyvsp[(1) - (3)].node), '*', (yyvsp[(3) - (3)].node));
		    /*%
			$$ = dispatch3(binary, $1, ID2SYM('*'), $3);
		    %*/
		    ;}
    break;

  case 212:
#line 2169 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = call_bin_op((yyvsp[(1) - (3)].node), '/', (yyvsp[(3) - (3)].node));
		    /*%
			$$ = dispatch3(binary, $1, ID2SYM('/'), $3);
		    %*/
		    ;}
    break;

  case 213:
#line 2177 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = call_bin_op((yyvsp[(1) - (3)].node), '%', (yyvsp[(3) - (3)].node));
		    /*%
			$$ = dispatch3(binary, $1, ID2SYM('%'), $3);
		    %*/
		    ;}
    break;

  case 214:
#line 2185 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = call_bin_op((yyvsp[(1) - (3)].node), tPOW, (yyvsp[(3) - (3)].node));
		    /*%
			$$ = dispatch3(binary, $1, ripper_intern("**"), $3);
		    %*/
		    ;}
    break;

  case 215:
#line 2193 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_CALL(call_bin_op((yyvsp[(2) - (4)].node), tPOW, (yyvsp[(4) - (4)].node)), tUMINUS, 0);
		    /*%
			$$ = dispatch3(binary, $2, ripper_intern("**"), $4);
			$$ = dispatch2(unary, ripper_intern("-@"), $$);
		    %*/
		    ;}
    break;

  case 216:
#line 2202 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_CALL(call_bin_op((yyvsp[(2) - (4)].node), tPOW, (yyvsp[(4) - (4)].node)), tUMINUS, 0);
		    /*%
			$$ = dispatch3(binary, $2, ripper_intern("**"), $4);
			$$ = dispatch2(unary, ripper_intern("-@"), $$);
		    %*/
		    ;}
    break;

  case 217:
#line 2211 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = call_uni_op((yyvsp[(2) - (2)].node), tUPLUS);
		    /*%
			$$ = dispatch2(unary, ripper_intern("+@"), $2);
		    %*/
		    ;}
    break;

  case 218:
#line 2219 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = call_uni_op((yyvsp[(2) - (2)].node), tUMINUS);
		    /*%
			$$ = dispatch2(unary, ripper_intern("-@"), $2);
		    %*/
		    ;}
    break;

  case 219:
#line 2227 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = call_bin_op((yyvsp[(1) - (3)].node), '|', (yyvsp[(3) - (3)].node));
		    /*%
			$$ = dispatch3(binary, $1, ID2SYM('|'), $3);
		    %*/
		    ;}
    break;

  case 220:
#line 2235 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = call_bin_op((yyvsp[(1) - (3)].node), '^', (yyvsp[(3) - (3)].node));
		    /*%
			$$ = dispatch3(binary, $1, ID2SYM('^'), $3);
		    %*/
		    ;}
    break;

  case 221:
#line 2243 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = call_bin_op((yyvsp[(1) - (3)].node), '&', (yyvsp[(3) - (3)].node));
		    /*%
			$$ = dispatch3(binary, $1, ID2SYM('&'), $3);
		    %*/
		    ;}
    break;

  case 222:
#line 2251 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = call_bin_op((yyvsp[(1) - (3)].node), tCMP, (yyvsp[(3) - (3)].node));
		    /*%
			$$ = dispatch3(binary, $1, ripper_intern("<=>"), $3);
		    %*/
		    ;}
    break;

  case 223:
#line 2259 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = call_bin_op((yyvsp[(1) - (3)].node), '>', (yyvsp[(3) - (3)].node));
		    /*%
			$$ = dispatch3(binary, $1, ID2SYM('>'), $3);
		    %*/
		    ;}
    break;

  case 224:
#line 2267 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = call_bin_op((yyvsp[(1) - (3)].node), tGEQ, (yyvsp[(3) - (3)].node));
		    /*%
			$$ = dispatch3(binary, $1, ripper_intern(">="), $3);
		    %*/
		    ;}
    break;

  case 225:
#line 2275 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = call_bin_op((yyvsp[(1) - (3)].node), '<', (yyvsp[(3) - (3)].node));
		    /*%
			$$ = dispatch3(binary, $1, ID2SYM('<'), $3);
		    %*/
		    ;}
    break;

  case 226:
#line 2283 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = call_bin_op((yyvsp[(1) - (3)].node), tLEQ, (yyvsp[(3) - (3)].node));
		    /*%
			$$ = dispatch3(binary, $1, ripper_intern("<="), $3);
		    %*/
		    ;}
    break;

  case 227:
#line 2291 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = call_bin_op((yyvsp[(1) - (3)].node), tEQ, (yyvsp[(3) - (3)].node));
		    /*%
			$$ = dispatch3(binary, $1, ripper_intern("=="), $3);
		    %*/
		    ;}
    break;

  case 228:
#line 2299 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = call_bin_op((yyvsp[(1) - (3)].node), tEQQ, (yyvsp[(3) - (3)].node));
		    /*%
			$$ = dispatch3(binary, $1, ripper_intern("==="), $3);
		    %*/
		    ;}
    break;

  case 229:
#line 2307 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = call_bin_op((yyvsp[(1) - (3)].node), tNEQ, (yyvsp[(3) - (3)].node));
		    /*%
			$$ = dispatch3(binary, $1, ripper_intern("!="), $3);
		    %*/
		    ;}
    break;

  case 230:
#line 2315 "parse.y"
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

  case 231:
#line 2326 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = call_bin_op((yyvsp[(1) - (3)].node), tNMATCH, (yyvsp[(3) - (3)].node));
		    /*%
			$$ = dispatch3(binary, $1, ripper_intern("!~"), $3);
		    %*/
		    ;}
    break;

  case 232:
#line 2334 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = call_uni_op(cond((yyvsp[(2) - (2)].node)), '!');
		    /*%
			$$ = dispatch2(unary, ID2SYM('!'), $2);
		    %*/
		    ;}
    break;

  case 233:
#line 2342 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = call_uni_op((yyvsp[(2) - (2)].node), '~');
		    /*%
			$$ = dispatch2(unary, ID2SYM('~'), $2);
		    %*/
		    ;}
    break;

  case 234:
#line 2350 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = call_bin_op((yyvsp[(1) - (3)].node), tLSHFT, (yyvsp[(3) - (3)].node));
		    /*%
			$$ = dispatch3(binary, $1, ripper_intern("<<"), $3);
		    %*/
		    ;}
    break;

  case 235:
#line 2358 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = call_bin_op((yyvsp[(1) - (3)].node), tRSHFT, (yyvsp[(3) - (3)].node));
		    /*%
			$$ = dispatch3(binary, $1, ripper_intern(">>"), $3);
		    %*/
		    ;}
    break;

  case 236:
#line 2366 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = logop(NODE_AND, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
		    /*%
			$$ = dispatch3(binary, $1, ripper_intern("&&"), $3);
		    %*/
		    ;}
    break;

  case 237:
#line 2374 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = logop(NODE_OR, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
		    /*%
			$$ = dispatch3(binary, $1, ripper_intern("||"), $3);
		    %*/
		    ;}
    break;

  case 238:
#line 2381 "parse.y"
    {in_defined = 1;;}
    break;

  case 239:
#line 2382 "parse.y"
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

  case 240:
#line 2392 "parse.y"
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

  case 241:
#line 2402 "parse.y"
    {
		      (yyval.node) = call_bin_op((yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].id), (yyvsp[(3) - (3)].node));
		    ;}
    break;

  case 242:
#line 2406 "parse.y"
    {
			(yyval.node) = (yyvsp[(1) - (1)].node);
		    ;}
    break;

  case 243:
#line 2413 "parse.y"
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

  case 244:
#line 2424 "parse.y"
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

  case 246:
#line 2438 "parse.y"
    {
			(yyval.node) = (yyvsp[(1) - (2)].node);
		    ;}
    break;

  case 247:
#line 2442 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = arg_append((yyvsp[(1) - (4)].node), NEW_HASH((yyvsp[(3) - (4)].node)));
		    /*%
			$$ = arg_add_assocs($1, $3);
		    %*/
		    ;}
    break;

  case 248:
#line 2450 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_LIST(NEW_HASH((yyvsp[(1) - (2)].node)));
		    /*%
			$$ = arg_add_assocs(arg_new(), $1);
		    %*/
		    ;}
    break;

  case 249:
#line 2460 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = (yyvsp[(2) - (3)].node);
		    /*%
			$$ = dispatch1(arg_paren, escape_Qundef($2));
		    %*/
		    ;}
    break;

  case 254:
#line 2478 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_LIST((yyvsp[(1) - (1)].node));
		    /*%
			$$ = arg_add(arg_new(), $1);
		    %*/
		    ;}
    break;

  case 255:
#line 2486 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = arg_blk_pass((yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
		    /*%
			$$ = arg_add_optblock($1, $2);
		    %*/
		    ;}
    break;

  case 256:
#line 2494 "parse.y"
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

  case 257:
#line 2504 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = arg_append((yyvsp[(1) - (4)].node), NEW_HASH((yyvsp[(3) - (4)].node)));
			(yyval.node) = arg_blk_pass((yyval.node), (yyvsp[(4) - (4)].node));
		    /*%
			$$ = arg_add_optblock(arg_add_assocs($1, $3), $4);
		    %*/
		    ;}
    break;

  case 259:
#line 2521 "parse.y"
    {
			(yyval.num) = cmdarg_stack;
			CMDARG_PUSH(1);
		    ;}
    break;

  case 260:
#line 2526 "parse.y"
    {
			/* CMDARG_POP() */
			cmdarg_stack = (yyvsp[(1) - (2)].num);
			(yyval.node) = (yyvsp[(2) - (2)].node);
		    ;}
    break;

  case 261:
#line 2534 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_BLOCK_PASS((yyvsp[(2) - (2)].node));
		    /*%
			$$ = $2;
		    %*/
		    ;}
    break;

  case 262:
#line 2544 "parse.y"
    {
			(yyval.node) = (yyvsp[(2) - (2)].node);
		    ;}
    break;

  case 263:
#line 2548 "parse.y"
    {
			(yyval.node) = 0;
		    ;}
    break;

  case 264:
#line 2552 "parse.y"
    {
			(yyval.node) = 0;
		    ;}
    break;

  case 265:
#line 2557 "parse.y"
    {
		    /*%%%*/
		      patern_match_set=0;
			(yyval.node) = NEW_LIST((yyvsp[(1) - (1)].node));
		    /*%
			$$ = arg_add(arg_new(), $1);
		    %*/
		    ;}
    break;

  case 266:
#line 2568 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_LIST((yyvsp[(1) - (1)].node));
		    /*%
			$$ = arg_add(arg_new(), $1);
		    %*/
		    ;}
    break;

  case 267:
#line 2576 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_SPLAT((yyvsp[(2) - (2)].node));
		    /*%
			$$ = arg_add_star(arg_new(), $2);
		    %*/
		    ;}
    break;

  case 268:
#line 2584 "parse.y"
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

  case 269:
#line 2598 "parse.y"
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

  case 270:
#line 2614 "parse.y"
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

  case 271:
#line 2628 "parse.y"
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

  case 272:
#line 2643 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_SPLAT((yyvsp[(2) - (2)].node));
		    /*%
			$$ = mrhs_add_star(mrhs_new(), $2);
		    %*/
		    ;}
    break;

  case 273:
#line 2652 "parse.y"
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

  case 282:
#line 2674 "parse.y"
    {
		    /*%%%*/
		     
			(yyval.node) = NEW_FCALL((yyvsp[(1) - (1)].id), 0);
		    /*%
			$$ = method_arg(dispatch1(fcall, $1), arg_new());
		    %*/
		    ;}
    break;

  case 283:
#line 2683 "parse.y"
    {
		    /*%%%*/
			(yyval.num) = ruby_sourceline;
		    /*%
		    %*/
		    ;}
    break;

  case 284:
#line 2691 "parse.y"
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

  case 285:
#line 2707 "parse.y"
    {lex_state = EXPR_ENDARG;;}
    break;

  case 286:
#line 2708 "parse.y"
    {
			rb_warning0("(...) interpreted as grouped expression");
		    /*%%%*/
			(yyval.node) = (yyvsp[(2) - (4)].node);
		    /*%
			$$ = dispatch1(paren, $2);
		    %*/
		    ;}
    break;

  case 287:
#line 2717 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = (yyvsp[(2) - (3)].node);
		    /*%
			$$ = dispatch1(paren, $2);
		    %*/
		    ;}
    break;

  case 288:
#line 2725 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_COLON2((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].id));
		    /*%
			$$ = dispatch2(const_path_ref, $1, $3);
		    %*/
		    ;}
    break;

  case 289:
#line 2733 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_COLON3((yyvsp[(2) - (2)].id));
		    /*%
			$$ = dispatch1(top_const_ref, $2);
		    %*/
		    ;}
    break;

  case 290:
#line 2741 "parse.y"
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

  case 291:
#line 2754 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_HASH((yyvsp[(2) - (3)].node));
		    /*%
			$$ = dispatch1(hash, escape_Qundef($2));
		    %*/
		    ;}
    break;

  case 292:
#line 2762 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_RETURN(0);
		    /*%
			$$ = dispatch0(return0);
		    %*/
		    ;}
    break;

  case 293:
#line 2770 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = new_yield((yyvsp[(3) - (4)].node));
		    /*%
			$$ = dispatch1(yield, dispatch1(paren, $3));
		    %*/
		    ;}
    break;

  case 294:
#line 2778 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_YIELD(0, Qfalse);
		    /*%
			$$ = dispatch1(yield, dispatch1(paren, arg_new()));
		    %*/
		    ;}
    break;

  case 295:
#line 2786 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_YIELD(0, Qfalse);
		    /*%
			$$ = dispatch0(yield0);
		    %*/
		    ;}
    break;

  case 296:
#line 2793 "parse.y"
    {in_defined = 1;;}
    break;

  case 297:
#line 2794 "parse.y"
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

  case 298:
#line 2804 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = call_uni_op(cond((yyvsp[(3) - (4)].node)), '!');
		    /*%
			$$ = dispatch2(unary, ripper_intern("not"), $3);
		    %*/
		    ;}
    break;

  case 299:
#line 2812 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = call_uni_op(cond(NEW_NIL()), '!');
		    /*%
			$$ = dispatch2(unary, ripper_intern("not"), Qnil);
		    %*/
		    ;}
    break;

  case 300:
#line 2820 "parse.y"
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

  case 302:
#line 2833 "parse.y"
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

  case 303:
#line 2844 "parse.y"
    {
			(yyval.node) = (yyvsp[(2) - (2)].node);
		    ;}
    break;

  case 304:
#line 2851 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_IF(cond((yyvsp[(2) - (6)].node)), (yyvsp[(4) - (6)].node), (yyvsp[(5) - (6)].node));
			fixpos((yyval.node), (yyvsp[(2) - (6)].node));
		    /*%
			$$ = dispatch3(if, $2, $4, escape_Qundef($5));
		    %*/
		    ;}
    break;

  case 305:
#line 2863 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_UNLESS(cond((yyvsp[(2) - (6)].node)), (yyvsp[(4) - (6)].node), (yyvsp[(5) - (6)].node));
			fixpos((yyval.node), (yyvsp[(2) - (6)].node));
		    /*%
			$$ = dispatch3(unless, $2, $4, escape_Qundef($5));
		    %*/
		    ;}
    break;

  case 306:
#line 2871 "parse.y"
    {COND_PUSH(1);;}
    break;

  case 307:
#line 2871 "parse.y"
    {COND_POP();;}
    break;

  case 308:
#line 2874 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_WHILE(cond((yyvsp[(3) - (7)].node)), (yyvsp[(6) - (7)].node), 1);
			fixpos((yyval.node), (yyvsp[(3) - (7)].node));
		    /*%
			$$ = dispatch2(while, $3, $6);
		    %*/
		    ;}
    break;

  case 309:
#line 2882 "parse.y"
    {COND_PUSH(1);;}
    break;

  case 310:
#line 2882 "parse.y"
    {COND_POP();;}
    break;

  case 311:
#line 2885 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_UNTIL(cond((yyvsp[(3) - (7)].node)), (yyvsp[(6) - (7)].node), 1);
			fixpos((yyval.node), (yyvsp[(3) - (7)].node));
		    /*%
			$$ = dispatch2(until, $3, $6);
		    %*/
		    ;}
    break;

  case 312:
#line 2896 "parse.y"
    {
		    /*%%%*/
		      //ID id = rb_intern("condmatch");
		      
		      (yyval.node) = NEW_PATERN((yyvsp[(2) - (5)].node), (yyvsp[(4) - (5)].node));
		      /*if(!local_id(id)){
			local_var(id);
		      }
		      $$ = NEW_PATERN(assignable(id, $2), $4);*/
		      fixpos((yyval.node), (yyvsp[(2) - (5)].node));
		    /*%
			$$ = dispatch2(case, $2, $4);
		    %*/
		    ;}
    break;

  case 313:
#line 2914 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_CASE((yyvsp[(2) - (5)].node), (yyvsp[(4) - (5)].node));
			fixpos((yyval.node), (yyvsp[(2) - (5)].node));
		    /*%
			$$ = dispatch2(case, $2, $4);
		    %*/
		    ;}
    break;

  case 314:
#line 2923 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_CASE(0, (yyvsp[(3) - (4)].node));
		    /*%
			$$ = dispatch2(case, Qnil, $3);
		    %*/
		    ;}
    break;

  case 315:
#line 2931 "parse.y"
    {COND_PUSH(1);;}
    break;

  case 316:
#line 2933 "parse.y"
    {COND_POP();;}
    break;

  case 317:
#line 2936 "parse.y"
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

  case 318:
#line 2997 "parse.y"
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

  case 319:
#line 3008 "parse.y"
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

  case 320:
#line 3018 "parse.y"
    {
			(yyval.num) = in_def;
			in_def = 0;
		    ;}
    break;

  case 321:
#line 3023 "parse.y"
    {
			(yyval.num) = in_single;
			in_single = 0;
		    /*%%%*/
			local_push(0);
		    /*%
		    %*/
		    ;}
    break;

  case 322:
#line 3033 "parse.y"
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

  case 323:
#line 3045 "parse.y"
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

  case 324:
#line 3056 "parse.y"
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

  case 325:
#line 3066 "parse.y"
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

  case 326:
#line 3078 "parse.y"
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

  case 327:
#line 3092 "parse.y"
    {lex_state = EXPR_FNAME;;}
    break;

  case 328:
#line 3093 "parse.y"
    {
			in_single++;
			lex_state = EXPR_END; /* force for args */
		    /*%%%*/
			local_push(0);
		    /*%
		    %*/
		    ;}
    break;

  case 329:
#line 3104 "parse.y"
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

  case 330:
#line 3118 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_BREAK(0);
		    /*%
			$$ = dispatch1(break, arg_new());
		    %*/
		    ;}
    break;

  case 331:
#line 3126 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_NEXT(0);
		    /*%
			$$ = dispatch1(next, arg_new());
		    %*/
		    ;}
    break;

  case 332:
#line 3134 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_REDO();
		    /*%
			$$ = dispatch0(redo);
		    %*/
		    ;}
    break;

  case 333:
#line 3142 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_RETRY();
		    /*%
			$$ = dispatch0(retry);
		    %*/
		    ;}
    break;

  case 334:
#line 3152 "parse.y"
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

  case 335:
#line 3164 "parse.y"
    {
#ifndef RIPPER
			if (RTEST(ruby_verbose)) token_info_push(parser, "begin");
#endif
		    ;}
    break;

  case 336:
#line 3171 "parse.y"
    {
#ifndef RIPPER
			if (RTEST(ruby_verbose)) token_info_push(parser, "if");
#endif
		    ;}
    break;

  case 337:
#line 3178 "parse.y"
    {
#ifndef RIPPER
			if (RTEST(ruby_verbose)) token_info_push(parser, "unless");
#endif
		    ;}
    break;

  case 338:
#line 3185 "parse.y"
    {
#ifndef RIPPER
			if (RTEST(ruby_verbose)) token_info_push(parser, "while");
#endif
		    ;}
    break;

  case 339:
#line 3192 "parse.y"
    {
#ifndef RIPPER
			if (RTEST(ruby_verbose)) token_info_push(parser, "until");
#endif
		    ;}
    break;

  case 340:
#line 3199 "parse.y"
    {
#ifndef RIPPER
			if (RTEST(ruby_verbose)) token_info_push(parser, "case");
#endif
		    ;}
    break;

  case 341:
#line 3205 "parse.y"
    {
#ifndef RIPPER
                  if (RTEST(ruby_verbose)) token_info_push(parser, "match");
#endif
                  ;}
    break;

  case 342:
#line 3211 "parse.y"
    {
#ifndef RIPPER
			if (RTEST(ruby_verbose)) token_info_push(parser, "for");
#endif
		    ;}
    break;

  case 343:
#line 3218 "parse.y"
    {
#ifndef RIPPER
			if (RTEST(ruby_verbose)) token_info_push(parser, "class");
#endif
		    ;}
    break;

  case 344:
#line 3225 "parse.y"
    {
#ifndef RIPPER
			if (RTEST(ruby_verbose)) token_info_push(parser, "module");
#endif
		    ;}
    break;

  case 345:
#line 3232 "parse.y"
    {
#ifndef RIPPER
			if (RTEST(ruby_verbose)) token_info_push(parser, "def");
#endif
		    ;}
    break;

  case 346:
#line 3239 "parse.y"
    {
#ifndef RIPPER
			if (RTEST(ruby_verbose)) token_info_pop(parser, "end");  /* POP */
#endif
		    ;}
    break;

  case 353:
#line 3270 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_IF(cond((yyvsp[(2) - (5)].node)), (yyvsp[(4) - (5)].node), (yyvsp[(5) - (5)].node));
			fixpos((yyval.node), (yyvsp[(2) - (5)].node));
		    /*%
			$$ = dispatch3(elsif, $2, $4, escape_Qundef($5));
		    %*/
		    ;}
    break;

  case 355:
#line 3282 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = (yyvsp[(2) - (2)].node);
		    /*%
			$$ = dispatch1(else, $2);
		    %*/
		    ;}
    break;

  case 358:
#line 3296 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = assignable((yyvsp[(1) - (1)].id), 0);
		    /*%
			$$ = dispatch1(mlhs_paren, $1);
		    %*/
		    ;}
    break;

  case 359:
#line 3304 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = (yyvsp[(2) - (3)].node);
		    /*%
			$$ = dispatch1(mlhs_paren, $2);
		    %*/
		    ;}
    break;

  case 360:
#line 3314 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_LIST((yyvsp[(1) - (1)].node));
		    /*%
			$$ = mlhs_add(mlhs_new(), $1);
		    %*/
		    ;}
    break;

  case 361:
#line 3322 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = list_append((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
		    /*%
			$$ = mlhs_add($1, $3);
		    %*/
		    ;}
    break;

  case 362:
#line 3332 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_MASGN((yyvsp[(1) - (1)].node), 0);
		    /*%
			$$ = $1;
		    %*/
		    ;}
    break;

  case 363:
#line 3340 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_MASGN((yyvsp[(1) - (4)].node), assignable((yyvsp[(4) - (4)].id), 0));
		    /*%
			$$ = mlhs_add_star($1, $4);
		    %*/
		    ;}
    break;

  case 364:
#line 3348 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_MASGN((yyvsp[(1) - (6)].node), NEW_POSTARG(assignable((yyvsp[(4) - (6)].id), 0), (yyvsp[(6) - (6)].node)));
		    /*%
			$$ = mlhs_add_star($1, $4);
		    %*/
		    ;}
    break;

  case 365:
#line 3356 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_MASGN((yyvsp[(1) - (3)].node), -1);
		    /*%
			$$ = mlhs_add_star($1, Qnil);
		    %*/
		    ;}
    break;

  case 366:
#line 3364 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_MASGN((yyvsp[(1) - (5)].node), NEW_POSTARG(-1, (yyvsp[(5) - (5)].node)));
		    /*%
			$$ = mlhs_add_star($1, $5);
		    %*/
		    ;}
    break;

  case 367:
#line 3372 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_MASGN(0, assignable((yyvsp[(2) - (2)].id), 0));
		    /*%
			$$ = mlhs_add_star(mlhs_new(), $2);
		    %*/
		    ;}
    break;

  case 368:
#line 3380 "parse.y"
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

  case 369:
#line 3391 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_MASGN(0, -1);
		    /*%
			$$ = mlhs_add_star(mlhs_new(), Qnil);
		    %*/
		    ;}
    break;

  case 370:
#line 3399 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_MASGN(0, NEW_POSTARG(-1, (yyvsp[(3) - (3)].node)));
		    /*%
			$$ = mlhs_add_star(mlhs_new(), Qnil);
		    %*/
		    ;}
    break;

  case 371:
#line 3409 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = new_args((yyvsp[(1) - (6)].node), (yyvsp[(3) - (6)].node), (yyvsp[(5) - (6)].id), 0, (yyvsp[(6) - (6)].id));
		    /*%
			$$ = params_new($1, $3, $5, Qnil, escape_Qundef($6));
		    %*/
		    ;}
    break;

  case 372:
#line 3417 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = new_args((yyvsp[(1) - (8)].node), (yyvsp[(3) - (8)].node), (yyvsp[(5) - (8)].id), (yyvsp[(7) - (8)].node), (yyvsp[(8) - (8)].id));
		    /*%
			$$ = params_new($1, $3, $5, $7, escape_Qundef($8));
		    %*/
		    ;}
    break;

  case 373:
#line 3425 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = new_args((yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].node), 0, 0, (yyvsp[(4) - (4)].id));
		    /*%
			$$ = params_new($1, $3, Qnil, Qnil, escape_Qundef($4));
		    %*/
		    ;}
    break;

  case 374:
#line 3433 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = new_args((yyvsp[(1) - (6)].node), (yyvsp[(3) - (6)].node), 0, (yyvsp[(5) - (6)].node), (yyvsp[(6) - (6)].id));
		    /*%
			$$ = params_new($1, $3, Qnil, $5, escape_Qundef($6));
		    %*/
		    ;}
    break;

  case 375:
#line 3441 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = new_args((yyvsp[(1) - (4)].node), 0, (yyvsp[(3) - (4)].id), 0, (yyvsp[(4) - (4)].id));
		    /*%
			$$ = params_new($1, Qnil, $3, Qnil, escape_Qundef($4));
		    %*/
		    ;}
    break;

  case 376:
#line 3449 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = new_args((yyvsp[(1) - (2)].node), 0, 1, 0, 0);
		    /*%
			$$ = params_new($1, Qnil, Qnil, Qnil, Qnil);
                        dispatch1(excessed_comma, $$);
		    %*/
		    ;}
    break;

  case 377:
#line 3458 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = new_args((yyvsp[(1) - (6)].node), 0, (yyvsp[(3) - (6)].id), (yyvsp[(5) - (6)].node), (yyvsp[(6) - (6)].id));
		    /*%
			$$ = params_new($1, Qnil, $3, $5, escape_Qundef($6));
		    %*/
		    ;}
    break;

  case 378:
#line 3466 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = new_args((yyvsp[(1) - (2)].node), 0, 0, 0, (yyvsp[(2) - (2)].id));
		    /*%
			$$ = params_new($1, Qnil,Qnil, Qnil, escape_Qundef($2));
		    %*/
		    ;}
    break;

  case 379:
#line 3474 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = new_args(0, (yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].id), 0, (yyvsp[(4) - (4)].id));
		    /*%
			$$ = params_new(Qnil, $1, $3, Qnil, escape_Qundef($4));
		    %*/
		    ;}
    break;

  case 380:
#line 3482 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = new_args(0, (yyvsp[(1) - (6)].node), (yyvsp[(3) - (6)].id), (yyvsp[(5) - (6)].node), (yyvsp[(6) - (6)].id));
		    /*%
			$$ = params_new(Qnil, $1, $3, $5, escape_Qundef($6));
		    %*/
		    ;}
    break;

  case 381:
#line 3490 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = new_args(0, (yyvsp[(1) - (2)].node), 0, 0, (yyvsp[(2) - (2)].id));
		    /*%
			$$ = params_new(Qnil, $1, Qnil, Qnil,escape_Qundef($2));
		    %*/
		    ;}
    break;

  case 382:
#line 3498 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = new_args(0, (yyvsp[(1) - (4)].node), 0, (yyvsp[(3) - (4)].node), (yyvsp[(4) - (4)].id));
		    /*%
			$$ = params_new(Qnil, $1, Qnil, $3, escape_Qundef($4));
		    %*/
		    ;}
    break;

  case 383:
#line 3506 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = new_args(0, 0, (yyvsp[(1) - (2)].id), 0, (yyvsp[(2) - (2)].id));
		    /*%
			$$ = params_new(Qnil, Qnil, $1, Qnil, escape_Qundef($2));
		    %*/
		    ;}
    break;

  case 384:
#line 3514 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = new_args(0, 0, (yyvsp[(1) - (4)].id), (yyvsp[(3) - (4)].node), (yyvsp[(4) - (4)].id));
		    /*%
			$$ = params_new(Qnil, Qnil, $1, $3, escape_Qundef($4));
		    %*/
		    ;}
    break;

  case 385:
#line 3522 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = new_args(0, 0, 0, 0, (yyvsp[(1) - (1)].id));
		    /*%
			$$ = params_new(Qnil, Qnil, Qnil, Qnil, $1);
		    %*/
		    ;}
    break;

  case 387:
#line 3533 "parse.y"
    {
			command_start = Qtrue;
		    ;}
    break;

  case 388:
#line 3539 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = 0;
		    /*%
			$$ = blockvar_new(params_new(Qnil,Qnil,Qnil,Qnil,Qnil),
                                          escape_Qundef($2));
		    %*/
		    ;}
    break;

  case 389:
#line 3548 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = 0;
		    /*%
			$$ = blockvar_new(params_new(Qnil,Qnil,Qnil,Qnil,Qnil),
                                          Qnil);
		    %*/
		    ;}
    break;

  case 390:
#line 3557 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = (yyvsp[(2) - (4)].node);
		    /*%
			$$ = blockvar_new(escape_Qundef($2), escape_Qundef($3));
		    %*/
		    ;}
    break;

  case 392:
#line 3569 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = 0;
		    /*%
			$$ = $2;
		    %*/
		    ;}
    break;

  case 395:
#line 3595 "parse.y"
    {
		    /*%%%*/
			new_bv((yyvsp[(1) - (1)].id));
		    /*%
			$$ = $1;
		    %*/
		    ;}
    break;

  case 396:
#line 3603 "parse.y"
    {
			(yyval.node) = 0;
		    ;}
    break;

  case 397:
#line 3608 "parse.y"
    {
		    /*%%%*/
			dyna_push();
		    /*%
		    %*/
			(yyval.num) = lpar_beg;
			lpar_beg = ++paren_nest;
		    ;}
    break;

  case 398:
#line 3618 "parse.y"
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

  case 399:
#line 3631 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_LAMBDA((yyvsp[(2) - (4)].node));
		    /*%
			$$ = dispatch1(paren, $2);
		    %*/
		    ;}
    break;

  case 400:
#line 3639 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_LAMBDA((yyvsp[(1) - (1)].node));
		    /*%
			$$ = $1;
		    %*/
		    ;}
    break;

  case 401:
#line 3649 "parse.y"
    {
			(yyval.node) = (yyvsp[(2) - (3)].node);
		    ;}
    break;

  case 402:
#line 3653 "parse.y"
    {
			(yyval.node) = (yyvsp[(2) - (3)].node);
		    ;}
    break;

  case 403:
#line 3659 "parse.y"
    {
		    /*%%%*/
			dyna_push();
			(yyval.num) = ruby_sourceline;
		    /*% %*/
		    ;}
    break;

  case 404:
#line 3668 "parse.y"
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

  case 405:
#line 3680 "parse.y"
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

  case 406:
#line 3696 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_CALL((yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].id), (yyvsp[(4) - (4)].node));
		    /*%
			$$ = dispatch3(call, $1, ripper_id2sym('.'), $3);
			$$ = method_optarg($$, $4);
		    %*/
		    ;}
    break;

  case 407:
#line 3705 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_CALL((yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].id), (yyvsp[(4) - (4)].node));
		    /*%
			$$ = dispatch3(call, $1, ripper_intern("::"), $3);
			$$ = method_optarg($$, $4);
		    %*/
		    ;}
    break;

  case 408:
#line 3716 "parse.y"
    {
		    /*%%%*/
		      
			(yyval.node) = NEW_FCALL((yyvsp[(1) - (2)].id), (yyvsp[(2) - (2)].node));
			fixpos((yyval.node), (yyvsp[(2) - (2)].node));
		    /*%
			$$ = method_arg(dispatch1(fcall, $1), $2);
		    %*/
		    ;}
    break;

  case 409:
#line 3726 "parse.y"
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

  case 410:
#line 3736 "parse.y"
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

  case 411:
#line 3746 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_CALL((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].id), 0);
		    /*%
			$$ = dispatch3(call, $1, ripper_intern("::"), $3);
		    %*/
		    ;}
    break;

  case 412:
#line 3754 "parse.y"
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

  case 413:
#line 3765 "parse.y"
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

  case 414:
#line 3776 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_SUPER((yyvsp[(2) - (2)].node));
		    /*%
			$$ = dispatch1(super, $2);
		    %*/
		    ;}
    break;

  case 415:
#line 3784 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_ZSUPER();
		    /*%
			$$ = dispatch0(zsuper);
		    %*/
		    ;}
    break;

  case 416:
#line 3792 "parse.y"
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

  case 417:
#line 3806 "parse.y"
    {
		    /*%%%*/
			dyna_push();
			(yyval.num) = ruby_sourceline;
		    /*%
                    %*/
		    ;}
    break;

  case 418:
#line 3815 "parse.y"
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

  case 419:
#line 3827 "parse.y"
    {
		    /*%%%*/
			dyna_push();
			(yyval.num) = ruby_sourceline;
		    /*%
                    %*/
		    ;}
    break;

  case 420:
#line 3836 "parse.y"
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

  case 421:
#line 3847 "parse.y"
    {
                        patern_match_set=1;
                    ;}
    break;

  case 422:
#line 3854 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_WHEN((yyvsp[(2) - (5)].node), (yyvsp[(4) - (5)].node), (yyvsp[(5) - (5)].node));
		    /*%
			$$ = dispatch3(when, $2, $4, escape_Qundef($5));
		    %*/
		    ;}
    break;

  case 423:
#line 3866 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_WHEN((yyvsp[(2) - (5)].node), (yyvsp[(4) - (5)].node), (yyvsp[(5) - (5)].node));
		    /*%
			$$ = dispatch3(when, $2, $4, escape_Qundef($5));
		    %*/
		    ;}
    break;

  case 428:
#line 3884 "parse.y"
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

  case 430:
#line 3904 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_LIST((yyvsp[(1) - (1)].node));
		    /*%
			$$ = rb_ary_new3(1, $1);
		    %*/
		    ;}
    break;

  case 431:
#line 3912 "parse.y"
    {
		    /*%%%*/
			if (!((yyval.node) = splat_array((yyvsp[(1) - (1)].node)))) (yyval.node) = (yyvsp[(1) - (1)].node);
		    /*%
			$$ = $1;
		    %*/
		    ;}
    break;

  case 433:
#line 3923 "parse.y"
    {
			(yyval.node) = (yyvsp[(2) - (2)].node);
		    ;}
    break;

  case 435:
#line 3930 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = (yyvsp[(2) - (2)].node);
		    /*%
			$$ = dispatch1(ensure, $2);
		    %*/
		    ;}
    break;

  case 438:
#line 3942 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_LIT(ID2SYM((yyvsp[(1) - (1)].id)));
		    /*%
			$$ = dispatch1(symbol_literal, $1);
		    %*/
		    ;}
    break;

  case 440:
#line 3953 "parse.y"
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

  case 443:
#line 3972 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = literal_concat((yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
		    /*%
			$$ = dispatch2(string_concat, $1, $2);
		    %*/
		    ;}
    break;

  case 444:
#line 3982 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = (yyvsp[(2) - (3)].node);
		    /*%
			$$ = dispatch1(string_literal, $2);
		    %*/
		    ;}
    break;

  case 445:
#line 3992 "parse.y"
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

  case 446:
#line 4019 "parse.y"
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

  case 447:
#line 4061 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_ZARRAY();
		    /*%
			$$ = dispatch0(words_new);
		    %*/
		    ;}
    break;

  case 448:
#line 4069 "parse.y"
    {
			(yyval.node) = (yyvsp[(2) - (3)].node);
		    ;}
    break;

  case 449:
#line 4075 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = 0;
		    /*%
			$$ = dispatch0(words_new);
		    %*/
		    ;}
    break;

  case 450:
#line 4083 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = list_append((yyvsp[(1) - (3)].node), evstr2dstr((yyvsp[(2) - (3)].node)));
		    /*%
			$$ = dispatch2(words_add, $1, $2);
		    %*/
		    ;}
    break;

  case 452:
#line 4101 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = literal_concat((yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
		    /*%
			$$ = dispatch2(word_add, $1, $2);
		    %*/
		    ;}
    break;

  case 453:
#line 4111 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_ZARRAY();
		    /*%
			$$ = dispatch0(qwords_new);
		    %*/
		    ;}
    break;

  case 454:
#line 4119 "parse.y"
    {
			(yyval.node) = (yyvsp[(2) - (3)].node);
		    ;}
    break;

  case 455:
#line 4125 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = 0;
		    /*%
			$$ = dispatch0(qwords_new);
		    %*/
		    ;}
    break;

  case 456:
#line 4133 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = list_append((yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node));
		    /*%
			$$ = dispatch2(qwords_add, $1, $2);
		    %*/
		    ;}
    break;

  case 457:
#line 4143 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = 0;
		    /*%
			$$ = dispatch0(string_content);
		    %*/
		    ;}
    break;

  case 458:
#line 4151 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = literal_concat((yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
		    /*%
			$$ = dispatch2(string_add, $1, $2);
		    %*/
		    ;}
    break;

  case 459:
#line 4161 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = 0;
		    /*%
			$$ = dispatch0(xstring_new);
		    %*/
		    ;}
    break;

  case 460:
#line 4169 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = literal_concat((yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
		    /*%
			$$ = dispatch2(xstring_add, $1, $2);
		    %*/
		    ;}
    break;

  case 462:
#line 4180 "parse.y"
    {
			(yyval.node) = lex_strterm;
			lex_strterm = 0;
			lex_state = EXPR_BEG;
		    ;}
    break;

  case 463:
#line 4186 "parse.y"
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

  case 464:
#line 4196 "parse.y"
    {
			(yyval.node) = lex_strterm;
			lex_strterm = 0;
			lex_state = EXPR_BEG;
			COND_PUSH(0);
			CMDARG_PUSH(0);
		    ;}
    break;

  case 465:
#line 4204 "parse.y"
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

  case 466:
#line 4218 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_GVAR((yyvsp[(1) - (1)].id));
		    /*%
			$$ = dispatch1(var_ref, $1);
		    %*/
		    ;}
    break;

  case 467:
#line 4226 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_IVAR((yyvsp[(1) - (1)].id));
		    /*%
			$$ = dispatch1(var_ref, $1);
		    %*/
		    ;}
    break;

  case 468:
#line 4234 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = NEW_CVAR((yyvsp[(1) - (1)].id));
		    /*%
			$$ = dispatch1(var_ref, $1);
		    %*/
		    ;}
    break;

  case 470:
#line 4245 "parse.y"
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

  case 475:
#line 4263 "parse.y"
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

  case 478:
#line 4296 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = negate_lit((yyvsp[(2) - (2)].node));
		    /*%
			$$ = dispatch2(unary, ripper_intern("-@"), $2);
		    %*/
		    ;}
    break;

  case 479:
#line 4304 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = negate_lit((yyvsp[(2) - (2)].node));
		    /*%
			$$ = dispatch2(unary, ripper_intern("-@"), $2);
		    %*/
		    ;}
    break;

  case 485:
#line 4318 "parse.y"
    {ifndef_ripper((yyval.id) = keyword_nil);;}
    break;

  case 486:
#line 4319 "parse.y"
    {ifndef_ripper((yyval.id) = keyword_self);;}
    break;

  case 487:
#line 4320 "parse.y"
    {ifndef_ripper((yyval.id) = keyword_true);;}
    break;

  case 488:
#line 4321 "parse.y"
    {ifndef_ripper((yyval.id) = keyword_false);;}
    break;

  case 489:
#line 4322 "parse.y"
    {ifndef_ripper((yyval.id) = keyword__FILE__);;}
    break;

  case 490:
#line 4323 "parse.y"
    {ifndef_ripper((yyval.id) = keyword__LINE__);;}
    break;

  case 491:
#line 4324 "parse.y"
    {ifndef_ripper((yyval.id) = keyword__ENCODING__);;}
    break;

  case 492:
#line 4328 "parse.y"
    {
		    /*%%%*/
		      
			if (!((yyval.node) = gettable((yyvsp[(1) - (1)].id)))) (yyval.node) = NEW_BEGIN(0);
		    /*%
			$$ = dispatch1(var_ref, $1);
		    %*/
		    ;}
    break;

  case 493:
#line 4339 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = assignable((yyvsp[(1) - (1)].id), 0);
		    /*%
			$$ = dispatch1(var_field, $1);
		    %*/
		    ;}
    break;

  case 496:
#line 4353 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = 0;
		    /*%
			$$ = Qnil;
		    %*/
		    ;}
    break;

  case 497:
#line 4361 "parse.y"
    {
			lex_state = EXPR_BEG;
		    ;}
    break;

  case 498:
#line 4365 "parse.y"
    {
			(yyval.node) = (yyvsp[(3) - (4)].node);
		    ;}
    break;

  case 499:
#line 4369 "parse.y"
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

  case 500:
#line 4381 "parse.y"
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

  case 501:
#line 4393 "parse.y"
    {
			(yyval.node) = (yyvsp[(1) - (2)].node);
		    ;}
    break;

  case 502:
#line 4399 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = new_args((yyvsp[(1) - (6)].node), (yyvsp[(3) - (6)].node), (yyvsp[(5) - (6)].id), 0, (yyvsp[(6) - (6)].id));
		    /*%
			$$ = params_new($1, $3, $5, Qnil, escape_Qundef($6));
		    %*/
		    ;}
    break;

  case 503:
#line 4407 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = new_args((yyvsp[(1) - (8)].node), (yyvsp[(3) - (8)].node), (yyvsp[(5) - (8)].id), (yyvsp[(7) - (8)].node), (yyvsp[(8) - (8)].id));
		    /*%
			$$ = params_new($1, $3, $5, $7, escape_Qundef($8));
		    %*/
		    ;}
    break;

  case 504:
#line 4415 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = new_args((yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].node), 0, 0, (yyvsp[(4) - (4)].id));
		    /*%
			$$ = params_new($1, $3, Qnil, Qnil, escape_Qundef($4));
		    %*/
		    ;}
    break;

  case 505:
#line 4423 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = new_args((yyvsp[(1) - (6)].node), (yyvsp[(3) - (6)].node), 0, (yyvsp[(5) - (6)].node), (yyvsp[(6) - (6)].id));
		    /*%
			$$ = params_new($1, $3, Qnil, $5, escape_Qundef($6));
		    %*/
		    ;}
    break;

  case 506:
#line 4431 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = new_args((yyvsp[(1) - (4)].node), 0, (yyvsp[(3) - (4)].id), 0, (yyvsp[(4) - (4)].id));
		    /*%
			$$ = params_new($1, Qnil, $3, Qnil, escape_Qundef($4));
		    %*/
		    ;}
    break;

  case 507:
#line 4439 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = new_args((yyvsp[(1) - (6)].node), 0, (yyvsp[(3) - (6)].id), (yyvsp[(5) - (6)].node), (yyvsp[(6) - (6)].id));
		    /*%
			$$ = params_new($1, Qnil, $3, $5, escape_Qundef($6));
		    %*/
		    ;}
    break;

  case 508:
#line 4447 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = new_args((yyvsp[(1) - (2)].node), 0, 0, 0, (yyvsp[(2) - (2)].id));
		    /*%
			$$ = params_new($1, Qnil, Qnil, Qnil,escape_Qundef($2));
		    %*/
		    ;}
    break;

  case 509:
#line 4455 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = new_args(0, (yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].id), 0, (yyvsp[(4) - (4)].id));
		    /*%
			$$ = params_new(Qnil, $1, $3, Qnil, escape_Qundef($4));
		    %*/
		    ;}
    break;

  case 510:
#line 4463 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = new_args(0, (yyvsp[(1) - (6)].node), (yyvsp[(3) - (6)].id), (yyvsp[(5) - (6)].node), (yyvsp[(6) - (6)].id));
		    /*%
			$$ = params_new(Qnil, $1, $3, $5, escape_Qundef($6));
		    %*/
		    ;}
    break;

  case 511:
#line 4471 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = new_args(0, (yyvsp[(1) - (2)].node), 0, 0, (yyvsp[(2) - (2)].id));
		    /*%
			$$ = params_new(Qnil, $1, Qnil, Qnil,escape_Qundef($2));
		    %*/
		    ;}
    break;

  case 512:
#line 4479 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = new_args(0, (yyvsp[(1) - (4)].node), 0, (yyvsp[(3) - (4)].node), (yyvsp[(4) - (4)].id));
		    /*%
			$$ = params_new(Qnil, $1, Qnil, $3, escape_Qundef($4));
		    %*/
		    ;}
    break;

  case 513:
#line 4487 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = new_args(0, 0, (yyvsp[(1) - (2)].id), 0, (yyvsp[(2) - (2)].id));
		    /*%
			$$ = params_new(Qnil, Qnil, $1, Qnil,escape_Qundef($2));
		    %*/
		    ;}
    break;

  case 514:
#line 4495 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = new_args(0, 0, (yyvsp[(1) - (4)].id), (yyvsp[(3) - (4)].node), (yyvsp[(4) - (4)].id));
		    /*%
			$$ = params_new(Qnil, Qnil, $1, $3, escape_Qundef($4));
		    %*/
		    ;}
    break;

  case 515:
#line 4503 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = new_args(0, 0, 0, 0, (yyvsp[(1) - (1)].id));
		    /*%
			$$ = params_new(Qnil, Qnil, Qnil, Qnil, $1);
		    %*/
		    ;}
    break;

  case 516:
#line 4511 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = new_args(0, 0, 0, 0, 0);
		    /*%
			$$ = params_new(Qnil, Qnil, Qnil, Qnil, Qnil);
		    %*/
		    ;}
    break;

  case 517:
#line 4521 "parse.y"
    {
		    /*%%%*/
			yyerror("formal argument cannot be a constant");
			(yyval.id) = 0;
		    /*%
			$$ = dispatch1(param_error, $1);
		    %*/
		    ;}
    break;

  case 518:
#line 4530 "parse.y"
    {
		    /*%%%*/
			yyerror("formal argument cannot be an instance variable");
			(yyval.id) = 0;
		    /*%
			$$ = dispatch1(param_error, $1);
		    %*/
		    ;}
    break;

  case 519:
#line 4539 "parse.y"
    {
		    /*%%%*/
			yyerror("formal argument cannot be a global variable");
			(yyval.id) = 0;
		    /*%
			$$ = dispatch1(param_error, $1);
		    %*/
		    ;}
    break;

  case 520:
#line 4548 "parse.y"
    {
		    /*%%%*/
			yyerror("formal argument cannot be a class variable");
			(yyval.id) = 0;
		    /*%
			$$ = dispatch1(param_error, $1);
		    %*/
		    ;}
    break;

  case 522:
#line 4560 "parse.y"
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

  case 523:
#line 4572 "parse.y"
    {
		    /*%%%*/
			arg_var((yyvsp[(1) - (1)].id));
			(yyval.node) = NEW_ARGS_AUX((yyvsp[(1) - (1)].id), 1);
		    /*%
		    %*/
		    ;}
    break;

  case 524:
#line 4580 "parse.y"
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

  case 526:
#line 4606 "parse.y"
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

  case 527:
#line 4619 "parse.y"
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

  case 528:
#line 4634 "parse.y"
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

  case 529:
#line 4649 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = (yyvsp[(1) - (1)].node);
		    /*%
			$$ = rb_ary_new3(1, $1);
		    %*/
		    ;}
    break;

  case 530:
#line 4657 "parse.y"
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

  case 531:
#line 4673 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = (yyvsp[(1) - (1)].node);
		    /*%
			$$ = rb_ary_new3(1, $1);
		    %*/
		    ;}
    break;

  case 532:
#line 4681 "parse.y"
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

  case 535:
#line 4701 "parse.y"
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

  case 536:
#line 4713 "parse.y"
    {
		    /*%%%*/
			(yyval.id) = internal_id();
			arg_var((yyval.id));
		    /*%
			$$ = dispatch1(rest_param, Qnil);
		    %*/
		    ;}
    break;

  case 539:
#line 4728 "parse.y"
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

  case 540:
#line 4744 "parse.y"
    {
			(yyval.id) = (yyvsp[(2) - (2)].id);
		    ;}
    break;

  case 541:
#line 4748 "parse.y"
    {
		    /*%%%*/
			(yyval.id) = 0;
		    /*%
			$$ = Qundef;
		    %*/
		    ;}
    break;

  case 542:
#line 4758 "parse.y"
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

  case 543:
#line 4767 "parse.y"
    {lex_state = EXPR_BEG;;}
    break;

  case 544:
#line 4768 "parse.y"
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

  case 546:
#line 4798 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = (yyvsp[(1) - (2)].node);
		    /*%
			$$ = dispatch1(assoclist_from_args, $1);
		    %*/
		    ;}
    break;

  case 548:
#line 4815 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = list_concat((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
		    /*%
			$$ = rb_ary_push($1, $3);
		    %*/
		    ;}
    break;

  case 549:
#line 4825 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = list_append(NEW_LIST((yyvsp[(1) - (3)].node)), (yyvsp[(3) - (3)].node));
		    /*%
			$$ = dispatch2(assoc_new, $1, $3);
		    %*/
		    ;}
    break;

  case 550:
#line 4833 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = list_append(NEW_LIST(NEW_LIT(ID2SYM((yyvsp[(1) - (2)].id)))), (yyvsp[(2) - (2)].node));
		    /*%
			$$ = dispatch2(assoc_new, $1, $2);
		    %*/
		    ;}
    break;

  case 572:
#line 4889 "parse.y"
    {yyerrok;;}
    break;

  case 575:
#line 4894 "parse.y"
    {yyerrok;;}
    break;

  case 576:
#line 4898 "parse.y"
    {
		    /*%%%*/
			(yyval.node) = 0;
		    /*%
			$$ = Qundef;
		    %*/
		    ;}
    break;


/* Line 1267 of yacc.c.  */
#line 10096 "parse.c"
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


#line 4906 "parse.y"

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
	      if(1){
		ID id = TOK_INTERN(!ENC_SINGLE(mb));
		ID data = serch_infix_ops(top_infix_table,id);
		if( data != 0){
		  char c = *(rb_id2name(data));
		  switch(c){
		  case '+':
		    return '+';
		  case '-':
		    return '-';
		  case '*':
		    return '*';
		  case '/':
		    return '/';
		  case '%':
		    return '%';
		  default:
		    set_yylval_id(data);
		    return tINFIX_OP;
		 }
		  
		}else{
		  //lex_state = pre_lex_state;
		}
	      } 
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
	    if(lex_state == EXPR_INFIX){
	     lex_state = EXPR_BEG;
	    }else if (last_state != EXPR_DOT && is_local_id(ident) && lvar_defined(ident)) {
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
	  //return NEW_LIT(ID2SYM(id));
	  return NEW_LVAR(id);
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
    //printf("test\n");
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
    parser->infix_op_table = ALLOC(struct infix_ops);
    parser->infix_op_table->next = 0;
    parser->top_infix_op_table = parser->infix_op_table;
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
    {keyword_ialias,	"ialias"},
    {keyword_defined,	"defined?"},
    {keyword_BEGIN,	"BEGIN"},
    {keyword_END,	"END"},
    {keyword__LINE__,	"__LINE__"},
    {keyword__FILE__,	"__FILE__"},
    {keyword__ENCODING__, "__ENCODING__"},
    //{keyword_ialias,	"ialias"},
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

