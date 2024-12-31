#include<stdio.h>
int main(){
    //DMA - stands for dynamic memory allocation 
    /*
    -Like you have a class of 30 students and then in the middle of the session 3 more students enrolled
    -The array that was storing the data of 30 students needs to be of 33 now
    -But it's not possible to change the size of the array in between
    -Here comes DMA(dynamic memory allocation) in role it can change the size of the array or somthing of that sort in run time
    -By adding the bytes of memory in the program in run time.

    -It mainly have 4 function 
        malloc() - Memory Allocation - Allocates the memory according to bytes we want
        calloc() - continuos Allocation - It allocates the memory by blocks we want and size of blocks
        realoc() - re_allocation
        free() - frees the memory - It's used to free the memory the memory allocated by malloc and calloc
    */

   printf("the Size of int : %d-bytes\n", sizeof(int));
   printf("the Size of float : %d-bytes\n", sizeof(float));
   printf("the Size of char : %d-bytes\n", sizeof(char));
   printf("the Size of double : %d-bytes\n", sizeof(double));

    return 0;
}