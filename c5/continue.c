/*************************************************************************
	> File Name: continue.c
	> Author: 
	> Description: 
	> Created Time: Sun Dec  6 12:09:36 2015
 ************************************************************************/

#include <stdio.h>

int main(){
    char c;
    while(1){  //回车符结束循环
        c=getchar();
        if(c=='4')  // 按下的是数字键4
            continue;  // 不执行printf语句便进行下次循环
        if(c=='0')
             break;//输入0终止循环
        printf("%c", c);
    }
    printf("\n");
    return 0;
}
