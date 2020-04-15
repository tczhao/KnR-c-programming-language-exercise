/*
Write a functino htoi(s), which converts a string of hexadecimal digits
into equivalent integer value.
The allowable digits are
0-9
a-f
A-F
*/

#include <stdio.h>
#include <stdbool.h>
#define MAXLINE 100

int mgetline(char line[], int maxline);
int htoi(char s[]);

int main(void)
{
    char line[MAXLINE];
    int value;

    mgetline(line, MAXLINE);
    value = htoi(line);

    printf("The value of %s is %d\n", line, value);

    return 0;
}

int mgetline(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';

    return i;
}

int htoi(char s[])
{
    int i, sum, hexdigi;
    bool ishex;

    sum = hexdigi = 0;
    ishex = true;

    for (i = 0; ishex; ++i)
    {
        if (s[i] == '0')
        {
            ++i;
            if (s[i] == 'x' || s[i] == 'X')
            {
            }
            else
            {
                --i;
            }
        }
        else if (s[i] >= '0' && s[i] <= '9')
        {
            hexdigi = s[i] - '0';
        }
        else if (s[i] >= 'a' && s[i] <= 'f')
        {
            hexdigi = s[i] - 'a' + 10;
        }
        else if (s[i] >= 'A' && s[i] <= 'F')
        {
            hexdigi = s[i] - 'A' + 10;
        }
        else
        {
            ishex = false;
        }

        if (ishex)
            sum = 16 * sum + hexdigi;
    }
    return sum;
}