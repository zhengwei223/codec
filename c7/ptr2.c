/*************************************************************************
	> File Name: ptr1.c
	> Author: 
	> Description: 
	> Created Time: Mon Dec  7 00:26:38 2015
 ************************************************************************/

#include<stdio.h>
int main(){
    int x = 100;
    printf("x的值是:%d\n",x);
    printf("x所占空间大小是:%ld\n",sizeof x);
    int *ptr1 = &x;
    printf("x的地址是:%p\n",ptr1);
}
