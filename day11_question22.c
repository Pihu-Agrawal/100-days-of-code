//Write a program to find profit or loss percentage given cost price and selling price.
#include<stdio.h>
#include<math.h>
int main(){
    float cp,sp;
    printf("enter cost price and selling price=\n");
    scanf("%f %f",&cp,&sp);
    if(sp>cp){
        printf("profit=%f %%",((sp-cp)/cp)*100);
    }
    else if(sp<cp){
        printf("loss=%f %%",((cp-sp)/cp)*100);
        
    }
    else{
    printf("no profit no loss");
    }
}


