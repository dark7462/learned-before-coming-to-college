#include<stdio.h>
#include<math.h>

int main(){

    int arr[10];
    int *ptr = &arr[0];

    int *ptr = arr;

    //both the line have the same effect and meaning just the syntax isn't same
    //because [0] indicates a pointer location in the array
    //so the location [0] is also a array

    return 0;
}