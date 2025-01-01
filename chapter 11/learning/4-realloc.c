#include<stdio.h>
#include<stdlib.h>
int main(){

    //realloc is used to re allocate the memory accourding the willingness of the used in the same pointer.
    
    //like for example you have same data and then you want to add few more how to do so here realloc comes in it increases or decreases the size of the data dynamically

    int n;
    printf("Enter the initial size of the array : ");
    scanf("%d",&n);

    int *ptr;
    ptr = (int *) malloc(n*sizeof(int));    //created a dynamic array of size n

    for(int i=0;i<n;i++){
        printf("Enter the %dth value : ",i+1);  //took values till n
        scanf("%d",&ptr[i]);
    }

    for(int i=0;i<n;i++){
        printf("The %dth value : %d\n",i+1,ptr[i]); //display all values till now
    }

    int m;
    printf("Enter the size of the array you want to increase : ");  //how much extra space we need 
    scanf("%d",&m);

    realloc(ptr,m); //allocated extra space

    for(int i=n;i<n+m;i++){
        printf("Enter the %dth value : ",i+1);  //took extra inputs
        scanf("%d",&ptr[i]);
    }

    for(int i=0;i<n+m;i++){
        printf("The %dth value : %d\n",i+1,ptr[i]); //printed extra inputs
    }


    return 0;
}