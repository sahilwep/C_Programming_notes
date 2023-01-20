# Function
* Function Contain set of instruction enclose by { } curly-braces which perform specific operations.
* Every C program has at-least 1 function which is : `main()`

## How to declare the function
* Function is declared in 3 parts. 
  * function deceleration
  * function calling
  * function definition
### Function deceleration
* We declare Function in global deceleration section after the headers files.

```C
return_type function_name(argument_list)
```
>example
```C
#include<stdio.h>

int func(int x); // Function deceleration

main(){
    ...
    ...
}
```


### Function calling
* We call the function from `main()` function.
* Parameter : Parameter are the arguments that are passed.
  * Formal Parameter : This is argument which is used in function definition.
  * Actual Parameter : This is argument that passed in function calling.
* Calling function can be done by two method.
  * Call by value :
    *  The copy of the variable is passed to the function as parameter. 
    * The value of actual parameter cannot be modified by the formal parameter.
    *  different memory allocated for both actual and formal parameter.
  * Call by reference :
    * The address variable is passed in the function as parameter.
    * The value of actual parameter can be change by the formal parameter.
    * Same memory is allocated for both actual and formal parameter.

```C
function_name(argument);
```
>example

```C
int func(int x); 

int main(){
    int x;
    ...
    x = func(x); // Function calling, Actual Parameter.
}
```
### Function definition

* In this section we define the function, or we can say we write out function code logic.

```C
function_name(arguments){
    code_logic;
    code_logic;
}
```
>example
```C
#include<stdio.h>
int func(int x);

int main(){ // main function.
    ...
    ...
}

int func(int x){ // Function definition.
    ...
    code;   
}
```
***

> Example : Simple add function

```C
#include<stdio.h>

int add(int x, int y);     // function deceleration

int main(void){
    int a= 10, b = 20, result;
    result = add(a,b);    // function calling
    printf("sum is : %d",result );
    return 0;
}

int add(int x, int y){     // function definition
    int sum;
    sum = x + y;
    return sum;
}
```

> Example : call by value

```C
#include<stdio.h>

int add(int x, int y);

int main(void){
    int a= 10, b = 20, result;
    result = add(a,b);       //  call by value , actual parameter
    printf("sum is : %d",result );
    return 0;
}

int add(int x, int y){     //  formal parameter
    int sum;
    sum = x + y;
    return sum;
}
```

> Example : call by reference
```C
#include<stdio.h>

void swap(int *x, int *y);

int main(void){
    int m = 10, n = 20, result;
    printf("the address of value m=%d and n=%d " , &m , &n);
    swap(&m,&n);    //call by reference , actual parameter
    return 0;
}

void swap(int x, int y){     // formal parameter.
    int temp;
    temp  = *x;
    *x = *y;
    *y = temp;
    printf("the address of value m=%d and n=%d " , *x , *y);    
}
```
## Types of function
* There are mainly 4 type of function.
  * Function with no argument  and no return value.
  * Function with no argument  and return value.
  * Function with argument  and no return value.
  * Function with argument  and return value.


### Function with no argument  and no return value.

```C
#include<stdio.h>

void add();

int main(void){
    add();
    return 0;
}

void add(){
    int x=10,y=20,sum;
    sum = x + y;
    printf("sum is : %d",sum);
}
```

### Function with no argument  and return value.


```C
#include<stdio.h>

int add();

int main(void){
    int result;
    result = add();
    printf("sum is : %d",result);
    return 0;
}

int add(){
    int x=10,y=20,sum;
    sum = x + y;
    return sum;
}
```


### Function with argument  and no return value.


```C
#include<stdio.h>

void add(int a , int b);

int main(void){
    int x=10,y=20,sum;
    add(x,y);
    return 0;
}

void add(int a,int b){
    sum = a + b;
    printf("sum is : %d",sum)
}
```
### Function with argument  and return value.


```C
#include<stdio.h>

int add(int x, int y);

int main(void){
    int a=10,b=20,result;
    result = add(a,b);
    printf("sum is : %d",result);
    return 0;
}

int add(int x, int y){
    sum = x + y;
    return sum;
}
```





***
>End :)

> Thanks for Reading ;). Support [@veilsec](https://sahilwep.github.io/about/) [@sahilwep](https://sahilwep.github.io/about/) 
 

> Respect Open Source {-_*}!
***