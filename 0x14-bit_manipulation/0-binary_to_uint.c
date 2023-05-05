#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to string
 *
 * Return: coverted no or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int a, c, res = 0;

	if (b == NULL)
		return (0);
	a = 0;
	while (b[a])
	{
		a++;
	}
	c = 0;
	while (c < a)
	{
		if (!isdigit(b[c]))
			return (0);
		res +=  ((b[c] - '0') << (a - 1 - c));
		c++;
	}
	return (res);
}

