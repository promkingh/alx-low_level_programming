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
	ssize_t num = 0;
	FILE *fp = NULL;
	size_t a, b;
	char buffer[BUFF_SIZE];

	if (filename == NULL)
		return (0);
	fp = fopen(filename, "r");
	if (fp == NULL)
		return (0);
	a = 0;
	while (fgets(buffer, BUFF_SIZE, fp) != NULL && a < letters)
	{
		for (b = 0; buffer[b]; b++)
		{
			printf("%c", buffer[b]);
			num++;
			if (++a >= letters)
				break;
		}
	}

	fclose(fp);

	return (num);
}
