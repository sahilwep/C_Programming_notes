// -> WAP to calculate percentage of five sub..

#include<stdio.h>

int main(void){

    int sub1,sub2,sub3,sub4,sub5,store;
    printf("Enter the marks for sub1 : ");
    scanf("%d",&sub1);
    printf("Enter the marks for sub2 : ");
    scanf("%d",&sub2);
    printf("Enter the marks for sub3 : ");
    scanf("%d",&sub3);
    printf("Enter the marks for sub4 : ");
    scanf("%d",&sub4);
    printf("Enter the marks for sub5 : ");
    scanf("%d",&sub5);

    // percent of 5 sub => sub(1..5)*100/500
    store = ((sub1+sub2+sub3+sub4+sub5)*100)/500;
    printf("\npercent = %d */.",store);

    // for 6 sub just divide with 600 

    return 0;
}
