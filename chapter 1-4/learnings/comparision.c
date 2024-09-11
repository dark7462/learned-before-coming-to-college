#include <stdio.h>
int main(){

    int num1,num2;

    printf("enter the first number to be compared=->");
    scanf("%d",&num1);

    printf("enter the secound number to be compared=->");
    scanf("%d",&num2);

    if(num1>num2){
        printf("%d is greater than %d\n",num1,num2);
    }

    if(num1<num2){
        printf("%d is smaller than %d\n",num1,num2);
    }

    if(num1==num2){
        printf("%d is equal to %d\n",num1,num2);
    }

    if(num1!=num2){
        printf("%d is not equal to %d\n",num1,num2);
    }

    return 0;
}

/*
    -if oprator is when used alone it's called comparison oprator
    -in programming "=" this means to assing values "==" is means to compare
    "===" this means to compare values and data types
    "!=" this means not equal to
    -with any funtion if you have to assign a task then,
    after funtion used use"{}"
    example -if(**_0) 
        {
            here the print or the conditional command will be written
        }
        
*/