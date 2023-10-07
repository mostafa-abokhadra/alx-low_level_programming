#include "main.h"
#include <stdlib.h>

/**
  *
  *
  *
  *
  *
  */

void _memcpy(char *str, char *str2 , int size)
{
    int i;

    for (i = 0 ; str2[i] != '\0' && i < size ; i++)
    {
        str[i] = str2[i];
    }
}
/**
  *
  *
  *
  *
  *
  *
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

void *arr;


if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
else if (new_size == old_size)
{
return (ptr);
}
else if (ptr == NULL && new_size > 0)
{
arr = malloc(new_size);
}
else
{
arr = malloc(new_size);
_memcpy(arr,ptr,old_size);
}

return (arr);
}

