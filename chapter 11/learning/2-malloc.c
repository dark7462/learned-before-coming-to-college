#include<stdio.h>
#include<stdlib.h>
int main(){
    //it takes number of bytes to be allocated & return a pointer type void
    //sytax
    // - ptr = (int*)malloc(n*sizeof(int));
    // explaination - we'll declare a pointer ptr and then type cast it to int and then allocate n * size of int means N * 4 bytes of memory to it
    //for the array

    int n=5;
    int *arr;
    arr = (int *) malloc(n * sizeof(int));

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }

    free(arr); //use to free the memory
    return 0;
}