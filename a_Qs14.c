#include<stdio.h>

int main(){
     int n;
    printf("Enter the number: ");
    scanf("%d",&n);

    for(int i=0;i<=n;i=i+1){
        printf("%d\n",i);
    }
   
    return 0;
}