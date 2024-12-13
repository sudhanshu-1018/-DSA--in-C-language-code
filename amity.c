#include<stdio.h>

int main(){
    int n[10];
    int i,j;

    for(int i=0;i<10;i++){
        n[i]=i+100;                                  //n[i]=n[1],n[2],n[3],n[4]..........
        // printf("HELOO[%d]=%d\n",i,n[i]);
    }
    for (int j = 0; j < 10; j++)
    {
        printf("ELEMENT[%d]=%d\n",j,n[j]);           //n[j]=n[1],n[2],n[3],n[4]...........
                                                     //printing the value of n[1],n[2]......which is also same in n[i]=n[1],n[2].......
    }
   return 0;
}