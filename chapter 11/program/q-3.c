//Allocate memory to store first 5 odd numbers, then reallocate it to store first 6 even numbers
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n=5;
    int *ptr;
    ptr = (int *) malloc(n*sizeof(int));
    int position = 0;//for array position
    for(int i=1;i<=n*2-1;i+=2){  //for odd number
        ptr[position] = i;
        position++;
    }
    for(int i=0;i<n;i++){
        printf("The value at %dth place is : %d\n",i+1,ptr[i]);//printing odd values
    }
    position = 0;   //defult value

    int m=1;    //for 6 we need one more

    realloc(ptr,m); //reallocate the size

    for(int i=0;i<=(n+m)*2;i+=2){
        ptr[position] = i;     //even values
        position++;
    }

    for(int i=0;i<n+m;i++){
        printf("The value at %dth place is : %d\n",i+1,ptr[i]);//printing even values
    }
    free(ptr);
    return 0;
}