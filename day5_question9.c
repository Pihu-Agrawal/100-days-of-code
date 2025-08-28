//Write a program to calculate simple and compound interest for given principal, rate, and time
#include<stdio.h>
#include<math.h>
int main(){
printf("enter principal=");
float p;
scanf("%f",&p);
printf("enter rate=");
float r;
scanf("%f",&r);
printf("enter time=");
float t;
scanf("%f",&t);
printf("enter number of time intrest applied per year=");
float n;
scanf("%f",&n);
printf("simple intrest=%f\n",(p*r*t)/100);
printf("coumpond interest=%f",(p*(pow(1+r/n,n*t))));
return 0;
}