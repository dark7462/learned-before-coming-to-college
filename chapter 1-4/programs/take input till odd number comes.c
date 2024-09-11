#include<stdio.h>
int main(){

    int n;
    
    do
    {
        printf("the number you entered is->");
        scanf("%d",&n);
        printf("the number you entered is %d\n",n);

        if(n % 2 ==0){
            printf("you have entered a even number plz continue\n");
        }

        if(n % 2 != 0){
            printf("you have entered a odd number stop here\n");
            break;
        }
        
    } while (1);
    printf("thank you\n");
    


    return 0;
}