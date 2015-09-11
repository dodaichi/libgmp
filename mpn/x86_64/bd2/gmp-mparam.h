/* AMD bd2 gmp-mparam.h -- Compiler/machine parameter header file.

Copyright 1991, 1993, 1994, 2000-2010, 2012, 2014 Free Software Foundation,
Inc.

This file is part of the GNU MP Library.

The GNU MP Library is free software; you can redistribute it and/or modify
it under the terms of either:

  * the GNU Lesser General Public License as published by the Free
    Software Foundation; either version 3 of the License, or (at your
    option) any later version.

or

  * the GNU General Public License as published by the Free Software
    Foundation; either version 2 of the License, or (at your option) any
    later version.

or both in parallel, as here.

The GNU MP Library is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
for more details.

You should have received copies of the GNU General Public License and the
GNU Lesser General Public License along with the GNU MP Library.  If not,
see https://www.gnu.org/licenses/.  */

#define GMP_LIMB_BITS 64
#define GMP_LIMB_BYTES 8

/* 3200 MHz Piledriver Vishera  */
/* FFT tuning limit = 40000000 */
/* Generated by tuneup.c, 2014-03-12, gcc 4.8 */

#define MOD_1_NORM_THRESHOLD                 0  /* always */
#define MOD_1_UNNORM_THRESHOLD               0  /* always */
#define MOD_1N_TO_MOD_1_1_THRESHOLD          4
#define MOD_1U_TO_MOD_1_1_THRESHOLD          4
#define MOD_1_1_TO_MOD_1_2_THRESHOLD        17
#define MOD_1_2_TO_MOD_1_4_THRESHOLD        34
#define PREINV_MOD_1_TO_MOD_1_THRESHOLD     10
#define USE_PREINV_DIVREM_1                  1  /* native */
#define DIV_QR_1_NORM_THRESHOLD              2
#define DIV_QR_1_UNNORM_THRESHOLD        MP_SIZE_T_MAX  /* never */
#define DIV_QR_2_PI2_THRESHOLD           MP_SIZE_T_MAX  /* never */
#define DIVEXACT_1_THRESHOLD                 0  /* always (native) */
#define BMOD_1_TO_MOD_1_THRESHOLD           21

#define MUL_TOOM22_THRESHOLD                16
#define MUL_TOOM33_THRESHOLD                54
#define MUL_TOOM44_THRESHOLD               154
#define MUL_TOOM6H_THRESHOLD               274
#define MUL_TOOM8H_THRESHOLD               454

#define MUL_TOOM32_TO_TOOM43_THRESHOLD      97
#define MUL_TOOM32_TO_TOOM53_THRESHOLD     114
#define MUL_TOOM42_TO_TOOM53_THRESHOLD     105
#define MUL_TOOM42_TO_TOOM63_THRESHOLD     105
#define MUL_TOOM43_TO_TOOM54_THRESHOLD     147

#define SQR_BASECASE_THRESHOLD               0  /* always (native) */
#define SQR_TOOM2_THRESHOLD                 22
#define SQR_TOOM3_THRESHOLD                 81
#define SQR_TOOM4_THRESHOLD                218
#define SQR_TOOM6_THRESHOLD                303
#define SQR_TOOM8_THRESHOLD                430

#define MULMID_TOOM42_THRESHOLD             20

#define MULMOD_BNM1_THRESHOLD               12
#define SQRMOD_BNM1_THRESHOLD               13

