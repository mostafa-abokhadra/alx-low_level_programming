#include<stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  * last_digit - operating on last digit of a given number
  * @num: the number we will check it's last digit
  * Description: if the last digit is greater than 5
  * or if less than six and not zero , or if zero
  * in each case will print to stdout some string
  *
  * Return: no retrurn value to void function
  */

void last_digit(int num)
{
		int last;

		last = num % 10;
		if (last > 5)
			printf("Last digit of %d is %d and is greater than 5\n", num, last);
		else if (last < 6 && last > 0)
			printf("Last digit of %d is %d and is and is less than 6 and not 0\n",
				num, last);
		else
			printf("Last digit of %d is %d and is 0\n", num, last);
}

/**
  * main - entry point
  *
  * Description:  assign a random number to the variable n
  *
  * Return: 0 to end the program
  *
  */
int main(void)
{
		int n;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		last_digit(n);
		return (0);
}

