#include<stdio.h>

int main(){
  int n=15;
  for (int i = 2; i <n; i++)
  {
    // printf("%d",n/i);

    if ((n%i)==0)
    {
      printf("not prime\n");
      break;
    }
    
  }
  return 0;
  
}