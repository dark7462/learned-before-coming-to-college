#include <stdio.h>
#include<math.h>
int main(){

    int a;
    printf("enter any number to be checked->");
    scanf("%d", &a);

        if(a%2==0){
            printf("the number is divisible by 2\n");
            }
        if(a%2!=0){
            printf("the number is not divisible by 2\n");
            }



        if(a%2==0){
            printf("the number is EVEN\n");
            }
        if(a%2!=0){
            printf("the number is ODD\n");
            }

    return 0;
}

/*
    same code can be written as "even odd finder or somthing like that"
*/