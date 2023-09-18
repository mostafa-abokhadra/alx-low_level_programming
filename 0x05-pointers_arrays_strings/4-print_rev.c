#include "main.h"

/**
  * print_rev - printing a string in revers
  * @s: the string to be reversed
  *
  * Description: getting the last element index the reversing back
  *
  * Return:nothing
  */
void print_rev(char *s)
{
		int i;

		for (i = 0 ; s[i] != '\0' ;)
		{
			i++;
		}
		for ( ; i >= 0 ; i--)
		{
			_putchar(s[i]);
		}
		_putchar('\n');
}

