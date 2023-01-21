// -> WAP to print factorial of any given no..

#include<stdio.h>

int main(void){

    long int num,fact=1;
    printf("\nEnter th no : ");
    scanf("%ld",&num);
    for(long int i=1;i<=num;i++){
        fact=fact*i;
    }
    printf("\nfact = %ld",fact);


    return 0;
}