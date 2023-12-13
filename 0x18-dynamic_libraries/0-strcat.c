#include "main.h"

/**
  * _strcat - concatenate 2 strings
  * @dest: destination string to
  * @src: source string to be concatenated to destination string
  *
  * Description: concatenating a given string into another string
  * Return: the concatenated string
  */
char *_strcat(char *dest, char *src)
{
		int i, j;

		for (i = 0 ; dest[i] != '\0' ; i++)
		{
		}
		for (j = 0 ; src[j] != '\0' ; j++, i++)
		{
			dest[i] = src[j];
		}

		dest[i] = '\0';

		return (dest);
}


