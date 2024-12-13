#include<stdio.h>

int main(){
    int arr[]={45,15,62};
    int *ptr=&arr[0];
        //OR//
    int *str=arr;

    printf("%d\n",*ptr);
    printf("%d\n",*str);

    return 0;
}