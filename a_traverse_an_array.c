#include<stdio.h>

int main(){
    int aadhar[5];
    int *ptr=&aadhar[0];

    //input
    for (int i = 0; i < 5; i++)
    {
        printf("index%d=",i);
        //scanf("%d",&aadhar[i]);      
        scanf("%d",ptr+i);
    }

    //output
    for (int i = 0; i < 5; i++)
    {
       // printf("No is=%d\n",aadhar[i]);   
       printf("No is=%d\n",*(ptr+i));
    }

    return 0;
    
    
}