/*************************************************************************
	> File Name: plusPlus.c
	> Author:zhengwei 
	> Description: 示范++操作的特性
	> Created Time: Fri Nov 20 09:34:31 2015
 ************************************************************************/

#include<stdio.h>
int main(){
    int x,y;
    x = 7;
    //y = ++x;//x = x+1;y = x;
    y = x++;//y = x;x = x+1;
    printf("x=%d\ty=%d\n",x,y);

}

