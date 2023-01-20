#include<stdio.h>

int main()
{
    int *ptr;
    int n;

    printf("Enter the no : ");
    scanf("%d",&n);

    ptr = &n;

    printf("\n the value n is : %d",n); // value of n
    printf("\n the address of n is : %d",&n); // & operator provide the address of n
    printf("\n the address of n is : %d",ptr); // ptr variable store the address of n.
    printf("\n the pointing value in pointer variable is is : %d", *ptr); // display the point value.
    printf("\n the address of pointing value in pointer variable is is : %d", &*ptr); // display the address of the n which is & of the pointing value.
    
    return 0;
}
