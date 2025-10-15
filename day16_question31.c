// Write a program to take a number as input and print its equivalent binary representation.
#include<stdio.h>
int main(){
    int n,digit,d;
    int reverse=0;
    int number=0;
    printf("enter the number=");
    scanf("%d",&n);
    //finding the binary of number(n).
    int temp=n;
    while(temp>0){
        digit=temp%2;
        number=number*10+digit;
        temp=temp/2;
    }
while(number>0){
    d=number%10;
    reverse=reverse*10+d;
    number=number/10;
  }
  printf("binary of %d=%d",n,reverse);
}
