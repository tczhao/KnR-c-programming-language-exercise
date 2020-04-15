/*
convert input to lower
*/

#include <stdio.h>

int lower(int c);

int main(void)
{
    int c;

    while ((c = getchar()) != EOF)
    {
        putchar(lower(c));
    }
}

/*
int lower(int c)
{
    if (c >= 'A' && c <= 'Z')
        return c - 'A' + 'a';
    return c;
}
*/

int lower(int c)
{
    return c>='A' && c<='Z'? c+'a'-'A':c;
    // con1 ? func1 : func2, if con1, then func1 else func2
}