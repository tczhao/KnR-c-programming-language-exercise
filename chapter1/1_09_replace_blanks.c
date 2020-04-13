#include <stdio.h>
#include <stdbool.h>

/*
Write a program to copy its input to its output
replacing each string of one or more blanks by a single blank
*/
int main(void)
{
	int c;
	bool if_line_was_blanked = false;

	while ((c = getchar()) != EOF){
		if (c == ' ') {
			if (if_line_was_blanked == false){
				putchar(' ');
				if_line_was_blanked = true;
			}
		}else{
			if_line_was_blanked = false;
			putchar(c);
		}
	}
}
