#include "function_pointers.h"
#include <stdlib.h>

/**
  * array_iterator - print an array elem
  * @array: the array
  * @size: array size
  * @action: pointer to the print function
  *
  * Description: recursively calling the function
  * Return: nothing
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{		
		unsigned int i;

		if (array == NULL)
		{
			return;
		}
		if (action == NULL)
		{
			return;
		}
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
}

