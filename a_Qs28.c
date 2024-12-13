#include<stdio.h>
void ind();
void jap();

int main(){
    char k;
    char i=k;
    char j=k;
    printf("Enter i for indian And j for japan: ");
    scanf("%c",&k);

    if(k=='i'){
        ind();
    }
    else if(k=='j'){
        jap();
    }
    else{
        printf("invalid input!");
    }
    return 0;
}

void ind(){
    printf("NAMASTE");
}
void jap(){
    printf("HAJIMEMASTE");
}