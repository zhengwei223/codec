/*************************************************************************
	> File Name: myInfo.c
	> Author: zhengwei
	> Description: 示范simpio的使用，基本的输入输出
	> Created Time: 一 11/16 21:35:49 2015
 ************************************************************************/

#include<stdio.h>
#include "simpio.h"

int main(){
    int year;
    float weight;
    printf("请输入你的出生年：\n");
    year = GetInteger();
    printf("请输入你的体重：\n");
    weight = GetReal();
    int age = 2015 - year;
    printf("你的年龄是%d,你的体重是%f\n",age,weight);
}

