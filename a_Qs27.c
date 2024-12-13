#include<stdio.h>

void hello();
void bye();

int main(){
    hello();
    bye();
    return 0;
}

void hello(){
    printf("HELLO!\n");
}
void bye(){
    printf("GOOD BYE");
}