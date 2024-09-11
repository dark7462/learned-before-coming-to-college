#include<stdio.h>
#include<math.h>

int main(){

    int marks;
    printf("enter marks you got know you are pass or fail->");
    scanf("%d",&marks);

    if (marks>=30 && marks<100)
    {
        printf("you passed the exam now pass away \n");
    } else if (marks<30){
        printf("you failed the exam now die \n");
    } else
    {
        printf("you have entered invalid marks are you dumb \n");
    }
    
    //marks <= 30 ? printf("fail") : printf("pass");

    return 0;
}