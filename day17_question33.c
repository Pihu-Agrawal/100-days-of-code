//Write a program to check if a number is an Armstrong number.
#include<stdio.h>
#include<math.h>
int main(){
    int n,temp,digit;
    int count=0;
    int number=0;
    
    printf("enter the number=");
    scanf("%d",&n);
    int original=n;
    temp=n;
    while(temp>0){
        count++;
        temp=temp/10;

    }
    while(n>0){
        digit=n%10;
        number=number+pow(digit,count);
        n=n/10;
    }
    if(number==original){
        printf("%d is armstrong",number);
    }
    else{
        printf("%d is not armstrong",number);

    }
    
    return 0;

}