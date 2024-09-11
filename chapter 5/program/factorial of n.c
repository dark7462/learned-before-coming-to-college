#include<stdio.h>
#include<math.h>

int fact(int n);

int main(){

    int n;
    printf("enter the value of n ->");
    scanf("%d",&n);

    printf("the factorial of n : %d",fact(n));  //here we called our function

    return 0;
}

int fact(int n){
    if (n==0){
        return 1;             // here we declared that fact(1) will return the value 1 (the base case)
    }                         // don't miss the base case or esle the programm will crash
    int factNm1 = fact(n-1);  // to find the factorial of n numbers first we need to find the factorial of 1 to n-1 numbers
    int factN = factNm1 * n;  // then we can multiply n to n-1 
    return factN;           
}