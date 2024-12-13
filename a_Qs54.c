#include<stdio.h>


void check(char str[],char word);
int main(){
    char str[]="helloworld";
    char word[100];
     
    check(str,'w');
    return 0;
}
void check(char str[],char word){
     
     for (int i = 0; str[i] !='\0'; i++)
     { 
        if (str[i]==word)
        {
           printf("present here");
           return;
        }       
     }
     printf("not present here");
     
}

