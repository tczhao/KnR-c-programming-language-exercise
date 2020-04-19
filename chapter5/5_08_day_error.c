#include <stdio.h>

static char daytab[2][13] = {
    {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
    {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};

int day_of_year(int year, int month, int day);
int month_day(int year, int yearday);
int sum_year_day(char daytab[][13], int leap);

int main(void)
{
    int day, mo, dat;
    day = day_of_year(1988, 2, 29);
    printf("%d\n", day);
    month_day(1988, day);
    return 0;
}

/* day_of_year: set day of year from month & day */

int day_of_year(int year, int month, int day)
{
    if (month > 12)
        return -1;

    int i, leap;

    leap = year % 4 == 0 && year % 100 != 0 || year % 400 == 0;

    if (daytab[leap][month] > day)
        return -1;

    for (i = 1; i < month; i++)
        day += daytab[leap][i];

    return day;
}

/* month_day: set month,day from day of year */

int month_day(int year, int yearday)
{
    int i, leap;

    leap = year % 4 == 0 && year % 100 != 0 || year % 400 == 0;

    if (yearday > sum_year_day(daytab, leap)){
        return -1;
    }
        
    for (i = 1; yearday > daytab[leap][i]; i++)
        yearday -= daytab[leap][i];

    printf("Month: %d, Day: %d\n", i, yearday);
    return 0;
}

int sum_year_day(char daytab[][13], int leap)
{
    int sum = 0;
    int i = 12;
    while (i-- >= 0)
        sum += daytab[leap][i];
    return sum;
}