//create a program to read the values from the file and replace it with there sum
#include<stdio.h>
#include<stdlib.h>
int main(){
    int a,b;
    FILE *fptr;
    fptr = fopen("Q-4.txt","r");
    fscanf(fptr,"%d",&a);
    fscanf(fptr,"%d",&b);
    fclose(fptr);
    fptr = fopen("Q-4.txt","w");
    fprintf(fptr,"SUM : %d",a+b);
    fclose(fptr);

    return 0;
}