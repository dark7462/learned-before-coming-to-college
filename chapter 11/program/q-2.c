// WAP to free few memory that's already existing
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter the blocks of memory you want in whole : ");
    scanf("%d",&n);

    int *arr;
    arr=(int *) calloc(n,sizeof(int)); // here we created a continously allocated memory of size n
    for(int i=0;i<n;i++){
        printf("%dth value : %d\n",i+1,arr[i]);
    }

    free(arr); //here we freed the arr of size n

    arr=(int *) calloc(2,sizeof(int)); // but this one remains as it is and it'll be as it is in the memory

     for(int i=0;i<2;i++){
        printf("%dth value : %d\n",i+1,arr[i]);
    }

    return 0;
}