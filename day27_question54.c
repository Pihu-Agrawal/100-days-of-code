/* Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *          */


//first four line
#include<stdio.h>
int main(){
    int count=1;
    for(int i=7;i>=1;i--){
        if(i%2!=0){
        for(int k=count;k<=3;k++){
            printf(" ");
        }
        for(int j=i;j<=7;j++){
            printf("*");
        }
        printf("\n");
        count++;
    }
}


//last 3 line
int _count=3;
for(int i=5;i>=1;i--){
        if(i%2!=0){
        for(int k=_count;k<=3;k++){
            printf(" ");
        }
        for(int j=i;j>=1;j--){
            printf("*");
        }
        printf("\n");
        _count--;
    }
}
    return 0;
}