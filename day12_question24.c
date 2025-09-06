/*Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit
*/
#include<stdio.h>
#include<math.h>
int main(){
    printf("enter the unit consumed=");
    int u;
    scanf("%d",&u);
    if(u>=1 && u<=100){
        printf("electricity bill=%d",5*u);
    }
    else if(u>100 && u<=200){
        printf("electricity bill=%d",(7*u)-(2*100));
    }
    else if(u>200 && u<=300){
        printf("electricity bill=%d",(10*u)-800);
    }
    else if(u>300){
        printf("electricity bill=%d",(u*12)-1400);
    }
}


