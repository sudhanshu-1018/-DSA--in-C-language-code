#include<stdio.h>

int main(){
    int marks;
    printf("Enter the number: ");
    scanf("%d",&marks);

    if (marks>30 && marks<=100){
        printf("pass");
    }
    else if(marks<=30 && marks>=0){
        printf("fail");
    }
    else{
        printf("invalid input by user");
    }
    return 0;
  
}