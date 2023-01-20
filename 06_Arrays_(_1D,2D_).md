# Arrays

* Array is a collection to similar or homogenous datatype in which each element is unique & located at contiguous (continuos/sequential) memory location.
* Array store multiple values of same datatype.
* Values in array i known as array elements.
* We can create array of int ,char & string etc.
* Array is an ordered list values.

Initialization array.
`int arr[6] = {8,7,16,23,33,77}`


Pictorial Representation.
|index|0|1|2|3|4|5|
|-----|-----|-----|----|-----|-----|---|
|values| 8 | 7  | 16 | 23 | 33 | 77 |

* Here we create array of size 6.
* An array of size n is index from 0 to N-1.
* If an array holds 6 value that are index from 0 to 5.


## 1-D Array 

* Same datatype list of unique values.
* int, float, char, float, double...

### Declaring Array Input/Output

`datatype array_name[size];`

```C
int  marks[4]={64,87,56,74};
float  marks[4]={64.3,87.5,56.7,74.3};
int roll[100];
```
> Insert and print the element of array
```C
int marks[5]{9,10,18};
scnaf("%d" , &marks[3]);  // here user put 44

printf("%d" , marks[0]); // output is 9
printf("%d" , marks[2]); // output is 18
printf("%d" , marks[3]); // output is 44
```
> Insert and print array element using loops.
```C
#include <stdio.h>

int main(void){

    int arry[10];

    // Input
    for(int i = 0 ; i< 9 ; i++){
        printf("Enter the arry[%d]",i);
        scanf("%" , &arry[i]);
    }
    // Output
    for(int i = 0 ; i<9 ; i++){
        printf("arry[%d] = %d " ,i, arry[i]);
    }
    return 0;
}
```

## 2-D Array
* Two Dimensional is a simplest type of a multi-dimensional array.
* In C 2-D array is also known as Matrix, a matrix can be represent as table in a form of row & column.

``data_type name[size][size];``
### Declaring Array Input/Output

```C
// Input 

int x[2][3]={0,1,2,3,4,5}; // 1st method.
int x[2][3]={{0,1},{2,3},{4,5}}; // 2nd method.
// Third method
int arr[3][4];
for(int i = 0; i<3; i++){
    for(int j = 0 ; j<4; j++){
        scnaf("%d", &arr[i][j]); // taking input
    }
}

// Output
for(int i = 0 ; i<3; i++){
    for(int j = 0 ; j<4; j++){
        printf("%d\t",arr[i][j]);
    }
    printf("\n"); // line change after each row.
}
```
| array[ i ][ j ]|Column 0 | Column 1 | Column 2| column 3| ...|
|---|---------|----------|---------|---------|----|
|Row 0| arr[0][0] |arr[0][1]| arr[0][2]| arr[0][3] |...|
|Row 1| arr[1][0] |arr[1][1]| arr[1][2]| arr[1][3] |...| 
|Row 2| arr[2][0] |arr[2][1]| arr[2][2]| arr[2][3]|...|
|Row 2| arr[3][0] |arr[3][1]| arr[3][2]| arr[3][3]|...|
|...|...|...|...|...|...|

> simple array input output program.
```C
#include<stdio.h>
int main(void){
    int arry[3][4];

    // input
    for(int i = 0 ; i<3 ; i++){
        for(int j = 0 ; j<4 ; j++){
            printf("Enter the array[%d][%d]: " , i , j);
            scanf("%d",%arr[i][j]);
        }
    } 
    // Output
    for(int i = 0 ; i<3 ; i++){
        for(int j = 0 ; j<4 ; j++){
            printf("%d\t"arry[i][j]);  // output in the form of matrix.
        }
        printf("\n");
    } 
    return 0;
}

```

> making a function that print array.
```C
int main(void){
    int arry[3][4];
    ...
    ...
    print_arr(arry);
    ...
    ...
    return 0;
}

int print_arr(int array[3][4]){
    // output
    for(int i = 0; i<3; i++){
        for(int j = 0 ;j<4 ; j++){
            printf("%d\t " , array[i][j]);
        }
        printf("\n");
    }
}
```
### Matrix Multiplication

```C
#include<stdio.h>

int main(void){

    int arr[3][3]={{2,3,4},{1,2,3},{1,3,4}};
    int brr[3][3]={{1,2,3},{3,1,3},{1,3,4}};
    int crr[3][3];

    // operation
    for(int i = 0; i<3 ; i++){
        for(int j = 0; j<3 ; j++){
            crr[i][j]=0;
            for(int k = 0 ; k<3 ; k++){
                crr[i][j]+=arr[i][k]*brr[k][j];
            }
        }
    }
   // print the result.
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            printf("%d\t",crr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
```

### Matrix Addition

```C
#include<stdio.h>

int main(void){
    int arr[3][3] = {{1, 1, 1}, {1, 1, 1}, {1, 1, 1}};
    int brr[3][3] = {{1, 1, 1}, {1, 1, 1}, {1, 1, 1}};
    int crr[3][3];

    // operations
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                crr[i][j] = arr[i][j] + brr[i][j];
            }
        }
    }
    // print the output
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", crr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
```

## Size of an array
* Suppose we have an array list that is very long, how we can find the size of array if we didn't declare the size of an array...
x
``Size = sizeof(array_list) / sizeof(any_array_index)`` 
> Example

```C
int arr[]={3,4,5,6,7,8,9,10,11,12,13,14,15,16}; // suppose we have long list...
int size = sizeof(arr)/sizeof(arr[0]);
printf("%d", size);
```




***
>End :)

> Thanks for Reading ;). Support [@veilsec](https://sahilwep.github.io/about/) [@sahilwep](https://sahilwep.github.io/about/) 
 

> Respect Open Source {-_*}!
***