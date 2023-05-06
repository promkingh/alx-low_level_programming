#include "main.h"

/**
 * flip_bits -  returns the number of bits you would need to flip to get
 *		from one number to another
 * @n: given integer
 * @m: taget integer
 *
 * Return: num of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff;
	unsigned int num;

	diff = n ^ m;
	num = 0;

	while (diff > 0)
	{
		if (diff & 1)
			num++;
		diff >>= 1;
	}
	return (diff);
}
