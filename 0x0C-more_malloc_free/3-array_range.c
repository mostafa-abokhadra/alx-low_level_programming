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
int ll2(int min, int max)
{
int i, COU = 0;

for (i = min; i <= max; i++)
{
COU++;
}

return (COU);
}
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
int *array_range(int min, int max)
{
int size = ll2(min, max), *arr = malloc(size * sizeof(int)), i;

if(check_NULL(min, max))
{
return (NULL);
}
else
{

if (arr != NULL)
{
for (i = 0 ; i < size && min <= max; i++, min++)
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

}

