#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};
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
int pop(struct Node** top){
    // struct Node* n=(struct Node*)malloc(sizeof(struct Node));
    if(isEmpty(*top)){
        printf("Stack is underflow\n");    
    }else{
        int i=(*top)->data;
        *top=(*top)->next;
        return i;
    }
}
int peek(struct Node* top,int pos){
    struct Node* ptr=top;
    for (int i = 0; (i < pos-1 && ptr!=NULL); i++) //0<1-1 --->print top,  0<2-1 ----->print second ,0<3-1---->print third
    {
        ptr=ptr->next;
    }
    if(ptr!=NULL){
        return ptr->data;
    }else{
        return -1;
    }
    
}
int stacktop(struct Node* top){
    return top->data;
}
int stackBottom(struct Node* top){
    if(top->next==NULL){
        return top->data;
    }
    return -1;
}
int main(){
    struct Node* top=NULL;
    top=push(top,12);
    top=push(top,21);
    top=push(top,51);
    // printLinkedlist(top);

    // printf("%d\n",peek(top,1));

    printf("%d\n",stacktop(top));
    printf("%d\n",stackBottom(top));

    // int element=pop(&top);     // giving address to change value also in main(). If make top as global variable not send address to change in main if it will change it change for all;
    // printf("poped element : %d\n",element);
    // printLinkedlist(top);
    return 0;
}