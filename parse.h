/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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
     keyword_operator = 302,
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
#define keyword_operator 302
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




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
    VALUE val;
    NODE *node;
    ID id;
    int num;
}
/* Line 1489 of yacc.c.  */
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



