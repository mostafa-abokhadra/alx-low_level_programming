#include "main.h"
#include <stdlib.h>

/**
  *
  *
  *
  *
  *
  *
  */
int **alloc_grid(int width, int height)
{
    int i = 0, j = 0, **arr = (int **)malloc(sizeof(int *) * height);

    if (width <= 0 || height <= 0)
    {
        return (NULL);
    }

    if (arr == NULL)
    { 
	    for (i = 0 ; i< height; i++)
	    {
		    free(arr[i]);
	    }
	    free (arr);
	    return NULL;
    }

    else
    {
    	for (i = 0; i < height; i++)
    	{
        	arr[i] = (int*) malloc(sizeof(int) * width);
    	}

    	for (i = 0 ; i < height ; i++)
    	{
        	for (j = 0 ; j < width; j++)
        	{
            		arr[i][j] = 0;
        	}
    	}

	return (arr);
    }
}
