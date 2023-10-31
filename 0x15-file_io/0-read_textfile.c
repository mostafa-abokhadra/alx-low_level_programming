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
		int fd, r_count = 0, w_count = 0;
		char *str = malloc(sizeof(char) * letters + 1);

		if (!filename)
			return (0);
		fd = open(filename, O_RDONLY);
		if (fd < 0)
			return (0);
		r_count = read(fd, str, letters);
		if (r_count < 0)
			return (0);
		str[r_count] = '\0';
		w_count = write(1, str, _strlen(str));
		if (w_count < 0 || w_count != r_count)
			return (0);
		close(fd);
		return (w_count);
}
