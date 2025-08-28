//Write a program to swap two numbers using a third variable.
#include<stdio.h>
int main(){
    int a,b,x;
    printf("enter a=");
    scanf("%d",&a);
    printf("enter b=");
    scanf("%d",&b);
    printf("before swapping\n");
    printf("a=%d\n",a);
    printf("b=%d",b);
     x=a;
     a=b;
     b=x;
    printf("\nafter swapping\n");
    printf("a=%d\n",a);
    printf("b=%d",b);
    return 0;
}

