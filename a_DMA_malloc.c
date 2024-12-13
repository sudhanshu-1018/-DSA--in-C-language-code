#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    ptr=(int*)malloc(5*sizeof(int));

    ptr[0]=1;
    ptr[1]=6;
    ptr[2]=9;
    ptr[3]=0;
    ptr[4]=5;
    ptr[5]=1;

    for (int i = 0; i < 6; i++)
    {
        printf("%d\n",ptr[i]);
    }
    return 0;
    
}