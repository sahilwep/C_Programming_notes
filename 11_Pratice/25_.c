//-> WAP to print any table (n vlaue given by input)...

#include<stdio.h>

int main(void){
    int num;
    printf("\n Enter the no : ");
    scanf("%d",&num);
    for(int i=1;i<=10;i++)  // here i put the value i<=10 because i want to print the value till 10.
    {     
    printf("\n %d x %d = %d ",num , i , num*i);
    }

    return 0;
}
