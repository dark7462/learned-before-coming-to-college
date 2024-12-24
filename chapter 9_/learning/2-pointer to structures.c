#include<stdio.h>

struct student{
    char name[100];
    char roll[10];
    float cgpa;
};


int main(){
    struct student s1={"Anurag Nayak","24B11AI014",8.2};
    struct student *ptr=&s1;// the code will be same as any other pointer 
    //datatype then name of the pointer then value assgined to it

    printf("NAME : %s\n",(*ptr).name);
    printf("ROLL : %s\n", ptr->roll); //you can also use this syntax for betterment
    printf("CGPA : %0.1f\n",(*ptr).cgpa);

    return 0;
}