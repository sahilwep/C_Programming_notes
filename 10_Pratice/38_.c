//  -> WAP to add two no using functions with argument & no return vlaue.

#include<stdio.h>

void func(int a, int b);

int main(void){
    
    int a,b;
    printf("Enter the value of a : ");
    scanf("%d",&a);
    printf("Enter the value of b : ");
    scanf("%d",&b);    
    func(a,b);
    return 0;
}

void func(int a,int b){

    int c = a+b;    
    printf("\nThe sum of  a & b is : %d",c);
      
}