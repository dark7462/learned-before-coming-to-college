#include<stdio.h>
int main(){

    for (char ch = 'a';ch<='z';ch++){
        printf(" %c \n",ch);
    }
    // characters also have a value in c or any other lang also known as ASCII value
    //'a'= 97 , 'z'= 122

    printf("------------------ \n");

    for (char ch='A';ch<='Z';ch++){
        printf(" %c \n",ch);
    }
    // 'A' = 65 , 'Z' = 90


    return 0;
}