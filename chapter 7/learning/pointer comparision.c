#include<stdio.h>
#include<math.h>

int main(){

    int age = 22;
    int _age = 23;
    int *ptr = &age;
    int *_ptr = &_age;

    printf("difference = %u\n",ptr - _ptr);
    _ptr = &age;//the unassigned integer value will not be compared and the diffrence will be printed
                //the normal int value will be minused
                //diffrence can be only done in same data type
    if(ptr == _ptr){
        printf("on comparing ptr and _ptr we got it true\n");
    }   //the values of to pointers *ptr *_ptr 
        //will be compared and return as true or false
    
    else{
        printf("false\n");
    }

    return 0;
}