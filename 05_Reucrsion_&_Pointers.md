# Recursion & Pointers
## Recursion
* function call itself again and again known as recursive function and this technique is known as recursion.
* It's more like a loop.
* function call itself with some condition is known as recursion.
  
```C
int main(){
    func(n)
}
int func(int x){
    func(x); // call itself 
}
```
> Example 

```C
#include<stdio.h>

int func(int x);

int main(void){
    int x =20;
    func(x);
    return 0;
}


int func(int x){        // recursive function.
    if(x<=0){
        return 0;
    }
    else{
        func(x-1);          // function call itself.
        printf("%d ",x);
    }
}
```

### Backtracking
* Backtracking is a technique in which we are using the `+` & `-` according to aur needs..
* I will create a program that print 0 to n with backtracking technique.

>Example : Print 0 to n with using ( - )

```C
#include<stdio.h>

int rec(int x ,int y);

int main(void){
    int n;
    printf("Enter the no : ");
    scanf("%d",&n);
    rec(0,n);
    return 0;
}

int rec(int x , int y ){

    if(x>y){
        return 0;
    }
    else{
        rec(x,y-1);
        printf("%d ",y);
    }
}
```
>Example : Print 0 to n with using ( + )

```C
#include<stdio.h>

int rec(int x ,int y);

int main(void){
    int n;
    printf("Enter the no : ");
    scanf("%d",&n);
    rec(0,n);
    return 0;
}

int rec(int x , int y ){

    if(x>y){
        return 0;
    }
    else{
        printf("%d ",x);
        rec(x+1,y);
    }
}
```

## Pointers

* Pointers are special type of variable which is used to store the address of the normal variable.
* Pointers are used in Low Level computation where we are dealing with stack & Buffer..

```C
int *name_of_pointer;

// example
int *ptr;
```
> Example

```C
#include<stdio.h>

int main()
{
    int *ptr;
    int n;

    printf("Enter the no : ");
    scanf("%d",&n);

    ptr = &n;

    printf("\n the value n is : %d",n); // value of n
    printf("\n the address of n is : %d",&n); // & operator provide the address of n
    printf("\n the address of n is : %d",ptr); // ptr variable store the address of n.
    printf("\n the pointing value in pointer variable is is : %d", *ptr); // display the point value.
    printf("\n the address of pointing value in pointer variable is is : %d", &*ptr); // display the address of the n which is & of the pointing value.
   
    return 0;
}
```












***
>End :)

> Thanks for Reading ;). Support [@veilsec](https://sahilwep.github.io/about/) [@sahilwep](https://sahilwep.github.io/about/) 
 

> Respect Open Source {-_*}!
***