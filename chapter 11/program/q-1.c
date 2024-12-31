// Q - Wap to allocate memory to store 5 price of 5 items


#include<stdio.h>
#include<stdlib.h>
int main(){


    int n=5;
    float *arr;
    arr = (float *) malloc(n * sizeof(float));

    for(int i=0;i<n;i++){
        printf("Enter the price of the %d item : ",i+1);
        scanf("%f",&arr[i]);
    }

    for(int i=0;i<n;i++){
        printf("The price of the %dth item : ",i+1);
        printf("%0.2f\n",arr[i]);
    }

    free(arr);
    return 0;
}