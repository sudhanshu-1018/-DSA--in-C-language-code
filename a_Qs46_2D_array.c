#include<stdio.h>
int tft(int tab[][10],int n,int m,int number);

int main(){
    int table[2][10];
    tft(table,0,10,2);
    tft(table,1,10,3);

    for (int i = 0; i < 10; i++)
    {
        printf("%d\t",table[0][i]);
    }
    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t",table[1][i]);
    }
    
    return 0;
}

int tft(int tab[][10],int n,int m,int number){
    for (int i = 0; i < m; i++)
    { 
        tab[n][i]=number*i;
    }
    
}