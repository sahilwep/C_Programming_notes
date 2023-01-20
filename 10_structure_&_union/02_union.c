#include<stdio.h>

union student
{
    char name[80];
    int age;
};

int main()
{
    union student s1; // making a struct s1
   
    printf("Enter name: ");
    scanf("%s",&s1.name);
   
    printf("Enter age: ");
    scanf("%d", &s1.age);
   

    // passing struct as an argument
    printf("\nName is : %s",s1.name);
    printf("\nAge is : %d",s1.age);
    return 0;
    // structure return only one value so comment age or name any one of them...
}