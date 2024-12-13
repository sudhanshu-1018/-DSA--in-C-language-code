#include<stdio.h>
#include<stdlib.h>

struct Queue{
    int size;
    int q;
    int r;
    int* arr;
};
void printQueue(struct Queue* hr){
    int i=hr->r+1;
    while(i<=hr->q){
        printf("%d,",hr->arr[i]);
        i++;
    }
    printf("\n");
}
int isfull(struct Queue* hr){
    if(hr->q==hr->size-1){
        return 1;
    }else{
        return 0;
    }
}
int isEmpty(struct Queue* hr){
    if(hr->r == hr->q){
        return 1;
    }else{
        return 0;
    }
}
void enqueue(struct Queue* hr,int val){
    if(isfull(hr)){
        printf("-1");
    }else{
        // hr->q=hr->q+1;
        hr->q++;
        hr->arr[hr->q]=val;
    }
}
int dequeue(struct Queue* hr){
    if(isEmpty(hr)){
        return -1;
    }else{
        hr->r++;
        return hr->arr[hr->r];
    }
}
int main(){
    struct Queue* hr;
    hr->size=20;
    hr->q,hr->r=-1;
    hr->arr=(int*)malloc(hr->size*sizeof(int));

    enqueue(hr,2);
    enqueue(hr,5);
    enqueue(hr,7);
    printQueue(hr);

    dequeue(hr);
    dequeue(hr);
    dequeue(hr);
  
    printQueue(hr);

    free(hr->arr);
    

}