/*************************************************************************
	> File Name: ptr4.c
	> Author: 
	> Description: 
	> Created Time: Tue Dec  8 12:55:18 2015
 ************************************************************************/

#include<stdio.h>
static void SetToZero(double);
int main(){
    double pi = 3.14;
    SetToZero(pi);
    printf("pi的值:%.2f\n",pi);
}
static void SetToZero(double var){
    var = 0;
}
