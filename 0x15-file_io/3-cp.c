#include <unistd.h>
#include<string.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

#define BUFFER_SIZE 1024
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
/*
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
}*/
void error_exit(int code, const char *message, const char *file)
{
        dprintf(STDERR_FILENO, message, file);
        exit(code);
}

void copy_file(int fd_from, int fd_to)
{
        char buffer[BUFFER_SIZE];
        ssize_t bytes_read;

        bytes_read = read(fd_from, buffer, BUFFER_SIZE);
        if (bytes_read == -1)
        {
                error_exit(98, "Error: Can't read from file %s\n","source_file"/* argv[1]*/);
        }
        if (bytes_read > 0)
        {
                if (write(fd_to, buffer, bytes_read) != bytes_read)
                {
                        error_exit(99, "Error: Can't write to %s\n", "destination_file"/*av[2]*/);
                }copy_file(fd_from, fd_to);
        }
}

int main(int argc, char *argv[])
{
         char *file_from = malloc(sizeof(char));
         char *file_to = malloc(sizeof(char));
        int fd_from, fd_to;

        if (argc != 3)
        {
                error_exit(97, "Usage: cp file_from file_to\n", "");
        }
        /* file_from = argv[1]; */
       /* file_to = argv[2]; */
        fd_from = open(/*file_from*/ argv[1], O_RDONLY);
        if (fd_from == -1)
        {
                error_exit(98, "Error: Can't read from file %s\n", /*file_from*/ argv[1]);
}
        fd_to = open(/*file_to*/argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
        if (fd_to == -1)
        {
                /*close(fd_from);*/
                error_exit(99, "Error: Can't write to %s\n", /*file_to*/ argv[2]);
        }
        copy_file(fd_from,fd_to);
	sprintf(file_from,"%u", fd_from);
	sprintf(file_to,"%u" ,fd_to);
        if (close(fd_from))
        {
                error_exit(100, "Error: Can't close fd %s\n",file_from);
        }
if (close(fd_to))
{
error_exit(100, "Error: Can't close fd %s\n",file_to);
}
return(EXIT_SUCCESS);
}


