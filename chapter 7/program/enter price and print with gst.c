#include<stdio.h>
#include<math.h>

void gst(float *n);

int main(){
    float price[3];
    printf("enter rate of 1st item : ");
    scanf("%f",&price[0]);

    printf("enter rate of 2nd item : ");
    scanf("%f",&price[1]);

    printf("enter rate of 3rd item : ");
    scanf("%f",&price[2]);

    gst(&price[0]);
    gst(&price[1]);
    gst(&price[2]);


    printf("the final price of 1st item is %0.2f\n",price[0]);
    printf("the final price of 2nd item is %0.2f\n",price[1]);
    printf("the final price of 3rd item is %0.2f\n",price[2]);

    return 0;
}
void gst(float *n){
    *n =  ((0.18) * (*n)) + *n;
}