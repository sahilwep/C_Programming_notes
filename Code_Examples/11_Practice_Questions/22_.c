//-> write a program to check the no is odd & less than 40 

#include<stdio.h>

int main(void){

    int num;
    printf("\nEnter the no : ");
    scanf("%d",&num);
    if(num<40){
        if(num % 2 != 0){
            printf("%d is odd and less than 40",num);
        }
        else{
            printf("%d is not odd but less than 40",num);
        }
    }
    else{
        printf("%d no is not less than 40",num);
    }

    return 0;
}

