#include<stdio.h>

int main(){

    int n;
    printf("enter the nth number till you want fiboncci numbers : ");
    scanf("%d",&n);

    int fib[n];
    fib[0]=0;
    fib[1]=1;

    printf("%d \t %d \t",fib[0],fib[1]); //this will first print the const inital values 

    for(int i=2;i<n;i++){
        fib[i] = fib[i-1] + fib [i-2];
        printf("%d \t",fib[i]);         //this will then print the rest number of values which we wish for
    }

    return 0;
}