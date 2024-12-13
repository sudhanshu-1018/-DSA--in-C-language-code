#include<stdio.h>

int main(){
    int x,y,z;
    printf("Enter the three number that you want to find average: ");
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&z);

    printf("the average of given number is: %d",(x+y+z)/3);
    return 0;
}