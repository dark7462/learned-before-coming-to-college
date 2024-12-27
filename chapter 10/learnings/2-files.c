#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fptr;
    FILE *f2ptr;
    
    // fgetc is used for fetching the words in the file

    fptr = fopen("2.1-file.txt","r");
    printf("%c\n",fgetc(fptr));
    printf("%c\n",fgetc(fptr));
    printf("%c\n",fgetc(fptr));
    printf("%c\n",fgetc(fptr));
    printf("%c\n",fgetc(fptr));

//------------------------------------------------------------------------------------------

    //fputc is used for writing the data in the file like you can over wrtie the data in the existing data

    f2ptr = fopen("2.2-file.txt","w");
    putc('M',fptr);
    putc('A',fptr);
    putc('N',fptr);
    putc('G',fptr);
    putc('O',fptr);
    
    fclose(fptr);
    fclose(f2ptr);

    return 0;
}