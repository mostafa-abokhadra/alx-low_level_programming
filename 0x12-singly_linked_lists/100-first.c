#include <stdio.h>

void print_before_main(void) __attribute((constructor));

/**
  * print_before_main - printing a sentence first
  *
  * Description: executed before main
  *
  * Return: nothing
  */
void print_before_main(void)
{
		printf("You're beat! and yet, you must allow,\n");
		printf("I bore my house upon my back!\n");
}
