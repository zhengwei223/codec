/*************************************************************************
	> File Name: for3_fibo.c
	> Author: zhengwei
	> Description: 多重for循环示例，打印多行多列的*
 ************************************************************************/

#include<stdio.h>
#include "genlib.h"
#include "simpio.h"

int main()  
{
    int row,col;
    int i,j;
    printf("请输入行数:\n");
    row = GetInteger();
    printf("请输入列数:\n");
    col = GetInteger(); 
   
    for(i = 0;i < row;i++){
        for(j = 0;j < col;j++){
            printf("* ");
        }
        printf("\n");
    }
} 
