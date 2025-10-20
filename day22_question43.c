//Write a program to check if a number is a strong number.
#include<stdio.h>
int main(){
    int n,sum=0,digit,original;
    printf("enter the number=");
    scanf("%d",&n);
    original=n;

    while(n>0){
        digit=n%10;
        int fac=1;
        for(int i=1;i<=digit;i++){//finding factorial of the digit
            fac=fac*i;
        }

        n=n/10;
        sum=sum+fac;//adding factorial of all digits
    }
    if(original==sum){
        printf("%d is a strong number",original);
    }
    else{
        printf("%d is not a strong number",original);
    }
}
        