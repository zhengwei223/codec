/*************************************************************************
	> File Name: switch.c
	> Author:zhengwei 
	> Description: 示范switch的使用
 ************************************************************************/

#include<stdio.h>
#include "genlib.h"
#include "simpio.h"

int main(){
    int month = GetInteger();
    string  word;
    switch(month){
        case 1:
            word = "January";
            break;
        case 2:
            word = "February";
            break;
        case 3:
            word = "March";
            break;
        case 4:
            word = "April";
            break;
        case 5:
            word = "May";
            break;
        case 6:
            word = "June";
            break;
        case 7:
            word = "June";
            break;
        case 8:
            word = "August";
            break;
        case 9:
            word = "September";
            break;
        case 10:
            word = "October";
            break;
        case 11:
            word = "November";
            break;
        case 12:
            word = "December";
            break;
        default:
            word = "您输入的数字有误";
    }
    printf("%s\n",word);
}
