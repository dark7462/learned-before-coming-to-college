#include<stdio.h>

int main(){

    char alphabet;
    printf("enter any alphabet to check it's capital or not->");
    scanf("%c", &alphabet);

    if (alphabet >='A' && alphabet <= 'Z'){

        printf("you have entered a capital alphabet \n");

    } else if (alphabet >='a' && alphabet <= 'z')
    {
        printf(" you have enter a small alphabet");

    } else{

        printf("not a valid input for this program \n");

    }

    /*
        logic behind this is in C every alphabet have ASCII value like 'a' have 95 'A' have 65
        so then we can use normal if else statement to find the given alphabet is capital or not 
    */

    return 0;
}