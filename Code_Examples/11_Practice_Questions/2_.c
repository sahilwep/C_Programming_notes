// WAP to perform all arthmetic operator on integer & with float ( take input with users..

#include<stdio.h>

int main(void){

    int a,b;
    printf("Enter the first no : ");
    scanf("%d",&a);
    printf("Enter the Second no : ");
    scanf("%d",&b);
    // add
    printf("\nThe sum is : %d", a+b);
    // sub
    printf("\nThe sub is : %d", a-b);
    // multip
    printf("\nThe multip. is : %d", a*b);
    // Div
    printf("\nThe div is : %d", a/b);
    // Mod (mod gives remainder value..)
    printf("\nThe Mod is : %d", a%b);

    return 0;
}