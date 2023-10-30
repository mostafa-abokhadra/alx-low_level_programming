#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
  * _strlen - string length
  * @str: the string
  *
  * Description: just getting the stiring size
  *
  * Return: the length
  */
int _strlen(char *str)
{
		int i;

		for (i = 0 ; str[i] != '\0' ; i++)
		{
		}

		return (i);
}

/**
  * read_textfile - reading from a txt file
  * @filename: file name
  * @letters: bytes to be read
  *
  * Description: using system call function
  * Return: number of bytes were printed successfully to stdout
  */
size_t read_textfile(const char *filename, size_t letters)
{
		int fd = open(filename, O_RDONLY);
		int count = 0;
		char *str = malloc (sizeof(char) * letters + 1);

		if (fd < 0 || filename == NULL)
			return (0);
		count = read(fd, str, letters);
		if (write(1, str, _strlen(str)) < 0)
			return (0);
		return (count);
}
