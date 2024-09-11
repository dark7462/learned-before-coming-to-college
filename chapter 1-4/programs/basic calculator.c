#include <stdio.h>
#include <math.h>
int main(){

    int num1,num2;

    printf("enter the frist number->");
    scanf("%d", &num1);

    printf("enter the second number->");
    scanf("%d", &num2);

    int add = num1 + num2;
    int diff = num1 - num2;
    int multi = num1 * num2;
    int qoutient = num1 / num2;
    int mod = num1 % num2;
    
    printf("sum of both is %d \n", add);
    printf("diffrance of both is %d \n", diff);
    printf("product of both is %d \n", multi);
    printf("qoutient of both is %d \n", qoutient);
    printf("remainder of both is %d \n", mod);


    return 0;
}

/*
    -use scanf to take any value as input
    -print context of your convinice and take input
    -some basic single step oprations can be done without using another int value
    -like you and declare c and write int c=a+b; but for a singal opration it's not nesseary
    -if you are declaring a 3 variable 
    which uses a variable before declare after useing scanf other wise compilar will be confused
*/