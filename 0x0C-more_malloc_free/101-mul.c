#include "main.h"
#include <stdlib.h>
#include <limits.h>
#include <unistd.h>
#include <stdio.h>

void rec (int num)
{
	char cnum;
    if (num == 0)
        return;

    rec(num / 10);

     cnum = num % 10 ;
    _putchar(cnum + '0');

}
int check (int ac, char *av[])
{
    int  i, j, c = 1;

    for (i = 0 ; i < ac ; i++)
    {
        for (j = 0 ; av[i][j] != '\0' ; j++)
        {
            if (av[i][j] >='0' && av[i][j] <='9')
            {
                continue;
            }
            c = 0;
	    break;
        }
    }


    return c;
}
int main(int ac, char *av[])
{
	int i, num1 = 0, num2 = 0, result;
 
    if (ac > 3 || check(ac, av))
    {
        _putchar('E');
        _putchar('r');
        _putchar('r');
        _putchar('o');
        _putchar('r');
        _putchar('\n');
        exit(98);
    }



    for (i = 0 ; av[1][i] != '\0' ; i++)
    {
        num1 = (num1 *10) + av[1][i] - '0';
    }
    for (i = 0 ; av[2][i] != '\0' ; i++)
    {
        num2 = (num2 *10) + av[2][i] - '0';
    }
    result = num1 * num2;

    rec(result);

    _putchar('\n');


    return 0;
}

