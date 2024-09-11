#include <stdio.h>
#include<math.h>

int main(){

    int age = 22;
    printf("The value of our orignal variable is->%d\n",age);

    int*ptr=&age; // this star here is called value at adress operator
    //now with in use of that * we have assigen a address to age
    // * = value at adress
    // & = address of value / variable

    int _age=*ptr;// by this we created a variable and transfered the value which was stored in the address ptr
    // so _age's value was taken from the address ptr and in ptr the value stored was of age 
    // which is 22
    //so _age's value will be 22 

    printf("now _age is ->%d\n",_age);

    printf("\n");

    //Declaring Pointer

    //int *ptr;     //for int value
    //char *ptr;    //for char value
    //float *ptr;   //for float value

    //Format Specifier

    printf("the address of age is ->%p\n",&age);
    //%p is used for printing the pointer address values
    printf("the unsiged int value of the address of age is-> %u\n",&age);
    //here %u is used for printing the unassiegd int value of the address of variable age
    printf("the unassiged value of ptr->%u\n",ptr);
    //here the unassinged int address value of age which is stored in the address of ptr 
    //so the unassinged int address value of age and ptr will be same
    printf("the address of ptr is->%u\n",&ptr);
    //ptr must be stored in a address too so the address of the pointer ptr can be printed vai this code

    printf("\n");
    //Values

    printf("value of age variable is->%d\n",age);
    //value of age
    printf("value at address of ptr is->%d\n",*ptr);
    //value at address of ptr
    printf("value of age variable is->%d\n",*(&age));
    //value at adress of value address

    //all output will be same because even if we are using diff syntx but we are ultimatly targeting the same address


    return 0;
}