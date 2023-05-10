#include "main.h"

/**
 * create_file - creates a file
 * @filename: file to create
 * @text_content: Null terminated string to write to file
 *
 * Return: 1 (Suceess) or -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file, len, in;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
		return (-1);

	if (text_content == NULL)
		return (-1);
	if (!text_content)
		text_content = "";
	len = 0;
	while (text_content[len])
		len++;

	in = write(file, text_content, len);
	if (in == -1)
		return (-1);

	close(file);

	return (1);
}
