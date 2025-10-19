//Write a program to find the LCM of two numbers.
#include<stdio.h>
int main(){
    int num1,num2,max,lcm;
    printf("enter 2 number=\n");
    scanf("%d %d",&num1,&num2);
    
    //finding maximum of number1 and number2
    if(num1>num2){
        max=num1;
    }
    else{
        max=num2;
    }

    //loop to find lcm
    while(1){
        if(max%num1==0 && max%num2==0){
            lcm=max;
            break;
        }
        max++;

    }
    printf("LCM of %d and %d=%d",num1,num2,lcm);
    return 0;


}
