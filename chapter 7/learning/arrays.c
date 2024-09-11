#include<stdio.h>
#include<math.h>

int main(){

    // int mark[5];
    /*
    here we have declared a variable marks
    which have a array
    which contain 5 blocks each of size 4 bytes

    in c we follow 0 based indexing so the 
    1st value will be in 0th position
    2nd value wil be in 1st position
    and so on
    */
//    int number[5]=(1,2,3,4,5);

   //to take a input

   int marks[3];
   printf("enter the marks of phy : ");
   scanf("%d",&marks[0]);

   printf("enter the marks of maths : ");
   scanf("%d",&marks[1]);
   
   printf("enter the marks of sst : ");
   scanf("%d",&marks[2]);

   printf("phy = %d\nmath = %d\nsst = %d\n",marks[0],marks[1],marks[2]);





    return 0;
}