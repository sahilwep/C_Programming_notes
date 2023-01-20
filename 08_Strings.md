# Strings
* String is a collection of character terminated with null character ``\0``.
* Null character indicate end of the strings.
* We will implement strings in C by using a 1-D array character.
* In C we can use string by importing string library with ``#include<string.h>`` in global deceleration section.

```C
// character string    
char name[size];

// example
char str[10]={'s','a','h','i','l'};
```
* **Format specifier : ``%s``**
## Declaring String


```C
// Assigning string without size.
char str[]="sahil";

// Assigning string with predefined size.
char str[10]="sahil";

// Assigning character by character with size.
char str[10]={'s','a','h','h','i','l','\0'};

```
|Index |0|1|2|3|4|5|
|--|--|--|--|--|--|--|
|str|s|a|h|i|l|\0|

Size = 6   ------------> ``sizeof(str) = 6``
Length = 5   ---------> ``strlen(str) = 5``

```C
#include<stdio.h>
#include<string.h>

int main(void){

    // declaring string
    char str[] = "Geeks";

    // print string
    printf("the string is : %s " , str);
    
    // print string length
    printf("the length of string is : %d " , strlen(str));
    return 0;
}
```
## Input output Strings
* we can take input and print output of string with `gets()` & `puts()` functions.
* We can also print string using ``%c`` format specifier with using loops.

### Using loops

```C
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[30];
    int k = 0;

    // input
    printf("Enter the string : ");
    scanf("%s", &str);

    // output
    while (str[k] != '\0')
    {
        printf("%c", str[k++]);
    }

    return 0;
}
```

### Reading blank space in string.
* we can read blank space in string with ``%[^\n]``
```C
#include<stdio.h>
#include<string.h>

int main(void){
    char str[10];

    // input
    printf("Enter the string : ");
    scanf("%[^\n]",&str);

    // output
    printf("string is : %s ", str);

    return 0;
}
```

### ``gets()`` function

* gets is unformatted function which is used to take input string..
* gets read blank spaces.
* 

```C
#include<stdio.h>
#include<string.h>

int main(void){
    char str[30];
    gets(str); // taking input : sahil kumar sharma
    printf("string is : %s ", str); // display output : sahil kumar sharma
    return 0;
}
```


### ``puts()`` function

* puts is unformatted function which is used to display output of string..

```C
#include<stdio.h>
#include<string.h>

int main(void){
    char str[30];
    gets(str); // taking input : sahil kumar sharma
    puts(str); // display output : sahil kumar sharma
    return 0;
}
```

## Size of string

* In C character requires 1 bytes.
* String is made up of character so, size of string is the no of character in string.
* eg. ``char str[]={'s','a','h','i','l','\0'};``
  * Size is 6 bytes.

## Standard library string handling function.
* We have several string function for handling strings.

### ``strlen()``
* ``strlen()`` gives us the size length of string.

```C
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[30];

    // input
    printf("Enter the string : ");
    scanf("%s", &str);

    // output
    printf("\n string is : %s ", str);
    printf("\n string length is : %d ", strlen(str));

    return 0;
}
```
 
### ``strcpy(s1,s2)`` 
* Function copy string s2 to s1 and return s1.

```C
#include <stdio.h>
#include <string.h>

int main(void)
{
    char s1[30] = "Sahil";
    char s2[30] = "Sharma";

    // output
    printf("\n string s1 is : %s", s1);
    printf("\n string s2 is : %s", s2);
    printf("\n Final string is : %s", strcpy(s1, s2)); // return s1

    return 0;
}
```

### ``strcat()`` 
* Function used to concatenate two or more string.

```C
#include <stdio.h>
#include <string.h>

int main(void)
{
    char s1[30] = "@sahil";
    char s2[30] = "wep";

    // output
    printf("\n string s1 is : %s", s1);
    printf("\n string s2 is : %s", s2);
    printf("\n Follow me on Social with : %s", strcat(s1, s2)); // return @sahilwep

    return 0;
}
```

### ``strcmp()`` 
* Function compares two or more string.
  * Case 1 : If both string are same return 0 
  * Case 2 : If first string is alphabetic capitalize then return -ve value. 
  * Case 3 : If Second string is alphabetic capitalize then return +ve value. 
  

```C
#include <stdio.h>
#include <string.h>

int main(void)
{
    char s1[30] = "Sahil";  // changing here can change the output.
    char s2[30] = "Sahil";  // changing here can change the output.

    // output
    printf("\n string s1 is : %s", s1);
    printf("\n string s2 is : %s", s2);
    printf("\n Follow me on Social with : %d", strcmp(s1, s2)); // return 0 now.

    return 0;
}
```

### ``strlwr()`` & ``strupr()``
* Function change string into lowercase & uppercase

```C
#include <stdio.h>
#include <string.h>

int main(void)
{
    char s1[30] = "SAHIL";
    char s2[30] = "sahil";

    // output
    printf("\n lower case: %s", strlwr(s1));
    printf("\n upper case: %s", strupr(s2));
    return 0;
}
```




***
>End :)

> Thanks for Reading ;). Support [@veilsec](https://sahilwep.github.io/about/) [@sahilwep](https://sahilwep.github.io/about/) 
 

> Respect Open Source {-_*}!
***