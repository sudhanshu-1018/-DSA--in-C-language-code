#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct stack{
    int size;
    int top;
    char* arr;
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
int stackTop(struct stack* s){
    return s->arr[s->top];
}
void push(struct stack* s,char data){
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
int operator(char ch){
    if(ch=='+'||ch=='-'|| ch=='/'||ch=='*'){
        return 1;                               //if return 1 or true come out
    }else{
        return 0;
    }
}
int precedence(char ch){
    if(ch=='+' || ch== '-'){
        return 2;
    }
    if(ch=='/' ||ch== '*'){
        return 3;
    }
    return 0;
}
char* infixTo_post(char* infix){
    struct stack* s=(struct stack*)malloc(sizeof(struct stack));
    s->size=20;
    s->top=-1;
    s->arr=(char*)malloc(s->size*sizeof(char));

    char* postfix=(char*)malloc((strlen(infix)+1)*sizeof(char));

    int i=0;
    int j=0;

    while(infix[i]!='\0'){
        if(!operator(infix[i])){
            postfix[j]=infix[i];
            j++;
            i++;
        }else{
            if(precedence(infix[i])>=precedence(stackTop(s))){
                push(s,infix[i]);
                i++;
            }else{
                postfix[j]=pop(s);
                j++;
            }
        }
    }
    while(!isEmpty(s)){
        postfix[j]=pop(s);
        j++;
    }
    postfix[j]='\0';
    free(s->arr);
    free(s);
    return postfix;
}
int main(){
    char* infix="a-b*d+c";
    char* postfix=infixTo_post(infix);
    printf("%s\n",postfix);

    free(postfix);
    return 0;
}