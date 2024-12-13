#include<stdio.h>
#include<stdlib.h>

struct myArray{
    int total_size;
    int used_size;
    int *ptr;
};
void createArray(struct myArray *a,int tsize,int usize){
    // (*a).total_size=tsize;
    // (*a).used_size=usize;
    // (*a).ptr=(*int)malloc(tsize*sizeof(int));

    a->total_size=tsize;
    a->used_size=usize;
    a->ptr=(int *)malloc(tsize*sizeof(int));
}
void show(struct myArray *a){
    for(int i=0;i<a->used_size;i++){
        printf("%d\n",(a->ptr)[i]);
    }
}
void set(struct myArray *a){
    int n;
    for(int i=0;i<a->used_size;i++){
        printf("Enter youtr mark %d->",i);
        scanf("%d",&n);
        (a->ptr)[i]=n;
    }
}
//To avvoid memory leakage
void freeArray(struct myArray *a) {
    free(a->ptr);
    a->ptr = NULL; // Avoid dangling pointer
}

int main(){
    struct myArray marks;
    createArray(&marks,10,2);
    set(&marks);
    show(&marks);
    
    return 0;
}