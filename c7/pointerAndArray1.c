/*************************************************************************
	> File Name: pointerAndArray1.c
	> Author: 
	> Description: 
	> Created Time: Fri Dec 11 21:06:18 2015
 ************************************************************************/

#include<stdio.h>
int main(){
    int list[3] = {1,2,3} ;
    printf("list==&list[0]？%d\n",list==&list[0]);
    printf("把list当做指针使用,获取第一个元素的值:%d\n",*list);
    printf("把list当做指针使用,获取第二个元素的值:%d\n",*(list+1));
    printf("把list当做指针使用,获取第三个元素的值:%d\n",*(list+2));
    int *p = list;
    for(int i=0;i<3;i++){
        printf("%d\n",*p++);
    }
}

