#include<stdio.h>
#include<string.h>
int main(){
    char password[100];
    char salt[]="123";
    char newpass[100];

    fgets(password,100,stdin);

    strcpy(newpass,password);
    strcat(newpass,salt);
    puts(newpass);


    return 0;
}