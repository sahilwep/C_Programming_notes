#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[30];
    int k = 0;

    // input
    printf("Enter the string : ");
    scanf("%s", &str);

    // output
    while (str[k] != '\0')
    {
        printf("%c", str[k++]);
    }

    return 0;
}