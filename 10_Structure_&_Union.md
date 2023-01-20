# Structure

* Structure is a user-defined datatype available in C that stores different data types.
* All the Structure elements are store at contiguous memory location. 
* Structure type variable can store more than one data item of varying data type under one name.
* Every member within structure is assigned a unique memory location.
*  **Total size of the structure is the size of sum of every data members.** 

## Declaration of Structure
* Structure use ```struct``` keyword.
```C
// Syntax
struct [name of structure]
{
   type member1;
   type member2;
   type member3;
};
// Example 
struct student
{
   char stu_name[80];
   int stu_roll;
   float marks;
};
```

* Example with code

```c
#include<stdio.h>

struct student
{
    char name[30];
    int age;
};

int main()
{
    struct student s1; // making a struct s1
    printf("Enter name: "); // getting the name.
    scanf("%s", &s1.name); 
    printf("Enter age: "); // getting the age.
    scanf("%d", &s1.age);

    // printing the s1 struct.
    printf("\nName is : %s",s1.name);
    printf("\nAge is : %d",s1.age);
}
    return 0;
```

# Union

*  Union is a user-defined data type, just like structure. Union Combines object of different type and size together.
* The memory allocation is better in union when we compare it with structure. The Union allocates the memory space equal to the space to hold the largest variable of union.
* In union, a memory location is shared by all the data members.
* **The Total size of the union is the size of the largest data members.**

```C
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
   // structure return only one value so comment age name any one of them...
}

```

## Difference b/w Structure and union


|Structure|Union|
|--|--|
|```struct``` keyword for define structure.| ```union``` keyword for define union|.
|Every Memory within the structure assign unique memory location.|In Union, The memory location shared by all the members.|
|Changing the value of one member not effect the other.|Changing the value of one member will effect the other.|
|It enable you to initialize several members at once.|It enable you to initialize the only first member.|
|The total size of the structure is the sum of the all members of the structure.|The total size of the structure is the size of largest data member.|
|It mainly uses to store various data-type.|It mainly uses to store one of the many data type that are available. |
|It occupies space for the each and every member written in inner parameters.|It occupies space for a member having highest size written in inner.|
|You can retrieve any member at a time. | You can access one member at a time in the union.
|It support flexible array.|It does't support flexible array.|


### Advantages & disadvantages of Structure
>Advantages :
* Structure gather more than one piece of data
* It is very easy to maintain as we can represent the whole record in by using single name. 
* we can use array of structure to store more record with Similar type.

>Disadvantages :
* If the Complexity of project goes beyond it is difficult to manage.
* Structure is slower because memory management is not good.


### Advantages & disadvantages of Union
>Advantages :
* It occupies less memory compare to structure.
* when we use union the least variable can directly accessed.
* It enable you to hold data of only one data member.

>Disadvantages :
* You can use only use one union member at a time.
* Union assign one common storage from all the members.

***
>End :)

> Thanks for Reading ;). Support [@veilsec](https://sahilwep.github.io/about/) [@sahilwep](https://sahilwep.github.io/about/) 
 

> Respect Open Source {-_*}!
***