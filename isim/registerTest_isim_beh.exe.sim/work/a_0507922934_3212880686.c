/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/XilinxPrj/UCISW2-main-newer/UCISW2-main-newer/register.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_1547198987_1035706684(char *, char *, char *, char *, char *, char *);
int ieee_p_1242562249_sub_1657552908_1035706684(char *, char *, char *);
char *ieee_p_1242562249_sub_180853171_1035706684(char *, char *, int , int );
char *ieee_p_1242562249_sub_1919365254_1035706684(char *, char *, char *, char *, int );
unsigned char ieee_p_1242562249_sub_2110375371_1035706684(char *, char *, char *, char *, char *);
unsigned char ieee_p_1242562249_sub_3472088553_1035706684(char *, char *, char *, char *, char *);
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_0507922934_3212880686_p_0(char *t0)
{
    char t13[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    unsigned int t14;
    unsigned int t15;
    unsigned char t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;

LAB0:    xsi_set_current_line(74, ng0);
    t1 = (t0 + 1952U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 9720);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(75, ng0);
    t3 = (t0 + 1832U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(81, ng0);
    t1 = (t0 + 1672U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB8;

LAB10:
LAB9:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(76, ng0);
    t3 = (t0 + 9976);
    t7 = (t3 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)0;
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(77, ng0);
    t1 = (t0 + 10040);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(78, ng0);
    t1 = xsi_get_transient_memory(64U);
    memset(t1, 0, 64U);
    t3 = t1;
    memset(t3, (unsigned char)2, 64U);
    t4 = (t0 + 10104);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 64U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(79, ng0);
    t1 = (t0 + 10168);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB6;

LAB8:    xsi_set_current_line(82, ng0);
    t1 = (t0 + 3752U);
    t4 = *((char **)t1);
    t6 = *((unsigned char *)t4);
    t1 = (t0 + 9976);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t6;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(83, ng0);
    t1 = (t0 + 4072U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 10040);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(84, ng0);
    t1 = (t0 + 1192U);
    t3 = *((char **)t1);
    t5 = *((unsigned char *)t3);
    t6 = (t5 == (unsigned char)3);
    if (t6 == 1)
        goto LAB14;

LAB15:    t2 = (unsigned char)0;

LAB16:    if (t2 != 0)
        goto LAB11;

LAB13:    xsi_set_current_line(88, ng0);
    t1 = (t0 + 10168);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB12:    goto LAB9;

LAB11:    xsi_set_current_line(85, ng0);
    t1 = (t0 + 4392U);
    t7 = *((char **)t1);
    t1 = (t0 + 16504U);
    t8 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t13, t7, t1, 1);
    t9 = (t13 + 12U);
    t14 = *((unsigned int *)t9);
    t15 = (1U * t14);
    t16 = (64U != t15);
    if (t16 == 1)
        goto LAB17;

LAB18:    t10 = (t0 + 10104);
    t17 = (t10 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t8, 64U);
    xsi_driver_first_trans_fast(t10);
    xsi_set_current_line(86, ng0);
    t1 = (t0 + 10168);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB12;

LAB14:    t1 = (t0 + 4232U);
    t4 = *((char **)t1);
    t11 = *((unsigned char *)t4);
    t12 = (t11 == (unsigned char)2);
    t2 = t12;
    goto LAB16;

LAB17:    xsi_size_not_matching(64U, t15, 0);
    goto LAB18;

}

static void work_a_0507922934_3212880686_p_1(char *t0)
{
    char t17[16];
    char *t1;
    unsigned char t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t18;
    unsigned int t19;
    char *t20;

LAB0:    xsi_set_current_line(98, ng0);
    t1 = (t0 + 1952U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 9736);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(99, ng0);
    t4 = (t0 + 1832U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    if (t7 == 1)
        goto LAB8;

LAB9:    t4 = (t0 + 3592U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)8);
    t3 = t10;

LAB10:    if (t3 != 0)
        goto LAB5;

LAB7:    t1 = (t0 + 3592U);
    t4 = *((char **)t1);
    t3 = *((unsigned char *)t4);
    t6 = (t3 == (unsigned char)7);
    if (t6 == 1)
        goto LAB13;

LAB14:    t1 = (t0 + 3592U);
    t5 = *((char **)t1);
    t7 = *((unsigned char *)t5);
    t9 = (t7 == (unsigned char)6);
    t2 = t9;

LAB15:    if (t2 != 0)
        goto LAB11;

LAB12:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(100, ng0);
    t4 = xsi_get_transient_memory(64U);
    memset(t4, 0, 64U);
    t11 = t4;
    memset(t11, (unsigned char)2, 64U);
    t12 = (t0 + 10232);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t4, 64U);
    xsi_driver_first_trans_fast(t12);
    goto LAB6;

LAB8:    t3 = (unsigned char)1;
    goto LAB10;

LAB11:    xsi_set_current_line(102, ng0);
    t1 = (t0 + 5192U);
    t8 = *((char **)t1);
    t1 = (t0 + 16552U);
    t11 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t17, t8, t1, 1);
    t12 = (t17 + 12U);
    t18 = *((unsigned int *)t12);
    t19 = (1U * t18);
    t10 = (64U != t19);
    if (t10 == 1)
        goto LAB16;

LAB17:    t13 = (t0 + 10232);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t20 = *((char **)t16);
    memcpy(t20, t11, 64U);
    xsi_driver_first_trans_fast(t13);
    goto LAB6;

LAB13:    t2 = (unsigned char)1;
    goto LAB15;

LAB16:    xsi_size_not_matching(64U, t19, 0);
    goto LAB17;

}

