/* ex1-10
 *
 * Exercise 1-10. Write a program to copy its input to its output, 
 * replacing each tab by \t, each backspace by \b, and each backslash 
 * by \\. This makes tabs and backspaces visible in an unambiguous way.
 */

/* Written by Joseph Kurape
 */

#include <stdio.h>

int main()
{
    int c;

    while((c = getchar())!= EOF) {
        if(c == '\t')
            fputs("\\t", stdout);
        else if(c == '\n')
            fputs("\\n\n", stdout);
        else if(c == '\b')
            fputs("\\b", stdout);
        else
            putchar(c);
    }
    return 0;
}
