/* 
atof: convert an string to double
modify atof to handle scientific notation
e.g. 123.45e-6
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAXLINE 1000

int main(void)
{
    double atof(char[]);
    char line[MAXLINE];
    int obtainline(char line[], int max);

    while (obtainline(line, MAXLINE) > 0)
        printf("\t%g\n", atof(line));
    return 0;
}

double atof(char s[])
{
    double val, power, mul;
    int i, sign;

    for (i = 0; isspace(s[i]); i++) /* skip white space */
        ;
    sign = (s[i] == '-') ? -1 : 1;
    if (s[i] == '+' || s[i] == '-')
        i++;
    for (val = 0.0; isdigit(s[i]); i++)
        val = 10.0 * val + (s[i] - '0');
    if (s[i] == '.')
        i++;
    for (power = 1.0; isdigit(s[i]); i++)
    {
        val = 10.0 * val + (s[i] - '0');
        power *= 10;
    }
    if (s[i] == 'e' || s[i] == 'E')
    {
        i++;
        if (s[i] == '-')
        {
            i++;
            for (mul = 0.0; isdigit(s[i]); i++)
            {
                mul = 10.0 * mul + (s[i] - '0');
            }
            while (mul-- > 0)
                power /= 10;
        }
    }
    return sign * val / power;
}

int obtainline(char s[], int lim)
{
    int c, i;

    i = 0;
    while (i < lim && (c = getchar()) != EOF && c != '\n')
        s[i++] = c;
    if (c == '\n')
        s[i++] = c;
    s[i] = '\0';
    return i;
}