#define MUL_FFT_MODF_THRESHOLD             376  /* k = 5 */
#define MUL_FFT_TABLE3                                      \
  { {    376, 5}, {     19, 6}, {     10, 5}, {     21, 6}, \
    {     11, 5}, {     23, 6}, {     21, 7}, {     11, 6}, \
    {     23, 7}, {     13, 6}, {     27, 7}, {     21, 8}, \
    {     11, 7}, {     25, 8}, {     13, 7}, {     27, 8}, \
    {     15, 7}, {     32, 8}, {     17, 7}, {     35, 8}, \
    {     21, 9}, {     11, 8}, {     27, 9}, {     15, 8}, \
    {     35, 9}, {     19, 8}, {     41, 9}, {     23, 8}, \
    {     49, 9}, {     27,10}, {     15, 9}, {     39,10}, \
    {     23, 9}, {     51,11}, {     15,10}, {     31, 9}, \
    {     71,10}, {     39, 9}, {     83,10}, {     47, 9}, \
    {     99,10}, {     55,11}, {     31,10}, {     79,11}, \
    {     47,10}, {     95,12}, {     31,11}, {     63,10}, \
    {    135, 6}, {   2175, 7}, {   1151, 9}, {    303,10}, \
    {    159, 9}, {    319, 8}, {    639, 9}, {    335,11}, \
    {     95,10}, {    191,11}, {    111,12}, {     63,11}, \
    {    127,10}, {    255,11}, {    143,10}, {    303,11}, \
    {    159,12}, {     95,11}, {    191,13}, {     63,12}, \
    {    127,11}, {    255,10}, {    511,11}, {    271,10}, \
    {    543,11}, {    287,10}, {    575,11}, {    303,12}, \
    {    159,11}, {    319,10}, {    639,11}, {    351,12}, \
    {    191,11}, {    383,10}, {    767,11}, {    415,12}, \
    {    223,11}, {    447,13}, {    127,12}, {    255,11}, \
    {    511,12}, {    287,11}, {    575,10}, {   1151,12}, \
    {    319,11}, {    639,10}, {   1279,12}, {    351,13}, \
    {    191,12}, {    383,11}, {    767,12}, {    415,10}, \
    {   1663,12}, {    447,14}, {    127,13}, {    255,12}, \
    {    511,11}, {   1023,12}, {    543,11}, {   1087,10}, \
    {   2175,12}, {    575,11}, {   1151,12}, {    607,13}, \
    {    319,12}, {    639,11}, {   1279,12}, {    671,11}, \
    {   1343,10}, {   2687,12}, {    703,11}, {   1407,10}, \
    {   2815,12}, {    735,13}, {    383,12}, {    767,11}, \
    {   1599,12}, {    831,11}, {   1663,13}, {    447,12}, \
    {    895,11}, {   1791,14}, {    255,13}, {    511,12}, \
    {   1023,11}, {   2047,12}, {   1087,11}, {   2175,13}, \
    {    575,12}, {   1151,11}, {   2303,12}, {   1215,11}, \
    {   2431,10}, {   4863,13}, {    639,12}, {   1279,11}, \
    {   2559,12}, {   1343,11}, {   2687,13}, {    703,12}, \
    {   1407,11}, {   2815,14}, {    383,13}, {    767,12}, \
    {   1599,13}, {    831,12}, {   1663,13}, {    895,12}, \
    {   1791,15}, {    255,14}, {    511,13}, {   1023,12}, \
    {   2047,13}, {   1087,12}, {   2175,13}, {   1151,12}, \
    {   2303,13}, {   1215,12}, {   2431,11}, {   4863,14}, \
    {    639,13}, {   1343,12}, {   2687,13}, {   1407,12}, \
    {   2815,13}, {   1471,12}, {   2943,11}, {   5887,14}, \
    {    767,13}, {   1599,12}, {   3199,13}, {   1727,14}, \
    {    895,13}, {   1791,12}, {   3583,13}, {   1919,12}, \
    {   3839,11}, {   7679,15}, {    511,14}, {   1023,13}, \
    {   2175,14}, {   1151,13}, {   2431,12}, {   4863,14}, \
    {   1279,13}, {   2687,14}, {   1407,13}, {   2943,12}, \
    {   5887,15}, {    767,14}, {   1535,13}, {   3199,14}, \
    {   1663,13}, {   3455,12}, {   6911,14}, {   1791,13}, \
    {   3583,14}, {   1919,13}, {   3839,12}, {   7679,16}, \
    {    511,15}, {   1023,14}, {   2175,13}, {   4479,14}, \
    {   2303,13}, {   4607,14}, {   2431,13}, {   4863,15}, \
    {  32768,16}, {  65536,17}, { 131072,18}, { 262144,19}, \
    { 524288,20}, {1048576,21}, {2097152,22}, {4194304,23}, \
    {8388608,24} }
#define MUL_FFT_TABLE3_SIZE 225
#define MUL_FFT_THRESHOLD                 3712

