/*************************************************************************
	> File Name: while_DigitSum.c
	> Author:zhengwei 
	> Description: 示范for循环的基本用法
 ************************************************************************/

#include<stdio.h>

int main(){
    int i ;
    int sum = 0;
    for(i = 0;i <= 100;i++){
        sum += i;
    }
    printf("1~100数字求和：%d\n",sum);

}
