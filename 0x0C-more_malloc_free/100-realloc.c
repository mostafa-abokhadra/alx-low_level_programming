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
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

void *arr;
int i;

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
memcpy(arr,ptr,old_size);
}

return (arr);
}

