#include<stdio.h>
int main(){

    for(int i=1;i<=10;i++){
        if (i==3)
        {
            break; // stop when condition meets
        }
        
        printf("%d\n",i);
    }
    printf("loop ends here");

    return 0;
}