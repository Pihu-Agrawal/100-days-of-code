//Write a program to display the day of the week based on a number (1–7) using switch-case.
#include<stdio.h>
#include<math.h>
int main(){
    printf("enter day(1-7)=");
    int day;
    scanf("%d",&day);
    switch(day){
        case 1: printf("monday");
        break;
        case 2: printf("tuesday");
        break;
        case 3: printf("wednesday");
        break;
        case 4: printf("thursday");
        break;
        case 5: printf("friday");
        break;
        case 6: printf("saturday");
        break;
        case 7: printf("sunday");
        break;
        default: printf("not a valid day");
        break;
    
    }
    return 0;
}


