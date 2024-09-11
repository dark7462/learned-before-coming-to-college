#include <stdio.h>
#include<math.h>
int main(){ 
    
    //you can also give char values to it such as
    //cases can be in any order
    //nested switch are allowed


    
    char weekday;
    printf("enter weekday->");
    scanf("%c",&weekday);

    switch (weekday){
    case 'm' : printf("monday \n");
        break;
    case 't' : printf("tuesday \n");
        break;
    case 'w' : printf("wednesday \n");
        break;
    case 'T' : printf("thusday \n");
        break;
    case 'f' : printf("friday \n");
        break;
    case 's' : printf("saturday \n");
        break;
    case 'S' : printf("sunday \n");
        break;
    default: printf("invalid value");
        break;
    }
        return 0;
}
