//Write a program to input a year and check whether it is a leap year or not using conditional statements.
#include<stdio.h>
#include<math.h>
int main(){
    printf("enter year=");
    int year;
    scanf("%d",&year);
    if(year%4==0 && year%100!=0){
        printf("%d is a leap year",year);

    }
    else if(year%400==0){
        printf("%d is a leap year",year);
    }
    else{
        printf("%d is not a leap year",year);
    }
    return 0;

}