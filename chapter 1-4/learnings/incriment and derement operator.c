#include <stdio.h>
int main(){

    int i = 1 ;
    printf("1st value of i ->%d \n",i++);
    printf("2nd value of i ->%d \n",i);
    // what this will do is frist print i then on the next print it update the value of i

    printf("------------------ \n");

    int a = 1;
    printf("1st value of a ->%d \n", a);
    printf("2nd value of a ->%d \n", ++a);
    // when you use the pre-increment operator befor a variable the before print the value it increase it
    
        printf("------------------ \n");
    
    // same as it is can be said for decriment operator ""--i"

    int b = 2 ;
    printf("1st value of b ->%d \n",b--);
    printf("2nd value of b ->%d \n",b);
    // what this will do is frist print i then on the next print it update the value of i
    
    printf("------------------ \n");
    
    int c = 2;
    printf("1st value of c ->%d \n", c);
    printf("2nd value of c ->%d \n", --c);
    // when you use the pre-decriment operator befor a variable the before print the value it increase it



    return 0;
}
