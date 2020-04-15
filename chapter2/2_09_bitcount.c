/*
use x &= (x-1) to write a faster version of bitcount
*/

/*
original bitcount
int bitcount (unsigned x)
{
    int b;
    for (b = 0; x != 0; x >> 1)
        if (x & 01)
            b++;
    return b;
}
*/

#include <stdio.h>

int bitcount(unsigned x);

int main(void)
{
    printf("%d\n", bitcount(15)); //expect 

    return 0;
}

int bitcount(unsigned x)
{
    int b = 0;
    while ((x &= (x - 1)) != 0)
        ++b;

    return b;
}