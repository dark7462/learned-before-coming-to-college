#include<stdio.h>   
#include<string.h>
int main(){
    char str1[20],str2[20];
    printf("Enter the string1:");
    gets(str1);
    printf("Enter the string2:");
    gets(str2);


    strcat(str1,str2);
    printf("The concatenated string is %s\n",str1);


    strcpy(str1,str2);
    printf("The copied string is %s",str1);


    return 0;
}