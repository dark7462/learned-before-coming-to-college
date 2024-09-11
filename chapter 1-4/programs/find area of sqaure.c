#include <stdio.h>
int main(){

    int side;
    printf("what's the len of one side->");
    scanf("%d",&side);

    int area = side * side;

    printf("area of the square is %d",area);

    return 0;
}

// in this code donno why when i did this area = side * side 
// error was not poping but answer was coming wrong
    /*
        solution-> if you are using a 3rd varibale to find any value with previous variable,
        the declare that variable after scaning the base variable
    */
