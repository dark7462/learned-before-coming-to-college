//q-create a strcture to store the vectors and Then make a fucntion to return sum of 2 vector
#include<stdio.h>
struct vector{
    int x;
    int y;
};
void calcSum(struct vector v1,struct vector v2,struct vector sum){
    sum.x=v1.x+v2.x;
    sum.y=v1.y+v2.y;
    printf("The sum of the x component is : %d\n",sum.x);
    printf("The sum of the y component is : %d\n",sum.y);
}
int main(){
    struct vector v1={3,4};
    struct vector v2={9,34};
    struct vector sum={0};

    calcSum(v1,v2,sum);

    return 0;
}