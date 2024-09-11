#include <stdio.h>
#include<math.h>

int main(){

//TO PRINT THE REVERSE ORDER OF A TABLE

    int n;
    printf("enter the number you want to see the revser table of-> ");
    scanf("%d", &n);

    for (int i=10;i>=1;i--){
        int table = n*i;
        printf("%d \n",table);
    }

    return 0;
}