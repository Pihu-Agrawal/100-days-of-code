//Write a program to find the roots of a quadratic equation and categorize them.
#include<stdio.h>
#include<math.h>
int main(){
    printf("enter a,b,c of quadratic equation\n");
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int D=(b*b)-(4*a*c);
    
    if(D>0){
        printf("roots are real and different: ");
        int root1= (-b + sqrt(D))/(2*a);
        int root2= (-b - sqrt(D))/(2*a); 
        printf("%d,%d", root1,root2);
    }
    else if(D==0){
        printf("roots are real and equal: ");
        int root=-b/(2*a);
        printf("%d",root);
        }
    else{
        printf("roots are complex");
    }
    return 0;
}
