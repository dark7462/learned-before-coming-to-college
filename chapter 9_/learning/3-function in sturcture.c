#include<stdio.h>

struct student{
    char name[100];
    char roll[10];
    float cgpa;
};
//you have to define the funtion after the declearation of struct
void printsturt(struct student s1){
    printf("Student Information\n");
    printf("NAME : %s\n",s1.name);
    printf("ROLL : %s\n",s1.roll);
    printf("CGPA : %0.1f\n",s1.cgpa);
}

int main(){
    struct student s1={"Anurag Nayak","24B11AI014",8.2};

    //calling the funtion
    printsturt(s1);//by defualt structures are call by value

    return 0;
}