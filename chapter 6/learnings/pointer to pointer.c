#include <stdio.h>
#include<math.h>

int main(){

    //to store a pointer to pointer
    /*
        int **pptr;
        char **pptr;
        float **pptr
    */


    int age=22;
    int *ptr=&age;
    int **pptr=&ptr;
    return 0;
}