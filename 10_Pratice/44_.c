//  -> WAP to take the input from users into 1D Array & print the output.

#include <stdio.h>

int main(void)
{

    int arry[100], n;
    printf("Enter the range of array : ");
    scanf("%d", &n);
    printf("\n");

    for (int i = 0; i < n; i++)
    {
        printf("Enter the array[%d] : ", i);
        scanf("%d", &arry[i]);
    }

    printf("\n\narray values are : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", arry[i]);
    }

    return 0;
}