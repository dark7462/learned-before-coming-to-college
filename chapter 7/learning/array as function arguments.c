#include<stdio.h>
#include<math.h>

void number(int arr[],int n);

int main(){

    int arr[]={1,2,3,4,5,6};
    number(arr,6);

    return 0;
}

void number(int arr[],int n){
    for(int i =0;i<n;i++){      //here in a array we stored value in our main function 
                                //and in the number fuction we made a loop for the output
        printf("%d \t",arr[i]); //for \t it'll give you space of a tab
    }
    printf("\n");
}