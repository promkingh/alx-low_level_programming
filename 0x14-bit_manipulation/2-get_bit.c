#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: unsigned long integer
 * @index: index
 *
 * Return: value at index or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	return ((n & (1 << index)) != 0);
}
