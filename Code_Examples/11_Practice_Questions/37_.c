//  -> WAP to add two no using functions with no argument & return vlaue.

#include<stdio.h>

int func();

int main(void){
    int total;
    total = func();
    printf("\nThe sum of  a & b is : %d",total);
    return 0;
}

int func(){

    int a,b,c;
    printf("Enter the value of a : ");
    scanf("%d",&a);
    printf("Enter the value of b : ");
    scanf("%d",&b);
    c = a+b;    
    return c;
    
    
}