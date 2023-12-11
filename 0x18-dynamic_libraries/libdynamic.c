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
  * _strlen - returning the lenghe of a string
  * @s: the stirng which length need to be calculated
  *
  * Description: using a counter to calculate each character of the string
  *
  * Return: the length of the string
  */

int _strlen(char *s)
{
		int length = 0, i;

		for (i = 0 ; s[i] != '\0' ; i++)
		{
			length++;
		}

		return (length);
}

/**
  * _puts - print a string
  * @str: the given string to be printed
  *
  * Description: using putchar and loop to print characters
  *
  * Return:nothing
  */
void _puts(char *str)
{
		int i;

		for (i = 0 ; str[i] != '\0' ; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
}

/**
  * _strcpy - copying a string
  * @dest: the destination to be copied at
  * @src: the source of copying
  *
  * Description: copying a given string into another string
  *
  * Return: the destination string
  */
char *_strcpy(char *dest, char *src)
{
		int i;

		for (i = 0 ; src[i] != '\0' ; i++)
		{
			dest[i] = src[i];
		}

		dest[i] = '\0';

		return (dest);
}

/**
  * _atoi - converting a string to integer
  * @s: the string to be converted
  *
  * Description: using ascii code to convert
  *
  * Return: the converted string of int type
  */
int _atoi(char *s)
{
		int pos = 1, i, n = 0, min = 0;

		for (i = 0 ; s[i] != '\0' ; i++)
		{
			if (s[i] == '-' || s[i] == '+')
			{
				if (pos == 1 && s[i] == '-')
				{
					pos = 0;
				}
				else if (pos == 0 && s[i] == '-')
				{
					pos = 1;
				}
			}
			if (s[i] >= '0' && s[i] <= '9')
			{
				n *= 10;
				if (n == 2147483640 && s[i] == '8')
				{
					min = 1;
					break;
				}
				n += (s[i] - '0');
				if (!(s[i + 1] >= '0' && s[i + 1] <= '9'))
				{
					break;
				}
			}
		}
		if (!pos)
		{
			n *= (-1);
			if (min)
			{
				n -= 8;
			}
		}

		return (n);
}

/**
  * _strcat - concatenate 2 strings
  * @dest: destination string to
  * @src: source string to be concatenated to destination string
  *
  * Description: concatenating a given string into another string
  * Return: the concatenated string
  */
char *_strcat(char *dest, char *src)
{
		int i, j;

		for (i = 0 ; dest[i] != '\0' ; i++)
		{
		}
		for (j = 0 ; src[j] != '\0' ; j++, i++)
		{
			dest[i] = src[j];
		}

		dest[i] = '\0';

		return (dest);
}

/**
  * _strncat - concatinating 2 strings
  * @dest: destination string
  * @src: source string
  * @n: n bytes to be concatenated
  *
  * Description: concatinating two strings and avoiding buffer
  * Return: the concatinating string
  */
char *_strncat(char *dest, char *src, int n)
{
		int i, j;

		for (i = 0 ; dest[i] != '\0' ; i++)
		{
		}
		for (j = 0 ; j < n && src[j] != '\0'; j++, i++)
		{
			dest[i] = src[j];
		}
		dest[i] = '\0';
		return (dest);
}

/**
  * _strncpy - copy a string into a string
  * @dest: destination string
  * @src: source string
  * @n: the number of bytes to be copied
  *
  * Description: copying and overlaping a string in another string
  *
  * Return: the copied string
  */
char *_strncpy(char *dest, char *src, int n)
{
		int i;

		for (i = 0 ; i < n && src[i] != '\0' ; i++)
		{
			dest[i] = src[i];
		}
		for (; i < n ; i++)
		{
			dest[i] = '\0';
		}

		return (dest);
}

/**
  * _strcmp - comparing two strings
  * @s1: the first string
  * @s2: the second string
  *
  * Description: checking if two given strings are equivlent
  *
  * Return: 0 if stings are identical
  * greater than zero if the first unmatching characters in the s1 > s2
  * less than zero if s2 > s1
  */
int _strcmp(char *s1, char *s2)
{
		int i, check = 1;

		for (i = 0  ; s1[i] != '\0' && s2[i] != '\0'; i++)
		{
			if (s1[i] == s2[i])
			{
				continue;
			}
			else
			{
				check = 0;
				break;
			}
		}
		if (check)
		{
			return (0);
		}
		else
		{
			return (s1[i] - s2[i]);
		}
}

/**
  * _memset -  fills memory with a constant byte
  * @s: the string
  * @b: the character to fill the memory with
  * @n: the number of fills
  *
  * Description: filling a space of memory with constant
  *
  * Return: the string after filled
  */
char *_memset(char *s, char b, unsigned int n)
{
		unsigned int i;

		for (i = 0 ; i < n ; i++)
		{
			s[i] = b;
		}

		return (s);
}

/**
  * _memcpy - copying memory block
  * @dest: destination string
  * @src: source stinrg
  * @n: number of byter to be copied
  *
  * Description: copy number of bytes from one string to another
  * Return: the changed string
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
		unsigned int i;

		for (i = 0 ; i < n ; i++)
		{
			dest[i] = src[i];
		}

		return (dest);
}

/**
  * _strchr - find a char
  * @s: the string
  * @c: the char to find
  *
  * Description: finding a character in a given string
  *
  * Return: pointer to char if found, NULL if not
  */
char *_strchr(char *s, char c)
{
		int i;

		for (i = 0; s[i] >= '\0'; i++)
		{
			if (s[i] == c)
			{
				return (&s[i]);
			}
		}

		return (0);
}

/**
  * _strspn - count characters
  * @s: the string
  * @accept: the needed to be founded characters
  *
  * Description: counting a characters in a given strings
  *
  * Return: the count of the characters
  */
unsigned int _strspn(char *s, char *accept)
{
		int i, j;

		unsigned int cou = 0;

		for (i = 0; s[i] != ' '; i++)
		{
			for (j = 0; accept[j] != '\0' ; j++)
			{
				if (accept[j] == s[i])
				{
					cou++;
				}
			}
		}

		return (cou);
}

/**
  * _strpbrk - searches a string for any of a set of bytes
  * @s: the string to search on
  * @accept: the string to search upon
  *
  * Description: locates the first occurrence in the string
  *
  * Return: pointer to first occurrence, or NULL if not found
  */
char *_strpbrk(char *s, char *accept)
{
		int i, j;

		for (i = 0 ; s[i] != '\0' ; i++)
		{
			for (j = 0 ; accept[j] != '\0' ; j++)
			{
				if (s[i] == accept[j])
				{
					return (&s[i]);
				}

			}
		}

		return (0);
}

char *_strstr(char *haystack, char *needle)
{
}

/**
  * _isupper - checking upper case letter
  * @c: the letter to be checked
  *
  * Description: using ascii code to look for upper case letter
  *
  * Return: 1 if the letter is in upper case , 0 if otherwise
  */
int _isupper(int c)
{
		if (c >= 'A' && c <= 'Z')
		{
			return (1);
		}
		else
		{
			return (0);
		}
}

/**
  * _isdigit - checking for digits
  * @c: the char to be checked if a digit or not
  *
  * Description: using ascii code to check fo digit
  *
  * Return: 1 if a digit , 0 otherwise
  */
int _isdigit(int c)
{
		if (c >= '0' && c <= '9')
		{
			return (1);
		}
		else
		{
			return (0);
		}
}

/**
  * _islower - checks if a given char is in lower case
  * @c: the character to be checked
  *
  * Description: using ascii code lower case char check
  *
  * Return: 1 if lower case , 0 if not
  */
int _islower(int c)
{
		if (c >= 97 && c <= 122)
		{
			return (1);
		}
		return (0);
}

/**
  * _isalpha - checks if a given char is alphabet
  * @c: the character to be checked
  *
  * Description: using ascii code see if a given char
  * is alphbet
  *
  * Return: 1 if alphabet , 0 if not
  */
int _isalpha(int c)
{
		if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		{
			return (1);
		}
		return (0);
}

/**
  * _abs - converts to  absolute nums
  * @num: the num which will be converted
  *
  * Description: printing only absolute numbers accordingly
  *
  * Return: 0 if num is zero , num if num > 0 ,
  * (num - num - num) if < 0 to convert
  */
int _abs(int num)
{
		if (num == 0)
		{
			return (0);
		}
		else if (num > 0)
		{
			return (num);
		}
		return (num - num - num);
}

