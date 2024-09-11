#include <stdio.h>
int main(){

    float radius;
    float pi = 3.14;

    printf("write the area of the cricle->");
    scanf("%f",&radius);

    printf("the area of the cricle is-> %f",pi * radius * radius);

    return 0;
}

/*
    since we are multipling radius woth a decimal so radius can't be int it have to be float.
    you can also do a single line code like 3.14 * radius * radius
    or do it simple way by declareing pi varible
*/