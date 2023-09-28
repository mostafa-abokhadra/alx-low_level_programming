#include "main.h"

/**
  * _puts_recursion - print a string
  * @s:the string
  *
  * Description: printing a string recursively
  *
  * Return: nothing
  */
void _puts_recursion(char *s)
{
		if (*s == '\0')
		{
			return;
		}

		_puts_recursion(++s);
		_putchar(*s);
}

