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
char *argstostr(int ac, char **av)
{
	int i, sum = 0, j =0,c  = -1;

	char *arr = (char*) malloc(sum * sizeof(char));

    if (ac == 0 || av == NULL)
    {
        return NULL;
    }

 

    for (i = 0; i < ac; i++)
    {
        sum += sizeof(av[i]) - sizeof(char);
    }
    sum += 1;

    for(i = 0 ; i < ac ; i ++)
    { c++;
        for (j = 0 ; av[i][j] != '\0';j++,c++)
        {
            arr[c] = av[i][j];
         
        }
	arr[c] = '\n';
    }
    arr[c] = '\0';

    return arr;

}

