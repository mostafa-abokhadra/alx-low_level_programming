#include<stdio.h>
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
		return (write(1, &c, 1));
}

/**
  * main - entry point
  *
  * Description: printing _putchar string
  *
  * Return: 0 to end the program
  */
int main()
{
		_putchar('_');
		_putchar('p');
		_putchar('u');
		_putchar('t');
		_putchar('c');
		_putchar('h');
		_putchar('a');
		_putchar('r');
		_putchar('\n');
		return (0);
}

