//-> WAP to take input radius & print area and circumference of circle.


#include<stdio.h>

int main(void){
    const float pi=3.14;
    float r,area,circ;
    printf("Enter the value of r : ");
    scanf("%f",&r);
    area = pi*r*r;
    circ = 2*pi*r;
    printf("\nThe circumference of circle is : %f",circ);
    printf("\nThe area of circle is : %f",area);
    return 0;
}