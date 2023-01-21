//  -> WAP to add two no using functions with argument &  return vlaue.

#include<stdio.h>

int func(int a, int b);

int main(void){
    
    int a,b,store;
    printf("Enter the value of a : ");
    scanf("%d",&a);
    printf("Enter the value of b : ");
    scanf("%d",&b);    
    store = func(a,b);
    printf("\nThe sum of  %d & %d is : %d",a,b,store);
    return 0;
}

int func(int a,int b){
    int c = a+b;    
    return c;
}