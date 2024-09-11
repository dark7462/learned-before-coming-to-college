#include <stdio.h>
#include<math.h>
int main(){

    //make a variable fac to store the new valuesto be multiplied
    // this code can only give us factorail of small numbers
    
    
    int fac = 1;
    int n = 5;

    for(int i=1;i<=n;i++){
        fac*=i;
    }

    printf("%d",fac);

    return 0;
}