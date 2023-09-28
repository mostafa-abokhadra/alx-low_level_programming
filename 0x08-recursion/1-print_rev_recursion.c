#include "main.h"

/**
  * _print_rev_recursion - print a reversed string
  * @s:the string
  *
  * Description: printing a reversed string recursively
  *
  * Returnsdf: nothing
  */
void _print_rev_recursion(char *s)
{

		if (*s == '\0')
		{
			return;
		}

		_print_rev_recursion(s + 1);
		_putchar(*s);
}

