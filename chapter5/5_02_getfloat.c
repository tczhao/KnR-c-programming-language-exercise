/*
getint: get next integer from input to *pn.
Free form input conversion routine
*/

#include <stdio.h>
#include <ctype.h>

#define SIZE 1000
int getch(void);
void ungetch(int);

int main(void)
{
    int n, s;
    float array[SIZE], getfloat(float *);

    for (n = 0; n < SIZE && getfloat(&array[n]) != EOF; n++)
    {
        /* For debug purposes */
        printf("storing in n = %d, getfloat %f\n", n, array[n]);
    }
    printf("storing in n = %d, getfloat %f\n", n, array[n]);

    for (s = 0; s <= n; s++)
        printf("%f,", array[s]);
    printf("\n");

    return 0;
}

float getfloat(float *pn)
{
    int c, sign, divisor;

    while (isspace(c = getch()))
        ;

    if (!isdigit(c) && c != EOF && c != '+' && c != '-' && c != '.')
    {
        // ungetch(c); /* it's not a number */
        return 0;
    }

    sign = (c == '-') ? -1 : 1;

    if (c == '+' || c == '-')
        c = getch();

    for (*pn = 0; isdigit(c); c = getch())
        *pn = 10 * *pn + (c - '0');

    if (c == '.')
    {
        c = getch();
        divisor = 10;
        for (; isdigit(c); c = getch())
        {
            *pn = *pn + (float)(c - '0') / divisor;
            divisor *= 10;
        }
    }

    *pn *= sign;

    if (c != EOF)
        ungetch(c);

    return c;
}

#define BUFSIZE 100

char buf[BUFSIZE];
int bufp = 0;

int getch(void)
{
    return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c)
{
    if (bufp >= BUFSIZE)
        printf("ungetch: too many characters\n");
    else
        buf[bufp++] = c;
}