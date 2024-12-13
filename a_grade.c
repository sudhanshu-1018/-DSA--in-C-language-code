#include<stdio.h>

int main(){
    int marks;
    printf("Enter the number: ");
    scanf("%d",&marks);

    if (marks<30 && marks>=0)
    {
        printf("grade 'C'");
    }
    else if (marks>=30 && marks<70)
    {
        printf("grade 'B'");
    }
    else if (marks>=70 && marks<90)
    {
        printf("grade 'A'");
    }
    else if (marks>=90 && marks<=100)
    {
        printf("grade 'A+'");
    }  
    else{
        printf("invalid  input by user");
    }
    
    return 0;
    
}