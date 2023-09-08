#include<stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  * check - wether the number is +ve or -ve
  * @num : the number we will check
  *
  * Description: prints the num is positive if num > 0,
  * num is negative if num < 0 , and num is zero if num = zero
  *
  * Return: no return value for void type function only prints the
  * output to the stdout
  */
void check(int num)
{
		if (num > 0)
			printf("%d is positive\n", num);
		else if (num < 0)
			printf("%d is negative\n", num);
		else
			printf("%d is zero\n", num);
}
/**
  * main - entry point
  *
  * Description:  assign a random number to the variable n
  *
  * Return: return 0 to end the program
  *
  */
int main(void)
{
		int n;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		check(n);
		return (0);
}

