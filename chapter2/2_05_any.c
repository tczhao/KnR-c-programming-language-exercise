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

void mgetline(char line[], int maxline);
int any(char s1[], char s2[]);

int main(void)
{
    char line1[MAXLINE];
    char line2[MAXLINE];
    int line1_pos;

    mgetline(line1, MAXLINE);
    mgetline(line2, MAXLINE);
    line1_pos = any(line1, line2);

    printf("The value of %s\n", line1);
    printf("The value of %s\n", line2);
    printf("The position %d\n", line1_pos);

    return 0;
}

void mgetline(char s[], int lim)
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
}

int any(char s1[], char s2[])
{
    int i, j, k;
    k = 0;

    for (i = 0; s1[i] != '\0'; ++i)
    {
        for (j = 0; (s1[i] != s2[j]) && s2[j] != '\0'; ++j)
            ;
        if (s2[j] != '\0')
            return i;
    }

    return -1;
}