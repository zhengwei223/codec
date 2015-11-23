/*************************************************************************
	> File Name: for3_fibo.c
	> Author: zhengwei
	> Description: 多重for循环示例，打印直角三角形
 ************************************************************************/

#include<stdio.h>
#include "genlib.h"
#include "simpio.h"

int main()  
{
    int row;
    printf("请输入行数:\n");
    row = GetInteger();

    int i,j;
    for(i = 0;i < row;i++){
        for(j = 0;j <= i;j++){
            printf("* ");
        }
        printf("\n");
    }
} 
