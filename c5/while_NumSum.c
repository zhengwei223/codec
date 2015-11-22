/*************************************************************************
	> File Name: while_DigitSum.c
	> Author:zhengwei 
	> Description: while循环示例2
 ************************************************************************/

#include<stdio.h>
#include "genlib.h"
#include "simpio.h"

int main(){
    int sum = 0;
    int number;
    int count = 0;
    while(TRUE){
        printf("请输入整数(-1代表结束)：\n");
        number = GetInteger();
        if(number == -1){
            break;
        }
        sum += number;    
        count++;
    }
    printf("平均值为：%.2f\n",sum/(double)count);
}
