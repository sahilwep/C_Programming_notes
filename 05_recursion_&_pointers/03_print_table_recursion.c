#include <stdio.h>

int table(int x, int y);

int main(void)
{

    int n;
    printf("Enter the table no : ");
    scanf("%d", &n);
    table(1, n);

    return 0;
}

int table(int x, int y)
{

    printf("\n%d x %d = %d", x, y, x * y);
    if (x < 10)
    {
        return table(x + 1, y);
    }
    else
    {
        return 0;
    }
}