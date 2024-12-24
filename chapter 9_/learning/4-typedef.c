#include<stdio.h>
typedef struct freshmenengineeringdepartment{
    char name[20];
    char roll[12];
    float cgpa;
}fed;   //typedef is used for creating nicknames for datatypes so we can increase the readablity of the code 
// "struct freshmenengineeringdepartment" will be replaced by fed
void printstruct(fed s1){
    printf("Student Information\n");
    printf("NAME : %s\n",s1.name);
    printf("ROLL : %s\n",s1.roll);
    printf("CGPA : %0.1f\n",s1.cgpa);
}
int main(){
    // because of typedef now we don't have to use the whole thing like 
    //"struct freshmenengineeringdepartment s1" to declare a structure
    fed s1 ={"Anurag Nayak","24B11AI014",8.2};
    fed s2 ={"Piyush Kumar","24B11DS002",8.1};
    fed s3 ={"VISHAL HARSH","24B11DS977",7.5};
    printstruct(s1);
    printstruct(s2);
    printstruct(s3);
    return 0;
}