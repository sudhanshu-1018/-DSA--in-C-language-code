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
struct Node* deleteNode_between(struct Node* head,int index){
    int i=0;
    struct Node* p=head;
    while(i!=index-1){
        p=p->next;
        i++;
    }
    struct Node* q=p->next->next;
    free(p->next);
    p->next=q;
    return head;
}
struct Node* deletefirst(struct Node* head){
    struct Node* ptr=head;
    head=head->next;
    free(ptr);
    return head;
}
struct Node* deleteLast(struct Node* head){
    struct Node* ptr=head;
    while(ptr->next->next!=NULL){
        ptr=ptr->next;
    }
    ptr->next=NULL;
    free(ptr->next);
    return head;
}
struct Node* deleteNode_using_Node(struct Node* head,struct Node* index){
    
    while(head->next!=index){
        head=head->next;
    }
    head->next=index->next;
    return head;
}
struct Node* delete_by_value(struct Node* head,int value){
    struct Node* ptr=head;
    if(head->data==value){
        head=head->next;
        free(ptr);
        return head;
    }
    struct Node* p=head;
    while(p->next->data!=value){
        p=p->next;
    }
    struct Node* q=p->next->next;
    free(p->next);
    p->next=q;
    return head;
}
int main(){
    struct Node* head;
    struct Node* first;
    struct Node* second;
    struct Node* third;

    head=(struct Node*)malloc(sizeof(struct Node));
    first=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));

    head->data=2;
    head->next=first;

    first->data=7;
    first->next=second;

    second->data=13;
    second->next=third;

    third->data=18;
    third->next=NULL;

    // printNode(head);

    // deleteNode_using_Node(head,second);
    // printNode(head);

    // deleteNode_between(head,2);
    // printNode(head);

    // deleteLast(head);
    // printNode(head);

    head=delete_by_value(head,13);
    printNode(head);

    // head=deletefirst(head);
    // printNode(head);
}