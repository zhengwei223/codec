/*************************************************************************
	> File Name: while_DigitSum.c
	> Author:zhengwei 
	> Description:for循环示例2，步长的控制 
 ************************************************************************/

#include<stdio.h>
#include "genlib.h"
#include "simpio.h"

int main(){
    printf("请输入一个正整数：\n");
    int N = GetInteger();
    int i;
    int sum = 0;
    for(i = 1;i <= N;i = i+2){
        sum += i;
    }
    printf("1~%d间奇数之和为：%d\n",N,sum);
}
