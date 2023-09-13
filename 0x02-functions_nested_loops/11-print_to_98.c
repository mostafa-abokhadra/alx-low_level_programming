#include "main.h"

/**
  * print_to_98 - prints nums to 98
  * @n: starting point of printing to 98
  *
  * Description: given a starting num we are printing to 98
  *
  * Return: no return value for void function
  */
void print_to_98(int n)
{
		int arr [10]={0,0,0,0,0,0,0,0,0,0}, i, j = 0, t = 0;
		for(i = n ; i <= 98 ; i++)
		{
			if(i >= -9 && i <= 9)
			{
				if( i < 0 )
				{
					_putchar('-');
					_putchar('0' + (i-i-i) );
				}
				else
				{
					_putchar('0'+i);
				}
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				t = i;
				if (i < 0){
					_putchar('-');
					t = i -i -i;
				}
				while(t)
				{
					arr[j] = t % 10;
					t /= 10;
					j++;
				}
				j--;
				for ( ; j >= 0 ; j--)
				{
					_putchar('0' + arr[j]);
				}
				if (i != 98)
				{
					_putchar(',');
					_putchar(' ');
				}
				j = 0;
			}
		}
}

