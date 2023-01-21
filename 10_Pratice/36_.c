//  -> WAP to add two no using functions with no argument & no return vlaue.

#include<stdio.h>

void func();

int main(void){
    func();
    return 0;
}

void func(){

    int a,b,c;
    printf("Enter the value of a : ");
    scanf("%d",&a);
    printf("Enter the value of b : ");
    scanf("%d",&b);
    c = a+b;    
    printf("\nThe sum of  a & b is : %d",c);
    
}