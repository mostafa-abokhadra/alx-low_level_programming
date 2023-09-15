#include "main.h"

/**
  */
void printmin(int n)
{
if (n == 0)
{
return;
}
int little = 0;
if (n == INT_MIN){
n = n -1;
_putchar('-');
little = (n%10 + 1);
}
printmin(n/10);
if (little != 0)
{
_putchar('0' + little);
}
else{
_putchar('0' + n%10);
}
}
/**
* realprint - print a num recursively
* @real: the num to be printed
*
* Description: recurse to get last digit to print using putchar
*
* Return: nothing, to calling function
*/
void realprint(int real)
{
int t;

if (real == 0)
{
return;
}

t = real % 10;
realprint(real /= 10);
_putchar('0' + t);
}

/**
* printzero - only print zero
* @zero: zero number
*
* Description: return 0 and print it using put char
*
* Return: 0
*/
int printzero(int zero)
{
return (zero);
}

/**
* print_number - printing a given num entry
* @n: the num to be printed
*
* Description: just printing a given num using putchar only
*
* Return: nothing;
*/
void print_number(int n)
{
if (n == 0)
{
_putchar('0' + printzero(n));
return;
}
else if (n < 0 && n != INT_MIN)
{
_putchar('-');
n = n  - n - n;
realprint(n);
}
else if (n == INT_MIN)
{
printmin(n);
}
else
{
realprint(n);

}
}
