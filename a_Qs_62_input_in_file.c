#include<stdio.h>

int main(){
    FILE *fptr;
    fptr=fopen("string","w");

    char name[100];
    int roll;
    float cgpa;

    printf("write your name:- ");
    scanf("%s",name);
    printf("write your roll:- ");
    scanf("%d",&roll);
    printf("write your cgpa:-");
    scanf("%f",&cgpa);

    fprintf(fptr,"student name:- %s\n",name);
    fprintf(fptr,"student roll no:- %d\n",roll);
    fprintf(fptr," student cgpa:- %f",cgpa);

    fclose(fptr);
    return 0;

    
}