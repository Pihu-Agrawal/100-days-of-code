//Write a program to assign grades based on a percentage input.
#include<stdio.h>
#include<math.h>
int main(){
    printf("enter your grades=");
    int g;
    scanf("%d",&g);
    if(g>90){
        printf("A grade");

    }
    else if(g>80 && g<=90){
        printf("B grade");
    }
    else if(g>70 && g<=80){
        printf("C grade");
    }
    else if(g>60 && g<=70){
        printf("D grade");
    }
    else if(g>50 && g<=60){
        printf("E grade");
    }
    else if(g<=50){
        printf("F grade");
    }
    return 0;
}