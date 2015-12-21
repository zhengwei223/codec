#include<stdio.h>
static void fillArray(double nums[],int len);
static double sumArray(double nums[],int len);
static void printArray(double nums[],int len);

int main(){
    double nums[10];
    fillArray(nums,10);
    double sum = sumArray(nums,10);
    double avg = sum/10;
    printArray(nums,10);
    printf("它们的和是%.2lf,它们的平均值是%.2lf\n",sum,avg);
}

static void fillArray(double nums[],int len){
    for(int i=0;i<len;i++){
        printf("请输入第%d个数:\n",i+1);
        scanf("%lf",&nums[i]);
    }
}

static double sumArray(double nums[],int len){
    //sum
    double sum = 0;
    for(int i=0;i<len;i++){
        sum+=nums[i];
    }
    return sum;
}
static void printArray(double nums[] , int len){
    printf("您输入的十个数是：\n");
    for(int i=0;i<len;i++){
        printf("%.2lf\t",nums[i]);
    }
    printf("\n");   
}
