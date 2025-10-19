// Write a program to find the HCF (GCD) of two numbers.
#include<stdio.h>
int main(){
    int num1,num2,gcd;
    printf("enter 2 number=\n");
    scanf("%d %d",&num1,&num2);
    
    /*GCD of two numbers should be smaller than both the number
    and should be the factor of both numbers.*/
    for(int i=1;i<=num1 && i<=num2 ;i++){
        if(num1%i==0 && num2%i==0){
            gcd=i; //last common divisior found will be the greatest
            
        }
    }
    printf("GCD of %d and %d =%d",num1,num2,gcd);
    return 0;

}

        

    




