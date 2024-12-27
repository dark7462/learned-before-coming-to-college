#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    FILE *fptr;
    fptr = fopen("Q-3.txt","w");
    for(int i=1;i<=n;i++){
        if(i%2 != 0){
            fprintf(fptr,"%d\t",i);
        }
    }
    fclose(fptr);
    return 0;
}