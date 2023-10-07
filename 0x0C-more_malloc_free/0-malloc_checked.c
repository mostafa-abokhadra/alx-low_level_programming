#include "main.h"
#include <stdlib.h>

/**
  * malloc_checked - creating an array
  * @b: size of array
  *
  * Description: dynamic array creation
  * Return: the array
  */
void *malloc_checked(unsigned int b)
{
		void *arr = malloc(b);

		if (arr == NULL)
		{
			exit(98);
		}
		else
		{
			return (arr);
		}
}

