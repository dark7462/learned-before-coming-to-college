//Q-1 make a program to read 5 integers from a file
#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fptr;
    fptr = fopen("Q-1.txt","r");
    int n,i=0;
    while(n != 5){
        fscanf(fptr,"%d",&n);
        printf("%d",n);
        i++;
    }
    printf("\n");
    fclose(fptr);
    return 0;
}