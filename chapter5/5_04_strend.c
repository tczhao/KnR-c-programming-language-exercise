#include <stdio.h>
#define MAXLINE 1000

int mgetline(char line[], int maxline);
int mystrend(char *, char *);
int mystrlen(char *);

int main(void)
{
    int len;
    char s[MAXLINE], t[MAXLINE];

    putchar('s');
    putchar(':');
    mgetline(s, MAXLINE);
    printf("%s\n",s);
    printf("%d\n", mystrlen(s));

    putchar('t');
    putchar(':');
    mgetline(t, MAXLINE);
    printf("%s\n",t);
    printf("%d\n", mystrlen(t));

    printf("%d\n", mystrend(s, t));

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

int mystrend(char *s, char *t)
{
    int len_s, len_t;

    if((len_t = mystrlen(t)) == 0)
        return 1;
    if ((len_s = mystrlen(s)) == 0)
        return 0;

    while (*s != '\0')
        s++;
    s--;
    while (*t != '\0')
        t++;
    t--;

    while (len_t > 0)
    {
        if(*t == *s)
        {
            t--;
            s--;
            len_t--;
        }
        else
        {
            return 0;
        }
        
    }

    if (len_t == 0)
        return 1;
}

int mystrlen(char *s)
{
    char *p;
    p = s;
    while (*p != '\0')
        ++p;

    return p - s;
}
