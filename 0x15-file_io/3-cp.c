#include "main.h"

/**
 * main - copies the content of a file to another file
 * @ac: argument count
 * @av: pointer to the argument array
 *
 * Return: 0
 */

int main(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	copy_to(av[1], av[2]);

	return (0);
}
/**
 * copy_to - copies content from a file to another file
 * @file_from: file to copy contents from
 * @file_to: file to copy contents to
 *
 * Return: 1 for success and -1 for fail
 */

int copy_to(const char *file_from, const char *file_to)
{
	int fd1, fd2, rd;
	char temp[B_SIZE];

	fd1 = open(file_from, O_RDONLY);
	if (fd1 == -1)
	{	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	fd2 = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd2 == -1)
	{	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	while ((rd = read(fd1, temp, B_SIZE)) > 0)
	{
		if (rd == -1)
		{	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			exit(98);
		}
		rd = write(fd2, temp, rd);
		if (rd == -1)
		{	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_from);
			exit(99);
		}
	}
	if (rd == -1)
	{	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	if (close(fd1) == -1)
	{	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	if (close(fd2) == -1)
	{	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
	return (1);
}
