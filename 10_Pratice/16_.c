// -> write a program to check the year is leap-year or not...

#include<stdio.h>

int main(void){

    int year;
    printf("\nEnter the year : ");
    scanf("%d",&year);
    if(year % 400 == 0){
        printf("\n %d is a leap year.",year);
    }
    else if(year % 4 == 0){
        printf("\n %d is a leap year.",year);
    }
    // else if(year % 100 == 0){
    //     printf("\n %d is not a leap year.",year);        
    // }
    else{
        printf("\n %d is not a leap year.",year);        
    }

    return 0;
}   


/* 

The complete list of leap years in the first half of the 21st century is therefore
 2000, 2004, 2008, 2012, 2016, 2020, 2024, 2028, 2032, 2036, 2040, 2044, and 2048.

A leap year is exactly divisible by 4 except for century years (years ending with 00). 
The century year is a leap year only if it is perfectly divisible by 400.
For example,

    1999 is not a leap year
    2000 is a leap year
    2004 is a leap year

*/