#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
    struct Node* prev;
};
void printNode(struct Node* ptr){
    while(ptr!=NULL){
        printf("%d,",ptr->data);
        ptr=ptr->next;
    }
        printf("\n");
}
struct Node* Add_At_start(struct Node* head,int data){
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));

    newNode->data=data;
    newNode->next=head;
    head->prev=newNode;
    newNode->prev=NULL;
    head=newNode;

    return head;
}
struct Node* Add_In_Doubly(struct Node* head,int data,int key){
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
    struct Node* p=head;
    int i=0;
    while (i!=key-1)
    {
        p=p->next;
        i++;
    }
    newNode->data=data;
    newNode->prev=p;
    newNode->next=p->next;
    p->next->prev=newNode;
    p->next=newNode;

    return head;  
}
struct Node* Delete_At_between(struct Node* head,int index){
    struct Node* p=head;
    int i=0;
    while(i!=index-1){
        p=p->next;
        i++;
    }
    struct Node* q=p->next->next;
    p->next=q;
    q->prev=p;

    return head;

}
struct Node* Add_At_Last(struct Node* head,int data){
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
    while(head->next!=NULL){
        head=head->next;
    }
    newNode->data=data;
    head->next=newNode;
    newNode->next=NULL;
    newNode->prev=head;

    return head;
}
int main(){
    struct Node* head;
    struct Node* second;
    struct Node* third;
    struct Node* four;
    struct Node* five;

    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    four=(struct Node*)malloc(sizeof(struct Node));
    five=(struct Node*)malloc(sizeof(struct Node));

    head->data=7;
    head->next=second;
    head->prev=NULL;

    second->data=10;
    second->next=third;
    second->prev=head;

    third->data=21;
    third->next=four;
    third->prev=second;

    four->data=25;
    four->next=five;
    four->prev=third;

    five->data=32;
    five->next=NULL;
    five->prev=four;


    // Add_In_Doubly(head,15,3);
    // printNode(head);

    // printf("%d\n",four->prev->data);
    // printf("%d\n",four->next->data);

    // head=Add_At_start(head,3);
    // printNode(head);

    // Add_At_Last(head,38);
    // printNode(head);

    Delete_At_between(head,2);
    printNode(head);

    free(head);
    free(second);
    free(third);
    free(four);

    return 0;
}