#include "main.h"
#include <stdlib.h>

/**
  *
  *
  *
  *
  *
  */
void *malloc_checked(unsigned int b)
{
void *arr = malloc(b);
if (arr == NULL)
{
exit(98);
}
else
{
return arr;
}
}

