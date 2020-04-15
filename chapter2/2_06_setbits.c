/*
Write a function setbits(x,p,n,y) that
returns x with the n bits that begin at poisition p
set to rightmost n bits of y,
leaving the other bits unchagned
*/

#include <stdio.h>

unsigned setbits(unsigned x, int p, int n, unsigned y);

int main(void)
{
    printf("%u\n", setbits((unsigned)12, 3, 2, (unsigned)127));
}

unsigned setbits(unsigned x, int p, int n, unsigned y)
{
    return x & ~(~(~0 << n) << (p + 1 - n)) | (y & ~(~0 << n)) << (p + 1 - n);
}