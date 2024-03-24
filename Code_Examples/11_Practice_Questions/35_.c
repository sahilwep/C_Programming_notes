// -> WAP to print the to check the months with number order using switch case 

#include<stdio.h>


int main(void){

    int num;
    printf("\nEnter the no : ");
    scanf("%d",&num);
    switch(num){
        case 1 : 
            printf("\n jan");
            break;
        case 2 : 
            printf("\n feb");
            break;
        case 3 : 
            printf("\n mar");
            break;
        case 4 : 
            printf("\n apr");
            break;
        case 5 : 
            printf("\n may");
            break;
        case 6 : 
            printf("\n jun");
            break;
        case 7 : 
            printf("\n jul");
            break;
        case 8 : 
            printf("\n aug");
            break;
        case 9 : 
            printf("\n sept");
            break;
        case 10 : 
            printf("\n oct");
            break;
        case 11 : 
            printf("\n nov");
            break;
        case 12 : 
            printf("\n dec");
            break;
        default :
            printf("\n error");
            
    }


    return 0;
}