#define SQR_FFT_MODF_THRESHOLD             344  /* k = 5 */
#define SQR_FFT_TABLE3                                      \
  { {    344, 5}, {     11, 4}, {     23, 5}, {     19, 6}, \
    {     10, 5}, {     21, 6}, {     21, 7}, {     11, 6}, \
    {     25, 7}, {     13, 6}, {     27, 7}, {     17, 6}, \
    {     35, 8}, {      9, 7}, {     21, 8}, {     11, 7}, \
    {     25, 8}, {     13, 7}, {     27, 8}, {     15, 7}, \
    {     31, 8}, {     17, 7}, {     35, 8}, {     21, 9}, \
    {     11, 8}, {     27, 9}, {     15, 8}, {     35, 9}, \
    {     19, 8}, {     39, 9}, {     23, 8}, {     47, 9}, \
    {     27,10}, {     15, 9}, {     39,10}, {     23, 9}, \
    {     51,11}, {     15,10}, {     31, 9}, {     63,10}, \
    {     39, 9}, {     79,10}, {     47, 9}, {     95,11}, \
    {     31,10}, {     79,11}, {     47,10}, {     95,12}, \
    {     31,11}, {     63,10}, {    127, 9}, {    255,10}, \
    {    135,11}, {     95,10}, {    191, 6}, {   3199, 7}, \
    {   1727, 9}, {    447,11}, {    127,10}, {    255, 9}, \
    {    511,10}, {    271,11}, {    143,10}, {    287, 9}, \
    {    575,10}, {    303, 9}, {    607,10}, {    319,12}, \
    {     95,11}, {    191,10}, {    383,11}, {    207,13}, \
    {     63,12}, {    127,11}, {    255,10}, {    511,11}, \
    {    271,10}, {    543,11}, {    287,10}, {    575,11}, \
    {    351,12}, {    191,11}, {    383,10}, {    767,11}, \
    {    415,12}, {    223,11}, {    447,10}, {    895,13}, \
    {    127,12}, {    255,11}, {    511,10}, {   1023,11}, \
    {    543,12}, {    287,11}, {    575,12}, {    319,10}, \
    {   1279,12}, {    351,13}, {    191,12}, {    383,11}, \
    {    767,12}, {    415,11}, {    831,12}, {    447,11}, \
    {    895,14}, {    127,13}, {    255,12}, {    511,11}, \
    {   1023,12}, {    543,11}, {   1087,10}, {   2175,12}, \
    {    575,13}, {    319,11}, {   1279,12}, {    671,11}, \
    {   1343,12}, {    703,11}, {   1407,13}, {    383,12}, \
    {    767,11}, {   1535,12}, {    799,11}, {   1599,12}, \
    {    831,11}, {   1663,13}, {    447,12}, {    895,14}, \
    {    255,13}, {    511,12}, {   1087,11}, {   2175,13}, \
    {    575,11}, {   2303,12}, {   1215,11}, {   2431,10}, \
    {   4863,13}, {    639,12}, {   1343,11}, {   2687,13}, \
    {    703,12}, {   1407,14}, {    383,13}, {    767,12}, \
    {   1599,13}, {    831,12}, {   1727,11}, {   3455,13}, \
    {    895,15}, {    255,14}, {    511,13}, {   1087,12}, \
    {   2239,11}, {   4479,12}, {   2303,13}, {   1215,12}, \
    {   2431,11}, {   4863,14}, {    639,13}, {   1279,12}, \
    {   2559,13}, {   1343,12}, {   2687,13}, {   1407,12}, \
    {   2815,13}, {   1471,12}, {   2943,11}, {   5887,14}, \
    {    767,13}, {   1599,12}, {   3199,13}, {   1727,14}, \
    {    895,13}, {   1791,12}, {   3583,13}, {   1919,12}, \
    {   3839,15}, {    511,14}, {   1023,13}, {   2431,12}, \
    {   4863,14}, {   1279,13}, {   2687,14}, {   1407,13}, \
    {   2943,12}, {   5887,11}, {  11775,15}, {    767,14}, \
    {   1535,13}, {   3199,14}, {   1663,13}, {   3455,12}, \
    {   6911,14}, {   1791,13}, {   3583,14}, {   1919,13}, \
    {   3839,16}, {    511,15}, {   1023,14}, {   2175,13}, \
    {   4479,14}, {   2303,13}, {   4607,14}, {   2431,13}, \
    {   4863,15}, {  32768,16}, {  65536,17}, { 131072,18}, \
    { 262144,19}, { 524288,20}, {1048576,21}, {2097152,22}, \
    {4194304,23}, {8388608,24} }
#define SQR_FFT_TABLE3_SIZE 214
#define SQR_FFT_THRESHOLD                 3264

#define MULLO_BASECASE_THRESHOLD             0  /* always */
#define MULLO_DC_THRESHOLD                  37
#define MULLO_MUL_N_THRESHOLD             8648
#define SQRLO_BASECASE_THRESHOLD             8
#define SQRLO_DC_THRESHOLD                  56
#define SQRLO_SQR_THRESHOLD               6440

#define DC_DIV_QR_THRESHOLD                 42
#define DC_DIVAPPR_Q_THRESHOLD             173
#define DC_BDIV_QR_THRESHOLD                42
#define DC_BDIV_Q_THRESHOLD                 77

#define INV_MULMOD_BNM1_THRESHOLD           34
#define INV_NEWTON_THRESHOLD               202
#define INV_APPR_THRESHOLD                 172

#define BINV_NEWTON_THRESHOLD              238
#define REDC_1_TO_REDC_2_THRESHOLD          44
#define REDC_2_TO_REDC_N_THRESHOLD           0  /* always */

#define MU_DIV_QR_THRESHOLD               1308
#define MU_DIVAPPR_Q_THRESHOLD            1334
#define MUPI_DIV_QR_THRESHOLD               85
#define MU_BDIV_QR_THRESHOLD              1142
#define MU_BDIV_Q_THRESHOLD               1308

#define POWM_SEC_TABLE  1,16,257,452,1099,2079

#define MATRIX22_STRASSEN_THRESHOLD         14
#define HGCD_THRESHOLD                     110
#define HGCD_APPR_THRESHOLD                 96
#define HGCD_REDUCE_THRESHOLD             2479
#define GCD_DC_THRESHOLD                   372
#define GCDEXT_DC_THRESHOLD                293
#define JACOBI_BASE_METHOD                   4

#define GET_STR_DC_THRESHOLD                12
#define GET_STR_PRECOMPUTE_THRESHOLD        20
#define SET_STR_DC_THRESHOLD               204
#define SET_STR_PRECOMPUTE_THRESHOLD      1160

#define FAC_DSC_THRESHOLD                  173
#define FAC_ODD_THRESHOLD                    0  /* always */
