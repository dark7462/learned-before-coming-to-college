#include<stdio.h>
#include<math.h>

int main(){

    int a;
    printf("enter any number to the programe->");
    scanf("%d",&a);

    if (a >= 0)
    {
        printf("the number is positive \n");
        if (a % 2 == 0)
        {
            printf("number is even \n");
        } else{
            printf("the number is odd \n");
        }
        
    } else {
        printf("the number is negetive \n");
    }

    /*
        when any if condition is written under a if condition then it's called a nested if condition
    */
    

    return 0;
}