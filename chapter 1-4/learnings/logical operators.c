#include <stdio.h>
#include<math.h>
int main(){

    if(2<4 && 5>2){
        printf("the statement is true\n");
    }
    else{
        printf("the statement is false\n");
    }


    if(1==2 || 2>1){
        printf("the statement is true\n");
    }
    else{
        printf("the statement is false\n");
    }


    if(!(2<4 && 5>2)){
        printf("the statement is true\n");
    }
    else{
        printf("the statement is false\n");
    }
    


    return 0;
}

/*
    -AND "&&" this means both lhs rhs are ture 
    -OR  "||" this means one of them is true
    -NOT "!"  this means to reciprocate the output
    -1 means true
    -0 means false
*/