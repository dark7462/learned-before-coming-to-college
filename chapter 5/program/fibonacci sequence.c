#include<stdio.h>
#include<math.h>

//this code is to run sequence of numbers known as fibonacci sequence
int fib(int n);

int main(){

   //then you have a diffcult question to solve then firstly find the recusrive formula 
   //then apply the logic then solve the questions

    // for this the formula is   fib(n)=fib(n-1)+fib(n-2)

    int n;
    printf("enter the nth term you wanna see in the fibonacci sequence->");
    scanf("%d",&n);

    printf("the %dth term in the fibonacci sequence is %d\n",n,fib(n));
    

    return 0;
}

int fib(int n){ 
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int fibNm1=fib(n-1);
    int fibNm2=fib(n-2);
    int fibN=fibNm1+fibNm2;

    
    return fibN;
}