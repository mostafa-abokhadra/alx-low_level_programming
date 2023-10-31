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

		if (!str)
			return (0);
		while (str[counter] != '\0')
		{
			counter++;
		}
		return (counter);
}
/**
  * create_file - creation of a new file
  * @filename: the file name
  * @text_content: text to be added to the file
  *
  * Description: just creation an adding
  * Return: one on success -1 on failure
  */
int create_file(const char *filename, char *text_content)
{
		int fd, count = 0;

		if (!filename)
			return (-1);
		fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC | S_IRUSR | S_IWUSR, 500);
		if(fd < 0)
			return (-1);
		else
		{
			if (!text_content)
				return (1);
			count = write(fd, text_content, _len(text_content));
			if (count < 0)
				return (-1);
		}
		if (count == _len(text_content))
			return (1);
		return (-1);
}
