// Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include<stdio.h>
#include<math.h>
int main(){
    float a,b;
    char c;
    printf("enter a,b=");
    scanf("%f %f",&a,&b);
    printf("enter the operator=");
    scanf(" %c",&c);
    switch(c){
        case '+':printf("a+b=%.2f",a+b);
        break;
        case '-':printf("a-b=%.2f",a-b);
        break;
        case '*':printf("a*b=%.2f",a*b);
        break;
        case '/':
        if(b!=0){
            printf("a/b=%.2f",a/b);
        }
        else{
            printf("0 cannot be in denominator");
        }
        break;
        case '%':
        if(b!=0){
        printf("a%%b=%.2f",fmod(a,b));
        }
        else{
            printf("cannot take modulus by 0");
            
        }
        break;
        default:printf("invalid operator");
    
    }
}

