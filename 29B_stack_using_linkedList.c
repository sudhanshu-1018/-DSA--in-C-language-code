#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* top=NULL;

void printLinkedlist(struct Node* top){
    while(top!=NULL){
        printf("%d\n",top->data);
        top=top->next;
    }
}
int isEmpty(struct Node* top){
    if(top==NULL){
        return 1;
    }else{
        return 0;
    }
}
int isFull(){
    struct Node* n=(struct Node*)malloc(sizeof(struct Node));
    if(n==NULL){
        return 1;
    }else{
        return 0;
    }
}
struct Node* push(struct Node* top,int val){                          //-------> Inserting Node at indez 0;
    struct Node* n=(struct Node*)malloc(sizeof(struct Node));
    if(isFull()){
        printf("Stack is overflow\n");
    }else{
        n->data=val;
        n->next=top;
        top=n;
        return top;
    }
}
int pop(struct Node* tp){
    // struct Node* n=(struct Node*)malloc(sizeof(struct Node));
    if(isEmpty(tp)){
        printf("Stack is underflow\n");    
    }else{
        int i=tp->data;
        top=tp->next;
        return i;
    }
}
int main(){
    
    top=push(top,12);
    top=push(top,21);
    top=push(top,51);

    int element=pop(top);     // giving address to change value also in main(). If make top as global variable not send address to change in main if it will change it change for all;
    printf("poped element : %d\n",element);
    printLinkedlist(top);
    return 0;
}