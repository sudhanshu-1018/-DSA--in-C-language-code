#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};
void printNode(struct Node* head){
    struct Node* ptr=head;
    do{
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }while(ptr!=head);
}
struct Node* Add_At_circularPath(struct Node* head,int data){
    struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
    struct Node* q=head;
    while(q->next!=head){
        q=q->next;
    }
    ptr->data=data;
    q->next=ptr;
    ptr->next=head;
    head=ptr;

    return head;
}
int main(){
    struct Node* head;
    struct Node* second;
    struct Node* third;
    struct Node* four;

    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    four=(struct Node*)malloc(sizeof(struct Node));

    head->data=7;
    head->next=second;

    second->data=10;
    second->next=third;

    third->data=21;
    third->next=four;

    four->data=25;
    four->next=head;

    // printNode(head);

    head=Add_At_circularPath(head,30);
    head=Add_At_circularPath(head,35);
    printNode(head);

    free(head);
    free(second);
    free(third);
    free(four);

}