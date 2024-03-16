/* ex1-4
 * Exercise 1-4. Write a progrmam to print the corresponding Celsius to Fahrenheit table
 */

/* Written by Joseph Kurape 
 */

#include <stdio.h>

int main() {

    int lower, upper, step;
    float fahr, celsius;

    step = 20;
    upper = 300;
    lower = 0;

    printf("ex1-4: Prints a Celsius -> Fahrenheit conversion table\n"
            "%7s %14s", "Celsius", "Fahrenheit\n");
    for(celsius=lower; celsius<=upper; celsius+=step){
        fahr = (9.0 * celsius) / 5.0 + 32.0;
        printf("%4.0f %13.1f\n", celsius, fahr);
    }
}
