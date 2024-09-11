#include <stdio.h>
int main(){

    int n;
    printf("enter the value when you want the code to be tremenated->");
    scanf("%d",&n);
    int i = 0;


    // by while loop

    while(i<=n){
        printf("%d \n",i);
        i++;
    }


    // by for loop

    for (int j=0; j<=n;j++){
        printf("%d \n",j);
    }

    return 0;
}