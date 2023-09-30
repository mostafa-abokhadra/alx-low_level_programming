#include "main.h"

/**
  * is_prime_number2 - check if a num is prime
  * @num1: the num to be checked
  * @num2: mathmatical operation num
  *
  * Description: if prime or not
  * Return: 1 if prime, 0 if not
  */
int is_prime_number2(int num1, int num2)
{
		if (num2 == 1)
		{
			return (1);
		}
		if (num1 % num2 == 0)
		{
			return (0);
		}
		else
		{
			return (is_prime_number2(num1, num2 - 1));
		}
}

/**
  * is_prime_nember - check if prime
  * @n: num to be checked if prime or not
  *
  * Description : calling another function to do the procedures
  * Return: the returned value from the other function
  */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (is_prime_number2(n, n - 1));
	}
}

