#include<stdio.h>
int main(){

    int i = 1;
    while(i<=5){
        printf("hello world \n");
        i++;
    }
    // in while loop logic is the same as for loop
    // there no place in side while loop so you have declare you variable before the loop starts
    /* syntax will be :- while (condition){
                            Do Somthing}
                            updatetion
    */


    int i = 1;
    while(i<=5){
        printf("%d\n",i);
        i++;
    }

    return 0;
}