/* make a program to print */
#include<stdio.h>

int main(){
    int i,j,temp;
    printf("Enter the first no : ");
    scanf("%d",&i);
    printf("Enter the Second no : ");
    scanf("%d",&j);
    //before swap
    printf("\nValue before swaping 1st=%d , 2nd=%d",i,j);
    // swap
    temp=i;
    i=j;
    j=temp;
    //after swap
    printf("\nValue after swaping 1st=%d , 2nd=%d",i,j);
    return 0;
}