#include<stdio.h>
#include<math.h>

void storetable(int arr[][10],int n,int m,int number);//in 2d arrays you have give the 2nd size int the initial part
int main(){

    int table [2][10];
    
    storetable(table,0,10,2);
    storetable(table,1,10,3);

    for(int i=0;i<10;i++){
        printf("%d\t",table[0][i]);
    }

    printf("\n");

    for (int i=0;i<10;i++){
        printf("%d\t",table[1][i]);
    }

    return 0;
}

void storetable(int table[][10],int n,int m,int number){
    for (int i=0;i<m;i++){
        table[n][i] = number * (i+1);
    }
}


// int main(){
//     int n;
//     printf("the enter table value");
//     scanf("%d",&n);
//     for (int i=1;i<=10;i++){
//         printf("%d\n",n*i);
//     }
// }