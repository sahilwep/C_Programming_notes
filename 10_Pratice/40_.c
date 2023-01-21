// -> WAP to use concept of pointers(make a pointer variable & normal variable, store the address of normal variable into the pointer variable and print it...).


#include<stdio.h>

int main(void){

    int a;
    int *ptr;
    ptr = &a;   // storing the var a address
    printf("Enter the value : ");
    scanf("%d",&a);

    printf("\n Address of var %d is : %d", a, &a );
    printf("\n address value stored in pointer variable is : %d", ptr );
    printf("\n Address of pointer variable is : %d", &ptr );
    printf("\n Value of ptr variable is pointing to is : %d", *ptr );




    return 0;
}