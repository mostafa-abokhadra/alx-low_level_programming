#include "main.h"

/**
  * print_alphabet - prints alphabet
  *
  * Description: printing in lower case a to z
  *
  * Return: no return value to void function
  */
void print_alphabet(void)
{
		int i;

		for(i = 'a' ; i <= 'z' ; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_alphabet();
    return (0);
}
