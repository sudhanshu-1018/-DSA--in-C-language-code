#include<stdio.h>

int main(){
//     char str[20];
//    scanf("%[^\n]%*c", str);
//    printf("%s", str);

     
    char ch;
    char str[20];
    char sen[50];

    scanf("%c\n", &ch);
    scanf("%[^\n]%*c", sen); 
    scanf("%[^\n]%*c", str);
      
    
    printf("%c\n", ch);
    printf("%s\n", sen);
    printf("%s", str);
}