// -> WAP to check the no is odd or even..


#include<stdio.h>

int main(void){

    int num;
    printf("\nEnter th no : ");
    scanf("%d",&num);
    if(num % 2 == 0){
        printf("\n even");
    }
    else{
        printf("\n odd");
    }

    return 0;
}