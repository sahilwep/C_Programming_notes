//-> WAP to convert temp from celsius to farenheit..

// formula =>   for faranheit °F = (°C × 9/5) + 32      celsius °C = (°F − 32) x 5/9 

#include<stdio.h>

int main(void){

    int f,c;
    printf("\n Program to find celsius");
    printf("\n Enter the farenheit : ");
    scanf("%d",&f);
    c = (f-32)*5/9;
    printf("\n celsius is : %d",c);    

    return 0;

    //input 70 -> result 21 here conversion is not taking float digit....
}
