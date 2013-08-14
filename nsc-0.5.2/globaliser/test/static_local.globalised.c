# 1 "globaliser/test/static_local.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "globaliser/test/static_local.c"
#include "num_stacks.h"
void func()
{
    typedef  int  _GLOBAL_0_T; static  _GLOBAL_0_T  global_my_static_local[NUM_STACKS];   
}

void func2()
{
    typedef  int  _GLOBAL_1_T; static  _GLOBAL_1_T  global_my_init_static_local[NUM_STACKS] = {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  };     
}

void func3()
{
    int local_var;
    typedef  char  _GLOBAL_2_T; static  _GLOBAL_2_T  global_my_static_local_l[NUM_STACKS] = {  'a',  'a',  'a',  'a',  'a',  'a',  'a',  'a',  'a',  'a',  'a',  'a',  'a',  'a',  'a',  'a',  'a',  'a',  'a',  'a',  'a',  'a',  'a',  'a',  'a',  'a',  'a',  'a',  'a',  'a',  'a',  'a',  'a',  'a',  'a',  'a',  'a',  'a',  'a',  'a',  'a',  'a',  'a',  'a',  'a',  'a',  'a',  'a',  'a',  'a',  };     
}

void func4()
{
    typedef  int  _GLOBAL_3_T; static  _GLOBAL_3_T  global_multiple_static_locals[NUM_STACKS] = {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  }; static  _GLOBAL_3_T  global_msl2[NUM_STACKS]; static  _GLOBAL_3_T  global_msl3[NUM_STACKS] = {  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  };         

    global_msl2[get_stack_id()] = 500 / global_msl3[get_stack_id()];
}

void func5()
{
    typedef  int  _GLOBAL_4_T; static  _GLOBAL_4_T  global_my_static_local_l2[NUM_STACKS];   
    typedef  char  _GLOBAL_5_T; static  _GLOBAL_5_T  global_sam[NUM_STACKS];   
}

