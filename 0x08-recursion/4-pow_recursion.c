#include "main.h"

/**
  * _pow_recursion - power of num
  * @x: the num
  * @y: the power
  *
  * Description: raising a given num to a given power
  *
  * Return: the result
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}

	return (_pow_recursion(x, y - 1) * x);
}

