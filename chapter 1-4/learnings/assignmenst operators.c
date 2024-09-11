#include <stdio.h>
#include<math.h>
int main(){


    int a = 2;
    int b = 3;

    a=a+b; //(a=5)

   

    a*=b;

    printf("%d \n",a);

    int s=3;
    int g=1;

    s+=g;
    printf("%d\n", s);

    // this can be also wrttien as a+=b (a = a+b)

    /*
        +=
        -=
        *=
        /=
        these can replace with normal oprators when a single int is used in one line more than once
    */


    return 0;
}