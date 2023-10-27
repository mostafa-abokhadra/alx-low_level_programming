#include "main.h"

/**
  *
  *
  *
  *
  */
void print_binary(unsigned long int n)
{
unsigned int rem = 0;

if (n == 0 || n == 1)
{
_putchar(n + '0');
return;
}
if (n == 0)
return;
rem = n % 2;
print_binary(n/2);
_putchar(rem + '0');
}

