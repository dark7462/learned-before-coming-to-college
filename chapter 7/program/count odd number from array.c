#include<stdio.h>
#include<math.h>

//write a fuction to count the number of odd number in an array
int countodd(int arr[],int n);


int main(){

    int odd[5]={1,2,3,4,5};

    countodd(odd,5);

    return 0;
}
int countodd(int arr[],int n){
    int count=0;
    for (int i=0;i<=n;i++){
        if(arr[i]%2!=0){
            count++;
        }
    }
    printf("%d",count);
    return count;
}