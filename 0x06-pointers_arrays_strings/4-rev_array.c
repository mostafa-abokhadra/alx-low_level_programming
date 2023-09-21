#include "main.h"

/**
  * revers_array - reversing an array of integers
  * @a: the array
  * @n: size of the array
  *
  * Description: reversing an array by alternating last elemnent with first
  *
  * Return: nothing
  */
void reverse_array(int *a, int n)
{
		if (n == 1 || n == 0)
		{
			return;
		}

		int state = 1, i = 0, tn, tt;

		n--;
		tt = n;

		while (state)
		{
			tn = a[i];
			a[i] = a[n];
			a[n] = tn;

			if (tt % 2 == 0)
			{
				if (i + 2 == n)
				{
					state = 0;
				}
			}
			else
			{
				if (n - i == 1)
				{
					state = 0;
				}
			}

			n--;
			i++;
		}
}

