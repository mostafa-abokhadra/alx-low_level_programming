#include "main.h"

/**
  * _strncpy - copy a string into a string
  * @dest: destination string
  * @src: source string
  * @n: the number of bytes to be copied
  *
  * Description: copying and overlaping a string in another string
  *
  * Return: the copied string
  */
char *_strncpy(char *dest, char *src, int n)
{
		int i;

		for (i = 0 ; i < n && src[i] != '\0' ; i++)
		{
			dest[i] = src[i];
		}
		for (; i < n ; i++)
		{
			dest[i] = '\0';
		}

		return (dest);
}

