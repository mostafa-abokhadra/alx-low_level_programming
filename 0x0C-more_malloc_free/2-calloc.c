#include "main.h"
#include <stdlib.h>

/**
  *
  *
  *
  *
  *
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
int i;
void *arr = malloc(nmemb * size);

if (nmemb == 0 || size == 0)
{
return (0);
}

if (arr != NULL)
{
for (i = 0 ; i < nmemb; i++)
{
*((int *)(arr + i)) = 0;
}

return arr;
}
else
{
return (NULL);
}

}

