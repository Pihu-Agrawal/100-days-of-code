//Write a program to swap the first and last digit of a number.[without array/string]
#include<stdio.h>
#include<math.h>
int main(){
    int n,count=0;
    printf("enter the number=");
    scanf("%d",&n);
    int temp=n;

    //finding number of digits.
    while(temp>0){
        count++;
        temp=temp/10;
    }
    //final value of count is number of digits
    
    int last_digit=n%10;//last digit is the remainder left after dividing by 10.

    int first_digit= n / pow(10,count-1);//first digit=nuber/10^(number of digit-1)

    int m=first_digit*pow(10,count-1);/*finding middle digits*/
    int middle_digits= n-(last_digit+m);

   int number=last_digit*pow(10,count-1)+first_digit+middle_digits;//number after reversing first and last digits
   printf("number after reversing first and last digit=%d",number);

   return 0;


}
