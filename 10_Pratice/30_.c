// -> WAP to print the sum of  number from 0 to n (take n as input)...

#include<stdio.h>

int main(void){
    int num,sum=0;
    printf("\n Enter the no : ");
    scanf("%d",&num);
    for(int i=0;i<=num;i++){
        sum = sum+i;
    }
    printf("\n Sum is : %d",sum);




    return 0;
}
