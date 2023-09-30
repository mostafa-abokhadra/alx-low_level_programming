#include "main.h"

/**
  * sqrt2 - finding the square root
  * @n: the number
  * @num: squared number to check
  *
  * Description: find the square root of a given number
  * Return: the square root
  */
int sqrt2(int n, int num)
{
		if ((num * num) > n)
		{
			return (-1);
		}
		if (n == (num * num))
		{
			return (num);
		}
		else
		{
			return (sqrt2(n, num + 1));
		}
}

/**
  * _sqrt_recursion - find a square root
  * @n: the number to find it's square root
  *
  * Description: calling another function to do the procedure
  *
  * Return: the returned value form above function
  *
  */
int _sqrt_recursion(int n)
{
		int num = 1;

		return (sqrt2(n, num));
}

