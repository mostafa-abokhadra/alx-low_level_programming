#include <stdlib.h>
#include "function_pointers.h"

/**
  * int_index - searching for an elem
  * @array: array to search in
  * @size: array size
  * @cmp: pointer to comparison function
  *
  * Description: find and elem in an array
  *
  * Return: index if found, -1 if not
  */
int int_index(int *array, int size, int (*cmp)(int))
{
		int i;

		if (array == NULL || cmp == NULL)
		{
			return (-1);
		}
		if (size <= 0)
		{
			return (-1);
		}
		for (i = 0 ; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
		return (-1);
}

