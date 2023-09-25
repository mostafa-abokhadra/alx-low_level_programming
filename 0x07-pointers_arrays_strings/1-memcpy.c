#include "main.h"

/**
  * _memcpy - copying memory block
  * @dest: destination string
  * @src: source stinrg
  * @n: number of byter to be copied
  *
  * Description: copy number of bytes from one string to another
  * Return: the changed string
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
		int i;

		for (i = 0 ; i < n ; i++)
		{
			*dest = *src;
			dest++;
			src++;
		}

		return (dest)
}

