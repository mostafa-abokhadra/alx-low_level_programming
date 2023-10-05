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
int i, j, **arr = (int *)malloc(height * sizeof(int *));


if (width <= 0 || height <= 0)
{
return (NULL);
}

if (arr != NULL)
{
for (i = 0; i < height ; i++)
{
arr[i] = (int *)malloc(width *sizeof(int));
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

