#include "main.h"
#include <stdlib.h>

/**
  * alloc_grid - dynamic 2d array
  * @width: the rows
  * @height: the columns
  *
  * Description: assigning the value 0 to 2d array elements
  * Return: the 2d array
  */
int **alloc_grid(int width, int height)
{
		int i, j, **arr = (int **)malloc(height * sizeof(int *));

		if (width <= 0 || height <= 0)
		{
			return (NULL);
		}
		if (arr != NULL)
		{
			for (i = 0; i < height ; i++)
			{
				arr[i] = (int *)malloc(width * sizeof(int));
				if (arr[i] == NULL)
				{
					for (j = i ; j >= 0; j--)
					{
						free(arr[j]);
					}
					free(arr);
					return (NULL);
				}
			}

			for (i = 0 ; i < height; i++)
			{
				for (j = 0 ; j < width ; j++)
				{
					arr[i][j] = 0;
				}
			}
			return (arr);
		}
		else
		{
			free(arr);
			return (NULL);
		}
}

