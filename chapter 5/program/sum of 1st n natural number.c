#include<stdio.h>
#include<math.h>

int sum(int n);

int main(){

    int n;
    printf("enter the value of n ->");
    scanf("%d",&n);

    printf("the sum of n natural numbers are : %d",sum(n));  //here we called our function

    return 0;
}

int sum(int n){
    if (n==1){
        return 1;           // here we declared that sum(1) will return the value 1
    }
    int sumNm1 = sum(n-1);  // to find the sum of n natural numbers first we need to find the sum of 1 to n-1 numbers
    int sumN = sumNm1 + n;  // then we can add n to n-1 
    return sumN;           
}