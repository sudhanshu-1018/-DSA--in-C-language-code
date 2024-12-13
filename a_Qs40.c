#include<stdio.h>

void math(int a,int b,int *sum,int *product,int *avg);

int main(){
    int a=3,b=5;
    int sum,product,avg;
    math(a,b,&sum,&product,&avg);
    printf("sum=%d,product=%d,avg=%d\n",sum,product,avg);
    return 0;
    
}
void math(int a,int b,int *sum,int *product,int *avg){
    *sum=a+b;
    *product=a*b;
    *avg=(a+b)/2;
}