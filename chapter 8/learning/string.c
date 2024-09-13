#include<stdio.h>
int main(){

    //string is a char array terminated by \0 (null char)
    char name[]={'A','B','C','\0'};
    char my_name= "Anurag"; 
    // in this method compiler automatically inclued the null char

    //format specifier for string is %s

    char nam[40];
    printf("ENTER THE STRING : ");
    scanf("%s",nam); //scanf() can't input multi word strings so no space will be taken

    //fgets(name arr,limit,stdin)
    //puts(name if the arr)  it will automatically put the next line

    printf("the string is : %s",nam);

    return 0;
}