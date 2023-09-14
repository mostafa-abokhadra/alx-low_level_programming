#include "main.h"

/**
  * more_numbers - printing from 1 to 14
  *
  * Description: using ascii code to print nums to 14
  *
  * Return: nothing
  */
void more_numbers(void)
{
		int i, arr[2], j, s;

		for (s = 0 ; s < 10 ; s++)
		{

			for (i = 0 ; i <= 14 ; i++)
			{
				if (i >= 0 && i <= 9)
				{
					_putchar('0' + i);
				}
				else
				{
					int t;

					t = i;

					for (j = 0 ; t ; j++)
					{
						arr[j] = t % 10;
						t /= 10;
					}
					for (j = 1 ; j >= 0 ; j--)
					{
						_putchar('0' + arr[j]);
					}
				}
			}
			_putchar('\n');
		}
}
