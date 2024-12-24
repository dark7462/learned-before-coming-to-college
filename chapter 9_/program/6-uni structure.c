#include<stdio.h>
typedef struct FreshMenEngineeringDepartment {
    char name[100];
    char roll_no[100];
    int mobileNo;
    char branch[100];
    char section[100];
    char ThubOrNon_Thub[100];
    char address[100];
} fed;

void printinfo(fed arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Details of %dth student :\n", i + 1);
        printf("Name : %s\n", arr[i].name);
        printf("RollNo : %s\n", arr[i].roll_no);
        printf("MobileNo : %d\n", arr[i].mobileNo);
        printf("Branch : %s\n", arr[i].branch);
        printf("Section : %s\n", arr[i].section);
        printf("ThubOrNon_Thub : %s\n", arr[i].ThubOrNon_Thub);
        printf("Address : %s\n", arr[i].address);
        printf("-------------------------------------------\n");
    }
}

int main() {
    int n;
    printf("Enter the number of students your university has: ");
    scanf("%d", &n);
    fed arr[n];
    for (int i = 0; i < n; i++) {
        printf("Enter the name of the student: ");
        scanf(" %[^\n]", arr[i].name);
        printf("Enter the rollNo of the student: ");
        scanf(" %[^\n]", arr[i].roll_no);
        printf("Enter the mobileNo of the student: ");
        scanf("%d", &arr[i].mobileNo);
        printf("Enter the branch of the student: ");
        scanf(" %[^\n]", arr[i].branch);
        printf("Enter the section of the student: ");
        scanf(" %[^\n]", arr[i].section);
        printf("Enter if the student is from Thub or not: ");
        scanf(" %[^\n]", arr[i].ThubOrNon_Thub);
        printf("Enter the address of the student: ");
        scanf(" %[^\n]", arr[i].address);
        printf("-------------------------------------------\n");
    }
    printinfo(arr, n);
    return 0;
}
