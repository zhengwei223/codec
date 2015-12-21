/*************************************************************************
	> File Name: enumDemo.c
	> Author: 
	> Description: 
	> Created Time: Sun Dec  6 19:36:55 2015
 ************************************************************************/

#include<stdio.h>
int main(){
    enum week{sun, mon, tue, wed, thu, fri, sat};
    week a = sun;
    printf("a的值是：%d\n",a);

    enum coin{
        Penny = 1,
        Nuckel = 5,
        Dime = 10,
        Quarter = 25,
        HalfDollar = 50
    };
    enum coin money = HalfDollar;
    printf("HalfDollar的值是：%d\n",money);


    enum month{January = 1,Febrary,March,April,May,June,July,August,September,October,November,December
    };
}
