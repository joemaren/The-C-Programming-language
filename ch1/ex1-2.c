/* ex1-2.c 
 * Exercise 1-2. Experiment to find out what happens when printf's argument string contains \c,
 * where c is some character not listed above.
 */

/* Written by Joseph Kurape. 
 */

#include <stdio.h>

int main()
{
    printf("\\a An alert was played. \a");      /* This plays an audible alert */
    printf("\n");                               

    printf("\\f is a form feed that takes output to the next line \f");
    printf("\n");

    printf("\\r \r");   /* \r is a cariage return, this moves input 
                           back to the beginning of the line. 
                         */

    printf("\\v Vertical tab  \v"); /* advance the cursur to the next line without
                                       moving it back to the first collumn.
                                     */
    printf("Input should continue here: \n");

    printf("//x allows you specify a character or escape sequence by it's hex code: \x21 \n");
}
