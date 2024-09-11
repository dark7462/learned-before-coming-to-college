#include<stdio.h>
#include<math.h>

void gst(float value);

int main(){

    float value;
    printf("enter tha value which you hav purchased the item->");
    scanf("%f",&value);

    printf("the initial value is->%f",value);

    gst(value);

    return 0;
}

void gst(float value){
    value += (0.18*value);
    printf("final price after including gst is : %f",value);
}