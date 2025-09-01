//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
#include<stdio.h>
#include<math.h>
int main(){
    printf("enter the sides of triangle\n");
    int a,b,c;
    
    scanf("%d %d %d" ,&a,&b,&c);

    if(a==b && b==c){
        printf("equilateral triangle");
    }
    else if(a!=b && b!=c && c!=a){
        printf("scalene triangle");

    }
    else if(a==b && a!=c || b==c && b!=a || c==a && a!=b){
        printf("isosceles triangle");
    }
    return 0;

}