/*************************************************************************
	> File Name: BMI.c
	> Author:zhengwei 
	> Description:综合示范变量、运算符、表达式和输入输出的运用
	> Created Time: Fri Nov 20 11:23:49 2015
 ************************************************************************/

#include<stdio.h>
#include "genlib.h"
#include "simpio.h"

#define INDEX_DOWN 18.5
#define INDEX_UP   22.9

int main(){
    //输出对照表
    printf("%-20s%-20s%-20s\n","身高(m)","下限(kg)","上限(kg)");
    double height = 1.65;
    printf("%-20.2f%-20.2f%-20.2f\n",height,height*height*INDEX_DOWN,height*height*INDEX_UP);
    height += 0.05;//1.7
    printf("%-20.2f%-20.2f%-20.2f\n",height,height*height*INDEX_DOWN,height*height*INDEX_UP);
    height += 0.05;//1.75
    printf("%-20.2f%-20.2f%-20.2f\n",height,height*height*INDEX_DOWN,height*height*INDEX_UP);
    height += 0.05;//1.8
    printf("%-20.2f%-20.2f%-20.2f\n",height,height*height*INDEX_DOWN,height*height*INDEX_UP);
    height += 0.05;//1.85
    printf("%-20.2f%-20.2f%-20.2f\n",height,height*height*INDEX_DOWN,height*height*INDEX_UP);
    
    string name;
    double weight;
    double index;
    string info;
    printf("请输入您的姓名：\n");
    name = GetLine();
    printf("请输入您的身高（m）：\n");
    height = GetReal();
    printf("请输入您的体重（kg）：\n");
    weight = GetReal();

    index = weight/(height*height);
    //info = index<INDEX_DOWN?"偏轻":(index>INDEX_UP?"超重":"正常");
    if(index<INDEX_DOWN){
        info="偏轻";
    }else if(index>INDEX_UP){
        info="超重";
    }else{
        info="正常";
    }
    printf("%s您好，身高%.2fm，体重%.2fkg，计算结果：%s\n",name,height,weight,info);
} 
