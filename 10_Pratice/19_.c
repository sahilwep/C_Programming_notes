// -> write a program to check no is div by 5 or not 

#include<stdio.h>

int main(void){

    int num;
    printf("\nEnter the no : ");
    scanf("%d",&num);
    if(num % 5 != 0 ){
        printf("%d is not div by 5",num);
    }
    else{
        printf("%d is div by 5 ",num);
    }



    return 0;
}
