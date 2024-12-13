#include<stdio.h>
int per();
int main(){
    per();
    return 0;
}
int per(){
    int math;
    int science;
    int sanskrit;
    char c='%';

    printf("Enter the number obtained in maths: ");
    scanf("%d",&math);
    printf("Enter the number obtained in science: ");
    scanf("%d",&science);
    printf("Enter the number obtained in sanskrit: ");
    scanf("%d",&sanskrit);

    printf("your percentage is : %d",(math+science+sanskrit)/3);
    printf(" %c",c);
}