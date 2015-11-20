/*************************************************************************
	> File Name: prac4.c
	> Author: 
	> Description: 
	> Created Time: Fri Nov 20 15:42:44 2015
 ************************************************************************/

#include<stdio.h>
#include "simpio.h"

int main(){
    int total = 5000;
    double insurance = 0.12;
    printf("%-24s%-26s%-22s%-24s%-20s\n","税前总额","应纳税所得额","税率","速算扣除数","个税");
    double toPay = total-total*0.12-3500; 
    double rate = toPay<0?0:(toPay<=1500?0.03:(toPay<=4500?0.1:(toPay<9000?0.2:(toPay<35000?0.25:(toPay<55000?0.3:(toPay<80000?0.35:0.45))))));
    int subtract = toPay<0?0:(toPay<=1500?0:(toPay<=4500?105:(toPay<9000?555:(toPay<35000?1005:(toPay<55000?2755:(toPay<80000?5505:13505))))));
    printf("%-20d%-20.2f%-20.2f%-20d%-20.2f\n",total,toPay,rate,subtract,toPay*rate-subtract);
    
    total += 1000;
    toPay = total-total*0.12-3500; 
    rate = toPay<0?0:(toPay<=1500?0.03:(toPay<=4500?0.1:(toPay<9000?0.2:(toPay<35000?0.25:(toPay<55000?0.3:(toPay<80000?0.35:0.45))))));
    subtract = toPay<0?0:(toPay<=1500?0:(toPay<=4500?105:(toPay<9000?555:(toPay<35000?1005:(toPay<55000?2755:(toPay<80000?5505:13505))))));
    printf("%-20d%-20.2f%-20.2f%-20d%-20.2f\n",total,toPay,rate,subtract,toPay*rate-subtract);   

    total += 1000;
    toPay = total-total*0.12-3500; 
    rate = toPay<0?0:(toPay<=1500?0.03:(toPay<=4500?0.1:(toPay<9000?0.2:(toPay<35000?0.25:(toPay<55000?0.3:(toPay<80000?0.35:0.45))))));
    subtract = toPay<0?0:(toPay<=1500?0:(toPay<=4500?105:(toPay<9000?555:(toPay<35000?1005:(toPay<55000?2755:(toPay<80000?5505:13505))))));
    printf("%-20d%-20.2f%-20.2f%-20d%-20.2f\n",total,toPay,rate,subtract,toPay*rate-subtract);   

    total += 1000;
    toPay = total-total*0.12-3500; 
    rate = toPay<0?0:(toPay<=1500?0.03:(toPay<=4500?0.1:(toPay<9000?0.2:(toPay<35000?0.25:(toPay<55000?0.3:(toPay<80000?0.35:0.45))))));
    subtract = toPay<0?0:(toPay<=1500?0:(toPay<=4500?105:(toPay<9000?555:(toPay<35000?1005:(toPay<55000?2755:(toPay<80000?5505:13505))))));
    printf("%-20d%-20.2f%-20.2f%-20d%-20.2f\n",total,toPay,rate,subtract,toPay*rate-subtract); 

    total += 1000;
    toPay = total-total*0.12-3500; 
    rate = toPay<0?0:(toPay<=1500?0.03:(toPay<=4500?0.1:(toPay<9000?0.2:(toPay<35000?0.25:(toPay<55000?0.3:(toPay<80000?0.35:0.45))))));
    subtract = toPay<0?0:(toPay<=1500?0:(toPay<=4500?105:(toPay<9000?555:(toPay<35000?1005:(toPay<55000?2755:(toPay<80000?5505:13505))))));
    printf("%-20d%-20.2f%-20.2f%-20d%-20.2f\n",total,toPay,rate,subtract,toPay*rate-subtract);    

    total += 1000;
    toPay = total-total*0.12-3500; 
    rate = toPay<0?0:(toPay<=1500?0.03:(toPay<=4500?0.1:(toPay<9000?0.2:(toPay<35000?0.25:(toPay<55000?0.3:(toPay<80000?0.35:0.45))))));
    subtract = toPay<0?0:(toPay<=1500?0:(toPay<=4500?105:(toPay<9000?555:(toPay<35000?1005:(toPay<55000?2755:(toPay<80000?5505:13505))))));
    printf("%-20d%-20.2f%-20.2f%-20d%-20.2f\n",total,toPay,rate,subtract,toPay*rate-subtract);   

    total += 1000;
    toPay = total-total*0.12-3500; 
    rate = toPay<0?0:(toPay<=1500?0.03:(toPay<=4500?0.1:(toPay<9000?0.2:(toPay<35000?0.25:(toPay<55000?0.3:(toPay<80000?0.35:0.45))))));
    subtract = toPay<0?0:(toPay<=1500?0:(toPay<=4500?105:(toPay<9000?555:(toPay<35000?1005:(toPay<55000?2755:(toPay<80000?5505:13505))))));
    printf("%-20d%-20.2f%-20.2f%-20d%-20.2f\n",total,toPay,rate,subtract,toPay*rate-subtract); 

    total += 1000;
    toPay = total-total*0.12-3500; 
    rate = toPay<0?0:(toPay<=1500?0.03:(toPay<=4500?0.1:(toPay<9000?0.2:(toPay<35000?0.25:(toPay<55000?0.3:(toPay<80000?0.35:0.45))))));
    subtract = toPay<0?0:(toPay<=1500?0:(toPay<=4500?105:(toPay<9000?555:(toPay<35000?1005:(toPay<55000?2755:(toPay<80000?5505:13505))))));
    printf("%-20d%-20.2f%-20.2f%-20d%-20.2f\n",total,toPay,rate,subtract,toPay*rate-subtract); 

    total += 1000;
    toPay = total-total*0.12-3500; 
    rate = toPay<0?0:(toPay<=1500?0.03:(toPay<=4500?0.1:(toPay<9000?0.2:(toPay<35000?0.25:(toPay<55000?0.3:(toPay<80000?0.35:0.45))))));
    subtract = toPay<0?0:(toPay<=1500?0:(toPay<=4500?105:(toPay<9000?555:(toPay<35000?1005:(toPay<55000?2755:(toPay<80000?5505:13505))))));
    printf("%-20d%-20.2f%-20.2f%-20d%-20.2f\n",total,toPay,rate,subtract,toPay*rate-subtract);   

    total += 1000;
    toPay = total-total*0.12-3500; 
    rate = toPay<0?0:(toPay<=1500?0.03:(toPay<=4500?0.1:(toPay<9000?0.2:(toPay<35000?0.25:(toPay<55000?0.3:(toPay<80000?0.35:0.45))))));
    subtract = toPay<0?0:(toPay<=1500?0:(toPay<=4500?105:(toPay<9000?555:(toPay<35000?1005:(toPay<55000?2755:(toPay<80000?5505:13505))))));
    printf("%-20d%-20.2f%-20.2f%-20d%-20.2f\n",total,toPay,rate,subtract,toPay*rate-subtract); 

    total += 1000;
    toPay = total-total*0.12-3500; 
    rate = toPay<0?0:(toPay<=1500?0.03:(toPay<=4500?0.1:(toPay<9000?0.2:(toPay<35000?0.25:(toPay<55000?0.3:(toPay<80000?0.35:0.45))))));
    subtract = toPay<0?0:(toPay<=1500?0:(toPay<=4500?105:(toPay<9000?555:(toPay<35000?1005:(toPay<55000?2755:(toPay<80000?5505:13505))))));
    printf("%-20d%-20.2f%-20.2f%-20d%-20.2f\n",total,toPay,rate,subtract,toPay*rate-subtract); 

    total += 1000;
    toPay = total-total*0.12-3500; 
    rate = toPay<0?0:(toPay<=1500?0.03:(toPay<=4500?0.1:(toPay<9000?0.2:(toPay<35000?0.25:(toPay<55000?0.3:(toPay<80000?0.35:0.45))))));
    subtract = toPay<0?0:(toPay<=1500?0:(toPay<=4500?105:(toPay<9000?555:(toPay<35000?1005:(toPay<55000?2755:(toPay<80000?5505:13505))))));
    printf("%-20d%-20.2f%-20.2f%-20d%-20.2f\n",total,toPay,rate,subtract,toPay*rate-subtract);   

    total += 1000;
    toPay = total-total*0.12-3500; 
    rate = toPay<0?0:(toPay<=1500?0.03:(toPay<=4500?0.1:(toPay<9000?0.2:(toPay<35000?0.25:(toPay<55000?0.3:(toPay<80000?0.35:0.45))))));
    subtract = toPay<0?0:(toPay<=1500?0:(toPay<=4500?105:(toPay<9000?555:(toPay<35000?1005:(toPay<55000?2755:(toPay<80000?5505:13505))))));
    printf("%-20d%-20.2f%-20.2f%-20d%-20.2f\n",total,toPay,rate,subtract,toPay*rate-subtract); 

    total += 1000;
    toPay = total-total*0.12-3500; 
    rate = toPay<0?0:(toPay<=1500?0.03:(toPay<=4500?0.1:(toPay<9000?0.2:(toPay<35000?0.25:(toPay<55000?0.3:(toPay<80000?0.35:0.45))))));
    subtract = toPay<0?0:(toPay<=1500?0:(toPay<=4500?105:(toPay<9000?555:(toPay<35000?1005:(toPay<55000?2755:(toPay<80000?5505:13505))))));
    printf("%-20d%-20.2f%-20.2f%-20d%-20.2f\n",total,toPay,rate,subtract,toPay*rate-subtract); 

    total += 1000;
    toPay = total-total*0.12-3500; 
    rate = toPay<0?0:(toPay<=1500?0.03:(toPay<=4500?0.1:(toPay<9000?0.2:(toPay<35000?0.25:(toPay<55000?0.3:(toPay<80000?0.35:0.45))))));
    subtract = toPay<0?0:(toPay<=1500?0:(toPay<=4500?105:(toPay<9000?555:(toPay<35000?1005:(toPay<55000?2755:(toPay<80000?5505:13505))))));
    printf("%-20d%-20.2f%-20.2f%-20d%-20.2f\n",total,toPay,rate,subtract,toPay*rate-subtract);   

    total += 1000;
    toPay = total-total*0.12-3500; 
    rate = toPay<0?0:(toPay<=1500?0.03:(toPay<=4500?0.1:(toPay<9000?0.2:(toPay<35000?0.25:(toPay<55000?0.3:(toPay<80000?0.35:0.45))))));
    subtract = toPay<0?0:(toPay<=1500?0:(toPay<=4500?105:(toPay<9000?555:(toPay<35000?1005:(toPay<55000?2755:(toPay<80000?5505:13505))))));
    printf("%-20d%-20.2f%-20.2f%-20d%-20.2f\n",total,toPay,rate,subtract,toPay*rate-subtract); 

    printf("请输入税前总收入：\n");
    total = GetInteger();
    printf("请输入各项社会保险费：\n");
    toPay = total- GetInteger()-3500;
    rate = toPay<0?0:(toPay<=1500?0.03:(toPay<=4500?0.1:(toPay<9000?0.2:(toPay<35000?0.25:(toPay<55000?0.3:(toPay<80000?0.35:0.45))))));
    subtract = toPay<0?0:(toPay<=1500?0:(toPay<=4500?105:(toPay<9000?555:(toPay<35000?1005:(toPay<55000?2755:(toPay<80000?5505:13505))))));
    printf("您需要纳税：%.2f元\n",toPay*rate-subtract);

}
