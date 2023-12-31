#include "main.h"
#include <stdlib.h>

/**
  * l - length of arguments
  * @ac: count of arg
  * @av: list of args
  *
  * Description: size of all arguments together
  * Return: the size
  */
int l(int ac, char *av[])
{
		int i, j, sum = 0;

		if (ac == 0 || av[0] == NULL)
		{
			return (0);
		}

		for (i = 0 ; i < ac ; i++)
		{
			if (av[i][0] != '\0')
			{
				for (j = 1 ; av[i][j] != '\0' ; j++)
				{
				}

				sum += (j + 1);
			}
		}

		return (sum + 1);
}

/**
  * argstostr - concate arguments
  * @ac: count of args
  * @av: list of args
  *
  * Description: concating a list of arguments into 1 string
  * Return: the result
  */
char *argstostr(int ac, char **av)
{
		int size = l(ac, av), i, j, c = 0;
		char *arr = (char *)malloc(size * sizeof(char));

		if (size == 0)
		{
			arr = NULL;
		}

		if (arr == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0 ; i < ac ; i++)
			{
				for (j = 0; av[i][j] != '\0' ; j++, c++)
				{
					arr[c] = av[i][j];
				}
				arr[c] = '\n';
				c++;
			}
			arr[c] = '\0';
			return (arr);
		}
}

