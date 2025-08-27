//Write a program to calculate the area and circumference of a circle given its radius.
#include<stdio.h>
#include<math.h>
int main(){
printf("enter radius=");
float r;
scanf("%f",&r);
printf("area of circle=%f\n",3.14*r*r);
printf("circumference of circle=%f",2*3.14*r);
return 0;
}

