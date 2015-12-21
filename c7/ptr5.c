#include<stdio.h>
static void SetToZero(double*);
int main(){
    double pi = 3.14;
    SetToZero(&pi);
    printf("pi的值:%.2f\n",pi);
}
static void SetToZero(double *var){
    *var = 0;
}
