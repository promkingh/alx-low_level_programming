#include <stdio.h>

/**
 * main- print largest prime factor of 612852475143
 * Return: always 0 success
 */
int main(void)
{
	int f, i;
	long int num = 612852475143;

	for (i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			num = num / i;
			f = i;
		}
	}
	printf("%lu", f);
	return (0);
}
