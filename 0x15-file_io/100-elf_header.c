#include "main.h"

/**
 * main - displays the information contained in the ELF header at the start
 *		of an ELF file
 * @ac: argument count
 * @av: pointer to arguments array
 *
 * Return: 0 (success)
 */

int main(int ac, char **av)
{
	if (ac != 2)
	{
		dprintf(STDERR_FILENO, "Error: Usage - %s  file\n", av[1]);
		exit(98);
	}

	return (0);
}
