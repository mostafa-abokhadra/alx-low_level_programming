#include "main.h"

/**
  * _print_rev_recursion - print a reversed string
  * @s:the string
  *
  * Description: printing a reversed string recursively
  *
  * Return: nothing
  */
void _print_rev_recursion(char *s)
{
		int i = 0;

		if (*s == '\0')
		{
			return;
		}

		_print_rev_recursion(++s);
		_putchar(*s);
		if (*s == '\n')
		{
			_putchar('\n');
		}
}

