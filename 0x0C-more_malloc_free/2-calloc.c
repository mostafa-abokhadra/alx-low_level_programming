#include "main.h"
#include <stdlib.h>

/**
  * _calloc - calloc creation
  * @nmemb: elements of array
  * @size: bytes of array
  *
  * Description: creation of calloc using malloc
  * Return: the array
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
		unsigned int i, len = 0;
		char *arr;

		if (nmemb == 0 || size == 0)
		{
			return (NULL);
		}
		
		len = nmemb * size;
		arr = malloc(len);

		if (arr != NULL)
		{
			for (i = 0 ; i < len ; i++)
			{
				arr[i] = 0;
			}
			return (arr);
		}
		else
		{
			return (NULL);
		}
}

