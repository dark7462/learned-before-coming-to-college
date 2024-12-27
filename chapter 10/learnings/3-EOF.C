#include<stdio.h>
#include<stdlib.h>
int main(){
    //EOF - stands for end of file
    // it basically means that it'll reflect the null point in the end of the file
    FILE *fptr;
    fptr = fopen("EOF.txt","r");

    char ch;
    while (ch != EOF){  // till the value of ch is EOF the loop will run
        ch = fgetc(fptr); // this will fetch each word one by one
        printf("%c",ch);  // this will print each word one by one
    }
    printf("\n");


    fclose(fptr);
    return 0;
}