typedef  int _GLOBAL_6_T;  _GLOBAL_6_T  _GLOBAL_0_var_I [ 1 ]  = { 0 }  ;  _GLOBAL_6_T  _GLOBAL_1_var_I [ 1 ]  = { 0 }  ;  _GLOBAL_6_T  _GLOBAL_2_var_I [ 1 ]  = { 0 }  ;  _GLOBAL_6_T  _GLOBAL_3_var_I [ 1 ]  = { 0 }  ;  _GLOBAL_6_T  _GLOBAL_4_var_I [ 1 ]  = { 0 }  ;  _GLOBAL_6_T  _GLOBAL_5_var_I [ 1 ]  = { 0 }  ;  _GLOBAL_6_T  _GLOBAL_6_var_I [ 1 ]  = { 0 }  ;  _GLOBAL_6_T  _GLOBAL_7_var_I [ 1 ]  = { 0 }  ;  _GLOBAL_6_T  _GLOBAL_8_var_I [ 1 ]  = { 0 }  ;  _GLOBAL_6_T  _GLOBAL_9_var_I [ 1 ]  = { 0 }  ;  _GLOBAL_6_T  _GLOBAL_10_var_I [ 1 ]  = { 0 }  ;  _GLOBAL_6_T  _GLOBAL_11_var_I [ 1 ]  = { 0 }  ;  _GLOBAL_6_T  _GLOBAL_12_var_I [ 1 ]  = { 0 }  ;  _GLOBAL_6_T  _GLOBAL_13_var_I [ 1 ]  = { 0 }  ;  _GLOBAL_6_T  _GLOBAL_14_var_I [ 1 ]  = { 0 }  ;  _GLOBAL_6_T  _GLOBAL_15_var_I [ 1 ]  = { 0 }  ;  _GLOBAL_6_T  _GLOBAL_16_var_I [ 1 ]  = { 0 }  ;  _GLOBAL_6_T  _GLOBAL_17_var_I [ 1 ]  = { 0 }  ;  _GLOBAL_6_T  _GLOBAL_18_var_I [ 1 ]  = { 0 }  ;  _GLOBAL_6_T  _GLOBAL_19_var_I [ 1 ]  = { 0 }  ;  _GLOBAL_6_T  _GLOBAL_20_var_I [ 1 ]  = { 0 }  ;  _GLOBAL_6_T  _GLOBAL_21_var_I [ 1 ]  = { 0 }  ;  _GLOBAL_6_T  _GLOBAL_22_var_I [ 1 ]  = { 0 }  ;  _GLOBAL_6_T  _GLOBAL_23_var_I [ 1 ]  = { 0 }  ;  _GLOBAL_6_T  _GLOBAL_24_var_I [ 1 ]  = { 0 }  ;  _GLOBAL_6_T  _GLOBAL_25_var_I [ 1 ]  = { 0 }  ;  _GLOBAL_6_T  _GLOBAL_26_var_I [ 1 ]  = { 0 }  ;  _GLOBAL_6_T  _GLOBAL_27_var_I [ 1 ]  = { 0 }  ;  _GLOBAL_6_T  _GLOBAL_28_var_I [ 1 ]  = { 0 }  ;  _GLOBAL_6_T  _GLOBAL_29_var_I [ 1 ]  = { 0 }  ;  _GLOBAL_6_T  _GLOBAL_30_var_I [ 1 ]  = { 0 }  ;  _GLOBAL_6_T  _GLOBAL_31_var_I [ 1 ]  = { 0 }  ;  _GLOBAL_6_T  _GLOBAL_32_var_I [ 1 ]  = { 0 }  ;  _GLOBAL_6_T  _GLOBAL_33_var_I [ 1 ]  = { 0 }  ;  _GLOBAL_6_T  _GLOBAL_34_var_I [ 1 ]  = { 0 }  ;  _GLOBAL_6_T  _GLOBAL_35_var_I [ 1 ]  = { 0 }  ;  _GLOBAL_6_T  _GLOBAL_36_var_I [ 1 ]  = { 0 }  ;  _GLOBAL_6_T  _GLOBAL_37_var_I [ 1 ]  = { 0 }  ;  _GLOBAL_6_T  _GLOBAL_38_var_I [ 1 ]  = { 0 }  ;  _GLOBAL_6_T  _GLOBAL_39_var_I [ 1 ]  = { 0 }  ;  _GLOBAL_6_T  _GLOBAL_40_var_I [ 1 ]  = { 0 }  ;  _GLOBAL_6_T  _GLOBAL_41_var_I [ 1 ]  = { 0 }  ;  _GLOBAL_6_T  _GLOBAL_42_var_I [ 1 ]  = { 0 }  ;  _GLOBAL_6_T  _GLOBAL_43_var_I [ 1 ]  = { 0 }  ;  _GLOBAL_6_T  _GLOBAL_44_var_I [ 1 ]  = { 0 }  ;  _GLOBAL_6_T  _GLOBAL_45_var_I [ 1 ]  = { 0 }  ;  _GLOBAL_6_T  _GLOBAL_46_var_I [ 1 ]  = { 0 }  ;  _GLOBAL_6_T  _GLOBAL_47_var_I [ 1 ]  = { 0 }  ;  _GLOBAL_6_T  _GLOBAL_48_var_I [ 1 ]  = { 0 }  ;  _GLOBAL_6_T  _GLOBAL_49_var_I [ 1 ]  = { 0 }  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_var_I) *_GLOBAL_var_0_A[NUM_STACKS] = { &_GLOBAL_0_var_I, &_GLOBAL_1_var_I, &_GLOBAL_2_var_I, &_GLOBAL_3_var_I, &_GLOBAL_4_var_I, &_GLOBAL_5_var_I, &_GLOBAL_6_var_I, &_GLOBAL_7_var_I, &_GLOBAL_8_var_I, &_GLOBAL_9_var_I, &_GLOBAL_10_var_I, &_GLOBAL_11_var_I, &_GLOBAL_12_var_I, &_GLOBAL_13_var_I, &_GLOBAL_14_var_I, &_GLOBAL_15_var_I, &_GLOBAL_16_var_I, &_GLOBAL_17_var_I, &_GLOBAL_18_var_I, &_GLOBAL_19_var_I, &_GLOBAL_20_var_I, &_GLOBAL_21_var_I, &_GLOBAL_22_var_I, &_GLOBAL_23_var_I, &_GLOBAL_24_var_I, &_GLOBAL_25_var_I, &_GLOBAL_26_var_I, &_GLOBAL_27_var_I, &_GLOBAL_28_var_I, &_GLOBAL_29_var_I, &_GLOBAL_30_var_I, &_GLOBAL_31_var_I, &_GLOBAL_32_var_I, &_GLOBAL_33_var_I, &_GLOBAL_34_var_I, &_GLOBAL_35_var_I, &_GLOBAL_36_var_I, &_GLOBAL_37_var_I, &_GLOBAL_38_var_I, &_GLOBAL_39_var_I, &_GLOBAL_40_var_I, &_GLOBAL_41_var_I, &_GLOBAL_42_var_I, &_GLOBAL_43_var_I, &_GLOBAL_44_var_I, &_GLOBAL_45_var_I, &_GLOBAL_46_var_I, &_GLOBAL_47_var_I, &_GLOBAL_48_var_I, &_GLOBAL_49_var_I, };   

void func6()
{
    while (0) {
        typedef  int  _GLOBAL_7_T; static  _GLOBAL_7_T  global_var[NUM_STACKS];   

        global_var[get_stack_id()] = 0;

        while (0) {
            int var;
            var = 1;
        }
        global_var[get_stack_id()] = 2;
    }

    (*_GLOBAL_var_0_A[get_stack_id()])[0] = 1;
}

