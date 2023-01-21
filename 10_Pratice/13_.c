//-> WAP to take input two angle of triangle and find the third angle..

#include<stdio.h>

int main(void){

    int a1,a2,a3;
    printf("\n Enter the first angle : ");
    scanf("%d",&a1);
    printf("\n Enter the second angle : ");
    scanf("%d",&a2);
    a3 = (180-(a1+a2));
    printf("\n Third angle is : %d",a3);


    return 0;
}