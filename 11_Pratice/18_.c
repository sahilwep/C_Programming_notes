// -> write a program to check no is odd or not 

#include<stdio.h>

int main(void){

    int num;
    printf("\nEnter the no : ");
    scanf("%d",&num);
    if(num % 2 != 0 ){
        printf("%d is odd",num);
    }
    else{
        printf("%d is not odd",num);
    }



    return 0;
}
