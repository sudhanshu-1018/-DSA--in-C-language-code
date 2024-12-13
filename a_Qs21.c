#include<stdio.h>

int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
       
   
   

    for(int i=n-1;i>1;i--){
        n=n*i;

        // printf("%d\n",n);
    }
    printf("%d\n",n);
    

    return 0;
}