static void work_a_0507922934_3212880686_p_2(char *t0)
{
    char t12[16];
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned char t8;
    unsigned char t9;
    char *t10;
    char *t11;
    int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned char t22;
    static char *nl0[] = {&&LAB3, &&LAB4, &&LAB5, &&LAB6, &&LAB7, &&LAB8, &&LAB9, &&LAB10, &&LAB11, &&LAB12};

LAB0:    xsi_set_current_line(110, ng0);
    t1 = (t0 + 3592U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 10296);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(112, ng0);
    t1 = (t0 + 3592U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t3);
    goto **((char **)t1);

LAB2:    t1 = (t0 + 9752);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(114, ng0);
    t4 = (t0 + 1352U);
    t5 = *((char **)t4);
    t8 = *((unsigned char *)t5);
    t9 = (t8 == (unsigned char)3);
    if (t9 != 0)
        goto LAB13;

LAB15:
LAB14:    goto LAB2;

LAB4:    xsi_set_current_line(120, ng0);
    t1 = (t0 + 4392U);
    t2 = *((char **)t1);
    t1 = (t0 + 16504U);
    t4 = (t0 + 16955);
    t6 = (t12 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 7;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t13 = (7 - 0);
    t14 = (t13 * 1);
    t14 = (t14 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t14;
    t3 = ieee_p_1242562249_sub_3472088553_1035706684(IEEE_P_1242562249, t2, t1, t4, t12);
    if (t3 != 0)
        goto LAB16;

LAB18:    xsi_set_current_line(123, ng0);
    t1 = (t0 + 10296);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);

LAB17:    goto LAB2;

LAB5:    xsi_set_current_line(129, ng0);
    t1 = (t0 + 4392U);
    t2 = *((char **)t1);
    t1 = (t0 + 16504U);
    t4 = (t0 + 16963);
    t6 = (t12 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 7;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t13 = (7 - 0);
    t14 = (t13 * 1);
    t14 = (t14 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t14;
    t3 = ieee_p_1242562249_sub_2110375371_1035706684(IEEE_P_1242562249, t2, t1, t4, t12);
    if (t3 != 0)
        goto LAB19;

LAB21:
LAB20:    goto LAB2;

LAB6:    xsi_set_current_line(134, ng0);
    t1 = (t0 + 4392U);
    t2 = *((char **)t1);
    t1 = (t0 + 16504U);
    t4 = (t0 + 16971);
    t6 = (t12 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 7;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t13 = (7 - 0);
    t14 = (t13 * 1);
    t14 = (t14 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t14;
    t3 = ieee_p_1242562249_sub_2110375371_1035706684(IEEE_P_1242562249, t2, t1, t4, t12);
    if (t3 != 0)
        goto LAB22;

LAB24:
LAB23:    goto LAB2;

LAB7:    xsi_set_current_line(139, ng0);
    t1 = (t0 + 4392U);
    t2 = *((char **)t1);
    t1 = (t0 + 16504U);
    t4 = (t0 + 16979);
    t6 = (t12 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 7;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t13 = (7 - 0);
    t14 = (t13 * 1);
    t14 = (t14 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t14;
    t3 = ieee_p_1242562249_sub_2110375371_1035706684(IEEE_P_1242562249, t2, t1, t4, t12);
    if (t3 != 0)
        goto LAB25;

LAB27:
LAB26:    goto LAB2;

LAB8:    xsi_set_current_line(144, ng0);
    t1 = (t0 + 4392U);
    t2 = *((char **)t1);
    t1 = (t0 + 16504U);
    t4 = (t0 + 16987);
    t6 = (t12 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 7;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t13 = (7 - 0);
    t14 = (t13 * 1);
    t14 = (t14 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t14;
    t3 = ieee_p_1242562249_sub_2110375371_1035706684(IEEE_P_1242562249, t2, t1, t4, t12);
    if (t3 != 0)
        goto LAB28;

LAB30:
LAB29:    goto LAB2;

LAB9:    xsi_set_current_line(149, ng0);
    t1 = (t0 + 3912U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t8 = (t3 == (unsigned char)5);
    if (t8 != 0)
        goto LAB31;

LAB33:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t8 = (t3 == (unsigned char)2);
    if (t8 != 0)
        goto LAB34;

LAB35:    xsi_set_current_line(165, ng0);
    t1 = (t0 + 10296);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)6;
    xsi_driver_first_trans_fast(t1);

LAB32:    goto LAB2;

LAB10:    xsi_set_current_line(175, ng0);
    t1 = (t0 + 5192U);
    t2 = *((char **)t1);
    t1 = (t0 + 16552U);
    t4 = (t0 + 16995);
    t6 = (t12 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 15;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t13 = (15 - 0);
    t14 = (t13 * 1);
    t14 = (t14 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t14;
    t8 = ieee_p_1242562249_sub_3472088553_1035706684(IEEE_P_1242562249, t2, t1, t4, t12);
    if (t8 == 1)
        goto LAB39;

LAB40:    t3 = (unsigned char)0;

LAB41:    if (t3 != 0)
        goto LAB36;

LAB38:    t1 = (t0 + 5192U);
    t2 = *((char **)t1);
    t1 = (t0 + 16552U);
    t4 = (t0 + 17043);
    t6 = (t12 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 15;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t13 = (15 - 0);
    t14 = (t13 * 1);
    t14 = (t14 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t14;
    t8 = ieee_p_1242562249_sub_3472088553_1035706684(IEEE_P_1242562249, t2, t1, t4, t12);
    if (t8 == 1)
        goto LAB50;

LAB51:    t3 = (unsigned char)0;

LAB52:    if (t3 != 0)
        goto LAB48;

LAB49:    t1 = (t0 + 5192U);
    t2 = *((char **)t1);
    t1 = (t0 + 16552U);
    t4 = (t0 + 17091);
    t6 = (t12 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 11;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t13 = (11 - 0);
    t14 = (t13 * 1);
    t14 = (t14 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t14;
    t8 = ieee_p_1242562249_sub_3472088553_1035706684(IEEE_P_1242562249, t2, t1, t4, t12);
    if (t8 == 1)
        goto LAB61;

LAB62:    t3 = (unsigned char)0;

LAB63:    if (t3 != 0)
        goto LAB59;

LAB60:    t1 = (t0 + 5192U);
    t2 = *((char **)t1);
    t1 = (t0 + 16552U);
    t4 = (t0 + 17135);
    t6 = (t12 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 11;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t13 = (11 - 0);
    t14 = (t13 * 1);
    t14 = (t14 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t14;
    t8 = ieee_p_1242562249_sub_3472088553_1035706684(IEEE_P_1242562249, t2, t1, t4, t12);
    if (t8 == 1)
        goto LAB72;

LAB73:    t3 = (unsigned char)0;

LAB74:    if (t3 != 0)
        goto LAB70;

LAB71:    t1 = (t0 + 5192U);
    t2 = *((char **)t1);
    t1 = (t0 + 16552U);
    t4 = (t0 + 17179);
    t6 = (t12 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 11;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t13 = (11 - 0);
    t14 = (t13 * 1);
    t14 = (t14 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t14;
    t8 = ieee_p_1242562249_sub_3472088553_1035706684(IEEE_P_1242562249, t2, t1, t4, t12);
    if (t8 == 1)
        goto LAB83;

LAB84:    t3 = (unsigned char)0;

LAB85:    if (t3 != 0)
        goto LAB81;

LAB82:    xsi_set_current_line(186, ng0);
    t1 = (t0 + 10296);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)7;
    xsi_driver_first_trans_fast(t1);

LAB37:    goto LAB2;

LAB11:    xsi_set_current_line(190, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t8 = *((unsigned char *)t2);
    t9 = (t8 == (unsigned char)2);
    if (t9 == 1)
        goto LAB95;

LAB96:    t1 = (t0 + 5512U);
    t4 = *((char **)t1);
    t1 = (t0 + 16584U);
    t5 = (t0 + 5352U);
    t6 = *((char **)t5);
    t5 = (t0 + 16568U);
    t22 = ieee_p_1242562249_sub_3472088553_1035706684(IEEE_P_1242562249, t4, t1, t6, t5);
    t3 = t22;

LAB97:    if (t3 != 0)
        goto LAB92;

LAB94:    xsi_set_current_line(193, ng0);
    t1 = (t0 + 10296);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)6;
    xsi_driver_first_trans_fast(t1);

LAB93:    goto LAB2;

LAB12:    xsi_set_current_line(197, ng0);
    t1 = (t0 + 10296);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB13:    xsi_set_current_line(115, ng0);
    t4 = (t0 + 10296);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)1;
    xsi_driver_first_trans_fast(t4);
    goto LAB14;

LAB16:    xsi_set_current_line(121, ng0);
    t7 = (t0 + 10296);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    t15 = (t11 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)2;
    xsi_driver_first_trans_fast(t7);
    goto LAB17;

LAB19:    xsi_set_current_line(130, ng0);
    t7 = (t0 + 10296);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    t15 = (t11 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)3;
    xsi_driver_first_trans_fast(t7);
    goto LAB20;

LAB22:    xsi_set_current_line(135, ng0);
    t7 = (t0 + 10296);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    t15 = (t11 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)4;
    xsi_driver_first_trans_fast(t7);
    goto LAB23;

LAB25:    xsi_set_current_line(140, ng0);
    t7 = (t0 + 10296);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    t15 = (t11 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)5;
    xsi_driver_first_trans_fast(t7);
    goto LAB26;

LAB28:    xsi_set_current_line(145, ng0);
    t7 = (t0 + 10296);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    t15 = (t11 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)6;
    xsi_driver_first_trans_fast(t7);
    goto LAB29;

LAB31:    xsi_set_current_line(150, ng0);
    t1 = (t0 + 10296);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)7;
    xsi_driver_first_trans_fast(t1);
    goto LAB32;

LAB34:    xsi_set_current_line(163, ng0);
    t1 = (t0 + 10296);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)9;
    xsi_driver_first_trans_fast(t1);
    goto LAB32;

LAB36:    xsi_set_current_line(176, ng0);
    t17 = (t0 + 10296);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = (unsigned char)8;
    xsi_driver_first_trans_fast(t17);
    goto LAB37;

LAB39:    t7 = (t0 + 5032U);
    t10 = *((char **)t7);
    t7 = (t0 + 17011);
    t9 = 1;
    if (32U == 32U)
        goto LAB42;

LAB43:    t9 = 0;

LAB44:    t3 = t9;
    goto LAB41;

LAB42:    t14 = 0;

LAB45:    if (t14 < 32U)
        goto LAB46;
    else
        goto LAB44;

LAB46:    t15 = (t10 + t14);
    t16 = (t7 + t14);
    if (*((unsigned char *)t15) != *((unsigned char *)t16))
        goto LAB43;

LAB47:    t14 = (t14 + 1);
    goto LAB45;

LAB48:    xsi_set_current_line(178, ng0);
    t17 = (t0 + 10296);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = (unsigned char)8;
    xsi_driver_first_trans_fast(t17);
    goto LAB37;

LAB50:    t7 = (t0 + 5032U);
    t10 = *((char **)t7);
    t7 = (t0 + 17059);
    t9 = 1;
    if (32U == 32U)
        goto LAB53;

LAB54:    t9 = 0;

LAB55:    t3 = t9;
    goto LAB52;

LAB53:    t14 = 0;

LAB56:    if (t14 < 32U)
        goto LAB57;
    else
        goto LAB55;

LAB57:    t15 = (t10 + t14);
    t16 = (t7 + t14);
    if (*((unsigned char *)t15) != *((unsigned char *)t16))
        goto LAB54;

LAB58:    t14 = (t14 + 1);
    goto LAB56;

LAB59:    xsi_set_current_line(180, ng0);
    t17 = (t0 + 10296);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = (unsigned char)8;
    xsi_driver_first_trans_fast(t17);
    goto LAB37;

LAB61:    t7 = (t0 + 5032U);
    t10 = *((char **)t7);
    t7 = (t0 + 17103);
    t9 = 1;
    if (32U == 32U)
        goto LAB64;

LAB65:    t9 = 0;

LAB66:    t3 = t9;
    goto LAB63;

LAB64:    t14 = 0;

LAB67:    if (t14 < 32U)
        goto LAB68;
    else
        goto LAB66;

LAB68:    t15 = (t10 + t14);
    t16 = (t7 + t14);
    if (*((unsigned char *)t15) != *((unsigned char *)t16))
        goto LAB65;

LAB69:    t14 = (t14 + 1);
    goto LAB67;

LAB70:    xsi_set_current_line(182, ng0);
    t17 = (t0 + 10296);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = (unsigned char)8;
    xsi_driver_first_trans_fast(t17);
    goto LAB37;

LAB72:    t7 = (t0 + 5032U);
    t10 = *((char **)t7);
    t7 = (t0 + 17147);
    t9 = 1;
    if (32U == 32U)
        goto LAB75;

LAB76:    t9 = 0;

LAB77:    t3 = t9;
    goto LAB74;

LAB75:    t14 = 0;

LAB78:    if (t14 < 32U)
        goto LAB79;
    else
        goto LAB77;

LAB79:    t15 = (t10 + t14);
    t16 = (t7 + t14);
    if (*((unsigned char *)t15) != *((unsigned char *)t16))
        goto LAB76;

LAB80:    t14 = (t14 + 1);
    goto LAB78;

LAB81:    xsi_set_current_line(184, ng0);
    t17 = (t0 + 10296);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = (unsigned char)8;
    xsi_driver_first_trans_fast(t17);
    goto LAB37;

LAB83:    t7 = (t0 + 5032U);
    t10 = *((char **)t7);
    t7 = (t0 + 17191);
    t9 = 1;
    if (32U == 32U)
        goto LAB86;

LAB87:    t9 = 0;

LAB88:    t3 = t9;
    goto LAB85;

LAB86:    t14 = 0;

LAB89:    if (t14 < 32U)
        goto LAB90;
    else
        goto LAB88;

LAB90:    t15 = (t10 + t14);
    t16 = (t7 + t14);
    if (*((unsigned char *)t15) != *((unsigned char *)t16))
        goto LAB87;

LAB91:    t14 = (t14 + 1);
    goto LAB89;

LAB92:    xsi_set_current_line(191, ng0);
    t7 = (t0 + 10296);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    t15 = (t11 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)9;
    xsi_driver_first_trans_fast(t7);
    goto LAB93;

LAB95:    t3 = (unsigned char)1;
    goto LAB97;

}

static void work_a_0507922934_3212880686_p_3(char *t0)
{
    unsigned char t1;
    unsigned char t2;
    char *t3;
    unsigned char t4;
    char *t5;
    char *t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    unsigned char t10;
    unsigned char t11;
    char *t12;
    unsigned char t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    static char *nl0[] = {&&LAB12, &&LAB13, &&LAB14, &&LAB15, &&LAB16, &&LAB17};

LAB0:    xsi_set_current_line(207, ng0);
    t3 = (t0 + 1952U);
    t4 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t4 == 1)
        goto LAB8;

LAB9:    t2 = (unsigned char)0;

LAB10:    if (t2 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t3 = (t0 + 9768);
    *((int *)t3) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(208, ng0);
    t5 = (t0 + 3912U);
    t12 = *((char **)t5);
    t13 = *((unsigned char *)t12);
    t5 = (t0 + 10360);
    t14 = (t5 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = t13;
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(215, ng0);
    t3 = (t0 + 3912U);
    t5 = *((char **)t3);
    t1 = *((unsigned char *)t5);
    t3 = (char *)((nl0) + t1);
    goto **((char **)t3);

LAB5:    t5 = (t0 + 1512U);
    t9 = *((char **)t5);
    t10 = *((unsigned char *)t9);
    t11 = (t10 == (unsigned char)2);
    t1 = t11;
    goto LAB7;

LAB8:    t5 = (t0 + 1192U);
    t6 = *((char **)t5);
    t7 = *((unsigned char *)t6);
    t8 = (t7 == (unsigned char)3);
    t2 = t8;
    goto LAB10;

LAB11:    goto LAB3;

LAB12:    xsi_set_current_line(217, ng0);
    t6 = (t0 + 3592U);
    t9 = *((char **)t6);
    t2 = *((unsigned char *)t9);
    t4 = (t2 == (unsigned char)6);
    if (t4 != 0)
        goto LAB18;

LAB20:
LAB19:    goto LAB11;

LAB13:    xsi_set_current_line(222, ng0);
    t3 = (t0 + 4552U);
    t5 = *((char **)t3);
    t1 = *((unsigned char *)t5);
    t2 = (t1 == (unsigned char)3);
    if (t2 != 0)
        goto LAB21;

LAB23:    t3 = (t0 + 4872U);
    t5 = *((char **)t3);
    t1 = *((unsigned char *)t5);
    t2 = (t1 == (unsigned char)2);
    if (t2 != 0)
        goto LAB24;

LAB25:    xsi_set_current_line(227, ng0);
    t3 = (t0 + 10360);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t9 = (t6 + 56U);
    t12 = *((char **)t9);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_first_trans_fast(t3);

LAB22:    goto LAB11;

LAB14:    xsi_set_current_line(231, ng0);
    t3 = (t0 + 4872U);
    t5 = *((char **)t3);
    t1 = *((unsigned char *)t5);
    t2 = (t1 == (unsigned char)3);
    if (t2 != 0)
        goto LAB26;

LAB28:    xsi_set_current_line(234, ng0);
    t3 = (t0 + 10360);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t9 = (t6 + 56U);
    t12 = *((char **)t9);
    *((unsigned char *)t12) = (unsigned char)5;
    xsi_driver_first_trans_fast(t3);

LAB27:    goto LAB11;

LAB15:    xsi_set_current_line(238, ng0);
    t3 = (t0 + 4552U);
    t5 = *((char **)t3);
    t1 = *((unsigned char *)t5);
    t2 = (t1 == (unsigned char)3);
    if (t2 != 0)
        goto LAB29;

LAB31:    xsi_set_current_line(241, ng0);
    t3 = (t0 + 10360);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t9 = (t6 + 56U);
    t12 = *((char **)t9);
    *((unsigned char *)t12) = (unsigned char)5;
    xsi_driver_first_trans_fast(t3);

LAB30:    goto LAB11;

LAB16:    xsi_set_current_line(245, ng0);
    t3 = (t0 + 10360);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t9 = (t6 + 56U);
    t12 = *((char **)t9);
    *((unsigned char *)t12) = (unsigned char)5;
    xsi_driver_first_trans_fast(t3);
    goto LAB11;

LAB17:    xsi_set_current_line(248, ng0);
    t3 = (t0 + 3592U);
    t5 = *((char **)t3);
    t1 = *((unsigned char *)t5);
    t2 = (t1 == (unsigned char)7);
    if (t2 != 0)
        goto LAB32;

LAB34:
LAB33:    goto LAB11;

LAB18:    xsi_set_current_line(218, ng0);
    t6 = (t0 + 10360);
    t12 = (t6 + 56U);
    t14 = *((char **)t12);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)1;
    xsi_driver_first_trans_fast(t6);
    goto LAB19;

LAB21:    xsi_set_current_line(223, ng0);
    t3 = (t0 + 10360);
    t6 = (t3 + 56U);
    t9 = *((char **)t6);
    t12 = (t9 + 56U);
    t14 = *((char **)t12);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_fast(t3);
    goto LAB22;

LAB24:    xsi_set_current_line(225, ng0);
    t3 = (t0 + 10360);
    t6 = (t3 + 56U);
    t9 = *((char **)t6);
    t12 = (t9 + 56U);
    t14 = *((char **)t12);
    *((unsigned char *)t14) = (unsigned char)5;
    xsi_driver_first_trans_fast(t3);
    goto LAB22;

LAB26:    xsi_set_current_line(232, ng0);
    t3 = (t0 + 10360);
    t6 = (t3 + 56U);
    t9 = *((char **)t6);
    t12 = (t9 + 56U);
    t14 = *((char **)t12);
    *((unsigned char *)t14) = (unsigned char)3;
    xsi_driver_first_trans_fast(t3);
    goto LAB27;

LAB29:    xsi_set_current_line(239, ng0);
    t3 = (t0 + 10360);
    t6 = (t3 + 56U);
    t9 = *((char **)t6);
    t12 = (t9 + 56U);
    t14 = *((char **)t12);
    *((unsigned char *)t14) = (unsigned char)4;
    xsi_driver_first_trans_fast(t3);
    goto LAB30;

LAB32:    xsi_set_current_line(249, ng0);
    t3 = (t0 + 10360);
    t6 = (t3 + 56U);
    t9 = *((char **)t6);
    t12 = (t9 + 56U);
    t14 = *((char **)t12);
    *((unsigned char *)t14) = (unsigned char)0;
    xsi_driver_first_trans_fast(t3);
    goto LAB33;

}

static void work_a_0507922934_3212880686_p_4(char *t0)
{
    char t13[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    unsigned char t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    int t16;
    unsigned int t17;
    unsigned char t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;

LAB0:    xsi_set_current_line(261, ng0);
    t1 = (t0 + 1952U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 9784);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(262, ng0);
    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(315, ng0);
    t1 = (t0 + 3592U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)0);
    if (t5 != 0)
        goto LAB57;

LAB59:
LAB58:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(263, ng0);
    t3 = (t0 + 3592U);
    t7 = *((char **)t3);
    t8 = *((unsigned char *)t7);
    t9 = (t8 == (unsigned char)2);
    if (t9 != 0)
        goto LAB8;

LAB10:    t1 = (t0 + 3592U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB17;

LAB18:    t1 = (t0 + 3592U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)4);
    if (t5 != 0)
        goto LAB28;

LAB29:    t1 = (t0 + 3592U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)5);
    if (t5 != 0)
        goto LAB44;

LAB45:    t1 = (t0 + 3592U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 != (unsigned char)1);
    if (t5 != 0)
        goto LAB55;

LAB56:
LAB9:    goto LAB6;

LAB8:    xsi_set_current_line(265, ng0);
    t3 = (t0 + 4392U);
    t10 = *((char **)t3);
    t3 = (t0 + 16504U);
    t11 = (t0 + 17223);
    t14 = (t13 + 0U);
    t15 = (t14 + 0U);
    *((int *)t15) = 0;
    t15 = (t14 + 4U);
    *((int *)t15) = 7;
    t15 = (t14 + 8U);
    *((int *)t15) = 1;
    t16 = (7 - 0);
    t17 = (t16 * 1);
    t17 = (t17 + 1);
    t15 = (t14 + 12U);
    *((unsigned int *)t15) = t17;
    t18 = ieee_p_1242562249_sub_2110375371_1035706684(IEEE_P_1242562249, t10, t3, t11, t13);
    if (t18 != 0)
        goto LAB11;

LAB13:    xsi_set_current_line(271, ng0);
    t1 = (t0 + 1032U);
    t3 = *((char **)t1);
    t17 = (7 - 7);
    t20 = (t17 * 1U);
    t21 = (0 + t20);
    t1 = (t3 + t21);
    t4 = (t0 + 10424);
    t7 = (t4 + 56U);
    t10 = *((char **)t7);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 8U);
    xsi_driver_first_trans_delta(t4, 0U, 8U, 0LL);

LAB12:    goto LAB9;

LAB11:    xsi_set_current_line(266, ng0);
    t15 = (t0 + 1032U);
    t19 = *((char **)t15);
    t17 = (7 - 7);
    t20 = (t17 * 1U);
    t21 = (0 + t20);
    t15 = (t19 + t21);
    t22 = (t0 + 10424);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t15, 8U);
    xsi_driver_first_trans_delta(t22, 8U, 8U, 0LL);
    xsi_set_current_line(267, ng0);
    t1 = (t0 + 1032U);
    t3 = *((char **)t1);
    t16 = (0 - 7);
    t17 = (t16 * -1);
    t20 = (1U * t17);
    t21 = (0 + t20);
    t1 = (t3 + t21);
    t2 = *((unsigned char *)t1);
    t5 = (t2 == (unsigned char)2);
    if (t5 != 0)
        goto LAB14;

LAB16:
LAB15:    goto LAB12;

LAB14:    xsi_set_current_line(268, ng0);
    t4 = (t0 + 10488);
    t7 = (t4 + 56U);
    t10 = *((char **)t7);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_first_trans_fast(t4);
    goto LAB15;

LAB17:    xsi_set_current_line(275, ng0);
    t1 = (t0 + 4392U);
    t4 = *((char **)t1);
    t1 = (t0 + 16504U);
    t7 = (t0 + 17231);
    t11 = (t13 + 0U);
    t12 = (t11 + 0U);
    *((int *)t12) = 0;
    t12 = (t11 + 4U);
    *((int *)t12) = 7;
    t12 = (t11 + 8U);
    *((int *)t12) = 1;
    t16 = (7 - 0);
    t17 = (t16 * 1);
    t17 = (t17 + 1);
    t12 = (t11 + 12U);
    *((unsigned int *)t12) = t17;
    t6 = ieee_p_1242562249_sub_2110375371_1035706684(IEEE_P_1242562249, t4, t1, t7, t13);
    if (t6 != 0)
        goto LAB19;

LAB21:    t1 = (t0 + 4392U);
    t3 = *((char **)t1);
    t1 = (t0 + 16504U);
    t4 = (t0 + 17239);
    t10 = (t13 + 0U);
    t11 = (t10 + 0U);
    *((int *)t11) = 0;
    t11 = (t10 + 4U);
    *((int *)t11) = 7;
    t11 = (t10 + 8U);
    *((int *)t11) = 1;
    t16 = (7 - 0);
    t17 = (t16 * 1);
    t17 = (t17 + 1);
    t11 = (t10 + 12U);
    *((unsigned int *)t11) = t17;
    t2 = ieee_p_1242562249_sub_2110375371_1035706684(IEEE_P_1242562249, t3, t1, t4, t13);
    if (t2 != 0)
        goto LAB22;

LAB23:    t1 = (t0 + 4392U);
    t3 = *((char **)t1);
    t1 = (t0 + 16504U);
    t4 = (t0 + 17247);
    t10 = (t13 + 0U);
    t11 = (t10 + 0U);
    *((int *)t11) = 0;
    t11 = (t10 + 4U);
    *((int *)t11) = 7;
    t11 = (t10 + 8U);
    *((int *)t11) = 1;
    t16 = (7 - 0);
    t17 = (t16 * 1);
    t17 = (t17 + 1);
    t11 = (t10 + 12U);
    *((unsigned int *)t11) = t17;
    t2 = ieee_p_1242562249_sub_2110375371_1035706684(IEEE_P_1242562249, t3, t1, t4, t13);
    if (t2 != 0)
        goto LAB24;

LAB25:    t1 = (t0 + 4392U);
    t3 = *((char **)t1);
    t1 = (t0 + 16504U);
    t4 = (t0 + 17255);
    t10 = (t13 + 0U);
    t11 = (t10 + 0U);
    *((int *)t11) = 0;
    t11 = (t10 + 4U);
    *((int *)t11) = 7;
    t11 = (t10 + 8U);
    *((int *)t11) = 1;
    t16 = (7 - 0);
    t17 = (t16 * 1);
    t17 = (t17 + 1);
    t11 = (t10 + 12U);
    *((unsigned int *)t11) = t17;
    t2 = ieee_p_1242562249_sub_2110375371_1035706684(IEEE_P_1242562249, t3, t1, t4, t13);
    if (t2 != 0)
        goto LAB26;

LAB27:
LAB20:    goto LAB9;

LAB19:    xsi_set_current_line(276, ng0);
    t12 = (t0 + 1032U);
    t14 = *((char **)t12);
    t17 = (7 - 7);
    t20 = (t17 * 1U);
    t21 = (0 + t20);
    t12 = (t14 + t21);
    t15 = (t0 + 10424);
    t19 = (t15 + 56U);
    t22 = *((char **)t19);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t12, 8U);
    xsi_driver_first_trans_delta(t15, 40U, 8U, 0LL);
    xsi_set_current_line(277, ng0);
    t1 = (t0 + 1032U);
    t3 = *((char **)t1);
    t17 = (7 - 7);
    t20 = (t17 * 1U);
    t21 = (0 + t20);
    t1 = (t3 + t21);
    t4 = (t0 + 10552);
    t7 = (t4 + 56U);
    t10 = *((char **)t7);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 8U);
    xsi_driver_first_trans_delta(t4, 24U, 8U, 0LL);
    goto LAB20;

LAB22:    xsi_set_current_line(279, ng0);
    t11 = (t0 + 1032U);
    t12 = *((char **)t11);
    t17 = (7 - 7);
    t20 = (t17 * 1U);
    t21 = (0 + t20);
    t11 = (t12 + t21);
    t14 = (t0 + 10424);
    t15 = (t14 + 56U);
    t19 = *((char **)t15);
    t22 = (t19 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t11, 8U);
    xsi_driver_first_trans_delta(t14, 32U, 8U, 0LL);
    xsi_set_current_line(280, ng0);
    t1 = (t0 + 1032U);
    t3 = *((char **)t1);
    t17 = (7 - 7);
    t20 = (t17 * 1U);
    t21 = (0 + t20);
    t1 = (t3 + t21);
    t4 = (t0 + 10552);
    t7 = (t4 + 56U);
    t10 = *((char **)t7);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 8U);
    xsi_driver_first_trans_delta(t4, 16U, 8U, 0LL);
    goto LAB20;

LAB24:    xsi_set_current_line(282, ng0);
    t11 = (t0 + 1032U);
    t12 = *((char **)t11);
    t17 = (7 - 7);
    t20 = (t17 * 1U);
    t21 = (0 + t20);
    t11 = (t12 + t21);
    t14 = (t0 + 10424);
    t15 = (t14 + 56U);
    t19 = *((char **)t15);
    t22 = (t19 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t11, 8U);
    xsi_driver_first_trans_delta(t14, 24U, 8U, 0LL);
    xsi_set_current_line(283, ng0);
    t1 = (t0 + 1032U);
    t3 = *((char **)t1);
    t17 = (7 - 7);
    t20 = (t17 * 1U);
    t21 = (0 + t20);
    t1 = (t3 + t21);
    t4 = (t0 + 10552);
    t7 = (t4 + 56U);
    t10 = *((char **)t7);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 8U);
    xsi_driver_first_trans_delta(t4, 8U, 8U, 0LL);
    goto LAB20;

LAB26:    xsi_set_current_line(285, ng0);
    t11 = (t0 + 1032U);
    t12 = *((char **)t11);
    t17 = (7 - 7);
    t20 = (t17 * 1U);
    t21 = (0 + t20);
    t11 = (t12 + t21);
    t14 = (t0 + 10424);
    t15 = (t14 + 56U);
    t19 = *((char **)t15);
    t22 = (t19 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t11, 8U);
    xsi_driver_first_trans_delta(t14, 16U, 8U, 0LL);
    xsi_set_current_line(286, ng0);
    t1 = (t0 + 1032U);
    t3 = *((char **)t1);
    t17 = (7 - 7);
    t20 = (t17 * 1U);
    t21 = (0 + t20);
    t1 = (t3 + t21);
    t4 = (t0 + 10552);
    t7 = (t4 + 56U);
    t10 = *((char **)t7);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 8U);
    xsi_driver_first_trans_delta(t4, 0U, 8U, 0LL);
    goto LAB20;

LAB28:    xsi_set_current_line(290, ng0);
    t1 = (t0 + 4392U);
    t4 = *((char **)t1);
    t1 = (t0 + 16504U);
    t7 = (t0 + 17263);
    t11 = (t13 + 0U);
    t12 = (t11 + 0U);
    *((int *)t12) = 0;
    t12 = (t11 + 4U);
    *((int *)t12) = 7;
    t12 = (t11 + 8U);
    *((int *)t12) = 1;
    t16 = (7 - 0);
    t17 = (t16 * 1);
    t17 = (t17 + 1);
    t12 = (t11 + 12U);
    *((unsigned int *)t12) = t17;
    t6 = ieee_p_1242562249_sub_2110375371_1035706684(IEEE_P_1242562249, t4, t1, t7, t13);
    if (t6 != 0)
        goto LAB30;

LAB32:    t1 = (t0 + 4392U);
    t3 = *((char **)t1);
    t1 = (t0 + 16504U);
    t4 = (t0 + 17279);
    t10 = (t13 + 0U);
    t11 = (t10 + 0U);
    *((int *)t11) = 0;
    t11 = (t10 + 4U);
    *((int *)t11) = 7;
    t11 = (t10 + 8U);
    *((int *)t11) = 1;
    t16 = (7 - 0);
    t17 = (t16 * 1);
    t17 = (t17 + 1);
    t11 = (t10 + 12U);
    *((unsigned int *)t11) = t17;
    t2 = ieee_p_1242562249_sub_2110375371_1035706684(IEEE_P_1242562249, t3, t1, t4, t13);
    if (t2 != 0)
        goto LAB42;

LAB43:
LAB31:    goto LAB9;

LAB30:    xsi_set_current_line(291, ng0);
    t12 = (t0 + 1032U);
    t14 = *((char **)t12);
    t17 = (7 - 7);
    t20 = (t17 * 1U);
    t21 = (0 + t20);
    t12 = (t14 + t21);
    t15 = (t0 + 10424);
    t19 = (t15 + 56U);
    t22 = *((char **)t19);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t12, 8U);
    xsi_driver_first_trans_delta(t15, 56U, 8U, 0LL);
    xsi_set_current_line(292, ng0);
    t1 = (t0 + 1032U);
    t3 = *((char **)t1);
    t1 = (t0 + 17271);
    t2 = 1;
    if (8U == 8U)
        goto LAB36;

LAB37:    t2 = 0;

LAB38:    if (t2 != 0)
        goto LAB33;

LAB35:
LAB34:    goto LAB31;

LAB33:    xsi_set_current_line(293, ng0);
    t11 = (t0 + 10616);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    t15 = (t14 + 56U);
    t19 = *((char **)t15);
    *((unsigned char *)t19) = (unsigned char)3;
    xsi_driver_first_trans_fast(t11);
    goto LAB34;

LAB36:    t17 = 0;

LAB39:    if (t17 < 8U)
        goto LAB40;
    else
        goto LAB38;

LAB40:    t7 = (t3 + t17);
    t10 = (t1 + t17);
    if (*((unsigned char *)t7) != *((unsigned char *)t10))
        goto LAB37;

LAB41:    t17 = (t17 + 1);
    goto LAB39;

LAB42:    xsi_set_current_line(296, ng0);
    t11 = (t0 + 1032U);
    t12 = *((char **)t11);
    t17 = (7 - 7);
    t20 = (t17 * 1U);
    t21 = (0 + t20);
    t11 = (t12 + t21);
    t14 = (t0 + 10424);
    t15 = (t14 + 56U);
    t19 = *((char **)t15);
    t22 = (t19 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t11, 8U);
    xsi_driver_first_trans_delta(t14, 48U, 8U, 0LL);
    goto LAB31;

LAB44:    xsi_set_current_line(300, ng0);
    t1 = (t0 + 4392U);
    t4 = *((char **)t1);
    t1 = (t0 + 16504U);
    t7 = (t0 + 17287);
    t11 = (t13 + 0U);
    t12 = (t11 + 0U);
    *((int *)t12) = 0;
    t12 = (t11 + 4U);
    *((int *)t12) = 7;
    t12 = (t11 + 8U);
    *((int *)t12) = 1;
    t16 = (7 - 0);
    t17 = (t16 * 1);
    t17 = (t17 + 1);
    t12 = (t11 + 12U);
    *((unsigned int *)t12) = t17;
    t6 = ieee_p_1242562249_sub_2110375371_1035706684(IEEE_P_1242562249, t4, t1, t7, t13);
    if (t6 != 0)
        goto LAB46;

LAB48:    t1 = (t0 + 4392U);
    t3 = *((char **)t1);
    t1 = (t0 + 16504U);
    t4 = (t0 + 17295);
    t10 = (t13 + 0U);
    t11 = (t10 + 0U);
    *((int *)t11) = 0;
    t11 = (t10 + 4U);
    *((int *)t11) = 7;
    t11 = (t10 + 8U);
    *((int *)t11) = 1;
    t16 = (7 - 0);
    t17 = (t16 * 1);
    t17 = (t17 + 1);
    t11 = (t10 + 12U);
    *((unsigned int *)t11) = t17;
    t2 = ieee_p_1242562249_sub_2110375371_1035706684(IEEE_P_1242562249, t3, t1, t4, t13);
    if (t2 != 0)
        goto LAB49;

LAB50:    t1 = (t0 + 4392U);
    t3 = *((char **)t1);
    t1 = (t0 + 16504U);
    t4 = (t0 + 17303);
    t10 = (t13 + 0U);
    t11 = (t10 + 0U);
    *((int *)t11) = 0;
    t11 = (t10 + 4U);
    *((int *)t11) = 7;
    t11 = (t10 + 8U);
    *((int *)t11) = 1;
    t16 = (7 - 0);
    t17 = (t16 * 1);
    t17 = (t17 + 1);
    t11 = (t10 + 12U);
    *((unsigned int *)t11) = t17;
    t2 = ieee_p_1242562249_sub_2110375371_1035706684(IEEE_P_1242562249, t3, t1, t4, t13);
    if (t2 != 0)
        goto LAB51;

LAB52:    t1 = (t0 + 4392U);
    t3 = *((char **)t1);
    t1 = (t0 + 16504U);
    t4 = (t0 + 17311);
    t10 = (t13 + 0U);
    t11 = (t10 + 0U);
    *((int *)t11) = 0;
    t11 = (t10 + 4U);
    *((int *)t11) = 7;
    t11 = (t10 + 8U);
    *((int *)t11) = 1;
    t16 = (7 - 0);
    t17 = (t16 * 1);
    t17 = (t17 + 1);
    t11 = (t10 + 12U);
    *((unsigned int *)t11) = t17;
    t2 = ieee_p_1242562249_sub_2110375371_1035706684(IEEE_P_1242562249, t3, t1, t4, t13);
    if (t2 != 0)
        goto LAB53;

LAB54:
LAB47:    goto LAB9;

LAB46:    xsi_set_current_line(301, ng0);
    t12 = (t0 + 1032U);
    t14 = *((char **)t12);
    t17 = (7 - 7);
    t20 = (t17 * 1U);
    t21 = (0 + t20);
    t12 = (t14 + t21);
    t15 = (t0 + 10680);
    t19 = (t15 + 56U);
    t22 = *((char **)t19);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t12, 8U);
    xsi_driver_first_trans_delta(t15, 24U, 8U, 0LL);
    goto LAB47;

LAB49:    xsi_set_current_line(303, ng0);
    t11 = (t0 + 1032U);
    t12 = *((char **)t11);
    t17 = (7 - 7);
    t20 = (t17 * 1U);
    t21 = (0 + t20);
    t11 = (t12 + t21);
    t14 = (t0 + 10680);
    t15 = (t14 + 56U);
    t19 = *((char **)t15);
    t22 = (t19 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t11, 8U);
    xsi_driver_first_trans_delta(t14, 16U, 8U, 0LL);
    goto LAB47;

LAB51:    xsi_set_current_line(305, ng0);
    t11 = (t0 + 1032U);
    t12 = *((char **)t11);
    t17 = (7 - 7);
    t20 = (t17 * 1U);
    t21 = (0 + t20);
    t11 = (t12 + t21);
    t14 = (t0 + 10680);
    t15 = (t14 + 56U);
    t19 = *((char **)t15);
    t22 = (t19 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t11, 8U);
    xsi_driver_first_trans_delta(t14, 8U, 8U, 0LL);
    goto LAB47;

LAB53:    xsi_set_current_line(307, ng0);
    t11 = (t0 + 1032U);
    t12 = *((char **)t11);
    t17 = (7 - 7);
    t20 = (t17 * 1U);
    t21 = (0 + t20);
    t11 = (t12 + t21);
    t14 = (t0 + 10680);
    t15 = (t14 + 56U);
    t19 = *((char **)t15);
    t22 = (t19 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t11, 8U);
    xsi_driver_first_trans_delta(t14, 0U, 8U, 0LL);
    goto LAB47;

LAB55:    goto LAB9;

LAB57:    xsi_set_current_line(316, ng0);
    t1 = xsi_get_transient_memory(64U);
    memset(t1, 0, 64U);
    t4 = t1;
    memset(t4, (unsigned char)2, 64U);
    t7 = (t0 + 10424);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    memcpy(t14, t1, 64U);
    xsi_driver_first_trans_fast_port(t7);
    xsi_set_current_line(317, ng0);
    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t3 = t1;
    memset(t3, (unsigned char)2, 32U);
    t4 = (t0 + 10552);
    t7 = (t4 + 56U);
    t10 = *((char **)t7);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 32U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(318, ng0);
    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t3 = t1;
    memset(t3, (unsigned char)2, 32U);
    t4 = (t0 + 10680);
    t7 = (t4 + 56U);
    t10 = *((char **)t7);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 32U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(319, ng0);
    t1 = (t0 + 10488);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t10 = *((char **)t7);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(320, ng0);
    t1 = (t0 + 10616);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t10 = *((char **)t7);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB58;

}

static void work_a_0507922934_3212880686_p_5(char *t0)
{
    char t27[16];
    char t42[16];
    char t45[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    unsigned char t8;
    unsigned char t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    unsigned char t13;
    char *t14;
    unsigned char t15;
    unsigned char t16;
    char *t17;
    unsigned char t18;
    unsigned char t19;
    char *t20;
    int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned char t25;
    unsigned char t26;
    char *t28;
    char *t29;
    int t30;
    char *t31;
    char *t32;
    int t33;
    int t34;
    int t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    unsigned int t43;
    unsigned int t44;

LAB0:    xsi_set_current_line(329, ng0);
    t1 = (t0 + 1952U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 9800);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(330, ng0);
    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(331, ng0);
    t3 = (t0 + 3592U);
    t7 = *((char **)t3);
    t8 = *((unsigned char *)t7);
    t9 = (t8 == (unsigned char)6);
    if (t9 != 0)
        goto LAB8;

LAB10:    t1 = (t0 + 3592U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)7);
    if (t5 != 0)
        goto LAB40;

LAB41:    t1 = (t0 + 3592U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)0);
    if (t5 != 0)
        goto LAB42;

LAB43:
LAB9:    goto LAB6;

LAB8:    xsi_set_current_line(340, ng0);
    t3 = (t0 + 4552U);
    t10 = *((char **)t3);
    t11 = *((unsigned char *)t10);
    t12 = (t11 == (unsigned char)3);
    if (t12 != 0)
        goto LAB11;

LAB13:    xsi_set_current_line(352, ng0);
    t1 = (t0 + 1032U);
    t3 = *((char **)t1);
    t22 = (7 - 7);
    t23 = (t22 * 1U);
    t24 = (0 + t23);
    t1 = (t3 + t24);
    t4 = (t0 + 17319);
    t14 = ((IEEE_P_2592010699) + 4024);
    t17 = (t42 + 0U);
    t20 = (t17 + 0U);
    *((int *)t20) = 7;
    t20 = (t17 + 4U);
    *((int *)t20) = 0;
    t20 = (t17 + 8U);
    *((int *)t20) = -1;
    t21 = (0 - 7);
    t43 = (t21 * -1);
    t43 = (t43 + 1);
    t20 = (t17 + 12U);
    *((unsigned int *)t20) = t43;
    t20 = (t45 + 0U);
    t28 = (t20 + 0U);
    *((int *)t28) = 0;
    t28 = (t20 + 4U);
    *((int *)t28) = 3;
    t28 = (t20 + 8U);
    *((int *)t28) = 1;
    t30 = (3 - 0);
    t43 = (t30 * 1);
    t43 = (t43 + 1);
    t28 = (t20 + 12U);
    *((unsigned int *)t28) = t43;
    t10 = xsi_base_array_concat(t10, t27, t14, (char)97, t1, t42, (char)97, t4, t45, (char)101);
    t43 = (8U + 4U);
    t2 = (12U != t43);
    if (t2 == 1)
        goto LAB30;

LAB31:    t28 = (t0 + 10744);
    t29 = (t28 + 56U);
    t31 = *((char **)t29);
    t32 = (t31 + 56U);
    t36 = *((char **)t32);
    memcpy(t36, t10, 12U);
    xsi_driver_first_trans_delta(t28, 0U, 12U, 0LL);

LAB12:    xsi_set_current_line(355, ng0);
    t1 = (t0 + 3912U);
    t3 = *((char **)t1);
    t5 = *((unsigned char *)t3);
    t6 = (t5 != (unsigned char)0);
    if (t6 == 1)
        goto LAB35;

LAB36:    t2 = (unsigned char)0;

LAB37:    if (t2 != 0)
        goto LAB32;

LAB34:
LAB33:    goto LAB9;

LAB11:    xsi_set_current_line(341, ng0);
    t3 = (t0 + 3912U);
    t14 = *((char **)t3);
    t15 = *((unsigned char *)t14);
    t16 = (t15 == (unsigned char)2);
    if (t16 == 1)
        goto LAB17;

LAB18:    t3 = (t0 + 3912U);
    t17 = *((char **)t3);
    t18 = *((unsigned char *)t17);
    t19 = (t18 == (unsigned char)4);
    t13 = t19;

LAB19:    if (t13 != 0)
        goto LAB14;

LAB16:    t1 = (t0 + 3912U);
    t3 = *((char **)t1);
    t5 = *((unsigned char *)t3);
    t6 = (t5 == (unsigned char)1);
    if (t6 == 1)
        goto LAB25;

LAB26:    t1 = (t0 + 3912U);
    t4 = *((char **)t1);
    t8 = *((unsigned char *)t4);
    t9 = (t8 == (unsigned char)3);
    t2 = t9;

LAB27:    if (t2 != 0)
        goto LAB23;

LAB24:
LAB15:    goto LAB12;

LAB14:    xsi_set_current_line(342, ng0);
    t3 = (t0 + 1032U);
    t20 = *((char **)t3);
    t21 = (7 - 7);
    t22 = (t21 * -1);
    t23 = (1U * t22);
    t24 = (0 + t23);
    t3 = (t20 + t24);
    t25 = *((unsigned char *)t3);
    t26 = (t25 == (unsigned char)3);
    if (t26 != 0)
        goto LAB20;

LAB22:    xsi_set_current_line(345, ng0);
    t1 = (t0 + 1032U);
    t3 = *((char **)t1);
    t22 = (7 - 7);
    t23 = (t22 * 1U);
    t24 = (0 + t23);
    t1 = (t3 + t24);
    t4 = (t0 + 10744);
    t7 = (t4 + 56U);
    t10 = *((char **)t7);
    t14 = (t10 + 56U);
    t17 = *((char **)t14);
    memcpy(t17, t1, 8U);
    xsi_driver_first_trans_delta(t4, 0U, 8U, 0LL);

LAB21:    goto LAB15;

LAB17:    t13 = (unsigned char)1;
    goto LAB19;

LAB20:    xsi_set_current_line(343, ng0);
    t28 = (t0 + 1032U);
    t29 = *((char **)t28);
    t28 = (t0 + 16424U);
    t30 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t29, t28);
    t31 = (t0 + 4712U);
    t32 = *((char **)t31);
    t31 = (t0 + 16520U);
    t33 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t32, t31);
    t34 = (t30 + t33);
    t35 = (t34 + 65536);
    t36 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t27, t35, 12);
    t37 = (t0 + 10744);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    t40 = (t39 + 56U);
    t41 = *((char **)t40);
    memcpy(t41, t36, 12U);
    xsi_driver_first_trans_delta(t37, 0U, 12U, 0LL);
    goto LAB21;

LAB23:    xsi_set_current_line(348, ng0);
    t1 = (t0 + 1032U);
    t7 = *((char **)t1);
    t22 = (7 - 7);
    t23 = (t22 * 1U);
    t24 = (0 + t23);
    t1 = (t7 + t24);
    t10 = (t0 + 10744);
    t14 = (t10 + 56U);
    t17 = *((char **)t14);
    t20 = (t17 + 56U);
    t28 = *((char **)t20);
    memcpy(t28, t1, 4U);
    xsi_driver_first_trans_delta(t10, 8U, 4U, 0LL);
    xsi_set_current_line(349, ng0);
    t1 = (t0 + 4712U);
    t3 = *((char **)t1);
    t1 = (t0 + 16520U);
    t4 = (t0 + 1032U);
    t7 = *((char **)t4);
    t22 = (7 - 7);
    t23 = (t22 * 1U);
    t24 = (0 + t23);
    t4 = (t7 + t24);
    t10 = (t42 + 0U);
    t14 = (t10 + 0U);
    *((int *)t14) = 7;
    t14 = (t10 + 4U);
    *((int *)t14) = 4;
    t14 = (t10 + 8U);
    *((int *)t14) = -1;
    t21 = (4 - 7);
    t43 = (t21 * -1);
    t43 = (t43 + 1);
    t14 = (t10 + 12U);
    *((unsigned int *)t14) = t43;
    t14 = ieee_p_1242562249_sub_1547198987_1035706684(IEEE_P_1242562249, t27, t3, t1, t4, t42);
    t17 = (t27 + 12U);
    t43 = *((unsigned int *)t17);
    t44 = (1U * t43);
    t2 = (16U != t44);
    if (t2 == 1)
        goto LAB28;

LAB29:    t20 = (t0 + 10808);
    t28 = (t20 + 56U);
    t29 = *((char **)t28);
    t31 = (t29 + 56U);
    t32 = *((char **)t31);
    memcpy(t32, t14, 16U);
    xsi_driver_first_trans_fast(t20);
    goto LAB15;

LAB25:    t2 = (unsigned char)1;
    goto LAB27;

LAB28:    xsi_size_not_matching(16U, t44, 0);
    goto LAB29;

LAB30:    xsi_size_not_matching(12U, t43, 0);
    goto LAB31;

LAB32:    xsi_set_current_line(356, ng0);
    t1 = (t0 + 5512U);
    t7 = *((char **)t1);
    t1 = (t0 + 16584U);
    t10 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t27, t7, t1, 1);
    t14 = (t27 + 12U);
    t22 = *((unsigned int *)t14);
    t23 = (1U * t22);
    t11 = (32U != t23);
    if (t11 == 1)
        goto LAB38;

LAB39:    t17 = (t0 + 10872);
    t20 = (t17 + 56U);
    t28 = *((char **)t20);
    t29 = (t28 + 56U);
    t31 = *((char **)t29);
    memcpy(t31, t10, 32U);
    xsi_driver_first_trans_fast(t17);
    goto LAB33;

LAB35:    t1 = (t0 + 3912U);
    t4 = *((char **)t1);
    t8 = *((unsigned char *)t4);
    t9 = (t8 != (unsigned char)5);
    t2 = t9;
    goto LAB37;

LAB38:    xsi_size_not_matching(32U, t23, 0);
    goto LAB39;

LAB40:    xsi_set_current_line(360, ng0);
    t1 = xsi_get_transient_memory(16U);
    memset(t1, 0, 16U);
    t4 = t1;
    memset(t4, (unsigned char)2, 16U);
    t7 = (t0 + 10808);
    t10 = (t7 + 56U);
    t14 = *((char **)t10);
    t17 = (t14 + 56U);
    t20 = *((char **)t17);
    memcpy(t20, t1, 16U);
    xsi_driver_first_trans_fast(t7);
    goto LAB9;

LAB42:    xsi_set_current_line(362, ng0);
    t1 = xsi_get_transient_memory(12U);
    memset(t1, 0, 12U);
    t4 = t1;
    memset(t4, (unsigned char)2, 12U);
    t7 = (t0 + 10744);
    t10 = (t7 + 56U);
    t14 = *((char **)t10);
    t17 = (t14 + 56U);
    t20 = *((char **)t17);
    memcpy(t20, t1, 12U);
    xsi_driver_first_trans_fast_port(t7);
    xsi_set_current_line(363, ng0);
    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t3 = t1;
    memset(t3, (unsigned char)2, 32U);
    t4 = (t0 + 10872);
    t7 = (t4 + 56U);
    t10 = *((char **)t7);
    t14 = (t10 + 56U);
    t17 = *((char **)t14);
    memcpy(t17, t1, 32U);
    xsi_driver_first_trans_fast(t4);
    goto LAB9;

}

