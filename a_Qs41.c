#include<stdio.h>

int main(){
    float price[3]={};
    float gst=0.18;
    

    printf("PRICE OF FIRST ITEM-");
    scanf("%f",&price[0]);

    printf("PRICE OF second ITEM-");
    scanf("%f",&price[1]);

    printf("PRICE OF third ITEM-");
    scanf("%f",&price[2]);


    float sum=(price[0]+price[1]+price[2]);
    float sumgst=(gst*sum);

    
    printf("gst -18\n");
    printf("%f\n",gst);
    printf("price without gst-%f\n",sum);
    printf("your gst price is-%f\n",sumgst);
    printf("price after adding gst is-%f\n",sum+sumgst);

    return 0;
}