#include <stdio.h>
#define MAXLINE 1000

/*
Write a program to print all input lines that are longer than 80 char
*/
char obtainline(char str[], int lim);
int main(void) {
    char line[MAXLINE];
	int len;

    while ((len = obtainline(line, MAXLINE)) >= 0)
		printf("len %d\n",len);
    return 0;
}

char obtainline(char s[], int lim)
{
    int c, i, j, k;
    i = j = 0;
    while ((c = getchar()) != EOF && c != '\n')
    {
        if (i < lim)
            s[i++] = c;
        if (c != ' ' && c != '\t')
            j = i;
    }
	for (k=0; k<j; k++)
		putchar(s[k]);
	if (j > 0)
		putchar('\n');
	else
		j = -1;
    return j;
}