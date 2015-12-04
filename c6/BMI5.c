/*************************************************************************
	> File Name: BMI.c
	> Author:zhengwei 
	> Description:第五个版本，模块化编程
 ************************************************************************/

#include<stdio.h>
#include "genlib.h"
#include "simpio.h"

#define INDEX_DOWN 18.5
#define INDEX_UP   22.9
static void GiveInstructions();
static void CollectInfo();
static string CheckInfo();
string name;
double weight;
double height; 

int main(){
    GiveInstructions();
    CollectInfo();    
    string result = CheckInfo();
    printf("%s您好，身高%.2fm，体重%.2fkg，计算结果：%s\n",name,height,weight,result);
}
static void GiveInstructions(){
     //输出对照表
    printf("%-20s%-20s%-20s\n","身高(m)","下限(kg)","上限(kg)");
    double height = 1.65;
    for(;height < 1.9;height += 0.05){
        printf("%-20.2f%-20.2f%-20.2f\n",height,height*height*INDEX_DOWN,height*height*INDEX_UP);
    }   
}
static void  CollectInfo(){
    printf("请输入您的姓名：\n");
    name = GetLine();
    printf("请输入您的身高（m）：\n");
    height = GetReal();
    printf("请输入您的体重（kg）：\n");
    weight = GetReal();
}   
static string CheckInfo(){
    double index = weight/(height*height);
    if(index<INDEX_DOWN){
        return "偏轻";
    }else if(index>INDEX_UP){
        return "超重";
    }else{
        return "正常";
    }
}    
