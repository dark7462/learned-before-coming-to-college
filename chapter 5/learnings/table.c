#include<stdio.h>
#include<math.h>

void table(int n);


int main(){

    int n;
    printf("enter the number which you want to see the table of->");
    scanf("%d",&n);

    table(n); // argument / actual parameter

    return 0;
}


void table(int n){ //parameter / formal parameter

    for(int i=1;i<=10;i++){
        printf("%d\n",n*i);
    }

}