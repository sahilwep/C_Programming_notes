#include <stdio.h>
#include <string.h>

int main(void)
{
    char s1[30] = "@sahil";
    char s2[30] = "wep";

    // output
    printf("\n string s1 is : %s", s1);
    printf("\n string s2 is : %s", s2);
    printf("\n Follow me on Social with : %s", strcat(s1, s2)); // return s1

    return 0;
}