#include<stdio.h>

void slice(char str[],int n,int m);
int main(){
    char str[]="helloworld";
    slice(str,3,6);

    return 0;
}
void slice(char str[],int n,int m){
    char newstr[100];
    int j=0;
    for (int i = n; i <= m; i++,j++)
    {
        newstr[j]=str[i];    //copying each character to newstr[]
    }
    newstr[j]='\0';   //a null terminator ('\0') is added at the end of newstr[] to mark the end of the string.
                      //after come out from loop at the end it added ('\0');
    puts(newstr);
    
}