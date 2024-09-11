#include<stdio.h>
#include<math.h>

//this code will take celusis value and convert it into fahrenheit

float convert(float c);
float reverse(float f);

int main(){

    float c;
    float f;
    int select;
    printf("what do you wanna convert press 1 for celsius to fahrenheit press 2 for fahrenheit to celsius->");
    scanf("%d",&select);
    if (select==1)
    {
        printf("enter the celsius->");
        scanf("%f",&c);
        convert(c);
    }
    else if (select==2)
    {
        printf("enter the fahrenheit->");
        scanf("%f",&f);
        reverse(f);
    }
    else{
        printf("invaid input");
    }
    
    return 0;
}

float convert(float c){
    float f = c * 1.8 + 32;
    printf("when %f degree celsius is converted into fahrenheit \nthen it becomes->%f",c,f);
    return f;
}

float reverse(float f){
    float c = (f - 32)/1.8;
    printf("when %2.0f degree fahrenhit is converted into celsius \nthen it becomes->%2.0f",f,c);
    return f;
}

