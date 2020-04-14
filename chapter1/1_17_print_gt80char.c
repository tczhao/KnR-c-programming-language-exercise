#include <stdio.h>
#define MAXLINE 1000

/*
Write a program to print all input lines that are longer than 80 char
*/
int obtainline(char line[], int maxline);

int main() {
	int len;
	char line[MAXLINE];
	
	while ((len = obtainline(line, MAXLINE)) > 0) {
		if (len > 80) {
			printf("%s", line);
		}
	}
	return 0;	
}

int obtainline(char s[], int lim) {
	int c, i;
	
	for (i=0; i < lim-1 && (c=getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}