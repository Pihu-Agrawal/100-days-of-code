//Write a program to find and display the sum of the first n natural numbers.
#include<stdio.h>
#include<math.h>
int main(){
printf("enter the number=");
int n;
scanf("%d",&n);
int sum=0;
for(int i=1;i<=n;i++){
    sum=sum+i;

}
printf("sum=%d",sum);
return 0;
}

