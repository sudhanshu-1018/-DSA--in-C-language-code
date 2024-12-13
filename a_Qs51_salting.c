#include<stdio.h>
#include<string.h>

void salting(char password[]);
int main(){

    // char str[18];
    // char salt[]="123";
    // printf("enter the password you eant to set:-");
    // scanf("%s",&str);

    // strcat(str,salt);
    // puts(str);

    char password[50];
    printf("enter the password you eant to set:-");
    scanf("%s",password);
    salting(password);

    
    return 0;
}
void salting(char password[]){
    char salt[]="123";
    char newpass[100];
    strcpy(newpass,password);
    strcat(newpass,salt);

    puts(newpass);

}
