//-> WAP to find the square of a number..

#include<stdio.h>

int main(){

    int i,j;
    printf("\nEnter the no that you want to find the square : ");
    scanf("%d",&i);
    j=i*i;  // for square i*i for more cube we can increase the no of i
    printf("\nThe square of %d is : %d",i,j);
    return 0;
}