static void work_a_0507922934_3212880686_p_6(char *t0)
{
    char *t1;
    unsigned char t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    unsigned char t11;
    char *t12;
    unsigned char t13;
    unsigned char t14;
    char *t15;
    unsigned char t16;
    unsigned char t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;

LAB0:    xsi_set_current_line(371, ng0);
    t1 = (t0 + 1952U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 9816);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(372, ng0);
    t4 = (t0 + 3592U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)6);
    if (t7 == 1)
        goto LAB8;

LAB9:    t4 = (t0 + 3592U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)8);
    t3 = t10;

LAB10:    if (t3 != 0)
        goto LAB5;

LAB7:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(377, ng0);
    t4 = (t0 + 3912U);
    t12 = *((char **)t4);
    t13 = *((unsigned char *)t12);
    t14 = (t13 == (unsigned char)1);
    if (t14 == 1)
        goto LAB14;

LAB15:    t4 = (t0 + 3912U);
    t15 = *((char **)t4);
    t16 = *((unsigned char *)t15);
    t17 = (t16 == (unsigned char)2);
    t11 = t17;

LAB16:    if (t11 != 0)
        goto LAB11;

LAB13:    xsi_set_current_line(382, ng0);
    t1 = (t0 + 17331);
    t5 = (t0 + 10936);
    t8 = (t5 + 56U);
    t12 = *((char **)t8);
    t15 = (t12 + 56U);
    t18 = *((char **)t15);
    memcpy(t18, t1, 4U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(383, ng0);
    t1 = (t0 + 17335);
    t5 = (t0 + 11000);
    t8 = (t5 + 56U);
    t12 = *((char **)t8);
    t15 = (t12 + 56U);
    t18 = *((char **)t15);
    memcpy(t18, t1, 4U);
    xsi_driver_first_trans_fast_port(t5);

LAB12:    goto LAB6;

LAB8:    t3 = (unsigned char)1;
    goto LAB10;

LAB11:    xsi_set_current_line(378, ng0);
    t4 = (t0 + 17323);
    t19 = (t0 + 10936);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t4, 4U);
    xsi_driver_first_trans_fast_port(t19);
    xsi_set_current_line(379, ng0);
    t1 = (t0 + 17327);
    t5 = (t0 + 11000);
    t8 = (t5 + 56U);
    t12 = *((char **)t8);
    t15 = (t12 + 56U);
    t18 = *((char **)t15);
    memcpy(t18, t1, 4U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB12;

LAB14:    t11 = (unsigned char)1;
    goto LAB16;

}

