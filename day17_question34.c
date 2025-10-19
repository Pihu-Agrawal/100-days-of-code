// Write a program to check if a number is prime.
#include<stdio.h>
int main(){
    int n;
    int is_prime=1;
    printf("enter the number=");
    scanf("%d",&n);
    //0 and 1 are not prime.
    if(n<=1){

       is_prime=0;
    }
    else{
    for(int i=2;i<n;i++){
        if(n%i==0){
            is_prime=0;
            break;
        }
    }
}
    if(is_prime==1){
        printf("prime");
    }
    else{
        printf("not prime");
    }
    return 0;


}