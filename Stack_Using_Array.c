#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    int *arr;
};
int isEmpty(struct stack s){
    if(s.top==-1){
        return 1;
    }
    return 0;
}
// int isFull(struct stack s){
//     if(s.top==s.size-1){
//         return 1;
//     }
//     return 0;
// }
int main(){
    struct stack s;    //In This we don't allocate memory to the stack because we dont store any data here
    s.size=20;
    s.top=-1;
    s.arr=(int*)malloc(s.size*sizeof(int));

    s.arr[0]=5;
    s.top++;

    printf("%d",isEmpty(s));
    return 0;
}