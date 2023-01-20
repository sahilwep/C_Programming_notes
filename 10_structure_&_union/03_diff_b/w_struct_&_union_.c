#include <stdio.h>

struct student
{
    int roll;
    char name[40];
};

union teacher
{
    int roll;
    char name[40];
};

int main(void)
{
    int store1,store2;
    struct student s1,s2,s3;
    union teacher t1; 
    s1.name = "sahlwep";
    s1.roll = 1;

    t1.name = "sahilwep";
    t1.roll = 1;

    store1 = sizeof(s1.name);
    store2 = sizeof(t1.name);

    printf("\nsize of the struct is : %d", store1);
    printf("\nsize of the union is : %d", store2);
    return 0;
}