#include<stdio.h>
#include<string.h>

void printsrt(char arr[]);

int main(){

    char name[]="anurag nayak";

    printsrt(name);

    return 0;
}

void printsrt(char arr[]){
    for(int i=0;arr[i]!='\0';i++){
        printf("%c\t",arr[i]);
    }
    printf("\n");
}