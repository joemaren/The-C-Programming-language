/* ex2-1.c
 * Exercise 2-1. Write a program to determine the ranges of char,
 * short, int, and long variables, both signed and unsigned, by
 * printing appropriate values from standard headers and by direct
 * computation. Harder if you computre them: determine the ranges
 * of the various floating-point types.
 */

/* Written by Joseph Kurape. 
 */

#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <math.h>

int main()
{
    printf("signed char is %.f bits\n", log2(CHAR_MAX - CHAR_MIN));
    printf("signed short is %.f bits\n", log2(SHRT_MAX - SHRT_MIN));
    printf("signed int is %.f bits\n", log2((float)INT_MAX - INT_MIN));
    printf("signed long is %.f bits\n", log2((float)LONG_MAX - LONG_MIN));
    printf("unsigned char is %.f bits\n", log2(UCHAR_MAX));
    printf("unsigned short is %.f bits\n", log2(USHRT_MAX));
    printf("unsigned int is %.f bits\n", log2(UINT_MAX));
    printf("unsinged long is %.f bits\n", log2(ULONG_MAX));

    return 0;
}
