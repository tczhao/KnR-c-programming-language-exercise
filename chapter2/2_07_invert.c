/*
Write a function invert(x,p,n) that
returns x with the n bits that 
begin at poisition p inverted
*/

#include <stdio.h>

unsigned invert(unsigned x, int p, int n);

int main(void)
{
    printf("%u\n", invert((unsigned)15, 3, 2)); //expect 3
}

unsigned invert(unsigned x, int p, int n)
{
    unsigned mask = ~(~0 << n) << (p + 1 - n);
    return x & ~mask | (~x & mask);
}