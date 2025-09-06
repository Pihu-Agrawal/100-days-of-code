/* Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.
*/
#include<stdio.h>
#include<math.h>
int main(){
    printf("enter the number of days late=");
    int day;
    scanf("%d",&day);
    if(day<=5){
        printf("fine=%d",day*2);
    
    }
    else if(day>5 && day<=10){
        printf("fine=%d",(day*4)-(5*2));
    }
    else if(day>10 && day<=30){
        printf("fine=%d",(day*6)-30);
    }
    else{

        printf("member ship cancelled");
    }
}

