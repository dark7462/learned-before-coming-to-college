#include <stdio.h>
#include<math.h>
int main(){

    /*
        if you have to put one more contion to you conditional statement the,
        use elseif insted of else, and apply the same if format to elseif
    */

   float marks;
   printf("enter the marks you got to know your score->");
   scanf("%f",&marks);

   if (marks>=95){
        printf("congrates you have scored A++ \n");
   }
   else if (marks<95 && marks>=90){
        printf("you have scored A+ \n");
   }

    else if (marks<90 && marks>=80){
        printf("you have scored A \n");
   }

   else if (marks<80 && marks>=70){
        printf("you have scored B+ \n");
   }

   else if (marks<70 && marks>=60){
        printf("you have scored B \n");
   }

   else if (marks<60 && marks>=50){
        printf("you have scored C \n");
   }

   else if (marks<50 && marks>=40){
        printf("you have scored D \n");
   }

   else{
        printf("you have scored F and you have failed in your exams \n");
   }



    return 0;
}