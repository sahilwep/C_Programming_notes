//-> WAP to print number from 0 to n (take n as input) using while , for & do while loops...

#include<stdio.h>

int main(void){

    // // using while 
    // int num,i=0;
    // printf("\nEnter the no : ");
    // scanf("%d",&num);
    // printf("\nNo is : ");
    // while(i<=num){
    //     printf("%d ",i);
    //     i++;
    // }

    // // using for
    // int num;
    // printf("\nEnter the no : ");
    // scanf("%d",&num);
    // printf("\nNo is : ");
    // for(int i=0;i<=num;i++){
    //     printf("%d ",i);
    // }
    
    // using do-while
    int num,i=0;
    printf("\nEnter the no : ");
    scanf("%d",&num);
    printf("\nNo is : ");
    do{
        printf("%d ",i);
        i++;    
    }while(i<=num);


    return 0;
}

