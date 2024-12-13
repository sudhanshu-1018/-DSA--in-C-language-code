#include<stdio.h>

typedef struct SUdentENgineerAUtomobile{
    int roll;
    float cgpa;
    char name[100];
}sea;
int main(){
    sea s1;
    s1.roll=41;

    printf("%d",s1.roll);
}