//Write a program to check if a number is a palindrome.
#include<stdio.h>
int main(){
    int n,original,digit;
    int reverse=0;
    printf("enter the number=");
    scanf("%d",&n);
    original=n;
    
    //reversing the number
    while(n>0){
        digit=n%10;
        reverse=reverse*10+digit;
        n=n/10;
    }

    if(reverse==original){
        printf("number is palindrome");

    }
    else{
        printf("number is not palindrome");
    }
    return 0;
}
