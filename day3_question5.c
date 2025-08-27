//Write a program to convert temperature from Celsius to Fahrenheit.
#include<stdio.h>
#include<math.h>
int main()
{
    float temp;
    printf("enter temperature in celsius=");
    scanf("%f",&temp);
    
    printf("temperature in fahrenheit=%f",(temp*9.0/5.0)+32);
    return 0;

}
