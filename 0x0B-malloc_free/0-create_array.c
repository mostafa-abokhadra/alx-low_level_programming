#include "main.h"
#include <stdlib.h>

/**
  * create_array - dynamic array
  * @size: size of array
  * @c: initializing char
  *
  * Description: initializing an array with specific character
  *
  * Return: pointer to the array
  */
char *create_array(unsigned int size, char c)
{
		unsigned int i;

		char *arr = (char*)malloc(sizeof(char) * size);

		if (size == 0)
		{
			return (NULL);
		}
		else
		{
			if (arr != NULL)
			{
				for (i = 0; i < size; i++)
				{
					arr[i] = c;
				}
			}
		}

		return (arr);
}

