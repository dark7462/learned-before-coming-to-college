#include <stdio.h>
int main(){

    /*
        order is as follows:-   
        !
        
        ()

        * , / , %

        + , -

        < , <= , =>,  >

        ==, !=

        &&

        ||

        =
    */

   // if operator of same precedence are in a single line of expression then calculate the expression left to right

   int a = 4 * 3 / 6 * 2;
   printf("%d \n",a);
   // it should be solved like (4*3)/6*2 = (12/6)*2 = (2*2) = 4

   int b = 5 * (2 / 2) * 3;
   printf("%d \n",b);
   // here the brakets are to solved frist then the left to right rule will be applied

    return 0;
}