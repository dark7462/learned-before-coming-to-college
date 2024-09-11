#include<stdio.h>
#include<math.h>

// float volume(float pi,float r,float h);//pi r sqr h

int main(){

    float pi,r,h;
    pi = 3.14;
    printf("enter the value of radius->");
    scanf("%f",&r);
    printf("enter the value of hight->");
    scanf("%f",&h);
    float vol;
    vol=pi*r*r*h;
    printf("the volume of the cylinder is->%2.0f",vol);

    // volume(pi,r,h);
    return 0;
}
// float volume(float pi,float r,float h){
//     float vol;
//     pi = 3.14;
//     vol=pi*r*r*h;
//     printf("the volume of the cylinder is->%f",vol);
//     return vol;
// }