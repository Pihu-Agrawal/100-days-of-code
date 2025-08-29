//Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
#include<stdio.h>
#include<math.h>
int main(){
    printf("enter a number=");
    int n;
    scanf("%d",&n);
    if(n>=0){
        if(n==0){
            printf("number is 0");
        }
        else {
            printf("%d is positive",n);
        }
    }

    else{
        printf("%d is negative",n);
    }
    return 0;
}


            