//write a program to calculate the area and perimeter of a rectangle given its length and breath
#include<stdio.h>
#include<math.h>
int main(){
    printf("enter length=");
    int l;
    scanf("%d",&l);
    printf("enter breath=");
    int b;
    scanf("%d",&b);
    printf("primeter of the rectangle=%d\n",(2*l+2*b));
    printf("area of rectangle=%d",l*b);
    return 0;
}