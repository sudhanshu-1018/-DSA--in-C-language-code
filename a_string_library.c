#include<stdio.h>
#include<string.h>

int main(){
    char name[]="sudhanshu";
    printf("your name lenth is %d\n",strlen(name));

    char friend[]="raushan";
    int lenth=strlen(friend);
    printf("friend name lenth is %d\n",lenth);
    
    printf("%d\n",strcmp(name,friend));
    strcpy(name,friend);
    strcat(name,friend);
   
    puts(name);
    
    return 0;
}