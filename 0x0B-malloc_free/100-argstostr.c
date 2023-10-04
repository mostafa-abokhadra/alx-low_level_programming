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
    if (ac == 0 || av == NULL)
    {
        return NULL;
    }

    int i, sum = 0, j =0,c  = 0;

    for (int i = 0; i < ac; i++)
    {
        sum += sizeof(av[i]) - sizeof(char);
    }
    sum += 1;

    char *arr = (char*) malloc(sum * sizeof(char));

    for(i = 0 ; i < ac ; i ++)
    {
        for (j = 0 ; av[i][j] != '\0';j++)
        {
            arr[c] = av[i][j];
            c++;
        }
    }

    return arr;

}

