#include<stdio.h>
#include<string.h>
int main(){

    char str1[100];
    char str2[100];
    printf("Enter the 1st string : ");
    fgets(str1,100,stdin);

    printf("Enter the 2nd string : ");
    fgets(str2,100,stdin);

    int diff = strcmp(str1,str2);

    printf("The diff is : %d",diff);

    return 0;
}