//Write a program to input a character and check whether it is a vowel or consonant using if–else.
#include<stdio.h>
#include<math.h>
int main(){
    printf("enter a letter=");
    char l;
    scanf("%s",&l);
    if(l=='a'||l=='e'||l=='i'||l=='o'||l=='u'||l=='A'||l=='E'||l=='I'||l=='O'||l=='U'){
        printf("%s is vowel");
    }
    else{
        printf("%s is consonent");
    }
    return 0;

}