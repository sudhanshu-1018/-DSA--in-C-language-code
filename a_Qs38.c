// #include<stdio.h>
// int swap(int x,int y);
// int main(){
//     int a=4;
//     int b=5;
//     swap(a,b);
//     printf("original %d\n",a);
//     printf("original %d\n",b);
//     return 0;
// }
// int swap(int a,int b){
//     int t;
//     t=a;
//     a=b;
//     b=t;
//     printf("numer %d\n",a);
//     printf("numer %d\n",b);
// }


#include<stdio.h>
int swap(int* x,int* y);
int main(){
    int a=4;
    int b=5;
    swap(a,b);
    printf("original %u\n",a);
    printf("original %u\n",b);
    return 0;
}
int swap(int* a,int* b){
    int t;
    int t=&a;
    int *a=&b;
    int *b=t;
    printf("numer %u\n",*a);
    printf("numer %u\n",*b);
}