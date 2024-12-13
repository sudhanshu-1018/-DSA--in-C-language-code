#include<stdio.h>

int main(){
    char str[100];
    printf("enter your name:");
    fgets(str,100,stdin);
    puts(str);

    return 0;
}