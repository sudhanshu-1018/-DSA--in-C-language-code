#include<stdio.h>

int main(){
    int age=9;
    int *ptr=&age;
    printf("age=%u\n",ptr);
    ptr++;
    printf("age=%u\n",ptr);
    ptr--;
    printf("age=%u\n\n\n",ptr);


    char star='*';
    char *str=&star;
    printf("star=%u\n",str);
    str++;
    printf("star=%u\n",str);
    str--;
    printf("star=%u\n",str);

    int _age=10;
    int *ptr=_age;

    return 0;

}