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
		int fd, bytes = 0;

		if (!filename)
			return (-1);
		fd = open(filename, O_WRONLY | O_APPEND);
		if (fd < 0)
			return (-1);
		if (!text_content)
			return (1);
		bytes = write(fd, text_content, _len(text_content));
		if (bytes < 0 || bytes != _len(text_content))
			return (-1);
		close(fd);
		return (1);
}
