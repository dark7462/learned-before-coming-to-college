#include<stdio.h>
#include<math.h>

void swap(int a, int b);

void _swap(int *a, int *b);

int main(){

    int a = 3, b = 5;
    printf("origanl a = %d\n",a);
    printf("origanl b = %d\n",b);

    swap(a,b);
    printf("call by value a = %d\n",a);
    printf("call by value b = %d\n",b);
    
    _swap(&a,&b);
    printf("call by refrence a = %d\n",a);
    printf("call by refrence b = %d\n",b);

    return 0;
}

//call by value
//this will not work because function copies the values and do changes to it
void swap(int a,int b){

    int c;
    c = b;
    b = a;
    a = c;

}

//call by refrence
//this will work because the address are being swaped
void _swap(int *a, int *b){
    int c;
    c = *b;
    *b = *a;
    *a = c;
}