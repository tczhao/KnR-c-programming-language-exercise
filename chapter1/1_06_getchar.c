#include <stdio.h>

/* 
Verify that the expression getchar () != EOF is 0 or 1
Write a program to print the value of EOF
*/
int main(void)
{
	int c;
	printf("%d",EOF);
	while ((c = getchar()) != EOF)
		/*printf("%d\t%d\n",c,EOF);*/
		putchar(c);
}