static void work_a_0507922934_3212880686_p_7(char *t0)
{
    unsigned char t1;
    unsigned char t2;
    unsigned char t3;
    unsigned char t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    unsigned char t12;
    unsigned char t13;
    char *t14;
    unsigned char t15;
    unsigned char t16;
    char *t17;
    unsigned char t18;
    unsigned char t19;
    char *t20;
    unsigned char t21;
    unsigned char t22;
    unsigned char t23;
    char *t24;
    unsigned char t25;
    unsigned char t26;
    unsigned char t27;
    char *t28;
    unsigned char t29;
    unsigned char t30;
    char *t31;
    unsigned char t32;
    unsigned char t33;
    char *t34;
    unsigned char t35;
    unsigned char t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;

LAB0:    xsi_set_current_line(393, ng0);
    t7 = (t0 + 3592U);
    t8 = *((char **)t7);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)1);
    if (t10 == 1)
        goto LAB20;

LAB21:    t7 = (t0 + 3592U);
    t11 = *((char **)t7);
    t12 = *((unsigned char *)t11);
    t13 = (t12 == (unsigned char)2);
    t6 = t13;

LAB22:    if (t6 == 1)
        goto LAB17;

LAB18:    t7 = (t0 + 3592U);
    t14 = *((char **)t7);
    t15 = *((unsigned char *)t14);
    t16 = (t15 == (unsigned char)3);
    t5 = t16;

