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
		if (array == NULL)
		{
			return;
		}
		if (action == NULL)
		{
			return;
		}
		if (size >= 1)
		{
			array_iterator(array, size - 1, action);
		}
		action(array[size]);
}

