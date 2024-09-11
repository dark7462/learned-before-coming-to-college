#include <stdio.h>
#include <math.h>
int main(){

    int a = 1.99999;
    printf("%f \n",a);
    
    // for Explicit conversion use (data type in front of the value) for ex->

    int b = (int) 1.98989;
    printf("%d \n",b);

    return 0;
}

/*
    -if you assign a float  value to int 
    the decimals will automaticaly be removed
    - there are 2 type of conversion implicit and explicit 
    - Implicit conversion are those which complier do by its own
    - Explicit are those which we users have to do mannually

*/