LAB19:    if (t5 == 1)
        goto LAB14;

LAB15:    t7 = (t0 + 3592U);
    t17 = *((char **)t7);
    t18 = *((unsigned char *)t17);
    t19 = (t18 == (unsigned char)4);
    t4 = t19;

LAB16:    if (t4 == 1)
        goto LAB11;

LAB12:    t7 = (t0 + 3592U);
    t20 = *((char **)t7);
    t21 = *((unsigned char *)t20);
    t22 = (t21 == (unsigned char)5);
    t3 = t22;

LAB13:    if (t3 == 1)
        goto LAB8;

LAB9:    t7 = (t0 + 3592U);
    t24 = *((char **)t7);
    t25 = *((unsigned char *)t24);
    t26 = (t25 == (unsigned char)6);
    if (t26 == 1)
        goto LAB23;

LAB24:    t23 = (unsigned char)0;

LAB25:    t2 = t23;

LAB10:    if (t2 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB29:    t41 = (t0 + 11064);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    *((unsigned char *)t45) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t41);

LAB2:    t46 = (t0 + 9832);
    *((int *)t46) = 1;

LAB1:    return;
LAB3:    t7 = (t0 + 11064);
    t37 = (t7 + 56U);
    t38 = *((char **)t37);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    *((unsigned char *)t40) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t7);
    goto LAB2;

