#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: pointer to the file being accessed
 * @letters: letters being read
 *
 * Return: number of letters read and printed or 0 if filename NULL or if
 *	write fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t a;
	ssize_t b, c;
	char *buf;

	buf = malloc(sizeof(char) * letters);

	if (buf == NULL)
		return (0);
	if (filename == NULL)
		return (0);
	a = open(filename, O_RDONLY);
	if (a == -1)
		return (0);

	b = read(a, buf, letters);
	c = write(STDOUT_FILENO, buf, b);
	if (c != b  && c == -1)
		return (0);
	free(buf);
	close(a);

	return (c);
}
