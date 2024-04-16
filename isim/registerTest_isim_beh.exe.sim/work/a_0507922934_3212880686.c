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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/xololt/repos/UCISW2-main-new/register.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_1006216973935652998_1035706684(char *, char *, char *, char *, int );
unsigned char ieee_p_1242562249_sub_1434214030532789707_1035706684(char *, char *, char *, char *, char *);
unsigned char ieee_p_1242562249_sub_1434220770698190313_1035706684(char *, char *, char *, char *, char *);
unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );


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

LAB0:    xsi_set_current_line(73, ng0);
    t1 = (t0 + 1952U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 9552);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(74, ng0);
    t3 = (t0 + 1832U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(80, ng0);
    t1 = (t0 + 1672U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB8;

LAB10:
LAB9:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(75, ng0);
    t3 = (t0 + 9808);
    t7 = (t3 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)0;
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(76, ng0);
    t1 = (t0 + 9872);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(77, ng0);
    t1 = xsi_get_transient_memory(64U);
    memset(t1, 0, 64U);
    t3 = t1;
    memset(t3, (unsigned char)2, 64U);
    t4 = (t0 + 9936);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 64U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(78, ng0);
    t1 = (t0 + 10000);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB6;

LAB8:    xsi_set_current_line(81, ng0);
    t1 = (t0 + 3752U);
    t4 = *((char **)t1);
    t6 = *((unsigned char *)t4);
    t1 = (t0 + 9808);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t6;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(82, ng0);
    t1 = (t0 + 4072U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 9872);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(83, ng0);
    t1 = (t0 + 1192U);
    t3 = *((char **)t1);
    t5 = *((unsigned char *)t3);
    t6 = (t5 == (unsigned char)3);
    if (t6 == 1)
        goto LAB14;

LAB15:    t2 = (unsigned char)0;

LAB16:    if (t2 != 0)
        goto LAB11;

LAB13:    xsi_set_current_line(87, ng0);
    t1 = (t0 + 10000);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB12:    goto LAB9;

LAB11:    xsi_set_current_line(84, ng0);
    t1 = (t0 + 4392U);
    t7 = *((char **)t1);
    t1 = (t0 + 15560U);
    t8 = ieee_p_1242562249_sub_1006216973935652998_1035706684(IEEE_P_1242562249, t13, t7, t1, 1);
    t9 = (t13 + 12U);
    t14 = *((unsigned int *)t9);
    t15 = (1U * t14);
    t16 = (64U != t15);
    if (t16 == 1)
        goto LAB17;

LAB18:    t10 = (t0 + 9936);
    t17 = (t10 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t8, 64U);
    xsi_driver_first_trans_fast(t10);
    xsi_set_current_line(85, ng0);
    t1 = (t0 + 10000);
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

LAB0:    xsi_set_current_line(97, ng0);
    t1 = (t0 + 1952U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 9568);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(98, ng0);
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
    t2 = *((unsigned char *)t4);
    t3 = (t2 == (unsigned char)7);
    if (t3 != 0)
        goto LAB11;

LAB12:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(99, ng0);
    t4 = xsi_get_transient_memory(64U);
    memset(t4, 0, 64U);
    t11 = t4;
    memset(t11, (unsigned char)2, 64U);
    t12 = (t0 + 10064);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t4, 64U);
    xsi_driver_first_trans_fast(t12);
    goto LAB6;

LAB8:    t3 = (unsigned char)1;
    goto LAB10;

LAB11:    xsi_set_current_line(101, ng0);
    t1 = (t0 + 5032U);
    t5 = *((char **)t1);
    t1 = (t0 + 15592U);
    t8 = ieee_p_1242562249_sub_1006216973935652998_1035706684(IEEE_P_1242562249, t17, t5, t1, 1);
    t11 = (t17 + 12U);
    t18 = *((unsigned int *)t11);
    t19 = (1U * t18);
    t6 = (64U != t19);
    if (t6 == 1)
        goto LAB13;

LAB14:    t12 = (t0 + 10064);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t8, 64U);
    xsi_driver_first_trans_fast(t12);
    goto LAB6;

LAB13:    xsi_size_not_matching(64U, t19, 0);
    goto LAB14;

}

