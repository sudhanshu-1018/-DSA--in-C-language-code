#include<stdio.h>

void name(char array[]);

int main(){
    char firstname[]="sudhanshu kumar ";
    char lastname[]="singh";
    name(firstname);
    name(lastname);

    return 0;
}
void name(char array[]){
    for (char i = 0; array[i]!='\0'; i++)
    {
       printf("%c",array[i]);
    }
    
}