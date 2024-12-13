#include<stdio.h>
int avg();
struct student{
    char name[50];
    int marks[50];
};
int main(){
    struct student s1;
    // int n=s1.marks;
    int a=0;
    int avg;
    
    for(int i=0;i<5;i++){
    printf("Enter the marks:");
    scanf("%d",&s1.marks[i]);

    a=a+s1.marks[i];
    }
    avg=a/5;
    printf("%d",avg);
    return 0;
}