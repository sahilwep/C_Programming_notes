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