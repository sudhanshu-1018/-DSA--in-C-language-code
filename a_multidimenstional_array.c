#include<stdio.h>

int main(){
    int arr[2][3];          // _ _ _||_ _ _
    arr[0][0]=90;
    arr[0][1]=95;
    arr[0][2]=60;

    arr[1][0]=95;
    arr[1][1]=94;
    arr[1][2]=100;

    printf("%d\n",arr[0][0]);
    printf("%d\n",arr[0][1]);
    printf("%d\n\n",arr[0][2]);
    printf("%d\n",arr[1][0]);
    printf("%d\n",arr[1][1]);
    printf("%d\n",arr[1][2]);
    return 0;


}