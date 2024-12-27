#include<stdio.h>
#include<stdlib.h>
struct student {
    char roll[100];
    char name[100];
    char mobileN0[15];
};
int main() {
    int n;
    printf("Enter the number of students data you want to Enter : ");
    scanf("%d", &n);
    getchar();
    struct student arr[n];

    for(int i = 0; i < n; i++) {
        printf("Enter the RollNo of the student : ");
        scanf("%99[^\n]", arr[i].roll); // make sure to use how much space you are gonna take so here 100 space so "%99[^\n]" means take 99 words then new line
        getchar();  
        // getchar() is used to consume the rest space for the line before going to new line
        printf("Enter the name of the student : ");
        scanf("%99[^\n]", arr[i].name);
        getchar();
        printf("Enter the MobileNo of the student : ");
        scanf("%14s", arr[i].mobileN0);
        getchar();
        printf("----------------------------------------------------------\n");
    }
    
    FILE *fptr;
    fptr = fopen("Q-2.txt", "a");// if you use this code for the 1st time the use "w" or clear the txt file if using "a" before

    for(int i = 0; i < n; i++) {
        fprintf(fptr, "Roll Number : %s\n", arr[i].roll);
        fprintf(fptr, "Name : %s\n", arr[i].name);
        fprintf(fptr, "Mobile Number : %s\n", arr[i].mobileN0);
        fprintf(fptr,"%s\n","----------------------------------------------------------");
    }

    fclose(fptr);
    return 0;
}
