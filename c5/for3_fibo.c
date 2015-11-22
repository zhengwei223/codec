/*************************************************************************
	> File Name: for3_fibo.c
	> Author: zhengwei
	> Description: for循环示例3，求fibonacci数列第N项的值，N从0开始；f0=0;f1=1
 ************************************************************************/

#include<stdio.h>
#include "genlib.h"
#include "simpio.h"

int main()  
{
    int fn_1 = 1;//初始化为1项的值，后续用于表示新项的值
    int fn_0 = 0;//初始化为0项值，后续用于表示上一项的值
    printf("请输入一个正整数:\n");
    int N = GetInteger();//第N项
    //单独处理N=0的情况
    if(N==0){
        printf("f(0)=%d\n",fn_0);
        return 1;
    }
    //单独处理N=1的情况情况
    if(N==1){
        printf("f(1)=%d\n",fn_1);
        return 1;       
    }

    int i;//循环索引
    int temp;//临时变量
    for(i=2;i<=N;i++){
        temp=fn_1;//缓存
        fn_1 = fn_0+ fn_1;//新项为前两项相加
        fn_0 = temp;//上一项为之前的新值
    }
    printf("f(%d)=%d\n",N,fn_1);//输出新项
} 
