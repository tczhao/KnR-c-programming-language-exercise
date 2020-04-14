#include <stdio.h>
#include <stdbool.h>

/*
Write a program entab that replaces strings of blanks by the minimum
number of tabs and blanks to achieve the same spacing.
*/
int main(void)
{
    int c, i;
    int checks[3];
    for (i = 0; i < (sizeof(checks) / sizeof(checks[0])); i++)
        checks[i] = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == '{')
        {
            checks[0]++;
        }
        else if (c == '}')
        {
            checks[0]--;
        }
        else if (c == '[')
        {
            checks[1]++;
        }
        else if (c == ']')
        {
            checks[1]--;
        }
        else if (c == '(')
        {
            checks[2]++;
        }
        else if (c == ')')
        {
            checks[2]--;
        }
        else
        {
        }
    }
    for (i = 0; i < (sizeof(checks) / sizeof(checks[0])); i++)
        if (checks[i] != 0)
        {
            printf("input is invalid\n");
            return -1;
        }
    printf("input is valid\n");
    return 0;
}