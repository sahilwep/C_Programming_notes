//  -> write a program to check the no is even & less than 20 

#include<stdio.h>

int main(void){

    int num;
    printf("\nEnter the no : ");
    scanf("%d",&num);
    if(num<20){
        if(num % 2 != 0){
            printf("%d is not even but less than 20",num);
        }
        else{
            printf("%d is even and less than 20",num);
        }
    }
    else{
        printf("%d no is not less than 20",num);
    }

    return 0;
}

