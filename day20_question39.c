// Write a program to find the product of odd digits of a number.
#include<stdio.h>
int main(){
    int n,digit,product=1;

    printf("enter the number=");
    scanf("%d",&n);
    while(n>0){
        digit=n%10;
        if(digit%2 != 0){
        product=product*digit;
        }
        n=n/10;
    }
    printf("product of odd digit of the number=%d",product);

}