static void work_a_0507922934_3212880686_p_2(char *t0)
{
    char t12[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned char t10;
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
    static char *nl0[] = {&&LAB6, &&LAB7, &&LAB8, &&LAB9, &&LAB10, &&LAB11, &&LAB12, &&LAB13, &&LAB14, &&LAB15};

LAB0:    xsi_set_current_line(108, ng0);
    t1 = (t0 + 1952U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 9584);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(109, ng0);
    t3 = (t0 + 3592U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t3 = (t0 + 10128);
    t6 = (t3 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t5;
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(111, ng0);
    t1 = (t0 + 3592U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (char *)((nl0) + t2);
    goto **((char **)t1);

LAB5:    goto LAB3;

LAB6:    xsi_set_current_line(113, ng0);
    t4 = (t0 + 1352U);
    t6 = *((char **)t4);
    t5 = *((unsigned char *)t6);
    t10 = (t5 == (unsigned char)3);
    if (t10 != 0)
        goto LAB16;

LAB18:
LAB17:    goto LAB5;

LAB7:    xsi_set_current_line(119, ng0);
    t1 = (t0 + 4392U);
    t3 = *((char **)t1);
    t1 = (t0 + 15560U);
    t4 = (t0 + 15979);
    t7 = (t12 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 7;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t13 = (7 - 0);
    t14 = (t13 * 1);
    t14 = (t14 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t14;
    t2 = ieee_p_1242562249_sub_1434220770698190313_1035706684(IEEE_P_1242562249, t3, t1, t4, t12);
    if (t2 != 0)
        goto LAB19;

LAB21:    xsi_set_current_line(122, ng0);
    t1 = (t0 + 10128);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);

LAB20:    goto LAB5;

LAB8:    xsi_set_current_line(128, ng0);
    t1 = (t0 + 4392U);
    t3 = *((char **)t1);
    t1 = (t0 + 15560U);
    t4 = (t0 + 15987);
    t7 = (t12 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 7;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t13 = (7 - 0);
    t14 = (t13 * 1);
    t14 = (t14 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t14;
    t2 = ieee_p_1242562249_sub_1434214030532789707_1035706684(IEEE_P_1242562249, t3, t1, t4, t12);
    if (t2 != 0)
        goto LAB22;

LAB24:
LAB23:    goto LAB5;

LAB9:    xsi_set_current_line(133, ng0);
    t1 = (t0 + 4392U);
    t3 = *((char **)t1);
    t1 = (t0 + 15560U);
    t4 = (t0 + 15995);
    t7 = (t12 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 7;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t13 = (7 - 0);
    t14 = (t13 * 1);
    t14 = (t14 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t14;
    t2 = ieee_p_1242562249_sub_1434214030532789707_1035706684(IEEE_P_1242562249, t3, t1, t4, t12);
    if (t2 != 0)
        goto LAB25;

LAB27:
LAB26:    goto LAB5;

LAB10:    xsi_set_current_line(138, ng0);
    t1 = (t0 + 4392U);
    t3 = *((char **)t1);
    t1 = (t0 + 15560U);
    t4 = (t0 + 16003);
    t7 = (t12 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 7;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t13 = (7 - 0);
    t14 = (t13 * 1);
    t14 = (t14 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t14;
    t2 = ieee_p_1242562249_sub_1434214030532789707_1035706684(IEEE_P_1242562249, t3, t1, t4, t12);
    if (t2 != 0)
        goto LAB28;

LAB30:
LAB29:    goto LAB5;

LAB11:    xsi_set_current_line(143, ng0);
    t1 = (t0 + 4392U);
    t3 = *((char **)t1);
    t1 = (t0 + 15560U);
    t4 = (t0 + 16011);
    t7 = (t12 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 7;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t13 = (7 - 0);
    t14 = (t13 * 1);
    t14 = (t14 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t14;
    t2 = ieee_p_1242562249_sub_1434214030532789707_1035706684(IEEE_P_1242562249, t3, t1, t4, t12);
    if (t2 != 0)
        goto LAB31;

LAB33:
LAB32:    goto LAB5;

LAB12:    xsi_set_current_line(148, ng0);
    t1 = (t0 + 3912U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)5);
    if (t5 != 0)
        goto LAB34;

LAB36:    t1 = (t0 + 1352U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)2);
    if (t5 != 0)
        goto LAB37;

LAB38:    xsi_set_current_line(164, ng0);
    t1 = (t0 + 10128);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)6;
    xsi_driver_first_trans_fast(t1);

LAB35:    goto LAB5;

LAB13:    xsi_set_current_line(174, ng0);
    t1 = (t0 + 5032U);
    t3 = *((char **)t1);
    t1 = (t0 + 15592U);
    t4 = (t0 + 16019);
    t7 = (t12 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 15;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t13 = (15 - 0);
    t14 = (t13 * 1);
    t14 = (t14 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t14;
    t5 = ieee_p_1242562249_sub_1434220770698190313_1035706684(IEEE_P_1242562249, t3, t1, t4, t12);
    if (t5 == 1)
        goto LAB42;

LAB43:    t2 = (unsigned char)0;

LAB44:    if (t2 != 0)
        goto LAB39;

LAB41:    t1 = (t0 + 5032U);
    t3 = *((char **)t1);
    t1 = (t0 + 15592U);
    t4 = (t0 + 16067);
    t7 = (t12 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 15;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t13 = (15 - 0);
    t14 = (t13 * 1);
    t14 = (t14 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t14;
    t5 = ieee_p_1242562249_sub_1434220770698190313_1035706684(IEEE_P_1242562249, t3, t1, t4, t12);
    if (t5 == 1)
        goto LAB53;

LAB54:    t2 = (unsigned char)0;

LAB55:    if (t2 != 0)
        goto LAB51;

LAB52:    t1 = (t0 + 5032U);
    t3 = *((char **)t1);
    t1 = (t0 + 15592U);
    t4 = (t0 + 16115);
    t7 = (t12 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 11;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t13 = (11 - 0);
    t14 = (t13 * 1);
    t14 = (t14 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t14;
    t5 = ieee_p_1242562249_sub_1434220770698190313_1035706684(IEEE_P_1242562249, t3, t1, t4, t12);
    if (t5 == 1)
        goto LAB64;

LAB65:    t2 = (unsigned char)0;

LAB66:    if (t2 != 0)
        goto LAB62;

LAB63:    t1 = (t0 + 5032U);
    t3 = *((char **)t1);
    t1 = (t0 + 15592U);
    t4 = (t0 + 16159);
    t7 = (t12 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 11;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t13 = (11 - 0);
    t14 = (t13 * 1);
    t14 = (t14 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t14;
    t5 = ieee_p_1242562249_sub_1434220770698190313_1035706684(IEEE_P_1242562249, t3, t1, t4, t12);
    if (t5 == 1)
        goto LAB75;

LAB76:    t2 = (unsigned char)0;

LAB77:    if (t2 != 0)
        goto LAB73;

LAB74:    t1 = (t0 + 5032U);
    t3 = *((char **)t1);
    t1 = (t0 + 15592U);
    t4 = (t0 + 16203);
    t7 = (t12 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 11;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t13 = (11 - 0);
    t14 = (t13 * 1);
    t14 = (t14 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t14;
    t5 = ieee_p_1242562249_sub_1434220770698190313_1035706684(IEEE_P_1242562249, t3, t1, t4, t12);
    if (t5 == 1)
        goto LAB86;

LAB87:    t2 = (unsigned char)0;

LAB88:    if (t2 != 0)
        goto LAB84;

LAB85:    xsi_set_current_line(185, ng0);
    t1 = (t0 + 10128);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)7;
    xsi_driver_first_trans_fast(t1);

LAB40:    goto LAB5;

LAB14:    xsi_set_current_line(189, ng0);
    t1 = (t0 + 1352U);
    t3 = *((char **)t1);
    t5 = *((unsigned char *)t3);
    t10 = (t5 == (unsigned char)2);
    if (t10 == 1)
        goto LAB98;

LAB99:    t1 = (t0 + 5352U);
    t4 = *((char **)t1);
    t1 = (t0 + 15624U);
    t6 = (t0 + 5192U);
    t7 = *((char **)t6);
    t6 = (t0 + 15608U);
    t22 = ieee_p_1242562249_sub_1434220770698190313_1035706684(IEEE_P_1242562249, t4, t1, t7, t6);
    t2 = t22;

LAB100:    if (t2 != 0)
        goto LAB95;

LAB97:    xsi_set_current_line(192, ng0);
    t1 = (t0 + 10128);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)6;
    xsi_driver_first_trans_fast(t1);

LAB96:    goto LAB5;

LAB15:    xsi_set_current_line(196, ng0);
    t1 = (t0 + 10128);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB5;

LAB16:    xsi_set_current_line(114, ng0);
    t4 = (t0 + 10128);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    *((unsigned char *)t11) = (unsigned char)1;
    xsi_driver_first_trans_fast(t4);
    goto LAB17;

LAB19:    xsi_set_current_line(120, ng0);
    t8 = (t0 + 10128);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    t15 = (t11 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)2;
    xsi_driver_first_trans_fast(t8);
    goto LAB20;

LAB22:    xsi_set_current_line(129, ng0);
    t8 = (t0 + 10128);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    t15 = (t11 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)3;
    xsi_driver_first_trans_fast(t8);
    goto LAB23;

LAB25:    xsi_set_current_line(134, ng0);
    t8 = (t0 + 10128);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    t15 = (t11 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)4;
    xsi_driver_first_trans_fast(t8);
    goto LAB26;

LAB28:    xsi_set_current_line(139, ng0);
    t8 = (t0 + 10128);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    t15 = (t11 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)5;
    xsi_driver_first_trans_fast(t8);
    goto LAB29;

LAB31:    xsi_set_current_line(144, ng0);
    t8 = (t0 + 10128);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    t15 = (t11 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)6;
    xsi_driver_first_trans_fast(t8);
    goto LAB32;

LAB34:    xsi_set_current_line(149, ng0);
    t1 = (t0 + 10128);
    t4 = (t1 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)7;
    xsi_driver_first_trans_fast(t1);
    goto LAB35;

LAB37:    xsi_set_current_line(162, ng0);
    t1 = (t0 + 10128);
    t4 = (t1 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)9;
    xsi_driver_first_trans_fast(t1);
    goto LAB35;

LAB39:    xsi_set_current_line(175, ng0);
    t17 = (t0 + 10128);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = (unsigned char)8;
    xsi_driver_first_trans_fast(t17);
    goto LAB40;

LAB42:    t8 = (t0 + 4872U);
    t9 = *((char **)t8);
    t8 = (t0 + 16035);
    t10 = 1;
    if (32U == 32U)
        goto LAB45;

LAB46:    t10 = 0;

LAB47:    t2 = t10;
    goto LAB44;

LAB45:    t14 = 0;

LAB48:    if (t14 < 32U)
        goto LAB49;
    else
        goto LAB47;

LAB49:    t15 = (t9 + t14);
    t16 = (t8 + t14);
    if (*((unsigned char *)t15) != *((unsigned char *)t16))
        goto LAB46;

LAB50:    t14 = (t14 + 1);
    goto LAB48;

LAB51:    xsi_set_current_line(177, ng0);
    t17 = (t0 + 10128);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = (unsigned char)8;
    xsi_driver_first_trans_fast(t17);
    goto LAB40;

LAB53:    t8 = (t0 + 4872U);
    t9 = *((char **)t8);
    t8 = (t0 + 16083);
    t10 = 1;
    if (32U == 32U)
        goto LAB56;

LAB57:    t10 = 0;

LAB58:    t2 = t10;
    goto LAB55;

LAB56:    t14 = 0;

LAB59:    if (t14 < 32U)
        goto LAB60;
    else
        goto LAB58;

LAB60:    t15 = (t9 + t14);
    t16 = (t8 + t14);
    if (*((unsigned char *)t15) != *((unsigned char *)t16))
        goto LAB57;

LAB61:    t14 = (t14 + 1);
    goto LAB59;

LAB62:    xsi_set_current_line(179, ng0);
    t17 = (t0 + 10128);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = (unsigned char)8;
    xsi_driver_first_trans_fast(t17);
    goto LAB40;

LAB64:    t8 = (t0 + 4872U);
    t9 = *((char **)t8);
    t8 = (t0 + 16127);
    t10 = 1;
    if (32U == 32U)
        goto LAB67;

LAB68:    t10 = 0;

LAB69:    t2 = t10;
    goto LAB66;

LAB67:    t14 = 0;

LAB70:    if (t14 < 32U)
        goto LAB71;
    else
        goto LAB69;

LAB71:    t15 = (t9 + t14);
    t16 = (t8 + t14);
    if (*((unsigned char *)t15) != *((unsigned char *)t16))
        goto LAB68;

LAB72:    t14 = (t14 + 1);
    goto LAB70;

LAB73:    xsi_set_current_line(181, ng0);
    t17 = (t0 + 10128);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = (unsigned char)8;
    xsi_driver_first_trans_fast(t17);
    goto LAB40;

LAB75:    t8 = (t0 + 4872U);
    t9 = *((char **)t8);
    t8 = (t0 + 16171);
    t10 = 1;
    if (32U == 32U)
        goto LAB78;

LAB79:    t10 = 0;

LAB80:    t2 = t10;
    goto LAB77;

LAB78:    t14 = 0;

LAB81:    if (t14 < 32U)
        goto LAB82;
    else
        goto LAB80;

LAB82:    t15 = (t9 + t14);
    t16 = (t8 + t14);
    if (*((unsigned char *)t15) != *((unsigned char *)t16))
        goto LAB79;

LAB83:    t14 = (t14 + 1);
    goto LAB81;

LAB84:    xsi_set_current_line(183, ng0);
    t17 = (t0 + 10128);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = (unsigned char)8;
    xsi_driver_first_trans_fast(t17);
    goto LAB40;

LAB86:    t8 = (t0 + 4872U);
    t9 = *((char **)t8);
    t8 = (t0 + 16215);
    t10 = 1;
    if (32U == 32U)
        goto LAB89;

LAB90:    t10 = 0;

LAB91:    t2 = t10;
    goto LAB88;

LAB89:    t14 = 0;

LAB92:    if (t14 < 32U)
        goto LAB93;
    else
        goto LAB91;

LAB93:    t15 = (t9 + t14);
    t16 = (t8 + t14);
    if (*((unsigned char *)t15) != *((unsigned char *)t16))
        goto LAB90;

LAB94:    t14 = (t14 + 1);
    goto LAB92;

LAB95:    xsi_set_current_line(190, ng0);
    t8 = (t0 + 10128);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    t15 = (t11 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)9;
    xsi_driver_first_trans_fast(t8);
    goto LAB96;

LAB98:    t2 = (unsigned char)1;
    goto LAB100;

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

LAB0:    xsi_set_current_line(206, ng0);
    t3 = (t0 + 1952U);
    t4 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t4 == 1)
        goto LAB8;

LAB9:    t2 = (unsigned char)0;

LAB10:    if (t2 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t3 = (t0 + 9600);
    *((int *)t3) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(207, ng0);
    t5 = (t0 + 3912U);
    t12 = *((char **)t5);
    t13 = *((unsigned char *)t12);
    t5 = (t0 + 10192);
    t14 = (t5 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = t13;
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(214, ng0);
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

LAB12:    xsi_set_current_line(216, ng0);
    t6 = (t0 + 3592U);
    t9 = *((char **)t6);
    t2 = *((unsigned char *)t9);
    t4 = (t2 == (unsigned char)6);
    if (t4 != 0)
        goto LAB18;

LAB20:
LAB19:    goto LAB11;

LAB13:    xsi_set_current_line(221, ng0);
    t3 = (t0 + 4552U);
    t5 = *((char **)t3);
    t1 = *((unsigned char *)t5);
    t2 = (t1 == (unsigned char)3);
    if (t2 != 0)
        goto LAB21;

LAB23:    t3 = (t0 + 4712U);
    t5 = *((char **)t3);
    t1 = *((unsigned char *)t5);
    t2 = (t1 == (unsigned char)2);
    if (t2 != 0)
        goto LAB24;

LAB25:    xsi_set_current_line(226, ng0);
    t3 = (t0 + 10192);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t9 = (t6 + 56U);
    t12 = *((char **)t9);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_first_trans_fast(t3);

LAB22:    goto LAB11;

LAB14:    xsi_set_current_line(230, ng0);
    t3 = (t0 + 4712U);
    t5 = *((char **)t3);
    t1 = *((unsigned char *)t5);
    t2 = (t1 == (unsigned char)3);
    if (t2 != 0)
        goto LAB26;

LAB28:    xsi_set_current_line(233, ng0);
    t3 = (t0 + 10192);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t9 = (t6 + 56U);
    t12 = *((char **)t9);
    *((unsigned char *)t12) = (unsigned char)5;
    xsi_driver_first_trans_fast(t3);

LAB27:    goto LAB11;

LAB15:    xsi_set_current_line(237, ng0);
    t3 = (t0 + 4552U);
    t5 = *((char **)t3);
    t1 = *((unsigned char *)t5);
    t2 = (t1 == (unsigned char)3);
    if (t2 != 0)
        goto LAB29;

LAB31:    xsi_set_current_line(240, ng0);
    t3 = (t0 + 10192);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t9 = (t6 + 56U);
    t12 = *((char **)t9);
    *((unsigned char *)t12) = (unsigned char)5;
    xsi_driver_first_trans_fast(t3);

LAB30:    goto LAB11;

LAB16:    xsi_set_current_line(244, ng0);
    t3 = (t0 + 10192);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t9 = (t6 + 56U);
    t12 = *((char **)t9);
    *((unsigned char *)t12) = (unsigned char)5;
    xsi_driver_first_trans_fast(t3);
    goto LAB11;

LAB17:    xsi_set_current_line(247, ng0);
    t3 = (t0 + 3592U);
    t5 = *((char **)t3);
    t1 = *((unsigned char *)t5);
    t2 = (t1 == (unsigned char)7);
    if (t2 != 0)
        goto LAB32;

LAB34:
LAB33:    goto LAB11;

LAB18:    xsi_set_current_line(217, ng0);
    t6 = (t0 + 10192);
    t12 = (t6 + 56U);
    t14 = *((char **)t12);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)1;
    xsi_driver_first_trans_fast(t6);
    goto LAB19;

LAB21:    xsi_set_current_line(222, ng0);
    t3 = (t0 + 10192);
    t6 = (t3 + 56U);
    t9 = *((char **)t6);
    t12 = (t9 + 56U);
    t14 = *((char **)t12);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_fast(t3);
    goto LAB22;

LAB24:    xsi_set_current_line(224, ng0);
    t3 = (t0 + 10192);
    t6 = (t3 + 56U);
    t9 = *((char **)t6);
    t12 = (t9 + 56U);
    t14 = *((char **)t12);
    *((unsigned char *)t14) = (unsigned char)5;
    xsi_driver_first_trans_fast(t3);
    goto LAB22;

LAB26:    xsi_set_current_line(231, ng0);
    t3 = (t0 + 10192);
    t6 = (t3 + 56U);
    t9 = *((char **)t6);
    t12 = (t9 + 56U);
    t14 = *((char **)t12);
    *((unsigned char *)t14) = (unsigned char)3;
    xsi_driver_first_trans_fast(t3);
    goto LAB27;

LAB29:    xsi_set_current_line(238, ng0);
    t3 = (t0 + 10192);
    t6 = (t3 + 56U);
    t9 = *((char **)t6);
    t12 = (t9 + 56U);
    t14 = *((char **)t12);
    *((unsigned char *)t14) = (unsigned char)4;
    xsi_driver_first_trans_fast(t3);
    goto LAB30;

LAB32:    xsi_set_current_line(248, ng0);
    t3 = (t0 + 10192);
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

LAB0:    xsi_set_current_line(260, ng0);
    t1 = (t0 + 1952U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 9616);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(261, ng0);
    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(314, ng0);
    t1 = (t0 + 3592U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)0);
    if (t5 != 0)
        goto LAB57;

LAB59:
LAB58:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(262, ng0);
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

LAB8:    xsi_set_current_line(264, ng0);
    t3 = (t0 + 4392U);
    t10 = *((char **)t3);
    t3 = (t0 + 15560U);
    t11 = (t0 + 16247);
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
    t18 = ieee_p_1242562249_sub_1434214030532789707_1035706684(IEEE_P_1242562249, t10, t3, t11, t13);
    if (t18 != 0)
        goto LAB11;

LAB13:    xsi_set_current_line(270, ng0);
    t1 = (t0 + 1032U);
    t3 = *((char **)t1);
    t17 = (7 - 7);
    t20 = (t17 * 1U);
    t21 = (0 + t20);
    t1 = (t3 + t21);
    t4 = (t0 + 10256);
    t7 = (t4 + 56U);
    t10 = *((char **)t7);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 8U);
    xsi_driver_first_trans_delta(t4, 0U, 8U, 0LL);

LAB12:    goto LAB9;

LAB11:    xsi_set_current_line(265, ng0);
    t15 = (t0 + 1032U);
    t19 = *((char **)t15);
    t17 = (7 - 7);
    t20 = (t17 * 1U);
    t21 = (0 + t20);
    t15 = (t19 + t21);
    t22 = (t0 + 10256);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t15, 8U);
    xsi_driver_first_trans_delta(t22, 8U, 8U, 0LL);
    xsi_set_current_line(266, ng0);
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

LAB14:    xsi_set_current_line(267, ng0);
    t4 = (t0 + 10320);
    t7 = (t4 + 56U);
    t10 = *((char **)t7);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_first_trans_fast(t4);
    goto LAB15;

LAB17:    xsi_set_current_line(274, ng0);
    t1 = (t0 + 4392U);
    t4 = *((char **)t1);
    t1 = (t0 + 15560U);
    t7 = (t0 + 16255);
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
    t6 = ieee_p_1242562249_sub_1434214030532789707_1035706684(IEEE_P_1242562249, t4, t1, t7, t13);
    if (t6 != 0)
        goto LAB19;

LAB21:    t1 = (t0 + 4392U);
    t3 = *((char **)t1);
    t1 = (t0 + 15560U);
    t4 = (t0 + 16263);
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
    t2 = ieee_p_1242562249_sub_1434214030532789707_1035706684(IEEE_P_1242562249, t3, t1, t4, t13);
    if (t2 != 0)
        goto LAB22;

LAB23:    t1 = (t0 + 4392U);
    t3 = *((char **)t1);
    t1 = (t0 + 15560U);
    t4 = (t0 + 16271);
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
    t2 = ieee_p_1242562249_sub_1434214030532789707_1035706684(IEEE_P_1242562249, t3, t1, t4, t13);
    if (t2 != 0)
        goto LAB24;

LAB25:    t1 = (t0 + 4392U);
    t3 = *((char **)t1);
    t1 = (t0 + 15560U);
    t4 = (t0 + 16279);
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
    t2 = ieee_p_1242562249_sub_1434214030532789707_1035706684(IEEE_P_1242562249, t3, t1, t4, t13);
    if (t2 != 0)
        goto LAB26;

LAB27:
LAB20:    goto LAB9;

LAB19:    xsi_set_current_line(275, ng0);
    t12 = (t0 + 1032U);
    t14 = *((char **)t12);
    t17 = (7 - 7);
    t20 = (t17 * 1U);
    t21 = (0 + t20);
    t12 = (t14 + t21);
    t15 = (t0 + 10256);
    t19 = (t15 + 56U);
    t22 = *((char **)t19);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t12, 8U);
    xsi_driver_first_trans_delta(t15, 40U, 8U, 0LL);
    xsi_set_current_line(276, ng0);
    t1 = (t0 + 1032U);
    t3 = *((char **)t1);
    t17 = (7 - 7);
    t20 = (t17 * 1U);
    t21 = (0 + t20);
    t1 = (t3 + t21);
    t4 = (t0 + 10384);
    t7 = (t4 + 56U);
    t10 = *((char **)t7);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 8U);
    xsi_driver_first_trans_delta(t4, 24U, 8U, 0LL);
    goto LAB20;

LAB22:    xsi_set_current_line(278, ng0);
    t11 = (t0 + 1032U);
    t12 = *((char **)t11);
    t17 = (7 - 7);
    t20 = (t17 * 1U);
    t21 = (0 + t20);
    t11 = (t12 + t21);
    t14 = (t0 + 10256);
    t15 = (t14 + 56U);
    t19 = *((char **)t15);
    t22 = (t19 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t11, 8U);
    xsi_driver_first_trans_delta(t14, 32U, 8U, 0LL);
    xsi_set_current_line(279, ng0);
    t1 = (t0 + 1032U);
    t3 = *((char **)t1);
    t17 = (7 - 7);
    t20 = (t17 * 1U);
    t21 = (0 + t20);
    t1 = (t3 + t21);
    t4 = (t0 + 10384);
    t7 = (t4 + 56U);
    t10 = *((char **)t7);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 8U);
    xsi_driver_first_trans_delta(t4, 16U, 8U, 0LL);
    goto LAB20;

LAB24:    xsi_set_current_line(281, ng0);
    t11 = (t0 + 1032U);
    t12 = *((char **)t11);
    t17 = (7 - 7);
    t20 = (t17 * 1U);
    t21 = (0 + t20);
    t11 = (t12 + t21);
    t14 = (t0 + 10256);
    t15 = (t14 + 56U);
    t19 = *((char **)t15);
    t22 = (t19 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t11, 8U);
    xsi_driver_first_trans_delta(t14, 24U, 8U, 0LL);
    xsi_set_current_line(282, ng0);
    t1 = (t0 + 1032U);
    t3 = *((char **)t1);
    t17 = (7 - 7);
    t20 = (t17 * 1U);
    t21 = (0 + t20);
    t1 = (t3 + t21);
    t4 = (t0 + 10384);
    t7 = (t4 + 56U);
    t10 = *((char **)t7);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 8U);
    xsi_driver_first_trans_delta(t4, 8U, 8U, 0LL);
    goto LAB20;

LAB26:    xsi_set_current_line(284, ng0);
    t11 = (t0 + 1032U);
    t12 = *((char **)t11);
    t17 = (7 - 7);
    t20 = (t17 * 1U);
    t21 = (0 + t20);
    t11 = (t12 + t21);
    t14 = (t0 + 10256);
    t15 = (t14 + 56U);
    t19 = *((char **)t15);
    t22 = (t19 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t11, 8U);
    xsi_driver_first_trans_delta(t14, 16U, 8U, 0LL);
    xsi_set_current_line(285, ng0);
    t1 = (t0 + 1032U);
    t3 = *((char **)t1);
    t17 = (7 - 7);
    t20 = (t17 * 1U);
    t21 = (0 + t20);
    t1 = (t3 + t21);
    t4 = (t0 + 10384);
    t7 = (t4 + 56U);
    t10 = *((char **)t7);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 8U);
    xsi_driver_first_trans_delta(t4, 0U, 8U, 0LL);
    goto LAB20;

LAB28:    xsi_set_current_line(289, ng0);
    t1 = (t0 + 4392U);
    t4 = *((char **)t1);
    t1 = (t0 + 15560U);
    t7 = (t0 + 16287);
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
    t6 = ieee_p_1242562249_sub_1434214030532789707_1035706684(IEEE_P_1242562249, t4, t1, t7, t13);
    if (t6 != 0)
        goto LAB30;

LAB32:    t1 = (t0 + 4392U);
    t3 = *((char **)t1);
    t1 = (t0 + 15560U);
    t4 = (t0 + 16303);
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
    t2 = ieee_p_1242562249_sub_1434214030532789707_1035706684(IEEE_P_1242562249, t3, t1, t4, t13);
    if (t2 != 0)
        goto LAB42;

LAB43:
LAB31:    goto LAB9;

LAB30:    xsi_set_current_line(290, ng0);
    t12 = (t0 + 1032U);
    t14 = *((char **)t12);
    t17 = (7 - 7);
    t20 = (t17 * 1U);
    t21 = (0 + t20);
    t12 = (t14 + t21);
    t15 = (t0 + 10256);
    t19 = (t15 + 56U);
    t22 = *((char **)t19);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t12, 8U);
    xsi_driver_first_trans_delta(t15, 56U, 8U, 0LL);
    xsi_set_current_line(291, ng0);
    t1 = (t0 + 1032U);
    t3 = *((char **)t1);
    t1 = (t0 + 16295);
    t2 = 1;
    if (8U == 8U)
        goto LAB36;

LAB37:    t2 = 0;

LAB38:    if (t2 != 0)
        goto LAB33;

LAB35:
LAB34:    goto LAB31;

LAB33:    xsi_set_current_line(292, ng0);
    t11 = (t0 + 10448);
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

LAB42:    xsi_set_current_line(295, ng0);
    t11 = (t0 + 1032U);
    t12 = *((char **)t11);
    t17 = (7 - 7);
    t20 = (t17 * 1U);
    t21 = (0 + t20);
    t11 = (t12 + t21);
    t14 = (t0 + 10256);
    t15 = (t14 + 56U);
    t19 = *((char **)t15);
    t22 = (t19 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t11, 8U);
    xsi_driver_first_trans_delta(t14, 48U, 8U, 0LL);
    goto LAB31;

LAB44:    xsi_set_current_line(299, ng0);
    t1 = (t0 + 4392U);
    t4 = *((char **)t1);
    t1 = (t0 + 15560U);
    t7 = (t0 + 16311);
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
    t6 = ieee_p_1242562249_sub_1434214030532789707_1035706684(IEEE_P_1242562249, t4, t1, t7, t13);
    if (t6 != 0)
        goto LAB46;

LAB48:    t1 = (t0 + 4392U);
    t3 = *((char **)t1);
    t1 = (t0 + 15560U);
    t4 = (t0 + 16319);
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
    t2 = ieee_p_1242562249_sub_1434214030532789707_1035706684(IEEE_P_1242562249, t3, t1, t4, t13);
    if (t2 != 0)
        goto LAB49;

LAB50:    t1 = (t0 + 4392U);
    t3 = *((char **)t1);
    t1 = (t0 + 15560U);
    t4 = (t0 + 16327);
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
    t2 = ieee_p_1242562249_sub_1434214030532789707_1035706684(IEEE_P_1242562249, t3, t1, t4, t13);
    if (t2 != 0)
        goto LAB51;

LAB52:    t1 = (t0 + 4392U);
    t3 = *((char **)t1);
    t1 = (t0 + 15560U);
    t4 = (t0 + 16335);
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
    t2 = ieee_p_1242562249_sub_1434214030532789707_1035706684(IEEE_P_1242562249, t3, t1, t4, t13);
    if (t2 != 0)
        goto LAB53;

LAB54:
LAB47:    goto LAB9;

LAB46:    xsi_set_current_line(300, ng0);
    t12 = (t0 + 1032U);
    t14 = *((char **)t12);
    t17 = (7 - 7);
    t20 = (t17 * 1U);
    t21 = (0 + t20);
    t12 = (t14 + t21);
    t15 = (t0 + 10512);
    t19 = (t15 + 56U);
    t22 = *((char **)t19);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t12, 8U);
    xsi_driver_first_trans_delta(t15, 24U, 8U, 0LL);
    goto LAB47;

LAB49:    xsi_set_current_line(302, ng0);
    t11 = (t0 + 1032U);
    t12 = *((char **)t11);
    t17 = (7 - 7);
    t20 = (t17 * 1U);
    t21 = (0 + t20);
    t11 = (t12 + t21);
    t14 = (t0 + 10512);
    t15 = (t14 + 56U);
    t19 = *((char **)t15);
    t22 = (t19 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t11, 8U);
    xsi_driver_first_trans_delta(t14, 16U, 8U, 0LL);
    goto LAB47;

LAB51:    xsi_set_current_line(304, ng0);
    t11 = (t0 + 1032U);
    t12 = *((char **)t11);
    t17 = (7 - 7);
    t20 = (t17 * 1U);
    t21 = (0 + t20);
    t11 = (t12 + t21);
    t14 = (t0 + 10512);
    t15 = (t14 + 56U);
    t19 = *((char **)t15);
    t22 = (t19 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t11, 8U);
    xsi_driver_first_trans_delta(t14, 8U, 8U, 0LL);
    goto LAB47;

LAB53:    xsi_set_current_line(306, ng0);
    t11 = (t0 + 1032U);
    t12 = *((char **)t11);
    t17 = (7 - 7);
    t20 = (t17 * 1U);
    t21 = (0 + t20);
    t11 = (t12 + t21);
    t14 = (t0 + 10512);
    t15 = (t14 + 56U);
    t19 = *((char **)t15);
    t22 = (t19 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t11, 8U);
    xsi_driver_first_trans_delta(t14, 0U, 8U, 0LL);
    goto LAB47;

LAB55:    goto LAB9;

LAB57:    xsi_set_current_line(315, ng0);
    t1 = xsi_get_transient_memory(64U);
    memset(t1, 0, 64U);
    t4 = t1;
    memset(t4, (unsigned char)2, 64U);
    t7 = (t0 + 10256);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    memcpy(t14, t1, 64U);
    xsi_driver_first_trans_fast_port(t7);
    xsi_set_current_line(316, ng0);
    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t3 = t1;
    memset(t3, (unsigned char)2, 32U);
    t4 = (t0 + 10384);
    t7 = (t4 + 56U);
    t10 = *((char **)t7);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 32U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(317, ng0);
    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t3 = t1;
    memset(t3, (unsigned char)2, 32U);
    t4 = (t0 + 10512);
    t7 = (t4 + 56U);
    t10 = *((char **)t7);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 32U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(318, ng0);
    t1 = (t0 + 10320);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t10 = *((char **)t7);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(319, ng0);
    t1 = (t0 + 10448);
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
    char t29[16];
    char t30[16];
    char t33[16];
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
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    int t31;
    unsigned int t32;
    int t34;

LAB0:    xsi_set_current_line(328, ng0);
    t1 = (t0 + 1952U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 9632);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(329, ng0);
    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(330, ng0);
    t3 = (t0 + 3592U);
    t7 = *((char **)t3);
    t8 = *((unsigned char *)t7);
    t9 = (t8 == (unsigned char)6);
    if (t9 != 0)
        goto LAB8;

LAB10:    t1 = (t0 + 3592U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)0);
    if (t5 != 0)
        goto LAB29;

LAB30:
LAB9:    goto LAB6;

LAB8:    xsi_set_current_line(338, ng0);
    t3 = (t0 + 4552U);
    t10 = *((char **)t3);
    t11 = *((unsigned char *)t10);
    t12 = (t11 == (unsigned char)3);
    if (t12 != 0)
        goto LAB11;

LAB13:    xsi_set_current_line(345, ng0);
    t1 = (t0 + 1032U);
    t3 = *((char **)t1);
    t21 = (7 - 7);
    t22 = (t21 * 1U);
    t23 = (0 + t22);
    t1 = (t3 + t23);
    t4 = (t0 + 16343);
    t14 = ((IEEE_P_2592010699) + 4000);
    t17 = (t30 + 0U);
    t20 = (t17 + 0U);
    *((int *)t20) = 7;
    t20 = (t17 + 4U);
    *((int *)t20) = 0;
    t20 = (t17 + 8U);
    *((int *)t20) = -1;
    t31 = (0 - 7);
    t32 = (t31 * -1);
    t32 = (t32 + 1);
    t20 = (t17 + 12U);
    *((unsigned int *)t20) = t32;
    t20 = (t33 + 0U);
    t24 = (t20 + 0U);
    *((int *)t24) = 0;
    t24 = (t20 + 4U);
    *((int *)t24) = 3;
    t24 = (t20 + 8U);
    *((int *)t24) = 1;
    t34 = (3 - 0);
    t32 = (t34 * 1);
    t32 = (t32 + 1);
    t24 = (t20 + 12U);
    *((unsigned int *)t24) = t32;
    t10 = xsi_base_array_concat(t10, t29, t14, (char)97, t1, t30, (char)97, t4, t33, (char)101);
    t32 = (8U + 4U);
    t2 = (12U != t32);
    if (t2 == 1)
        goto LAB25;

LAB26:    t24 = (t0 + 10576);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memcpy(t28, t10, 12U);
    xsi_driver_first_trans_delta(t24, 0U, 12U, 0LL);

LAB12:    xsi_set_current_line(348, ng0);
    t1 = (t0 + 5352U);
    t3 = *((char **)t1);
    t1 = (t0 + 15624U);
    t4 = ieee_p_1242562249_sub_1006216973935652998_1035706684(IEEE_P_1242562249, t29, t3, t1, 1);
    t7 = (t29 + 12U);
    t21 = *((unsigned int *)t7);
    t22 = (1U * t21);
    t2 = (32U != t22);
    if (t2 == 1)
        goto LAB27;

LAB28:    t10 = (t0 + 10640);
    t14 = (t10 + 56U);
    t17 = *((char **)t14);
    t20 = (t17 + 56U);
    t24 = *((char **)t20);
    memcpy(t24, t4, 32U);
    xsi_driver_first_trans_fast(t10);
    goto LAB9;

LAB11:    xsi_set_current_line(339, ng0);
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
        goto LAB22;

LAB23:    t1 = (t0 + 3912U);
    t4 = *((char **)t1);
    t8 = *((unsigned char *)t4);
    t9 = (t8 == (unsigned char)3);
    t2 = t9;

LAB24:    if (t2 != 0)
        goto LAB20;

LAB21:
LAB15:    goto LAB12;

LAB14:    xsi_set_current_line(340, ng0);
    t3 = (t0 + 1032U);
    t20 = *((char **)t3);
    t21 = (7 - 7);
    t22 = (t21 * 1U);
    t23 = (0 + t22);
    t3 = (t20 + t23);
    t24 = (t0 + 10576);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memcpy(t28, t3, 8U);
    xsi_driver_first_trans_delta(t24, 0U, 8U, 0LL);
    goto LAB15;

LAB17:    t13 = (unsigned char)1;
    goto LAB19;

LAB20:    xsi_set_current_line(342, ng0);
    t1 = (t0 + 1032U);
    t7 = *((char **)t1);
    t21 = (7 - 7);
    t22 = (t21 * 1U);
    t23 = (0 + t22);
    t1 = (t7 + t23);
    t10 = (t0 + 10576);
    t14 = (t10 + 56U);
    t17 = *((char **)t14);
    t20 = (t17 + 56U);
    t24 = *((char **)t20);
    memcpy(t24, t1, 4U);
    xsi_driver_first_trans_delta(t10, 8U, 4U, 0LL);
    goto LAB15;

LAB22:    t2 = (unsigned char)1;
    goto LAB24;

LAB25:    xsi_size_not_matching(12U, t32, 0);
    goto LAB26;

LAB27:    xsi_size_not_matching(32U, t22, 0);
    goto LAB28;

LAB29:    xsi_set_current_line(351, ng0);
    t1 = xsi_get_transient_memory(12U);
    memset(t1, 0, 12U);
    t4 = t1;
    memset(t4, (unsigned char)2, 12U);
    t7 = (t0 + 10576);
    t10 = (t7 + 56U);
    t14 = *((char **)t10);
    t17 = (t14 + 56U);
    t20 = *((char **)t17);
    memcpy(t20, t1, 12U);
    xsi_driver_first_trans_fast_port(t7);
    xsi_set_current_line(352, ng0);
    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t3 = t1;
    memset(t3, (unsigned char)2, 32U);
    t4 = (t0 + 10640);
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
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    unsigned char t12;
    unsigned char t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;

LAB0:    xsi_set_current_line(360, ng0);
    t1 = (t0 + 1952U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 9648);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(361, ng0);
    t3 = (t0 + 3592U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)6);
    if (t6 != 0)
        goto LAB5;

LAB7:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(366, ng0);
    t3 = (t0 + 3912U);
    t8 = *((char **)t3);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)1);
    if (t10 == 1)
        goto LAB11;

LAB12:    t3 = (t0 + 3912U);
    t11 = *((char **)t3);
    t12 = *((unsigned char *)t11);
    t13 = (t12 == (unsigned char)2);
    t7 = t13;

LAB13:    if (t7 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(371, ng0);
    t1 = (t0 + 16355);
    t4 = (t0 + 10704);
    t8 = (t4 + 56U);
    t11 = *((char **)t8);
    t14 = (t11 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t1, 4U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(372, ng0);
    t1 = (t0 + 16359);
    t4 = (t0 + 10768);
    t8 = (t4 + 56U);
    t11 = *((char **)t8);
    t14 = (t11 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t1, 4U);
    xsi_driver_first_trans_fast_port(t4);

LAB9:    goto LAB6;

LAB8:    xsi_set_current_line(367, ng0);
    t3 = (t0 + 16347);
    t15 = (t0 + 10704);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t3, 4U);
    xsi_driver_first_trans_fast_port(t15);
    xsi_set_current_line(368, ng0);
    t1 = (t0 + 16351);
    t4 = (t0 + 10768);
    t8 = (t4 + 56U);
    t11 = *((char **)t8);
    t14 = (t11 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t1, 4U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB9;

LAB11:    t7 = (unsigned char)1;
    goto LAB13;

}

static void work_a_0507922934_3212880686_p_7(char *t0)
{
    unsigned char t1;
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
    unsigned char t12;
    unsigned char t13;
    char *t14;
    unsigned char t15;
    unsigned char t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;

LAB0:    xsi_set_current_line(386, ng0);
    t4 = (t0 + 3592U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 != (unsigned char)0);
    if (t7 == 1)
        goto LAB11;

LAB12:    t3 = (unsigned char)0;

LAB13:    if (t3 == 1)
        goto LAB8;

LAB9:    t2 = (unsigned char)0;

LAB10:    if (t2 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB14:    t21 = (t0 + 10832);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    *((unsigned char *)t25) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t21);

LAB2:    t26 = (t0 + 9664);
    *((int *)t26) = 1;

LAB1:    return;
LAB3:    t4 = (t0 + 10832);
    t17 = (t4 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t4);
    goto LAB2;

LAB5:    t4 = (t0 + 1192U);
    t14 = *((char **)t4);
    t15 = *((unsigned char *)t14);
    t16 = (t15 == (unsigned char)3);
    t1 = t16;
    goto LAB7;

LAB8:    t4 = (t0 + 3592U);
    t11 = *((char **)t4);
    t12 = *((unsigned char *)t11);
    t13 = (t12 != (unsigned char)8);
    t2 = t13;
    goto LAB10;

LAB11:    t4 = (t0 + 3592U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 != (unsigned char)7);
    t3 = t10;
    goto LAB13;

LAB15:    goto LAB2;

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

LAB0:    xsi_set_current_line(389, ng0);
    t1 = (t0 + 3592U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)8);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t9 = (t0 + 10896);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t9);

LAB2:    t14 = (t0 + 9680);
    *((int *)t14) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 10896);
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

LAB0:    xsi_set_current_line(392, ng0);
    t1 = (t0 + 3592U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 != (unsigned char)0);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t9 = (t0 + 10960);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t9);

LAB2:    t14 = (t0 + 9696);
    *((int *)t14) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 10960);
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

LAB0:    xsi_set_current_line(395, ng0);

LAB3:    t1 = (t0 + 4712U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 11024);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 9712);
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

LAB0:    xsi_set_current_line(396, ng0);

LAB3:    t1 = (t0 + 4552U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 11088);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 9728);
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
