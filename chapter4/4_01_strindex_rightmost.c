/*
Write the function strindex(s, t)
which returns the position of the rightmost occurrence
of t in s, or -1 if there's none
*/

#include <stdio.h>
#define MAXLINE 1000

int obtainline(char line[], int max);
int strindex(char source[], char searchfor[]);

char pattern[] = "ould";

int main(void)
{
    char line[MAXLINE];
    int found = 0;
    int position;

    while (obtainline(line, MAXLINE) > 0)
        if ((position = strindex(line, pattern))>=0){
            printf("%s", line);
            printf("%d\n", position);
            found++;
        }
    return found;
}

int obtainline(char s[], int lim)
{
    int c, i;

    i = 0;
    while (i < lim && (c=getchar()) != EOF && c != '\n')
        s[i++] = c;
    if (c == '\n')
        s[i++] = c;
    s[i] = '\0';
    return i;
}

int strindex(char s[], char t[])
{
    int i, j, k;

    for (i = 0; s[i] != '\0'; i++)
    {
        for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++)
            ;
        if (k>0 && t[k] == '\0')
            return i;
    }
    return -1;
}