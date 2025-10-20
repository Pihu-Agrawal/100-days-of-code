//Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
#include<stdio.h>
int main(){
    int n;
    float sum=0;
    float num=2.0;
    float dino=3.0;
    
    printf("enter the number of terms=");
    scanf("%d",&n);

    for(float i=1;i<=n;i++){
      sum=sum+num/dino;
      num=num+2;
      dino=dino+4;

        
    }
    printf("sum=%.2f",sum);

}
