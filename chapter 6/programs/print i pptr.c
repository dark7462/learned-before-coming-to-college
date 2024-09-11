#include <stdio.h>
#include<math.h>
int main(){

    //print the value of 'i' from its pointer to pointer

    int i = 5;
    int *ptr = &i;
    int **pptr = &ptr;

    printf("i from pointer to pointer is = %d\n",**pptr);

    return 0;
}