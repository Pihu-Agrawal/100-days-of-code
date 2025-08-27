//write a program to input 2 numbers and display their sum, differance,product, and quotient
#include<stdio.h>
#include<math.h>
int main(){
    printf("enter a=");
    int a;
    scanf("%d",&a);
    printf("enter b=");
    int b;
    scanf("%d",&b);
    printf("sum=%d\n",a+b);
    printf("difference=%d\n",a-b);
    printf("product=%d\n",a*b);
    if(b!=0){
        printf("quotient=%d\n",a/b);

    }
    return 0;
    }