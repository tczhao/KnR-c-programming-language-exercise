#include <stdio.h>

/*
rewrite the temperature conversion program 1_03
to use function for conversion
*/
int fahr_to_celsius(int intemp)
{
        int celsius;
        celsius = 5.0/9.0 * (intemp-32.0);
        return celsius;
}
int main(void)
{
	float fahr, celsius;
	float lower, upper, step;

	lower = 0;	/* lower limit of temperature scale*/
	upper = 300;	/* upper limit */
	step = 20;	/* step size */

	fahr = lower;
	printf("fahr\tcelsius\n");
	while (fahr <= upper) {
		celsius = fahr_to_celsius(fahr);
		printf("%3.0f\t%6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}
