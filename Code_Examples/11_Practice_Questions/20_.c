//-> write a program to check the no is divisible by 5 and less than 40...

#include<stdio.h>

int main(void){

    int num;
    printf("\nEnter the no : ");
    scanf("%d",&num);
    if(num<40){
        if(num % 5 != 0){
            printf("%d is not div by 5 but less than 40",num);
        }
        else{
            printf("%d is div by 5 and less than 40",num);
        }
    }
    else{
        printf("%d no is not less than 40",num);
    }

    return 0;
}
