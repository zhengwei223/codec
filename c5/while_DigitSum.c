/*************************************************************************
	> File Name: while_DigitSum.c
	> Author:zhengwei 
	> Description: 示范while循环的使用——求整数各位上的数字之和
	> Created Time: Sun Nov 22 12:02:21 2015
 ************************************************************************/

#include<stdio.h>
#include "genlib.h"
#include "simpio.h"

int main(){
    printf("请输入一个整数：\n");
    int number = GetInteger();
    int sum = 0;
    while(number>0){
        sum += number%10;//余数得到个位
        number = number/10;//消除个位
    }
    printf("该数字各位之和为：%d\n",sum);

}
