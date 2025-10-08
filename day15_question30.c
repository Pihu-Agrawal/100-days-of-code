//Write a program to reverse a given number.
#include<stdio.h>
int main(){
  int num,digit;
  int reverse=0;
  printf("enter the number=");
  scanf("%d",&num);
  printf("number before reversing=%d\n",num);
  while(num>0){
    digit=num%10;
    reverse=reverse*10+digit;
    num=num/10;
  }
printf("number after reversing=%d",reverse);
}

