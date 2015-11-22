/*************************************************************************
	> File Name: if1.c
 ************************************************************************/

#include<stdio.h>
#include "genlib.h"
#include "simpio.h"

int main(){
    printf("请输入一个整数：\n");
    int num = GetInteger();
    if(num%2==0){
        printf("这是一个偶数\n");
    }else{
        printf("这是一个奇数\n");
    }

}

