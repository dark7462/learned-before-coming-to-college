//Q-create a struct to store complex number (Use arrow operator)
#include<stdio.h>
struct complex{
    int real;
    int img;
};
int main(){
    struct complex number_1= {3,4};
    struct complex *ptr=&number_1;
    printf("The real part is : %d\n", ptr->real);
    printf("The imaginery part is : %d\n", ptr->img);
    return 0;
}