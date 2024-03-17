/* ex1-8
 * Exercise 1-8. Write a program to count blanks, tabs, and newlines.
 */

/* Written by Joseph Kurape 
 */

#include <stdio.h>

int main() 
{
    /* count blanks, tabs and newlines */
    int c, nb, nt, nl;

    nb = nt = nl = 0;

    while((c = getchar()) != EOF){
        if (c == ' ')
            ++nb;
        else if (c == '\t')
            ++nt;
        else if (c == '\n')
            ++nl;
    }
    
    printf("Blank(s): %d, Tab(s): %d, Newline(s): %d\n",
            nb, nt, nl);

    return 0;
}
