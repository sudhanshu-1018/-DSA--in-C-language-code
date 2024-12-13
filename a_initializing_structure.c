#include<stdio.h>
#include<string.h>

struct student{
    char name[100];
    int roll;
    float cgpa;   
};

int main(){
   
    struct student s1={"sudhanshu",96,7.9};
    struct student s2={"rohan",45,8.2};
    struct student s3={"sohan",85,5.2};

    printf("%d\n%d\n",s1.roll,s2.roll);
    return 0;
}