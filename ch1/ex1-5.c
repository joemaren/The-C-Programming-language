/* ex1-5.c
 * Exercise 1-5. Modify the temperature conversion program 
 * to print the table in reverse order, that is, from 300 
 * degrees to 0.
 */

/* Written by Joseph Kurape.
 */

#include <stdio.h>

int main()
{
    int step, lower, upper;
    float fahr, celsius;

    upper = 300;            /* upper temperature bound */
    lower = 0;              /* lower temperature bound */
    step = 20;              /* step size of the temperature range */

    for(fahr = upper; fahr >= lower; fahr -= step){
        celsius = (5.0/9.0)*(fahr-32);              /* compute the temperature in degrees celsius */
        printf("%3.0f %-6.1f\n", fahr, celsius);
    }
    return 0;
}
