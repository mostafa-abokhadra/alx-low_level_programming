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
		int i, j;

		for (i = 0 ; dest[i] != '\0' ; i++)
		{
		}
		for (j = 0 ; j < n && src[j] != '\0'; j++, i++)
		{
			dest[i] = src[j];
		}
		dest[i] = '\0';
		return (dest);
}
