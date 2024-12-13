#include<stdio.h>
int BinarySearch(int arr[],int tar,int size){
    int first=0;
    int last=size-1;

    while(first<last){
    int mid=(first+last)/2;
        if(arr[mid]>tar){
            last=mid-1;
        }else if(arr[mid]<tar){
            first=mid+1;
        }else if(arr[mid]==tar){
            return mid;
        }else{
            return -1;
        }
    }
}
int main(){
    int arr[]={10,20,34,46,51,55,60,62,81,105};
    int tar=125;
    int size=sizeof(arr)/sizeof(int);

    printf("%d",BinarySearch(arr,tar,size));
}