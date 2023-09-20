#include "main.h"

/**
  * _strncat - concatinating 2 strings
  * @dest: destination string
  * @src: source string
  * @n: n bytes to be concatenated
  *
  * Description: concatinating two strings and avoiding buffer
  * Return: the concatinating string
  */
char *_strncat(char *dest, char *src, int n)
{
		if (n == 0)
		{
			return (dest);
		}

		int i, j, c;

		for (i = 0 ; dest[i] != '\0' ; i++)
		{
		}
		for (j = 0 ; src[j] != '\0' ; j++)
		{
		}
		if (n < j)
		{
			for (c = 0 ; c < n ; c++, i++)
			{
				dest[i] = src[c];
			}
		}
		else
		{
			for (c = 0 ; c < j ; c++, i++)
			{
				dest[i] = src[c];
			}
		}

		dest[i] = '\0';

		return (dest);
}