LAB5:    t7 = (t0 + 1192U);
    t34 = *((char **)t7);
    t35 = *((unsigned char *)t34);
    t36 = (t35 == (unsigned char)3);
    t1 = t36;
    goto LAB7;

LAB8:    t2 = (unsigned char)1;
    goto LAB10;

LAB11:    t3 = (unsigned char)1;
    goto LAB13;

LAB14:    t4 = (unsigned char)1;
    goto LAB16;

LAB17:    t5 = (unsigned char)1;
    goto LAB19;

LAB20:    t6 = (unsigned char)1;
    goto LAB22;

LAB23:    t7 = (t0 + 3912U);
    t28 = *((char **)t7);
    t29 = *((unsigned char *)t28);
    t30 = (t29 != (unsigned char)0);
    if (t30 == 1)
        goto LAB26;

LAB27:    t27 = (unsigned char)0;

LAB28:    t23 = t27;
    goto LAB25;

LAB26:    t7 = (t0 + 3912U);
    t31 = *((char **)t7);
    t32 = *((unsigned char *)t31);
    t33 = (t32 != (unsigned char)5);
    t27 = t33;
    goto LAB28;

LAB30:    goto LAB2;

}

static void work_a_0507922934_3212880686_p_8(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(396, ng0);
    t1 = (t0 + 3592U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)8);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t9 = (t0 + 11128);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t9);

