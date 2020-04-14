#include <stdio.h>
#define TAB 4

/*
Write a program entab that replaces strings of blanks by the minimum
number of tabs and blanks to achieve the same spacing.
*/
int main(void)
{
    int i, c, count_blank;
    count_blank = 0;

    while ((c = getchar()) != EOF)
    {
        if ((c == ' ') && (count_blank < (TAB - 1)))
        {
            count_blank++;
        }
        else if ((c == ' ') && (count_blank == (TAB - 1)))
        {
            putchar('\t');
        }
        else if (c == '\n')
        {
            putchar('\n');
        }
        else
        {
            putchar(c);
            count_blank = 0;
        }
    }
    return 0;
}