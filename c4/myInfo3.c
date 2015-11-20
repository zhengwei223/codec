/*************************************************************************
	> File Name: myInfo2.c
	> Author: zhengwei
	> Description: 主要示范string类型的使用
	> Created Time: 一 11/16 21:35:49 2015
 ************************************************************************/

#include<stdio.h>
#include "genlib.h"
#include "simpio.h"

int main(){
    string name;
    int year;
    float weight;
    printf("请输入你的姓名：\n");
    name = GetLine(); //从键盘中获取一行字符串
    printf("请输入你的出生年：\n");
    year = GetInteger();
    printf("请输入你的体重：\n");
    weight = GetReal();
    int age = 2015 - year; 
    printf("姓名：%-5.10s\t年龄：%-5d\t体重：%.2f\n",name,age,weight);
}

