// Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include<stdio.h>
#include<math.h>
int main(){
    printf("enter time in second=");
    int sec;
    scanf("%d",&sec);
    int h=sec/3600;
    int m=(sec%3600)/60;
    int s=(sec%3600)%60;
    printf("%d:%d:%d",h,m,s);
    return 0;
    
}