#include<stdio.h>
int main(){

    int n;
    
    do
    {
        printf("the number you entered is->");
        scanf("%d",&n);
        printf("the number you entered is %d\n",n);

        if(n % 7 ==0){
            printf("you have entered a multiple of 7 plz continue\n");
        }

        if(n % 7 != 0){
            printf("you have entered a non multiple of 7 stop here\n");
            break;
        }
        
    } while (1);
    printf("thank you\n");
    


    return 0;
}