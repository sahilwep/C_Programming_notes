// ->-> WAP to apply the goto statements..


#include<stdio.h>

int main(void){

    int num,k;
x1:
    printf("\nEnter the opitons \n1 -> check \n2 -> exit\n = ");
    scanf("%d",&k);
    if(k==1){
        printf("\nEnter the even no only : ");
        scanf("%d",&num);
        if(num % 2 == 0){
            printf("\n You Press even \n cong.. ");
            printf("\n Password is = babygirl");
        }
        else{
            printf("\n ops you didn't press even..\n\n");
            goto x1;
        }
    }
    return 0;
}