#include<stdio.h>

struct student
{
    int roll;
    float cgpa;
    char name[100];
};

int main(){
    struct student s1;
    struct student *ptr;
    ptr=&s1;
    s1.roll=100;

    printf("%d\n",(*ptr).roll);
}
