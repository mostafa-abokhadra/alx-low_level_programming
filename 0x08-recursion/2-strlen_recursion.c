#include "main.h"

/**
  * _strlen_recursion - length of a string
  * @s: the string
  *
  * Description: getting the length of a given string
  *
  * Return: the length
  */
int _strlen_recursion(char *s)
{
		if (*s == '\0')
		{
			return (0);
		}
		else
		{
			return (1 + _strlen_recursion(++s));
		}
}

