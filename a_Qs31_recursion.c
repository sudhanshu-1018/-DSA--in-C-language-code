#include<stdio.h>
 void hw(int count);

 int main(){
    hw(10);
    return 0;
 }

 void hw(int count){
    if(count==0){
        return;
    }
    printf("Hello world!\n");
    hw(count-1);
 }