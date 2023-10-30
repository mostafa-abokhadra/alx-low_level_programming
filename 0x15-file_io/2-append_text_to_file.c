#include "main.h"
#include <unistd.h>
#include <fcntl.h>

/**
  * _len - string length
  * @str: string
  *
  * Description: array length of char
  * Return: the length
  */
int _len(char *str)
{
		int counter = 0;

		while (str[counter] != '\0')
		{
			counter++;
		}
		return (counter);
}

/**
  * append_text_to_file - append
  * @filename: file name
  * @text_content: txt
  *
  * Description: appending text
  * Return: 1 or -1
  */
int append_text_to_file(const char *filename, char *text_content)
{
		int fd;

		fd = open(filename, O_APPEND);
		if (fd < 0 || filename == NULL)
			return (-1);
		write(fd, text_content, _len(text_content));
		if (text_content == NULL && fd >= 0)
			return (1);
		else if (text_content == NULL && fd < 0)
			return (-1);
		return (1);
}
