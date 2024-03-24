//-> WAP to convert temp from celsius to farenheit..

// formula =>   for faranheit °F = (°C × 9/5) + 32      celsius °C = (°F − 32) x 5/9 

#include<stdio.h>

int main(void){

    int f,c;
    printf("\nProgram to find farenheit");
    printf("\nEnter the celsius : ");
    scanf("%d",&c);
    f = ((c*9/5) + 32);
    printf("\nFaranheit is : %d",f);    

    return 0;

    //input 21 -> result 69.8
}
