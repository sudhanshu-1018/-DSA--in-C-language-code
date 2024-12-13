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
void push(struct stack* s,char data){
    s->top++;
    s->arr[s->top]=data;
}
void pop(struct stack* s){
    s->top--;
}
int ParenthesisCheck(char* exp){

    struct stack* s;
    s->size=20;
    s->top=-1;
    s->arr=(char*)malloc(s->size*sizeof(char));

    for (int i = 0; exp[i] != '\0'; i++)
    {
        if(exp[i]=='('){
            push(s,'(');
        }
        else if(exp[i]==')'){
            if(isEmpty(s)){
                return 0;
            }
            pop(s);
        }
    }
    if(isEmpty(s)){
        return 1;
    }else{
        return 0;
    }
    
}
int main(){
    char* exp="8*(4*3))";

    if(ParenthesisCheck(exp)){
        printf("the paranthesis is matching");
    }else{
        printf("the paranthesis is not matching");
    }
}