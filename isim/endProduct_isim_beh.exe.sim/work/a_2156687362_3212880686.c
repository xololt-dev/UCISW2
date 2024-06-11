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
static const char *ng0 = "C:/XilinxPrj/UCISW2-main-newer1106/UCISW2-main-newer/fileNameReader.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

unsigned char ieee_p_1242562249_sub_2110339434_1035706684(char *, char *, char *, char *, char *);
unsigned char ieee_p_1242562249_sub_3472088553_1035706684(char *, char *, char *, char *, char *);
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_2156687362_3212880686_p_0(char *t0)
{
    char t9[16];
    char t18[16];
    char t32[16];
    char t34[16];
    char t39[16];
    char *t1;
    unsigned char t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    int t12;
    unsigned int t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t19;
    char *t20;
    int t21;
    unsigned char t22;
    char *t23;
    unsigned char t24;
    unsigned char t25;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t33;
    char *t35;
    char *t36;
    int t37;
    unsigned int t38;
    char *t40;
    int t41;
    unsigned char t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;

LAB0:    xsi_set_current_line(48, ng0);
    t1 = (t0 + 1632U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 3880);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(50, ng0);
    t5 = (t0 + 1032U);
    t6 = *((char **)t5);
    t5 = (t0 + 6324U);
    t7 = (t0 + 6400);
    t10 = (t9 + 0U);
    t11 = (t10 + 0U);
    *((int *)t11) = 0;
    t11 = (t10 + 4U);
    *((int *)t11) = 7;
    t11 = (t10 + 8U);
    *((int *)t11) = 1;
    t12 = (7 - 0);
    t13 = (t12 * 1);
    t13 = (t13 + 1);
    t11 = (t10 + 12U);
    *((unsigned int *)t11) = t13;
    t14 = ieee_p_1242562249_sub_3472088553_1035706684(IEEE_P_1242562249, t6, t5, t7, t9);
    if (t14 == 1)
        goto LAB11;

LAB12:    t4 = (unsigned char)0;

LAB13:    if (t4 == 1)
        goto LAB8;

LAB9:    t3 = (unsigned char)0;

LAB10:    if (t3 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(54, ng0);
    t1 = (t0 + 4040);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(51, ng0);
    t20 = (t0 + 6416);
    t27 = (t0 + 1032U);
    t28 = *((char **)t27);
    t13 = (7 - 3);
    t29 = (t13 * 1U);
    t30 = (0 + t29);
    t27 = (t28 + t30);
    t33 = ((IEEE_P_2592010699) + 4024);
    t35 = (t34 + 0U);
    t36 = (t35 + 0U);
    *((int *)t36) = 0;
    t36 = (t35 + 4U);
    *((int *)t36) = 3;
    t36 = (t35 + 8U);
    *((int *)t36) = 1;
    t37 = (3 - 0);
    t38 = (t37 * 1);
    t38 = (t38 + 1);
    t36 = (t35 + 12U);
    *((unsigned int *)t36) = t38;
    t36 = (t39 + 0U);
    t40 = (t36 + 0U);
    *((int *)t40) = 3;
    t40 = (t36 + 4U);
    *((int *)t40) = 0;
    t40 = (t36 + 8U);
    *((int *)t40) = -1;
    t41 = (0 - 3);
    t38 = (t41 * -1);
    t38 = (t38 + 1);
    t40 = (t36 + 12U);
    *((unsigned int *)t40) = t38;
    t31 = xsi_base_array_concat(t31, t32, t33, (char)97, t20, t34, (char)97, t27, t39, (char)101);
    t38 = (4U + 4U);
    t42 = (8U != t38);
    if (t42 == 1)
        goto LAB14;

LAB15:    t40 = (t0 + 3976);
    t43 = (t40 + 56U);
    t44 = *((char **)t43);
    t45 = (t44 + 56U);
    t46 = *((char **)t45);
    memcpy(t46, t31, 8U);
    xsi_driver_first_trans_fast(t40);
    xsi_set_current_line(52, ng0);
    t1 = (t0 + 4040);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB6;

LAB8:    t20 = (t0 + 1512U);
    t23 = *((char **)t20);
    t24 = *((unsigned char *)t23);
    t25 = (t24 == (unsigned char)3);
    t3 = t25;
    goto LAB10;

LAB11:    t11 = (t0 + 1032U);
    t15 = *((char **)t11);
    t11 = (t0 + 6324U);
    t16 = (t0 + 6408);
    t19 = (t18 + 0U);
    t20 = (t19 + 0U);
    *((int *)t20) = 0;
    t20 = (t19 + 4U);
    *((int *)t20) = 7;
    t20 = (t19 + 8U);
    *((int *)t20) = 1;
    t21 = (7 - 0);
    t13 = (t21 * 1);
    t13 = (t13 + 1);
    t20 = (t19 + 12U);
    *((unsigned int *)t20) = t13;
    t22 = ieee_p_1242562249_sub_2110339434_1035706684(IEEE_P_1242562249, t15, t11, t16, t18);
    t4 = t22;
    goto LAB13;

LAB14:    xsi_size_not_matching(8U, t38, 0);
    goto LAB15;

}

static void work_a_2156687362_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(59, ng0);

LAB3:    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t1 = (t0 + 4104);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 3896);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_2156687362_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2156687362_3212880686_p_0,(void *)work_a_2156687362_3212880686_p_1};
	xsi_register_didat("work_a_2156687362_3212880686", "isim/endProduct_isim_beh.exe.sim/work/a_2156687362_3212880686.didat");
	xsi_register_executes(pe);
}
