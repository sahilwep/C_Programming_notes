// fibonacci series
/* concept

take nth no from user..

print first two value of series 0 & 1

first = 0
second = 1

next = first + second

make loop that goes till nth value...

inside loop swap the values...
start the loop
print( the next no )
first = second
second = next
next = first + second
end the loop

*/
#include <stdio.h>

int main(void)
{
    int first = 0, second = 1, next, n;
    next = first + second;

    printf("Enter the nth digit : ");
    scanf("%d", &n);

    printf("%d %d ", first, second);

    for(int i=0; i<n;i++){
        printf("%d ",next);
        first = second;
        second = next;
        next = first+second;

    }   

    return 0;
}



