#include "main.h"

/**
  * _memset -  fills memory with a constant byte
  * @s: the string
  * @b: the character to fill the memory with
  * @n: the number of fills
  *
  * Description: filling a space of memory with constant
  *
  * Return: the string after filled
  */
char *_memset(char *s, char b, unsigned int n)
{
		unsigned int i;

		for (i = 0 ; i < n ; i++)
		{
			s[i] = b;
		}

		return (s);
}

