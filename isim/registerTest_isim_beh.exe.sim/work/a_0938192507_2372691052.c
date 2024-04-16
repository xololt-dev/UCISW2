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
static const char *ng0 = "/home/xololt/repos/UCISW2-main-new/registerTest.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_10420449594411817395_1035706684(char *, char *, int , int );
unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_0938192507_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 4768U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(109, ng0);
    t2 = (t0 + 5432);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(110, ng0);
    t2 = (t0 + 3568U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 4576);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(111, ng0);
    t2 = (t0 + 5432);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(112, ng0);
    t2 = (t0 + 3568U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 4576);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_0938192507_2372691052_p_1(char *t0)
{
    char t13[16];
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned char t5;
    char *t6;
    char *t7;
    unsigned char t8;
    unsigned char t9;
    char *t10;
    int64 t11;
    int64 t12;
    char *t14;
    char *t15;

LAB0:    t1 = (t0 + 5016U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(124, ng0);

LAB6:    t2 = (t0 + 5336);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    t6 = (t0 + 5336);
    *((int *)t6) = 0;
    xsi_set_current_line(126, ng0);
    t2 = (t0 + 5496);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(128, ng0);

LAB11:    t2 = (t0 + 4016U);
    t3 = std_textio_endfile(t2);
    t5 = (!(t3));
    if (t5 != 0)
        goto LAB12;

LAB14:    xsi_set_current_line(137, ng0);
    t2 = (t0 + 5496);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(138, ng0);

LAB28:    *((char **)t1) = &&LAB29;
    goto LAB1;

LAB5:    t4 = (t0 + 1952U);
    t5 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t4, 0U, 0U);
    if (t5 == 1)
        goto LAB8;

LAB9:    t3 = (unsigned char)0;

LAB10:    if (t3 == 1)
        goto LAB4;
    else
        goto LAB6;

LAB7:    goto LAB5;

LAB8:    t6 = (t0 + 1672U);
    t7 = *((char **)t6);
    t8 = *((unsigned char *)t7);
    t9 = (t8 == (unsigned char)3);
    t3 = t9;
    goto LAB10;

LAB12:    xsi_set_current_line(129, ng0);
    t4 = (t0 + 3568U);
    t6 = *((char **)t4);
    t11 = *((int64 *)t6);
    t12 = (t11 * 3.1000000000000001);
    t4 = (t0 + 4824);
    xsi_process_wait(t4, t12);

LAB17:    *((char **)t1) = &&LAB18;
    goto LAB1;

LAB13:;
LAB15:    xsi_set_current_line(130, ng0);
    t2 = (t0 + 4016U);
    t4 = (t0 + 3688U);
    t6 = *((char **)t4);
    t4 = (t6 + 0);
    t3 = std_textio_read_char(t2);
    *((unsigned char *)t4) = t3;
    xsi_set_current_line(131, ng0);
    t2 = (t0 + 3688U);
    t4 = *((char **)t2);
    t3 = *((unsigned char *)t4);
    t2 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t13, ((int)(t3)), 8);
    t6 = (t0 + 5560);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    t14 = (t10 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t2, 8U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(132, ng0);
    t2 = (t0 + 5624);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(133, ng0);

LAB21:    t2 = (t0 + 5352);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB22;
    goto LAB1;

LAB16:    goto LAB15;

LAB18:    goto LAB16;

LAB19:    t6 = (t0 + 5352);
    *((int *)t6) = 0;
    xsi_set_current_line(134, ng0);
    t2 = (t0 + 5624);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB11;

LAB20:    t4 = (t0 + 1952U);
    t5 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t4, 0U, 0U);
    if (t5 == 1)
        goto LAB23;

LAB24:    t3 = (unsigned char)0;

LAB25:    if (t3 == 1)
        goto LAB19;
    else
        goto LAB21;

LAB22:    goto LAB20;

LAB23:    t6 = (t0 + 2152U);
    t7 = *((char **)t6);
    t8 = *((unsigned char *)t7);
    t9 = (t8 == (unsigned char)3);
    t3 = t9;
    goto LAB25;

LAB26:    goto LAB2;

LAB27:    goto LAB26;

LAB29:    goto LAB27;

}


extern void work_a_0938192507_2372691052_init()
{
	static char *pe[] = {(void *)work_a_0938192507_2372691052_p_0,(void *)work_a_0938192507_2372691052_p_1};
	xsi_register_didat("work_a_0938192507_2372691052", "isim/registerTest_isim_beh.exe.sim/work/a_0938192507_2372691052.didat");
	xsi_register_executes(pe);
}
