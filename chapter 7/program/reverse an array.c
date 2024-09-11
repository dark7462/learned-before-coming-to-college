#include<stdio.h>
#include<math.h>

void reverse(int arr[],int n);
void printarr(int arr[],int n);

int main(){
    int arr[]={1,2,3,4};

    reverse(arr,4);
    printarr(arr,4);
    return 0;
}

void reverse(int arr[],int n){
    for(int i=0;i<n/2;i++){
        int firstval = arr[i];
        int secoundval = arr[n-i-1];

        arr[i]= secoundval;
        arr[n-i-1]= firstval;
    }
}

void printarr(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
}