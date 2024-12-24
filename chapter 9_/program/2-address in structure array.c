#include<stdio.h>

typedef struct address{
    int houseNo;
    int block;
    char city[100];
    char state[100];
}adds; // "struct address" will be replaced by "adds"

void printadds(adds s1){
    printf("Address is : %d,%d,%s,%s\n",s1.houseNo,s1.block,s1.city,s1.state);
}
int main(){
    adds arr[5];
    printf("Enter the details of person 1: \n");
    printf("Enter the House number of person 1: ");
    scanf("%d",&arr[0].houseNo);
    printf("Enter the block of the person 1 : ");
    scanf("%d",&arr[0].block);
    printf("Enter the city of the person 1 : ");
    scanf("%s",arr[0].city);
    printf("Enter the state of the person 1 : ");
    scanf("%s",arr[0].state);

    printf("----------------------------------------------------\n");

    printf("Enter the details of person 2: \n");
    printf("Enter the House number of person 2 : ");
    scanf("%d",&arr[1].houseNo);
    printf("Enter the block of the person 2 : ");
    scanf("%d",&arr[1].block);
    printf("Enter the city of the person 2 : ");
    scanf("%s",arr[1].city);
    printf("Enter the state of the person 2 : ");
    scanf("%s",arr[1].state);

    printf("----------------------------------------------------\n");

    printf("Enter the details of person 3: \n");
    printf("Enter the House number of person 3 : ");
    scanf("%d",&arr[2].houseNo);
    printf("Enter the block of the person 3 : ");
    scanf("%d",&arr[2].block);
    printf("Enter the city of the person 3 : ");
    scanf("%s",arr[2].city);
    printf("Enter the state of the person 3 : ");
    scanf("%s",arr[2].state);

    printf("----------------------------------------------------\n");

    printf("Enter the details of person 4: \n");
    printf("Enter the House number of person 4 : ");
    scanf("%d",&arr[3].houseNo);
    printf("Enter the block of the person 4 : ");
    scanf("%d",&arr[3].block);
    printf("Enter the city of the person 4 : ");
    scanf("%s",arr[3].city);
    printf("Enter the state of the person 4 : ");
    scanf("%s",arr[3].state);

    printf("----------------------------------------------------\n");

    printf("Enter the details of person 5: \n");
    printf("Enter the House number of person 5 : ");
    scanf("%d",&arr[4].houseNo);
    printf("Enter the block of the person 5 : ");
    scanf("%d",&arr[4].block);
    printf("Enter the city of the person 5 : ");
    scanf("%s",arr[4].city);
    printf("Enter the state of the person 5 : ");
    scanf("%s",arr[4].state);

    printf("----------------------------------------------------\n");
    printadds(arr[0]);
    printf("----------------------------------------------------\n");
    printadds(arr[1]);
    printf("----------------------------------------------------\n");
    printadds(arr[2]);
    printf("----------------------------------------------------\n");
    printadds(arr[3]);
    printf("----------------------------------------------------\n");
    printadds(arr[4]);
    printf("----------------------------------------------------\n");
    return 0;
}