#include <stdio.h>

/*
Write a program to print a histogram of 
the frequencies of different characters in its input
*/
int main(void){
	int nchar[26];
	int size_nchar = sizeof(nchar)/sizeof(nchar[0]);
	int c, i, j;

	for(i=0; i<size_nchar; ++i){
		nchar[i]=0;
	}
	while((c=getchar())!=EOF){
		if (c>='a' && c<='z'){
			++nchar[c-'a'];
		}
	}
	for (i=0; i<size_nchar; ++i){
		putchar(i+'a');
		for(j=0; j<nchar[i]; ++j){
			putchar('-');		
		}
		putchar('\n');
	}

}
