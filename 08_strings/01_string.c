#include<stdio.h>
#include<string.h>

int main(void){
    char str[30];

    // input
    printf("Enter the string : ");
    scanf("%[^\n]",&str);

    // output
    printf("string is : %s ", str);

    return 0;
}