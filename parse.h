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



