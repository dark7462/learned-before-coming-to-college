#include<stdio.h>
#include<math.h>

void gst(float value);

int main(){

    float value;
    float gold;
    gold=3663;
    printf("enter tha value which you hav purchased the item->");
    scanf("%f",&value);

    printf("the initial value is->%f",value);

    gst(value);
    gst(gold);


    return 0;
}

void gst(float value){
    value += (0.18*value);
    printf("final price after including gst is : %0.2f",value);
}