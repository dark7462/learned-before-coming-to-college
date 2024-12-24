#include<stdio.h>
struct student{
    char name[100];// here choose the data type and name for your variable
    char roll[10];
    float cgpa;
};

int main(){

    struct student s1;  //here you intialize your struct in the main funtion with values
    printf("Enter the name of the student -> ");
    scanf("%[^\n]s",s1.name);   //if you want to access a variable then use name of the struct and join with the dot with your varibale like (s1.name) here s1 is the name of the struct and name is my variable
    printf("Enter the roll number of the student : ");
    scanf("%s",s1.roll);
    printf("Enter the CGPA of the student : ");
    scanf("%f",&s1.cgpa);

    printf("NAME : %s\n",s1.name);
    printf("ROLL : %s\n",s1.roll);
    printf("CGPA : %f\n",s1.cgpa);

    //you can directly declare values of any struct
    struct student s2={"Anurag Nayak","24B11AI014",8.2};
    printf("NAME : %s\n",s2.name);
    printf("ROLL : %s\n",s2.roll);
    printf("CGPA : %f\n",s2.cgpa);

    return 0;
}