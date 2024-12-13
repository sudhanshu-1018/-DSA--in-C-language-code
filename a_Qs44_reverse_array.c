#include<stdio.h>
void reverse(int arr[],int n);
void show(int arr[],int n);

int main(){
    int arr[]={1,5,7,9,2};
    reverse(arr,5);
    show(arr,5);
    return 0;
}

void reverse(int arr[],int n){
    for (int i = 0; i < n/2; i++)
    {
        int first_val=arr[i];
        int second_value=arr[n-i-1];

        arr[i]=second_value;
        arr[n-i-1]=first_val;

        // printf("%d",arr[i]);
        
        // printf("%d",arr[n-i-1]);
    }
    
}
void show(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d",arr[i]);
    }
    
}