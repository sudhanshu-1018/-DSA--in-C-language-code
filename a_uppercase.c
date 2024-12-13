#include<stdio.h>

int main(){
    char ch;
    printf("Enter the character:");
    scanf("%c",&ch);

    if (ch>='A' && ch<='Z')
    {
        printf("UPPER_CASE");
    }
    else if (ch>='a' && ch<='z')
    {
        printf("LOWER_CASE");
    }
    
    else{
        printf("invalid input by user");
    }
     
}