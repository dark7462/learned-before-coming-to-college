#include<stdio.h>
#include<stdlib.h>
int main(){
    //calloc - it continuously allocates the memory and by defult initialise with 0
    int n;
    scanf("%d",&n);
    int *arr;
    arr = (int *) calloc(n,sizeof(int));
    // name of pointer = (type cast) calloc (blocks of memory, size of each block);

    for(int i=0;i<n;i++){
        printf("Value at %dth loaction : %d\n",i+1,arr[i]);
    }

    free(arr); //use to free the memory
    return 0;
}