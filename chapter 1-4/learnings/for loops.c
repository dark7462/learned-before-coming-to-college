/*
    to use for loop the syntax is
        for (initialisation;condition;updation){
            anything like printf command or your wish
            }
*/
#include <stdio.h>
int main(){

    //iterator or counter can you veriable you can say to "i" which we use
    // iterator can also be a float value

    for( int i = 1; i <= 5; i++)
        {
            printf("hello MALKIN \n");
            printf("%d \n",i);
        }


    for( int i =10; i >= 1; i-- /* you can also write i = i-1 insted of i-- also known as decrement operator */){
        printf("%d \n", i);
    }
    // for the iter or conter variable you can chose any int value to begin with
    // for example you can create a loop from 0 too

    for ( int i = 0; i<=10; i++){
        printf("%d \n",i);
    }

    return 0;
}
