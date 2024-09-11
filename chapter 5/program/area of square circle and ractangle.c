#include<stdio.h>
#include<math.h>

void areaofsquare(float side);
void areaofcircle(float radius);
void areaofreactangle(float len, float br);

int main(){

    float side, radius, len, br;
    printf("enter the side of the square->");
    scanf("%f",&side);

    printf("enter the radius of the circle->");
    scanf("%f",&radius);

    printf("enter the length of the rectangle->");
    scanf("%f",&len);

    printf("enter the breath of the rectangle->");
    scanf("%f",&br);

    areaofsquare(side);
    areaofcircle(radius);
    areaofreactangle(len,br);

    return 0;
}
void areaofsquare(float side){
    float a = side*side;
    printf("the area of the square is -> %.1f\n",a);
}

void areaofcircle(float radius){
    float b = 3.14*radius*radius;
    printf("the area of the circle is ->%.1f\n",b);
}

void areaofreactangle(float len,float br){
    float c = len*br;
    printf("the area of the reactangle is-> %.1f\n",c);
}