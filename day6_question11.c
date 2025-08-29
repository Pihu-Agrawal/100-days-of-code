// Write a program to input an integer and check whether it is even or odd using if–else.
#include<stdio.h>
#include<math.h>
int main(){
    printf("enter the number=");
    int n;
    scanf("%d",&n);
    if(n%2==0){
        printf("%d is even",n);
    }
    else{
    printf("%d is odd",n);
    }
    return 0;
    
}