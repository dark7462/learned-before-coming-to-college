#include <stdio.h>
#include<math.h>
int main(){

// Q1 - it it's sunday and it's showing then print true
    int issunday=1;
    int isshowing=0;
    
    if(issunday && isshowing){
        printf("the statement is true\n");
    }
    else{
        printf("the statement is false\n");
    }



// Q2 - it it's monday and it's raining then print true
    int ismonday=1;
    int israining=1;
    
    if(ismonday || israining){
        printf("the statement is true\n");
    }
    else{
        printf("the statement is false\n");
    }


// Q3 -  if a number is greater than 9 and less than 100 then print true
    int x;
    printf("enter any number to check that it's greater than 9 and less than 100->");
    scanf("%d",&x);

    if(100>x && x>9){
        printf("the statement is true\n");
    }
    else{
        printf("the statement is false\n");
    }

    return 0;
}