#include<stdio.h>
struct student{
    char name[100];
    char roll[10];
    float cgpa;
};

int main(){

    struct student s1;
    printf("Enter the name of the student -> ");
    scanf("%[^\n]s",s1.name);
    printf("Enter the roll number of the student : ");
    scanf("%s",s1.roll);
    printf("Enter the CGPA of the student : ");
    scanf("%f",&s1.cgpa);

    printf("The name of the student is : %s\n",s1.name);
    printf("The roll number of the student is : %s\n",s1.roll);
    printf("The CGPA student got is : %f\n",s1.cgpa);

    return 0;
}