#include<stdio.h>
#include<string.h>



int main(){

    char name[100];
    fgets(name,100,stdin);
    puts(name);

    int length = strlen(name);
    printf("the length of the string is : %d",length);

    return 0;
}

