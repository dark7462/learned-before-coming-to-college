#include<stdio.h>
#include<math.h>

int main(){

    // swaping 2 variables without using the third variable

    int a;
    int b;
    
    printf("enter the 1st variable->");
    scanf("%d",&a);
    printf("enter the 2nd variable->");
    scanf("%d",&b);

    printf("the value of a currently is -> %d \n",a);
    printf("the value of b currently is -> %d \n",b);

    a += b;
    b = a - b;
    a -= b;

    printf("the value of a after swaping is -> %d \n",a);
    printf("the value of b after swaping is -> %d \n",b);    

    return 0;
}


