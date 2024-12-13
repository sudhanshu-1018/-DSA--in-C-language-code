#include<stdio.h>

int main(){
    FILE *fptr;
    fptr=fopen("test.txt","w");
    

    fprintf(fptr,"%c",'r');
    fprintf(fptr,"%c",'i');
    fprintf(fptr,"%c",'n');
    fprintf(fptr,"%c",'s');
    fprintf(fptr,"%c",'h');
    fprintf(fptr,"%c",'u');
    fprintf(fptr,"%c",'k');
    fprintf(fptr,"%c",'u');

    fprintf(fptr,"%c",'s');
    fprintf(fptr,"%c",'u');
    fprintf(fptr,"%c",'d');
    fprintf(fptr,"%c",'h');
    fprintf(fptr,"%c",'a');
    fprintf(fptr,"%c",'n');
    fprintf(fptr,"%c",'s');
    fprintf(fptr,"%c",'h');
    fprintf(fptr,"%c",'u');


    fclose(fptr);
}