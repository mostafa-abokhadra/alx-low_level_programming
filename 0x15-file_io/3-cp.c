#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

#define CLOSE "Error: Can't close fd %d\n"
#define USAGE "Usage: cp file_from file_to\n"
#define REA "Error: Can't read from file %s\n"
#define PERM (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)
#define WRITING "Error: Can't write to %s\n"

/**
  * main - entry point
  * @count: arg count
  * @av: list of args
  *
  * Description: copying a file into a new file
  * Return: success
  */
int main(int count, char **av)
{
		int fd1, fd2, r_c;
		char *c = malloc(sizeof(char) * 1024);

		if (count != 3)
			dprintf(STDERR_FILENO, USAGE), exit(97);
		fd1 = open(av[1], O_RDONLY);
		if (fd1 < 0)
			dprintf(STDERR_FILENO, REA, av[1]), exit(98);
		fd2 = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, PERM);
		if (fd2 < 0)
			dprintf(STDERR_FILENO, WRITING, av[2]), exit(99);
		while ((r_c = read(fd1, c, 1024)) > 0)
			if (write(fd2, c, r_c) != r_c)
				dprintf(STDERR_FILENO, WRITING, av[2]), exit(99);
		if (r_c < 0)
			dprintf(STDERR_FILENO, REA, av[1]), exit(98);
		fd1 = close(fd1);
		fd2 = close(fd2);
		if (fd1)
			dprintf(STDERR_FILENO, CLOSE, fd1), exit(100);
		else if (fd2)
			dprintf(STDERR_FILENO, CLOSE, fd2), exit(100);
		return (EXIT_SUCCESS);
}
