#include<stdio.h>
#include<math.h>

//function decration / prototype
void printhello();
void printbye();

int main(){

    printhello(); // function call 
    printbye();

    return 0;

}

//function defination
void printhello(){
    printf("hello world\n");
}
void printbye(){
    printf("good bye");
}