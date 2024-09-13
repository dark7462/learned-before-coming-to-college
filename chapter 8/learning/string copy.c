#include<stdio.h>
#include<string.h>
int main(){

    char name[]="anurag ";
    char lname[]="nayak";

    //concatenates
    strcat(name,lname);
    puts(name);//both the srtings will be added to the first string

    strcpy(name,lname); //copy the value of str 2 to str 1 and the srt1 will not be affected

    puts(lname);


    return 0;
}