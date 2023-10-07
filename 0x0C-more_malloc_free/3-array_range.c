#include "main.h"
#include <stdlib.h>

/**
  * ll2 - length of array
  * @min: start point
  * @max: end point
  *
  * Description: getting the length of malloc
  * Return: the length
  */
int ll2(int min, int max)
{
		int i, COU = 0;

		for (i = min ; i <= max ; i++)
		{
			COU++;
		}
		return (COU);
}

/**
  *
  *
  *
  *
  *
  */
int check_NULL(int min, int max)
{
		int ch;

		if (min > max)
		{
			ch = 1;
		}
		else
		{
			ch = 0;
		}
		return (ch);
}

/**
  *
  *
  *
  *
  *
  *
  */
int *array_range(int min, int max)
{
		int size, *arr, i;

		if(check_NULL(min, max))
		{
			return (NULL);
		}
		size = ll2(min, max);
		arr = malloc(size * sizeof(int));
		if (arr != NULL)
		{
			for (i = 0 ; i < size ; i++, min++)
			{
				arr[i] = min;
			}
			return (arr);
		}
		else
		{
			return (NULL);
		}
}

