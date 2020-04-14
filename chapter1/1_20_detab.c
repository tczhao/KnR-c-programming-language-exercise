#include <stdio.h>
#define TAB 4

/*
Write a program detab that replaces tabs in the input
with the proper number of blanks to space to the enxt tab stop.
Assume a fixed set of tab stops, say every n columns.
Should n be a variable or a symbolic parameter
*/
int main(void)
{
    int i, c;

    while ((c = getchar()) != EOF)
    {
        if (c != '\t')
        {
            putchar(c);
        }
        else if (c == '\n')
        {
            putchar('\n');
        }
        else
        {
            for (i = 0; i < TAB; i++)
                putchar(' ');
        }

    }
    return 0;
}