//Write a program to calculate the factorial of a number.
#include<stdio.h>
int main(){
    int n;
    int fac=1;
    printf("enter the number=");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        fac=fac*i;
    }
    printf("factorial of the number %d= %d",n,fac);
    return 0;
}