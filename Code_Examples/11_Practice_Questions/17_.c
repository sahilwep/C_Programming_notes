// -> write a program to check no is even or not 

#include<stdio.h>

int main(void){

    int num;
    printf("\nEnter the no : ");
    scanf("%d",&num);
    if(num % 2 != 0 ){
        printf("%d is not even",num);
    }
    else{
        printf("%d is even",num);
    }



    return 0;
}
