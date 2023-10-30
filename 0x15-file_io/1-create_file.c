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
  * create_file - creation of a new file
  * @filename: the file name
  * @text_content: text to be added to the file
  *
  * Description: just creation an adding
  * Return: one on success -1 on failure
  */
int create_file(const char *filename, char *text_content)
{
		int fd1, count = 0;

		if (filename == NULL)
			return (-1);
		fd1 = open(filename, O_RDWR);
		if (fd1 > 0)
			truncate(filename, 0);
		else
			fd1 = open(filename, O_RDWR | O_CREAT);
		if (fd1 < 0)
			return (-1);
		if (text_content == NULL)
			write(fd1, "\0", 1);
		else
			count = write(fd1, text_content, _len(text_content));
		if (count != _len(text_content))
			return (-1);
		return (1);

}
