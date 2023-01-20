
# Control Statements

* Control Statements are used to control the flow of program.
* We have Three Control Statements
  * Sequence Structure : The program runs on sequential order by default.
  * Selection Structure : If , else if , Switch.
  * Repetition Structure ( iteration ): while , for , do-while.

## Decision Statements 
### If
* If the condition is true then statement is executes else it skip.

```C
a = 10; 
b = 20;
if (a <  b) {
    printf("a is grater than b ");
}
```
#### Nested Statements
* Nested means statement under statement.

```C
if(a>100){
    if(b<60){
        if(c<40){
            printf("this statement is executes.");
        }
    }
}
```

### If & else
* Suppose we need the code that execute if condition is false also, then we use if else ladder.

```C
a = 10; 
b = 20;
if (a > b){
    printf("a is grater than b ");
}
else {
    printf("a is less than b ");
}
```

### else if
* Suppose we want to put multiple if condition then we use the else-if statements.
* Note : we need at-least 1 if statement in the else if ladder.
* we can use else statement at last if we want.



```C
a = 10; 
b = 20;
if (a>b){
    printf("a is grater than b ");
}
else if (a<b){
    printf("a is less than b ");
}
else if (a = b){
    printf("a is equal to b ");
}
```

### Ternary Condition 
* Suppose if we want to write the if else in one line then we use the ternary condition .

```C
printf("%d", grade >= 60 ? "pass" : "fail");

grade => 60 ? printf("pass") : printf("fail");
```

## Switch Statement
* Switch statement is used to compare the cases.
* This Control statement allows us to make decision with numbers choices.
* default will execute if all the statement is false.
* every case has break statement on it.
* default no need for break statement.

```C
#include<stdio.h>

int main(){

    int day;
    printf("Enter the day no : ");
    scanf("%d",&day);
    switch(day){
        case 1 :
            printf("Monday");
            break;
        case 2 :
            printf("Tuesday");
            break;
        case 3 :
            printf("Wednesday");
            break;
        case 4 :
            printf("Thursday");
            break;
        case 5 :
            printf("Friday");
            break;
        case 6 :
            printf("Saturday");
            break;
        case 7 :
            printf("Sunday");
            break;
        default:
            printf("invalid no ");
    }
    return 0;
}
```
### Rules for switch statement
* Case label must be unique.
* Case label must end with : colon.
* Case label must have constant expression.
* Case label must have integer character type.
* Case label should not be floating point.
* Default can be placed anywhere in the statement.
* Multiple case cannot use same expression.
* Relation operator is not allowed in switch.
* Nesting of switch is allowed.
* Variable are not allowed in switch case label.

```C
int count; // variable.
Switch(pt){
    case count: // variable is used.
    ...
    break;
    case 1<8: // Relation operator is used.
    ...
    break;
    case 2.5: // float is used.
    ...
    break;
    case 3: // Same expression is used.
    ...
    break;
    case 3: // Same expression is used.
    ...
    break;
}
```

## Looping Statements (Iterations)
* Looping statements are used to executes statements in loop until the condition is satisfies.

### While 
* entry control loop : control of the loop is at the first.
* while loop is execute if the condition is true.

```C
while(condition){
    statements...
    ...
}
```
> example
```C
int main(){ 
    int x = 10 
    int i = 0

    if (i <= x){
    printf("%d, ",x ); // print 0 to 10 
    i++;
    }
}
```

### for
* entry control loop : control of the loop is at the first.
* For loop is executes if the condition is satisfies.
* For loop contain 3 parts.

```C
for(initialization ; condition ; increment/decrement ){
    statements...
    ...
}
```
>example
```C
int main(void){
    int x = 20
    for(int i = 0; i <= x ; i++){
        printf("%d, ",i); // print 0 to 20
    }
    return 0;
}
```

### do-while
* Exit control loop : control of the loop is at the last.
* Do while is special type of loop which at-least  first executes the statement of code then check the condition and then loop according to the condition.
  
```C
int main(void){
    int i=0, x=20;
    do{
        printf("%d",i);
        i++;
    }while(i<=x); // print 0 to 20
    return 0; 
}
```


### Nested Loops
* loops inside loop is known as nested loops.

```C
int main(void){
    int arr[][]; 
    // taking input of array.
    for(int i=0; i<3; i+=){
        for(int j=0; j<3; j++){
            printf("arr[%d][%d] : ",i,j)
            scanf("%d",&arr[i][j])
        }
    }
    return 0;
}
```

## Jumping Statements
* Jumping statement are used to jump from the code or change the flow the code.

### Break 
* Break statement is used to exit from the code statement.
* Break statement is allows programmer to terminate the loop.
* Break statement mainly used for 
  * loops
  * switch & case
  * if else (not mostly used)


```C
int main(void){
    statements
    if (condition){
        statements;
        break;
    }
    statements;
    return 0;
}
```

### Continue
* Continue statement only used inside the loops.
* Continue not exit the execution, it just skip that following condition.

```C
int main(void){

    for(int x = 10; x > 0; x--){
        if(n % 2 == 1){
            continue;
        }
        printf("%d ",n);
    }
    return 0;
}
```

### return
* Return statement are used inside the function to return the output into another function.
* Return generally exit the function.

```C
return(expression)
```
> example
```C
int main(void){
    int a = 2 ,square_root;
    square_root = sqr(a);
    printf("square root is : %d",square_root);
    return 0;
}

int sqr(int x){
    int result = x*x;
    return result; // return the square result
}
```

### Goto
* Goto is used to transfer the control from one place to another unconditionally.

```C
identifier: // identifier
    ...
    ...
    ...
    goto identifier; // go to identifier
```
>example

```C
x1: 
    ...
    ...
    goto x1;
```









***
>End :)

> Thanks for Reading ;). Support [@veilsec](https://sahilwep.github.io/about/) [@sahilwep](https://sahilwep.github.io/about/) 
 

> Respect Open Source {-_*}!
***