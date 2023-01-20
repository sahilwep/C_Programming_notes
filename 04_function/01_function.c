#include <stdio.h>

void input(int a, int b);
void add(int a, int b);

int main(void)
{

    int a, b, c;
    input(a, b); // taking input.

    return 0;
}

void input(int a, int b) // Input function
{
    printf("Enter the value of a : ");
    scanf("%d", &a);
    printf("Enter the value of b : ");
    scanf("%d", &b);
    add(a, b);
}

void add(int a, int b) // Add function
{

    printf("The sum of %d & %d is : %d ", a, b, a + b);
}