#include <stdio.h>

/* printf Fahrenheit-Celsius table
 * for fahr = 0, 20, ..., 300; 
 */

int main()
{
    float celsius, fahr;
    int step, lower, upper;
    
    upper = 300;    /* upper limit */
    lower = 0;      /* lower limit */
    step = 20;      /* step size */

    /* print table heading */
    printf("ex1-3: Prints temperature conversion table.\n"
            "%10s %12s\n","Fahrenheit", "Celsius" );

    for(fahr = 0; fahr <= upper; fahr += step){
        celsius = (5.0/9.0)*(fahr - 32);
        printf("%5.0f %16.1f\n", fahr, celsius);
    }
    return 0;
}
