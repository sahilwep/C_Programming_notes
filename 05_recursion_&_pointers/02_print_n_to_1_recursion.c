/*
#include <stdio.h>

int rec(int x);

int main(void)
{

    int n;
    printf("Enter the no : ");
    scanf("%d", &n);

    rec(n);

    return 0;
}

int rec(int x)
{

    if (1 > x)
    {
        return 0;
    }
    else
    {

        printf("%d ", x);
        rec(x - 1);
    }
}
*/

#include <stdio.h>

int rec(int x, int y);

int main()
{

    int x;
    printf("Enter the no : ");
    scanf("%d", &x);
    rec(1, x);
    return 0;
}
int rec(int x, int y)
{
    if (x > y)
    {
        return 0;
    }
    else
    {

        rec(x + 1, y);
        printf("%d ", x);
    }
}