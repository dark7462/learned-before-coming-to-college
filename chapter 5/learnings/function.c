#include<stdio.h>
#include<math.h>

//function decration / prototype
void printhello();

int main(){

    printhello(); // function call 
    printhello();

    return 0;

}

//function defination
void printhello(){
    printf("hello world\n");
}