#include<stdio.h>
#include<math.h>

int main(){

    int a = 5;
    int *ptr = &a;
    
    printf("the address of ptr is %u\n",ptr);//6422296

    //we printed the unassiged int value of the pointer
    ptr++;// int contain 4 byte so after doing ptr++ will increase by 4 value

    //after using the increment operator printing the unassiged int value of the pointer variable
    
    printf("the new address of pointer is %u",ptr);//6422300

    //same logic will be applied to float and char data type
    //the diff is int have 4 byte,float have same,char have 1 byte

    return 0;
}