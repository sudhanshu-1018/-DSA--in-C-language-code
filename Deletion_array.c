#include<stdio.h>
void delete_Aarray(int arr[],int size,int total_size,int curr_i){
    if(size>=total_size){
        return ;
    }
    for(int i=curr_i;i<size;i++){
        arr[i]=arr[i+1];
    }
}
void printarr(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main(){
    int arr[100]={1,4,5,9,10,12};
    int size=6,total_size=100,curr_i=2;

    printarr(arr,size);
    size-=1;
    delete_Aarray(arr,size,total_size,curr_i);
    printarr(arr,size);

    return 0;

}