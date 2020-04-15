/*
Write a program to determine the ranges of
char, short, int, and long variables
both signed and unsigned
/*

/*
~0 complement of 0
>> 1 shift bit to right by 1
(<type>) cast to type
*/

#include <stdio.h>

int main(void)
{
    printf("Min unsigned char: %d\n", (unsigned char)0);
    printf("Max unsigned char: %d\n", (unsigned char)~0);
    printf("Min signed char: %d\n", (signed char)((unsigned char)~0 >> 1));
    printf("Max signed char: %d\n", -(signed char)((unsigned char)~0 >> 1)-1);
    printf("\n");
    printf("Min unsigned short: %d\n", (unsigned short)0);
    printf("Max unsigned short: %d\n", (unsigned short)~0);
    printf("Min signed short: %d\n", (signed short)((unsigned short)~0 >> 1));
    printf("Max signed short: %d\n", -(signed short)((unsigned short)~0 >> 1) - 1);
    printf("\n");
    printf("Min unsigned int: %d\n", (unsigned int)0);
    printf("Max unsigned int: %u\n", (unsigned int)~0);
    printf("Min signed int: %d\n", (signed int)((unsigned int)~0 >> 1));
    printf("Max signed int: %d\n", -(signed int)((unsigned int)~0 >> 1) - 1);
    printf("\n");
    printf("Min unsigned long: %ld\n", (unsigned long)0);
    printf("Max unsigned long: %lu\n", (unsigned long)~0);
    printf("Min signed long: %ld\n", (signed long)((unsigned long)~0 >> 1));
    printf("Max signed long: %ld\n", -(signed long)((unsigned long)~0 >> 1) - 1);

    return 0;
}
