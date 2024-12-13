#include<stdio.h>

int main(){
    int age;
    printf("Enter the age: ");
    scanf("%d",&age);
    if(age>=18){
        printf("ADULT\n");
        printf("You can vote\n");
    }
    else if (age>13 && age<18)
    {
        printf("TEENAGER\n");
        printf("you can't vote wait for some year\n");
    }
    
    else{
        printf("CHILD\n");
        printf("you are too childish\n");
        printf("you don't even think to vote\n");
    }
    return 0;
}