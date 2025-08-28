//Write a program to swap two numbers without using a third variable.
#include<stdio.h>
int main(){
    int a,b;
    printf("enter a=");
    scanf("%d",&a);
    printf("enter b=");
    scanf("%d",&b);
    printf("before swapping\n");
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    printf("after swapping\n");
    printf("a=%d\n",b);
    printf("b=%d",a);
    return 0;
}