LAB2:    t14 = (t0 + 9848);
    *((int *)t14) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 11128);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_0507922934_3212880686_p_9(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(399, ng0);
    t1 = (t0 + 3592U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 != (unsigned char)0);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t9 = (t0 + 11192);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t9);

LAB2:    t14 = (t0 + 9864);
    *((int *)t14) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 11192);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_0507922934_3212880686_p_10(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(402, ng0);

LAB3:    t1 = (t0 + 4872U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 11256);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 9880);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0507922934_3212880686_p_11(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(403, ng0);

LAB3:    t1 = (t0 + 4552U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 11320);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 9896);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_0507922934_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0507922934_3212880686_p_0,(void *)work_a_0507922934_3212880686_p_1,(void *)work_a_0507922934_3212880686_p_2,(void *)work_a_0507922934_3212880686_p_3,(void *)work_a_0507922934_3212880686_p_4,(void *)work_a_0507922934_3212880686_p_5,(void *)work_a_0507922934_3212880686_p_6,(void *)work_a_0507922934_3212880686_p_7,(void *)work_a_0507922934_3212880686_p_8,(void *)work_a_0507922934_3212880686_p_9,(void *)work_a_0507922934_3212880686_p_10,(void *)work_a_0507922934_3212880686_p_11};
	xsi_register_didat("work_a_0507922934_3212880686", "isim/registerTest_isim_beh.exe.sim/work/a_0507922934_3212880686.didat");
	xsi_register_executes(pe);
}
