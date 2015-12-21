/*************************************************************************
函数名：modf
头文件：<math.h>>
函数原型：double modf(double x, double *ipart)
函数用途：分解x，以得到x的整数和小数部分
输入参数：x      待分解的数
输出参数：ipart  x的整数部分
返回值：x 的小数部分

 ************************************************************************/

#include <stdio.h>
#include <math.h>
int main(){
    double x = 4.414;
    double iPart;
    double fPart = modf(x,&iPart);
    printf("x的整数部分是：%f，小数部分是：%.3f\n",iPart,fPart);
}
