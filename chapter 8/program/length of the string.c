#include<stdio.h>
#include<string.h>

int count(char arr[]);

int main(){

    char name[100];
    fgets(name,100,stdin);
    puts(name);

    count(name);
    int lenght = strlen(name);
    printf("the length of the string is : %d",lenght);
    return 0;

}
int count(char arr[]){
    int count=0;
    for (int i=0;arr[i]!='\0';i++){
        count++;
        
    }
    printf("%d\n",count-1);
    return count-1;
}