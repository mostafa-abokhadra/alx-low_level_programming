#include "main.h"

/**
  * times_table - prints times table form 0 to 9
  *
  * Description: printing from 0 to 9 times table using ascii and loops
  *
  * Return: no return value to void function
  */
void times_table(void)
{
		int i, j;
		for (i = 0 ; i <= 9 ; i++)
		{
			for (j = 0 ; j <= 9 ; j++)
			{
				if( i*j <= 9)
				{
					_putchar('0' + (i*j) );
				}
				else
				{
					int n1 = 0, n2 = 0;
					n2 = (i*j) % 10;
					n1= (i*j) / 10;
					_putchar('0' + n1);
					_putchar('0' + n2);
				}
				if (j != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
				if ( ( (j+1) * i ) <= 9 && i > 0)
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
}

