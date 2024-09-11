#include<stdio.h>
#include<math.h>

//funtion to count odd numbers in the given array
int countodd(int arr[],int n);

int main(){
    int n;
    n=6;
    int arr[n];
    for(int i=0;i<n;i++){
        printf("enter the %d value of arr->",i);
        scanf("%d",&arr[i]);
    }
    printf("the odd numbers in this array is %d",countodd(arr,n));

    return 0;
}

int countodd(int arr[],int n){
    int count = 0;
    for (int i = 0;i<n;i++){
        if (arr[i] % 2 != 0){
            count++;
        }
    }
    return count;
}