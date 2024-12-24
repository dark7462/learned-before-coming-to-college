//Q-Make a structure to store Bank account information of a customer of ABC Bank, also make alias of it
#include<stdio.h>
typedef struct bankAccountInfo{
    char name[50];
    int account_no;
}bai;
void printinfo(bai s1){
    printf("Name of the person : %s\n",s1.name);
    printf("Account number is : %d\n",s1.account_no);
}
int main(){
    bai s1={"Anurag",123523};
    bai s2={"Piyush",132234};
    bai s3={"Harsh",8934322};
    bai s4={"Pranav",5634234};
    bai s5={"Santosh",243423};

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