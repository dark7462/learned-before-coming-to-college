#include<stdio.h>
#include<math.h>

void printnamaste();
void printbonjour();

int main(){

    int x;
    printf("enter 1 if you are india enter 2 if you are french->");
    scanf("%d",&x);

    if (x==1)
    {
        printnamaste();
    }
    else if (x==2)
    {
        printbonjour();
    }
    else{
        printf("invalid input");
    }
    return 0;
}

void printnamaste(){
    printf("namaste bhaiyo aur bheno");
}

void printbonjour(){
    printf("bonjour my brothers and sisters");
}