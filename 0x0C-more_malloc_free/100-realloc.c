#include "main.h"
#include <stdlib.h>

/**
  * _realloc - changing the size
  * @ptr: old array
  * @old_size: old size
  * @new_size: new array size
  *
  * Description: resize the array into new_size
  * Return: the new array
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
		char *arr;
		unsigned int i;

		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
		if (new_size == old_size)
		{
			return (ptr);
		}
		if (ptr == NULL)
		{
			arr = malloc(new_size);
			if (arr == NULL)
			{
				return (NULL);
			}

			return (arr);
		}
		else
		{
			arr = malloc(new_size);
			if (arr == NULL)
			{
				return (NULL);
			}
			for (i = 0 ; i < old_size && i < new_size ; i++)
			{
				arr [i] =((char*)ptr)[i];
			}
			free(ptr);
			return (arr);
		}
}

