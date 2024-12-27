#include<stdio.h>

int main(){
    FILE *fptr;
    /*
        "r" - open to read 
        "rb" - open to read in binary
        "w" - open to write
        "wb" - open to write in binary
        "a" - open to append

        -In "r" "rb" if the file dosen't exist then the fptr will be stored as null value.
        -In "w" "wb" if the file dosen't exist then the file will be created automatically. 
        -And if you open a existing file that contain data , then when you write new data, the new data will over write the old one. 
    */
    fptr = fopen("test.txt", "r");// your file should be in the folder where your exe file is stored
    char ch;
    fscanf(fptr, "%c", &ch);//for files we use fscanf and the same format written.
    printf("The char is : %c\n", ch);//a
    fscanf(fptr, "%c", &ch);
    printf("The char is : %c\n", ch);//n
    fscanf(fptr, "%c", &ch);
    printf("The char is : %c\n", ch);//u
    fscanf(fptr, "%c", &ch);
    printf("The char is : %c\n", ch);//r
    fscanf(fptr, "%c", &ch);
    printf("The char is : %c\n", ch);//a
    fscanf(fptr, "%c", &ch);
    printf("The char is : %c\n", ch);//g
    int n;
    fscanf(fptr, "%d", &n);
    printf("The number is : %d\n",n);
    fscanf(fptr, "%d", &n);
    printf("The number is : %d\n",n);
    fscanf(fptr, "%d", &n);
    printf("The number is : %d\n",n);
    fclose(fptr);

    return 0;
}
