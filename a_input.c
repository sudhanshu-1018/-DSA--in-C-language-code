#include<stdio.h>

int main(){
    int a,b;
    float r;
    printf("enter the first number: ");
    scanf("%d",&a);

    printf("enter the second number: ");
    scanf("%d",&b);

    printf("enter the radius of circle: ");
    scanf("%f",&r);

    int product=a*b;
    int square=a*a;
    float circle=3.14*r*r;
    printf("the addition of 1st and 2nd no. is: %d\n",a+b);
    printf("the product of 1st and 2nd no. is: %d\n",product);
    printf("the area of square of 1st no. is: %d\n",square);
    printf("the area of circle is: %f\n",circle);

    return 0;   
}