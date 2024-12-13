#include<stdio.h>

int main(){
    int n;
    char x='x';
    char y='=';
    printf("Enter the number for table: ");
    scanf("%d",&n);

    for(int i=1;i<=10;i++){
        printf("%d",n);
        printf("%c",x);
        printf("%d",i);
        printf("%c",y);
        printf("%d\n",n*i);
    }
}