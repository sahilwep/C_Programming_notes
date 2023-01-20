#include <stdio.h>

int main(void)
{

    char arr[10];

    // input
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the array[%d] : ", i);
        scanf("%d", &arr[i]);
    }

    // output
    for (int i = 0; i < 5; i++)
    {
        printf("\nThe array[%d] = %d ",i,arr[i]);
    }
    return 0;
}