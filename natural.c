#include<stdio.h>

void sum(int n);

int main(){
    sum(4);
    return 0;
}

void sum(int n){
    // int j;
    int sum=0;
    // printf("Enter the value:");
    // scanf("%d",j);
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    printf("%d",sum);
}