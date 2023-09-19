#include "main.h"

/**
  * get_length - length of a string
  * @s: the string
  *
  * Description: returning the length of a given string
  *
  * Return: the length
  */
int get_length(char *s)
{
		int i;

		for ( i = 0 ; s[i] != '\0' ; i++)
		{
		}

		return (i);
}

/**
  * puts_half - printing half of a string
  * @str: the string
  *
  * Description: print the last half of a given string
  *
  * Return: nothing
  */
void puts_half(char *str)
{
		int i = get_length(str), j;

		if (i % 2 == 1)
		{
			j = i - ((i - 1) / 2);

			for (j, i ; j < i ; j++)
			{
				_putchar(str[j]);
			}
		}
		else
		{
			j = i / 2;

			for (j, i ; j < i ; j++)
			{
				_putchar(str[j]);
			}
		}

		_putchar('\n');
}

