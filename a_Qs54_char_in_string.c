#include<stdio.h>
#include<string.h>

void check(char str[]);
int main(){
    char str[]="helloworld";
    check(str);
    return 0;
}
void check(char str[]){
     char word[100];
     printf("enter the word:-");
     scanf("%s",word);
     
     for (int i = 0; str[i] !='\0'; i++)
     {
        if (strstr(str, word) != NULL) {                    //string matching 
               printf("Yes, the word is present.\n");
        }
        else {
        printf("No, the word is not present.\n");
        }
        break;      
     }
     
}

