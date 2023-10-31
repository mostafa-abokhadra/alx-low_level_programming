#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

int main(int count, char **av)
{
		int fd1, fd2, r_c, w_r, co, co2;
		char *c = malloc(sizeof(char) * 1024);

		if (count != 3)
		{
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			exit(97);
		}
		fd1 = open(av[1], O_RDONLY);
		fd2 = open(av[2], O_WRONLY | O_TRUNC | O_APPEND);
		if (fd1 < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",av[1]);
			exit(98);
		}
		while((r_c = read(fd1, c, 1024)) != 0)
		{
			if (r_c < 0)
			{
				dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",av[1]);
				exit(98);
			}
			w_r = write(fd2, c, 1);
			if (w_r < 0)
			{
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
				exit(99);
			}
		}
		co = close(fd1);
		co2 = close(fd2);
		if (co != 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
			exit(100);
		}
		else if (co2 != 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
			exit(100);
		}
		return (0);
}
