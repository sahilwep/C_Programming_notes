//-> WAP to take input base and height of a triangle and find the area..

#include<stdio.h>

int main(void){

    int b,h,area;
    printf("\n Enter the base : ");
    scanf("%d",&b);
    printf("\n Enter the height : ");
    scanf("%d",&h);
    area = (b*h)/2;
    printf("\n Area = %d",area);

    // input -> 12 , 18 || output -> 108

    return 0;
}
