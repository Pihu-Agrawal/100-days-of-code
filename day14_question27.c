//Write a program to print the sum of the first n odd numbers.
#include<stdio.h>
int main(){
    int n;
    int sum=0;
    int odd=1;
    printf("enter the number of odd numbers=");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum+=odd;
        odd+=2;
    }
    printf("sum of first %d odd numbers=%d",n,sum);
    return 0;
}
