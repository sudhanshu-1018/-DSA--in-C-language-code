#include<stdio.h>

int main(){
    char firstname[20];
    char lastname[20];

    printf("write your first name:-");
    scanf("%s",firstname);

    printf("write last name:-");
    scanf("%s",lastname);

    printf("%s",firstname);
    printf("%s",lastname);
    return 0;
}