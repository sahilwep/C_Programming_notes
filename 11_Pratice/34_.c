// -> WAP to print the to check the week with number order using switch case 

#include<stdio.h>


int main(void){

    int num;
    printf("\nEnter the no : ");
    scanf("%d",&num);
    switch(num){
        case 1 : 
            printf("\n Mon");
            break;
        case 2 : 
            printf("\n Tue");
            break;
        case 3 : 
            printf("\n Wed");
            break;
        case 4 : 
            printf("\n Thr");
            break;
        case 5 : 
            printf("\n Fri");
            break;
        case 6 : 
            printf("\n Sat");
            break;
        case 7 : 
            printf("\n Sun");
            break;
        default :
            printf("\n error");
            
    }


    return 0;
}
