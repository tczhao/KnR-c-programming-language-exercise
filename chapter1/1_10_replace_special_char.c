#include <stdio.h>

/*
Write a program to copy its input to its output,
replacing each tab by \t,
each backspace by \b,
each backslash by \\,
This makes tabs and backspaces visible in an unambiguous way.
*/
main()
{
	int c;
	while((c = getchar()) != EOF){
		switch (c){
			case '\t':
				putchar('\\');
				putchar('t');
				break;
			case '\n':
				putchar('\\');
				putchar('n');
				break;
			case '\\':
				putchar('\\');
				putchar('\\');
				break;
			default:
				putchar(c);
		}
	}
}
