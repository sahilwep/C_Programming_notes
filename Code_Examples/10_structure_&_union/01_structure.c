#include<stdio.h>

struct student
{
    char name[30];
    int age;
};

int main()
{
    struct student s1; // making a struct s1
    printf("Enter name: ");
    scanf("%s", &s1.name);

    printf("Enter age: ");
    scanf("%d", &s1.age);

    // passing struct as an argument
    printf("\nName is : %s",s1.name);
    printf("\nAge is : %d",s1.age);
    return 0;
}


