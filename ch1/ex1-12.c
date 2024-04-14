/* ex1-12.c
 * Exercise 1-12. Write a program that prints its input one word per line.
 */

/* Written by Joseph Kurape
 */

#include <stdio.h>

int main() 
{
    char c;
    int state;

    while((c=getchar()) != EOF) {
        switch (c) {
        case '\t':
        case '\n':
        case ' ':
            putchar('\n');
            break;
         default:
            putchar(c);
            break;
        }
    }
    return 0;
}
