#include<stdio.h>
int Insertion_in_sorted(int arr[],int size,int total_size,int curr_ind,int newval){
    if(size>=total_size){
        return -1;
    }
    for(int i=size-1;i>=curr_ind;i--){
        arr[i+1]=arr[i];
    }
    arr[curr_ind]=newval;
    return 1;
}
void printarr(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main(){
    int arr[100]={7,8,10,11,24};
    int size=5,total_size=100,curr_ind=2,newval=9;

    printarr(arr,size);
    size+=1;
    Insertion_in_sorted(arr,size,total_size,curr_ind,newval);
    printarr(arr,size);

    return 0;

}