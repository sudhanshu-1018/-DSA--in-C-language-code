#include<stdio.h>

float temp(float n);

int main(){ 
    printf("%f", temp(1.0));
    return 0;
}
float temp(float n){
    if(n==0){
        return 32;
    }
    float mul=temp(n*1.08);
    float mul2=(mul)+n;
    return mul2;
}