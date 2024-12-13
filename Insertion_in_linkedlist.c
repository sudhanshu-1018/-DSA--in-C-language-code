#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next; 
};
void printNode(struct Node* ptr){
    while(ptr!=NULL){
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}
struct Node* add_At_start(struct Node* head,int data){
    struct Node* newNode;
    newNode=(struct Node*)malloc(sizeof(struct Node));

    newNode->data=data;
    newNode->next=head;

    return newNode;
}
struct Node* add_At_between_by_Node(struct Node* head,int data,struct Node* prev ){
    struct Node* newNode;
    newNode=(struct Node*)malloc(sizeof(struct Node));

    newNode->data=data;
    newNode->next=prev->next;
    prev->next=newNode;

    return head;
}
struct Node* add_At_between(struct Node* head,int data,int index ){
    struct Node* newNode;
    newNode=(struct Node*)malloc(sizeof(struct Node));
    struct Node* p=head;

    int i=0;
    while(i!=index-1){
        p=p->next;       //update head by head->next_ _ _ _head->next=first_ _ _first->next=second_ _ _-----
        i++;
    }
    newNode->data=data;
    newNode->next=head->next;
    p->next=newNode;

    return head;
}
struct Node* add_At_Last(struct Node* head,int data){
    struct Node* newNode;
    newNode=(struct Node*)malloc(sizeof(struct Node));
    struct Node* p=head;

    while(p->next!=NULL){
        p=p->next;
    }
    newNode->data=data;
    newNode->next=NULL;
    p->next=newNode;

    return head;
    
}
int main(){
    struct Node* head;
    struct Node* second;
    struct Node* third;

    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));

    head->data=7;
    head->next=second;

    second->data=10;
    second->next=third;

    third->data=21;
    third->next=NULL;

    // printNode(head);

    // head=add_At_start(head,5,);
    // printNode(head);

    head=add_At_between(head,9,1);
    printNode(head);

    // head=add_At_Last(head,24);
    // printNode(head);

    // add_At_between_by_Node(head,15,second);
    // printNode(head);

}