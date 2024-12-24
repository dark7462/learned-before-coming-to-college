//q-store address of 5 preson and print it
#include<stdio.h>
typedef struct address{
    char name[50];
    int house_no;
    char block;
    char city[50];
    char state[50];
}ad;
void printinfo(ad s1){
    printf("Name of the person : %s\n",s1.name);
    printf("House number is : %d\n",s1.house_no);
    printf("Block you live in : %c\n",s1.block);
    printf("City you live in : %s\n",s1.city);
    printf("State you live in : %s\n",s1.state);
}
int main(){
    ad s1={"Anurag",12,'A',"Bokaro","Jharkhand"};
    ad s2={"Piyush",132,'B',"Ranchi","Jharkhand"};
    ad s3={"Harsh",89,'A',"Surat","Gujrat"};
    ad s4={"Pranav",56,'D',"Rajmundary","Andra pradesh"};
    ad s5={"Santosh",24,'F',"kakinada","Andra pradesh"};

    printinfo(s1);
    printf("----------------------------------------------------\n");
    printinfo(s2);
    printf("----------------------------------------------------\n");
    printinfo(s3);
    printf("----------------------------------------------------\n");
    printinfo(s4);
    printf("----------------------------------------------------\n");
    printinfo(s5);
    printf("----------------------------------------------------\n");
    return 0;
}