#include<stdio.h>
#include<math.h>

int main(){
    
    /*
        to understand 2d array more you should have knowlege about matrices
        it is declared as int arr[][]={{1,2},{3,4}};

        1 is in 0,0 location
        2 is in 0,1 location
        3 is in 1,0 location
        4 is in 1,1 location

        simple as like matrices

        there can be 3d arrays too and will follow the same concept of locations


    */
   
   int arr[2][2]={{1,2},{3,4}};
   printf("%d\t%d\n%d\t%d\n",arr[0][0],arr[0][1],arr[1][0],arr[1][1]);
   //in a 2d array the location imagination is must to get a perfect output
    return 0;
}