#include <stdio.h>
#include<math.h>
int main(){

    /*
        the if esle statements can be also written by a short method
        called terony operators

        format -> condition ? doSomthing if true : doSomthing if false;
    */

   /*
    the code ->

    if(age>=18){
        printf("you are adult\n");
    }
    else{
        printf("you are a minor\n");
    }

    can be written in just one line
   */


    int age;
    printf("enter your age->");
    scanf("%d",&age);

    age >=18 ? printf("you are a adult\n") : printf("you are a minor\n");

    /*
        con for this operator is that it can onlky preform one line code means, 
        it is only valid for if else statements not if , else if , else statements
    */


      //SWITCH

   /*
    FORMAT FOR SWITCH IS

        switch(number){
            case C1:doSomthing
                break;
            case C2:doSomthing
                break;
            default:doSomthing
        }
   */
    int day;
    printf("enter day(1-7) ->");
    scanf("%d",&day);

    switch (day){
    case 1 : printf("monday \n");
        break;
    case 2 : printf("tuesday \n");
        break;
    case 3 : printf("wednesday \n");
        break;
    case 4 : printf("thusday \n");
        break;
    case 5 : printf("friday \n");
        break;
    case 6 : printf("saturday \n");
        break;
    case 7 : printf("sunday \n");
        break;
    default: printf("invalid value");
        break;
    }



    return 0;
}