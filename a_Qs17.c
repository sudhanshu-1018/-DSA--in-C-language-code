#include<stdio.h>

int main(){
    int n;
 
   do
   {
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("%d\n",n);
    
    if (n%2!=0)
    {
        printf("odd\n");
        break;
    }  
   } while (1);

   printf("thankyou");
   
}