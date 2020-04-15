/*
Write a loop equivalent to the for loop above without using && or ||
*/

#include <stdio.h>
#define MAXLINE 1000

int obtainline(char line[], int lim);
void copy(char to[], char from[]);

int main(void)
{
    int len, max;
    char line[MAXLINE], maxline[MAXLINE];

    max = 0;

    while ((len = obtainline(line, MAXLINE)) > 0)
    {
        if (len > max)
        {
            max = len;
            copy(maxline, line);
        }
    }

    if (max > 0)
        printf("%s", maxline);
}

int obtainline(char s[], int lim)
{
    int i, c;

    // for (i=0; i < lim - 1 && (c=getchar()) != '\n' && c != EOF; ++i)
    for (i = 0; i < lim - 1; ++i)
    {
        c = getchar();
        if (c == EOF)
            break;
        if (c == '\n')
            break;
        s[i] = c;
    }

    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }

    s[i] = '\0';
    return i;
}

void copy(char to[], char from[])
{
    int i;
    i = 0;

    while ((to[i] = from[i]) != '\0')
        ++i;
}