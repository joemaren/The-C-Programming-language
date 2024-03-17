/* ex1-9
 * Excercise 1-9. Write a program to copy its input 
 * to its output, replacing each string of one or 
 * more blanks by a single blank.
 */

/* Written by Joseph Kurape
 */

#include <stdio.h>

int main()
{
    int c;
    int pflag, cflag;                   /* flag variables for the current and previous input characters. */
    pflag = cflag = 0;

    while((c = getchar())!=EOF) {
        if(c == ' ')                    /* check if the current input is a whitespace */
            cflag = 1;
        if(cflag && !pflag) {
            putchar(c);
            pflag = 1;
            cflag = 0;
        }
        else if (cflag && pflag) {
            cflag = 0;
            pflag = 1;
        }

        else if (pflag && !cflag) {
            putchar(c);
            pflag = 0;
            cflag = 0;
        }
        else if (!pflag && !cflag)
            putchar(c);
    }
        
    return 0;
}
