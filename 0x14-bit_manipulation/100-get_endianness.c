#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: int
 */

int get_endianness(void)
{
	char *c;
	int a;

	a = 1;
	c = (char *)&a;

	return (*c);
}
