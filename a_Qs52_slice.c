#include<stdio.h>

int main(){
    char str[20];
    printf("write your name:-");
    scanf("%s",str);

    for (char i = 3; i <= 6 && str[i]!='\0'; i++)
    {
        printf("%c",str[i]);
        
    }
    

    return 0;
}