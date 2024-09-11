#include<stdio.h>
#include<math.h>

int main(){

    int aadhar[5];

    int *ptr = &aadhar[0];

    //for the input
    for(int i=0;i<5;i++){       //here in this loop the conditon is i<5 and = is not there because
        printf("%d index : ",i);  // i here is used for noting the index part
        scanf("%d",(ptr+i));
                            //we can't store more value from the limit that will not work
    }

    //for the output
    for(int i=0;i<5;i++){
        printf("%d value is %d\n",i,*(ptr+i));  //insted of printing the pointer *(ptr+1)
        //printf("%d value is %d\n",i,aadhar[i]);
                                                //you can also write aadhar[i] i here stands for the index
    }                                           // same in above insted of ptr+1 you could write &adhaar[i]

    return 0;
}