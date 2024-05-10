/* ex3-2.c
 * Exercise 3-2. Write a function escape(s,t) that converts characters like newline and tab 
 * into visible escape sequences like \n and \t as it copies the string t to s. Use a switch.
 * Write a function for the other direction as well, converting escape sequences into the real
 * characters.
 */

/* Written by Joseph Kurape
 */

#define STRSIZE 1000

#include <stdio.h>

void escape(char s[], char t[]);

int main()  /* Test escape(s,t) */
{
    char t[STRSIZE];
    char s[STRSIZE] = "The qucik\t brown\n fox jumped over\n the\t fence.";
    
    escape(s, t);

    puts(t);
}
void escape(char s[], char t[] )
{
    int i, j, c;
    i = j = 0;

    while((c = s[i++]) != '\0'){
        switch (c) {
            case '\t':
                t[j++] = '\\';
                t[j++] = 't';
                break;
            case '\n':
                t[j++] = '\\';
                t[j++] = 'n';
                break;
            default:
                t[j++] = c;
                break;
        }
    }
    t[j] = '\0';
}


