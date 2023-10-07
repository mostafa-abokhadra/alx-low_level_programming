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
		unsigned int i;
		char *arr = malloc(nmemb * size);

		if (nmemb == 0 || size == 0)
		{
			return (NULL);
		}
		if (arr != NULL)
		{
			for (i = 0 ; i < nmemb ; i++)
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

