#include<stdio.h>
#include<math.h>

// this code is to get percent of 3 subjects maths sicence and sanskrit
int percent(int s, int m , int sk);

int main(){

    int s,m,sk;
    printf("enter the marks you got in science ->");
    scanf("%d",&s);
    
    printf("enter the marks you got in maths ->");
    scanf("%d",&m);
    
    printf("enter the marks you got in sanskrit ->");
    scanf("%d",&sk);

    percent(s,m,sk);

    return 0;
}

int percent(int s, int m, int sk){

    float per = (s + m + sk) /3;
    printf("the total percent you got in all three subject are->%f",per);
    return per;

}