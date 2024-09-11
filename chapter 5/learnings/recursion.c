#include <stdio.h>
#include<math.h>

//function declareation
void hello(int count);

int main(){

    int count;
    printf("enter the number of time you want to print hello world->");
    scanf("%d",&count);

    hello(count); //function call

    return 0;
}

//recursive function

void hello(int count){
    if(count == 0){             //logic - recursion basically means that a function will call itself multipal times
        return;                 //so we have taken a int count to print hello world multiple times
    }                           //loop will run till count == 0 
    printf("hello world\n");
    hello(count-1);
   
}