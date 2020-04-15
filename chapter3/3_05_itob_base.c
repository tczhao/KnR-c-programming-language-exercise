/* 
itob: convert an integer to base b character representation
*/

#include <stdio.h>
#include <string.h>
#define MAXLINE 1000
#define abs(x) ((x) > 0 ? (x) : -(x))

void itob(int n, char s[], int b);
void reverse(char s[]);

int main(void)
{
    int number, base;
    char str[MAXLINE];

    number = -32;
    base = 16;
    printf("Integer %d printed as\n", number);

    itob(number, str, base);

    printf("%s\n", str);

    return 0;
}

void itob(int n, char s[], int b)
{
    int i, j, sign;

    if ((sign = n) < 0)
        n = -n;

    i = 0;

    do
    {
        j = n % b;

        s[i++] = (j < 10) ? j + '0' : j - 10 + 'a';
    } while ((n /= b) > 0);

    if (sign < 0)
        s[i++] = '-';

    s[i] = '\0';

    reverse(s);
}

void reverse(char s[])
{
    int c, i, j;

    for (i = 0, j = strlen(s) - 1; i < j; i++, j--)
    {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}