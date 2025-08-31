// Write a program to input three numbers and find the largest among them using if–else.
#include<stdio.h>
#include<math.h>
int main(){
    printf("enter a,b,c\n");
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c){
        printf("a is the largest");
    }
    else if(b>a && b>c){
        printf("b is the largest");
    }
    else{
        printf("c is the largest");
    }
    return 0;
}

