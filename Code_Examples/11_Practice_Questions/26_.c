// -> WAP to print Fibonacci series..

#include<stdio.h>

int main(void){

    int first = 0, second = 1 , next, num;
    next = first + second;
    //input
    printf("Enter the last nth no : ");
    scanf("%d",&num);
    printf("fibonacci series : %d  %d ",first,second);
    for(int i=0;i<num;i++){
        printf(" %d ",next);
        first = second;     // swaping first value with second value
        second = next;      // swaping second value with next value
        next = first + second;  //storing next value in -> first + second
    }

    return 0;
}
