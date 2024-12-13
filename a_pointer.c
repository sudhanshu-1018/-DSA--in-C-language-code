#include<stdio.h>

int main(){
    int var = 10;
    int *ptr;
    ptr = &var;

    printf("%d",*ptr);
    return 0;
}