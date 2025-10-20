//Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
#include<stdio.h>
#include<math.h>
int main(){
    int n;
    float sum=1.0;
    float num=3.0;
    float dino=4.0;
    printf("enter the number of terms=");
    scanf("%d",&n);

    if(n==1){
        printf("sum=1");
    }
    else{
    for(float i=2;i<=n;i++){

        
            
      sum=sum+num/dino;
      num=num+2;
      dino=dino+2;

        
    }
    printf("sum=%.2f",sum);

}
return 0;


}
