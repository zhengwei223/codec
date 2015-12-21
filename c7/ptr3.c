#include<stdio.h>
int main(){
    int x = 100;
    printf("x的值是:%d\n",x);
    printf("x所占空间大小是:%ld\n",sizeof x);
    int *ptr1 = &x;
    printf("x的地址是:%p\n",ptr1);
    printf("通过指针来获得x的值：%d\n",*ptr1);
    *ptr1 = 1000;
    printf("通过指针改变x的值后x=%d\n",x);
}
