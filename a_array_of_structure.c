#include<stdio.h>
#include<string.h>

struct student{
    int roll;
    float cgpa;
    char name[100];
};
int main(){
    struct student ECE[100];
    struct student COE[100];
    struct student IT[100];

    IT[0].roll=140;
    IT[0].cgpa=9.8;
    strcpy(IT[0].name,"sudhanshu kumar singh");

    IT[1].cgpa=5.8;
    IT[1].roll=25;
    strcpy(IT[1].name,"rohan mishra");

    ECE[0].cgpa=8.9;
    ECE[0].roll=45;
    strcpy(ECE[0].name,"adarsh kumar");

    printf("%s\n",IT[0].name);
    printf("%d\n",IT[0].roll);
    printf("%f\n\n",IT[0].cgpa);

    printf("%s\n",IT[1].name);
    printf("%d\n",IT[1].roll);
    printf("%f\n\n",IT[1].cgpa);

    printf("%s\n",ECE[0].name);
    printf("%d\n",ECE[0].roll);
    printf("%f\n",ECE[0].cgpa);

    return 0;
}