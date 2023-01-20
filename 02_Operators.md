
# Operators

* Operators are define as some special symbol that perform some operations with operands.


`` x = 30   &   y = 20  ``
`x  +  y`

``x , y`` are operands.
``+`` is operator.

* Types of Operators
  * Arithmetic Operators
  * Relational Operators
  * Logical Operators
  * Bitwise Operators
  * Assignments Operators
  * Conditional Operators
  * Special Operators

### Number Of Operands :

#### Unary Operators (single)
* One operands are required.
  * ++ post increment prefix(x++)
  * ++ pre increment prefix(++x)
  * -- post decrement prefix(x--)
  * -- pre decrement prefix(--x)
#### Binary Operators (double)
* Two operands are required.
  * a+b
  * a-b
  * a&b
  * a<=b
  * a>=b
#### Ternary Operators (triple)
* Thee operands are required.

``a > b ? printf("a") : printf("b")``
``x= a|b ``


## Arithmetic Operators

* C support all basic arithmetic operations.

|Operators |Uses|
|----|---|
|+|add two operands|
|-|sub second operand from the first operand |
|*|multiply two operands|
|/|divide numerator by denominator|
|%|Remainder of Division|
|++| Increment operator, Increase value by 1|
|--| Decrement operator, Decrease value by 1|

### Arithmetic Operator has rules
* Arithmetic Operators follows some rules Associativity and Precedence
  

| Operator |	Description of Operator 	| Associativity |
|------------|-------------|-----------| 
| . 	|   Direct member selection    |    	Left to right   |    
| -> 	|   Indirect member selection 	   |    Left to right   |    
| [] 	|   Array element reference    |    	Left to right   |    
| () 	|   Functional call    |    	Left to right   |    
| ~ 	|   Bitwise(1’s) complement 	   |    Right to left   |    
| ! 	|   Logical negation 	   |    Right to left   |    
| – 	|   Unary minus 	   |    Right to left   |    
| + 	|   Unary plus 	   |    Right to left   |    
| — 	|   Decrement 	   |    Right to left   |    
| ++ 	|   Increment 	   |    Right to left   |    
| * 	|   Pointer reference    |    	Right to left   |    
| & 	|   Dereference (Address) 	   |    Right to left   |    
| (type) 	|  Typecast (conversion)    |    	Right to left   |    
| sizeof 	|  Returns the size of an object 	   |    Right to left   |    
| % 	|   Remainder 	   |    Left to right   |    
| / 	|   Divide 	   |    Left to right   |    
| * 	|   Multiply 	   |    Left to right   |    
| – 	|   Binary minus (subtraction)    |    	Left to right   |    
| + 	|   Binary plus (Addition)    |    	Left to right   |    
| >> 	|   Right shift 	   |    Left to right   |    
| << 	|   Left shift    |    	Left to right   |    

#### Associativity 
* Associativity Define where to start from left or right.
  * L---> R
  * R---> L

  
#### Precedence 
* Precedence define the rule which we are following eg. BODMAS
  * level 1 -> * /  %
  * level 2 -> + - 

## Relational Operators

| Operators | Uses |
|-----|-----|
| == |Equal :  Check two operands are equal or not|
| != | Not Equal : Check two operands are not equal |
|> | Check left operand is grater than right operand | 
|< | Check right operand is grater than left operand | 
|<=| Check right operand is grater and equal than left operand |
|>=| Check left operand is grater and equal than right operand |


## Logical Operators

| Operators | Uses |
|-----|-----|
|&&| Logical and : Check both side true then result is true |  
| \|\|  | Logical OR : If one side  is true then result is true |
|! | Logical Not : If the value is true then it makes it false | 

## Bitwise Operators

| Operators | Uses |
|-----|-----|
|&| Bitwise AND : satisfied both side true for resultant to be true |
| \| | Bitwise OR : satisfied one side true for resultant to be true | 
|^ | Bitwise Exclusive OR (XOR): both side true or false to be true else, if one side true and other side false then the result be false |
|<< |Left shift : shift bit to the left side |
|>> |Right shift : shift bit to the right side |

```plain
x >> 2  => two bit shift to the left

x = 12 => 1100 in binary 

bits  0000 0000 0000 1100
bits  0000 0000 0011 0000 shifted 2 bits.

```


## Assignments Operators

| Operators | Uses |
|-----|-----|
| = | a = 5 , assigning the value |
| += | a+=b , a = a + b |
| -= | a-=b , a = a - b | 
| *= | a*=b , a = a * b | 
| /= | a/=b , a = a / b | 
| %= | a%=b , a = a % b | 


## Conditional Operators

* Conditional Operators are also known as ternary operators & it is used to evaluated conditions.
  * exp1 ? exp2 : exp3
  * if exp1 is true ? then execute exp2 : else execute exp3
  * eg. ``printf("%d", a < b ? a : b);``
  * eg. ``printf("%d", a > b ? b : a);``

## Special Operators

| Operators | Uses |
|-----|-----|
|``sizeof()`` | It give the size of the variable in bytes eg ``sizeof(a)`` |
| `&` |  It give the address of the variable ``&a`` | 
| `*` | Pointer variable it point the variable memory location. |

## Type Conversion
* Type conversion is a process in which we are converting the datatype according to our needs during the execution of program.
* It has Two types :
  * Implicit : Done by Compiler, it has no user control.
  * Explicit : Done by programmer it has full user control, also known as typecasting.

>Example of typecasting

```C
#include<stdio.h>

int main(void){

  int a =  5 , sum;
  double b = 8;
  b = a + b;  // Implicit conversion
  sum = (int)b + 1; // explicit conversion
  

  return 0;
}


```




***
>End :)

> Thanks for Reading ;). Support [@veilsec](https://sahilwep.github.io/about/) [@sahilwep](https://sahilwep.github.io/about/) 
 

> Respect Open Source {-_*}!
***