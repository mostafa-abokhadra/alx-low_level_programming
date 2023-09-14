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
		int arr[3], temp, i;

		temp = year;

		for (i = 0 ; i < 3 ; i++)
		{
			arr[i] = temp % 10;
			temp /= 10;
		}
		if ((year % 4 == 0 || year % 400 == 0) && !(year % 100 == 0)
				|| ((arr[0] ==0 && arr[1] == 0) &&
					(arr[2] == 0 || arr[2] == 4 || arr[2] == 8)))
		{
			if (month >= 2 && day >= 60){
				day++;
			}

			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 366 - day);
		}
		else{
			if (month == 2 && day == 60)
			{
				printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
			}
			else
			{
				printf("Day of the year: %d\n", day);
				printf("Remaining days: %d\n", 365 - day);
			}
		}  
}
