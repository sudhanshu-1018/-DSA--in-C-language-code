#include<stdio.h>
int fibbo(int n);
int main(){
    printf("your series is : %d",fibbo(9));
    return 0;
}
int fibbo(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    // int y=(fibbo(n));
    int y=fibbo(n-2)+fibbo(n-1);
    return y;   
}