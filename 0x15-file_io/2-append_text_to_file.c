#include "main.h"

/**
 * append_text_to_file -  appends text at the end of a file
 * @filename: name of the file
 * @text_content: Null terminated string to add to the end of the file
 *
 * Return: 1 (success) or -1 failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len, app;

	if (!filename)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (len = 0; text_content[len]; len++)
		;
	app = write(fd, text_content, len);
	if (app == -1)
		return (-1);
	close(fd);
	return (1);
}
