#include "main.h"

/**
  * _strcpy - copying a string
  * @dest: the destination to be copied at
  * @src: the source of copying
  *
  * Description: copying a given string into another string
  *
  * Return: the destination string
  */
char *_strcpy(char *dest, char *src)
{
		int i;

		for (i = 0 ; src[i] != '\0' ; i++)
		{
			dest[i] = src[i];
		}

		dest[i] = '\0';

		return (dest);
}
