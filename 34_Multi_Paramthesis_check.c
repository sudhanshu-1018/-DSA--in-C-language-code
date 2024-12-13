#include<stdio.h>
#include<stdlib.h>

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
int match(char a,char b){
    if(a=='(' && b==')'){
        return 1;
    }
    if(a=='{' && b=='}'){
        return 1;
    }
    if(a=='[' && b==']'){
        return 1;
    }

    return 0;
}
int ParenthesisCheck(char* exp){

    struct stack* s;
    s->size=20;
    s->top=-1;
    s->arr=(char*)malloc(s->size*sizeof(char));

    for (int i = 0; exp[i] != '\0'; i++)
    {
        if(exp[i]=='(' || exp[i]=='{' || exp[i]=='['){
            push(s,exp[i]);    
        }
        else if(exp[i]==')'|| exp[i]=='}' || exp[i]==']'){
            if(isEmpty(s)){
                return 0;
            }
            char popedItem=pop(s);
            if (!match(popedItem,exp[i]))      
            {
                return 0;
            }
            
        }
    }
    if(isEmpty(s)){
        return 1;
    }else{
        return 0;
    }
// free(s->arr);
// free(s);
    
}
int main(){
    char* exp="8*(87)+{4+5-87[8+9])";

    if(ParenthesisCheck(exp)){
        printf("the paranthesis is matching");
    }else{
        printf("the paranthesis is not matching");
    }
    
}