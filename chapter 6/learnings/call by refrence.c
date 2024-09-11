#include <stdio.h>
#include<math.h>

void sq(int* n);

int main(){
    int number = 4;
    sq(&number);
    printf("the number is = %d\n",number);

    //here the n and the number variable have the same value because 
    //function created a copy to work with but
    //the value is stored in the address of number 
    //so the value of number is also changed

    //this is called call by refrence


    return 0;
}

void sq(int* n){
    (*n)*=(*n);
    printf("square = %d\n",*n);
}