// -> WAP to print even no series..

#include<stdio.h>

int main()
{
    int i, count=0, j ,n ;
    printf("\nEnter the nth no : ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)     
    {
        if( i % 2 == 0 ){
            printf(" %d ",i);
        }
    }


    return 0;
}
