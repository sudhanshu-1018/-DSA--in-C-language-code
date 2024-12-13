#include<stdio.h>
#include<string.h>

struct student{
    char name[100];
    int roll;
    float cgpa;
};

int main(){
    struct student s1;
    s1.roll=126;
    s1.cgpa=7.6;
    strcpy(s1.name,"sudhanshu kumar singh");

    printf("name- %s\n",s1.name);
    printf("roll- %d\n",s1.roll);
    printf("cgpa- %f",s1.cgpa);

    return 0;

}