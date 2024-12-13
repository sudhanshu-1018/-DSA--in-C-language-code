#include<stdio.h>
int lenth(char name[]);
int main(){
    char name[20];
    printf("enter your name:-");
    fgets(name,20,stdin);
    // puts(name);
    printf("%d",lenth(name));
    
    return 0;
}
int lenth(char name[]){
    int count=0;
    for (char i = 0; name[i] !='\0'; i++)
    {
        count++;
        
    }
    return count-1;
    
}
