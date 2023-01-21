// -> WAP to print prime no' series..

#include<stdio.h>

int main()
{
    int i, count=0, j ,n ;
    printf("\nEnter the nth no : ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)     // this loop will work in range from 1 to n no...
    {
        for(j=2; j<i; j++)  // this loop will work in find the correct conditions..
        {
           if( i % j == 0 ) // condition for not prime...
           {
               count++;
               break;
           }
        }
        if(count==0 && i!=1)    // condition for prime
            printf("%d\n", i);
        else{
        count = 0;
        }
    }


    return 0;
}
