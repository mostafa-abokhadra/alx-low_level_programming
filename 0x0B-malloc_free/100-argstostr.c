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
int l(int ac, char *av[])
{

if (ac == 0 || av[0] == NULL)
{
return (0);
}

int i, j, sum = 0;

for (i = 0 ; i < ac; i++)
{
if (av[i][0] != '\0')
{
for (j = 1; av[i][j] != '\0';j++)
{

}
sum += (j + 1);
}
}
return (sum + 1);// +1 for null terminator
}

/**
  *
  *
  *
  *
  *
  *
  */
char *argstostr(int ac, char **av)
{
int size = l(ac,av), i, j, c = 0;
char *arr = (char *)malloc(size*sizeof(char));

if (size == 0)
{
arr = NULL;
}

if (arr == NULL)
{
return NULL;
}
else
{
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0' ; j++, c++)
{
arr[c] = av[i][j];

}
arr[c]='\n';
c++;
}
arr[c]= '\0';

return (arr);
}
}

