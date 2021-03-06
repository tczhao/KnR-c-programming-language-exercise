/* 
itoa: convert an integer to string
padd with blanks on the left to make it wide enough
*/

#include <stdio.h>
#include <string.h>
#define MAXLINE 1000
#define abs(x) ((x) > 0 ? (x) : -(x))

void itoa(int n, char s[], int w);
void reverse(char s[]);

int main(void)
{
    int number;
    char str[MAXLINE];

    number = -2147483648;

    printf("Integer %d printed as\n", number);

    itoa(number, str, 20);

    printf("%s\n", str);

    return 0;
}

void itoa(int n, char s[], int w)
{
    int i, sign;

    sign = n;
    i = 0;

    do
    {
        s[i++] = abs(n % 10) + '0';

    } while ((n /= 10) != 0);

    if (sign < 0)
        s[i++] = '-';

    while (i < w)
        s[i++] = ' ';

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