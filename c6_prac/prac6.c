/*************************************************************************
	> File Name: prac6.c
	> Author: 
	> Description: 
	> Created Time: Sat Dec  5 12:20:12 2015
 ************************************************************************/

#include<stdio.h>

static int Round(double);
int main(){
    printf("%d\n",Round(3.123));
    printf("%d\n",Round(3.523));
    printf("%d\n",Round(3.6123));
    printf("%d\n",Round(3));
}

static int Round(double x){
    if(x>=0){
        x+=0.5;
    }else{
        x-=0.5;
    }
    return (int)x;
}
