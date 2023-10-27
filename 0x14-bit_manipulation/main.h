#ifndef __HEADER__
#define __HEADER__

#include <limits.h>

int _putchar(char c);
/* binary to int functions */
unsigned int binary_to_uint(const char *b);
int _strlen(const char *b);
char *rev_str(const char *str);
int _pow(int pow);
/* end */
void print_binary(unsigned long int n);
/* get bit */
int get_bit(unsigned long int n, unsigned int index);
char *get_binary(unsigned long int n);
/* end */
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);

#endif /* __HEADER__ */
