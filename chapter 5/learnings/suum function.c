#include<stdio.h>
#include<math.h>

//function decration / prototype
int sum(int a,int b);


int main(){

    int a,b;

    printf("enter the value of a ->");
    scanf("%d",&a);

    printf("enter the value of b ->");
    scanf("%d",&b);

    // function call 
    int s = sum(a,b);
    printf("the sum is->%d\n",s);

    return 0;

}

//function defination
int sum(int a, int b){
    return a + b;
}