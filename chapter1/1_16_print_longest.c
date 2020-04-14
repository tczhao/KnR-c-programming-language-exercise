#include <stdio.h>
#include <stdlib.h>

/*
Revise the main routine of the longest-line program
so it will correctly print the length of arbitrary
long input lines, and as much as possible of the text
*/
int obtainline(char *s);
void copy(char to[], char from[]);
int main(void)
{
	int len;
	int max;
	char *line = malloc(1);
	char *longest = malloc(1);

	max = 0;
	while((len = obtainline(line)) > 0)
		if (len > max) {
			max = len;
			copy(longest, line);
		}
	if (max > 0)
		printf("%d\n", max);
		// TODO use struct to get both string and length
		// printf("%s\n", longest);
	free(line);
	return 0;
}

int obtainline(char *s){
	int c;
	int i = 0;

	while ((c = getchar()) != EOF && c != '\n'){
		s[i++] = c;
		s = realloc(s, i+1);
	}
	s[i] = '\0';
	return i;
}

void copy(char *to, char *from){
	int i = 0;
	while((sizeof(to)!=sizeof(from)))
		to = realloc(to, i+1);
	to = from;
}
