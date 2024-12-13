#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    int* arr;
};
int isEmpty(struct stack* s){
    if(s->top==-1){
        return 1;
    }else{
        return 0;
    }
}
int isFull(struct stack* s){
    if(s->top==s->size-1){
        return 1;
    }else{
        return 0;
    }
}
void push(struct stack* s,int data){ 
    if(isFull(s)){
        printf("Stack Overflow");
    }else{  
        s->top++;
        s->arr[s->top]=data;
    }
}
int pop(struct stack* s){ 
    if(isEmpty(s)){
        printf("Stack is EMPTY");
        return -1;
    }else{  
        int val=s->arr[s->top];
        s->top--;
        return val;
    }
}
int peek(struct stack* s,int i){
    int arrayInd=s->top-i+1;
    if(arrayInd<0){
        printf("Not a valid position for stack\n");
        return -1;
    }
    else{
        return s->arr[arrayInd];
    }
}
int stackTop(struct stack* s){
    return s->arr[s->top];
}

int stackBottom(struct stack* s){
    return s->arr[0];
}

int stack_i(struct stack* s,int i){
    return s->arr[i];
}
int main(){
    struct stack* s=(struct stack*)malloc(sizeof(struct stack));          //Here we allocate memory to stack
    s->size=20;
    s->top=-1;
    s->arr=(int*)malloc(s->size*sizeof(int));


    push(s,10);
    push(s,12);
    push(s,15);
    push(s,21);
    printf("poped %d Array\n",pop(s));

    for(int i=1;i<=s->top+1;i++){
        printf("%d\n",peek(s,i));
    }

    // while(s->top!=-1){
    //     printf("%d\n",stackTop(s));
    //     s->top--;
    // }

    // int i=0;
    // while(i<=s->top){
    //     printf("%d\n",stackBottom(s,i));
    //     i++;
    // }


    free(s->arr);
    free(s);

    return 0;
}