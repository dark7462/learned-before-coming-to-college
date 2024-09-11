#include <stdio.h>
int main (){

    int n;
    int sum = 0;
    printf("enter the number to set n ->");
    scanf("%d",&n);
    for (int i=1; i<=n; i++){
        sum = sum + i; 
    }
    printf("the sum from 0 to nth number is->%d\n",sum);

    for (int i=n; i>=1;i--){
        printf("the reverse order is ->");
        printf("%d\n",i);
    }

    // for all this a single for loop can also be prepared

    for (int i=1, j=n ; i<=n && j>=1;i++, j--){
        sum += i;
        
        printf("%d\n",j);
    }
    printf("the sum is->%d\n",sum);

    // same output can be taken out from same code without i in it
    // cuz if we add 0 to n or n to 0 sum is gonna be the same

    for (int j=n ;  j>=1 ;j--){
        sum += j;
        
        printf("%d\n",j);
    }
    printf("the sum is->%d\n",sum);

    return 0;
}