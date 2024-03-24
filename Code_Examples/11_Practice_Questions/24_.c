//-> WAP to print number from n to 0 (take n as input)...
#include<stdio.h>

int main(void){

    // // while
    // int num;
    // printf("\n Enter the no : ");
    // scanf("%d",&num);
    // while(1<=num){
    //     printf(" %d ",num);
    //     num--;
    // }

    // // for
    // int num;
    // printf("\n Enter the no : ");
    // scanf("%d",&num);
    // for(int i=num;i>=0;i--){
    //     printf(" %d ",i);
    // }
    
    // // do-while
    int num;
    printf("\n Enter the no : ");
    scanf("%d",&num);
    do{
        printf(" %d ",num);
        num--;
    }while(num>=0);
    


    return 0;
}