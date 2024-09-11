#include<stdio.h>
int main(){


   // this is to print all odd numbers from 5 to 50
    
    for(int i=5; i<=50; i++){
         if( i % 2 == 0){
            continue; //skip the condition
         }
         printf("%d\n",i);
    }
    

    // either the skipable condition is remainder = 0 or remainder is not equal to 1
    // both methods are correct



    for(int i=5; i<=50; i++){
         if( i % 2 != 1){
            continue; //skip the condition
         }
         printf("%d\n",i);
    }   

    return 0;
}