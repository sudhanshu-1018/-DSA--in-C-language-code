#include<stdio.h>

int main(){
    FILE *fptr;
    fptr=fopen("test.txt","r");

    char ch[100];
    fscanf(fptr,"%s",&ch);
    printf("first name= %s\n",ch);
    fscanf(fptr,"%s",&ch);
    printf("middle name= %s\n",ch);
    fscanf(fptr,"%s",&ch);
    printf("last name= %s\n",ch);

    fclose(fptr);

    return 0;
}