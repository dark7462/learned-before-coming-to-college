#include<stdio.h>

void string(char arr[]);

int main(){


    char first_name[] = "Anurag"; 
    char last_name[] = "Nayak";

    string(first_name);
    string(last_name);

    return 0;
}
void string(char arr[]){
    for(int i=0; arr[i] != '\0';i++){
        printf("%c\t",arr[i]);
    }
    printf("\n");
}