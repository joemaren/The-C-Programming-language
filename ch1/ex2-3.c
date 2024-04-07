/* ex2-3.c
 * Exercise 2-3. Write the function htoi(s), which converts a string of hexadecimal
 * digits (including an optional 0x or 0X) into its equivalent integer value.
 * The allowable digits are 0 through 9, a through f, and A through F.
 */

/* Written by Joseph Kurape
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

long int htoi(char s[]);

int main()
{
    long conv = htoi("0xAbCdEf12345");
    printf("%ld\n", conv);
   
}

long int htoi(char s[]) 
{
    int len, i, j;
    len = strlen(s);
    j = len - 3;
    long ival = 0;
    char x;

    if (s[0] == '0' && tolower(s[1]) == 'x') {
        for(i = 2; i <= len && (x = s[i]) != '\0' && isdigit(x) || tolower(x) >= 'a' && tolower(x) <= 'f'; ++i){
            if isdigit(s[i])
                ival += (s[i] - '0') * (pow(16, j--));
            else {
                switch(tolower(s[i]) - 'a' + 1) {
                    case 1:
                        ival += 10 * pow(16, j--);
                        break;
                    case 2:
                        ival += 11 * pow(16, j--);
                        break;
                    case 3:
                        ival += 12 * pow(16, j--);
                        break;
                    case 4:
                        ival += 13 * pow(16, j--);
                        break;
                    case 5:
                        ival += 14 * pow(16, j--);
                        break;
                    case 6:
                        ival += 15 * pow(16, j--);
                        break;
                }

            }   
        }
    }

    return ival;
}
