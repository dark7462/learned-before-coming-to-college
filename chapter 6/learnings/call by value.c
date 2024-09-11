#include <stdio.h>
#include<math.h>

void sq(int n);

int main(){
    int number = 4;
    sq(number);
    printf("the number is = %d\n",number);

    //since the value of the variabel passed is changed but here the value of number will not be changed
    //this is because function makes a copy of variable to work with
    //this is called call by value function
    return 0;
}

void sq(int n){
    n*=n;
    printf("square = %d\n",n);
}