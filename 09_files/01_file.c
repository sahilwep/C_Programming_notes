#include <stdio.h>

int main(void)
{
    FILE *fptr; // making file pointer.
    char str[90] = "the content we are writing into the file.";
    fptr = fopen("myfile.txt", "w");                                                  // open the file in write mode.
    fputs(str, fptr);                                                                 // using the fputs() to write into the file with using the variable
    fputs("we can pass the content direct into the puts() function directly. Hi my name is sahil ;)", fptr); // using the fputs() to write into the file with using the string direct write int the function inside.
    fclose(fptr);                                                                     // closing the file pointer.
    return 0;
}
