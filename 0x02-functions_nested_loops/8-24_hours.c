#include "main.h"

/**
  * jack_bauer - print every single minute in a day
  *
  * Description: printing day minutes using 4 nested loops
  *
  * Return: no return value for void function
  */
void jack_bauer(void)
{
		int i, j, k, l;

		for (i = 0 ; i <= 2 ; i++)
		{
			for (j = 0 ; j <= 9 ; j++)
			{
				for (k = 0 ; k < 6 ; k++)
				{
					for (l = 0 ; l <= 9 ; l++)
					{
						_putchar('0' + i);
						_putchar('0' + j);
						_putchar(':');
						_putchar('0' + k);
						_putchar('0' + l);
						_putchar('\n');
						if (i == 2&&j == 3&&k == 5&&l == 9)
							return;
					}
				}
			}
		}
}
