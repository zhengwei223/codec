#include<stdio.h>
#include <stdlib.h>
static void printArray(int nums[][3],int rows,int cols);
static void  generateArray(int nums[][3],int rows,int cols);

int main(){
    int nums[3][3];
    generateArray(nums,3,3);
    printArray(nums,3,3);
}
//用随机数生成二维数组的每个元素
static void generateArray(int nums[][3],int rows,int cols){
   for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            nums[i][j] = rand();
        }
    }   
}
//按行列输出二维数组
static void printArray(int nums[][3],int rows,int cols){
   for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",nums[i][j]);
        }
       printf("\n");
    }   
}
