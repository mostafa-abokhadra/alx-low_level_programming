#include "main.h"
#include <stdlib.h>

/**
  *
  *
  *
  *
  *
  */
int l(char *str)
{
	int i;
if (str == NULL)
{
return (0);
}


for (i = 1; str[i] != '\0' ; i++)
{

}

return (i);
}

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, j;
unsigned int s1_size = l(s1);
unsigned int s2_size = l(s2);
char *arr;

if (s1 == NULL)
{
s1 = malloc(sizeof(char));
*s1 = '\0';
}
if (s2 == NULL)
{
s2 = malloc(sizeof(char));
*s2 = '\0';
}
if (n >= s2_size)
{
arr = malloc((s1_size + s2_size + 1) * (sizeof(char)));
}
else
{
arr = malloc ((s1_size + n + 1) * sizeof(char));
}

if (arr != NULL)
{
for (i = 0 ; s1[i] != '\0' ; i++)
{
arr[i] = s1[i];
}
for (j = 0 ; s2[j] != '\0' && j < n ; j++, i++)
{
arr[i] = s2[j];
}

arr[i] = '\0';
return (arr);
}
else
{
return (NULL);
}

}

