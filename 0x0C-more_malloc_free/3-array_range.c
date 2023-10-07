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
  * check_NULL - checking NULL
  * @min: if greater is NULL
  * @max: if greater not NULL
  *
  * Description: check if we will return NULL
  * Return: 1 if min greater than max, 0 if not
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
  * array_range - inserting a range in an array
  * @min: start point
  * @max: end point
  *
  * Description: from min to max in an array
  * Return: the arrayd
  */
int *array_range(int min, int max)
{
		int size, *arr, i;

		if (check_NULL(min, max))
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

