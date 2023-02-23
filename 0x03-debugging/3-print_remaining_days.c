#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
	int days_in_feb = 28;
	int days_in_year = 365;
	int i;
	int day_of_year = 0;
	
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		days_in_feb = 29;
		days_in_year = 366;
	}
	if (month < 1 || month > 12 || day < 1 || day > 31)
	{
		printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
		return;
	}
	if (month == 2 && day > days_in_feb)
	{
		printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
		return;
	}
	else if ((month == 4 || month == 6 || month == 9 || month == 11) && day == 31)
	{
		printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
		return;
	}
	for (i = 1; i < month; i++)
	{
		if (i == 2)
		{
			day_of_year += days_in_feb;
		}
		else if (i == 4 || i == 6 || i == 9 || i == 11)
		{
			day_of_year += 30;
		}
		else
		{
			day_of_year += 31;
		{
		}
		day_of_year += day;
		printf("Day of the year: %d\n", day_of_year);
		printf("Remaining days: %d\n", days_in_year - day_of_year);
}
