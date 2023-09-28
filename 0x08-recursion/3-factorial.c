#include "main.h"

/**
  * factorial - get factorial of a number
  * @n: the number
  *
  * Description: getting a factorial of a given num
  *
  * Return: factorial
  */
int factorial(int n)
{
		if (n < 0)
		{
			return (-1);
		}
		if (n == 1)
		{
			return (1);
		}
		return (n * factorial(n - 1));
}

