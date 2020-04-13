#include <stdio.h>

/*
Write a program to count blanks, tabs, and newlines
*/
int main(void)
{
	int c, nline, nblank, ntab;

	nline = 0;
	nblank = 0;
	ntab = 0;
	while ((c = getchar()) != EOF)
		switch (c){
			case '\n':
				++nline;
			case ' ':
				++nblank;
			case '\t':
				++ntab;
			default:
				break;
		}

	printf("lines:\t%d\n", nline);
	printf("tabs:\t%d\n", ntab);
	printf("blanks:\t%d\n", nblank);
}
