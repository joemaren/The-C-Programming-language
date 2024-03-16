/* ex1-6.c
 * Exercise 1-6. Verify that the expression getchar() != EOF is 0 or 1.
 */

/* Written by Joseph Kurape.
 */

#include <stdio.h>

int main()
{
    int c;
    
    c = getchar() != EOF;   /* evaluates to 1 if an input character is received,
                               0 if EOF code is received. */

    printf("%d\n", c);

    return 0;
}
