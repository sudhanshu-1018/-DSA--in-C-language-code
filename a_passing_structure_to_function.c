#include<stdio.h>
#include<string.h>


struct student{
    int roll;
    float cgpa;
    char name[100];
};
void printinfo(struct student s1);

int main(){
    struct student s1;
    printinfo(s1);
}
void printinfo(struct student s1){
    s1.roll=100;
    s1.cgpa=4.8;
    strcpy(s1.name,"sudhanshu");

    printf("%d\n%f\n%s",s1.roll,s1.cgpa,s1.name);
}
