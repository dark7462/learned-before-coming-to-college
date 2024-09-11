#include<stdio.h>
int main(){

    for (float i = 1.0; i <= 5.0 ; i=i+0.1){
        printf("%0.1f \n",i);
    }
    // here in the printing part you can see %0.1f is written why?
    // because to limit the decimals in c,  defualt it takes 5-6 decimal places now it'll only take 1

    return 0;
}