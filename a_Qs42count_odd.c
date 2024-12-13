#include<stdio.h>

int odd(int num[],int n);

int main(){
    int num[]={1,2,3,4,5};
    printf("%d",odd(num,5));
   

    return 0;
}

int odd(int num[],int n){
    int count=0;
    for (int i = 0; i <= 5; i++)
    {
        if (num[i]%2==0)
        {
            count++;
                       
        }
    }
    return count;

}