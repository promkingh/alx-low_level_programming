#include <stdio.h>

/**
 * main- print largest prime factor of 612852475143
 * Return: always 0 success
 */
int main(void)
{
	long long int num,f, i;
	num = 612852475143;

	for (i = 2; i <= num; i++)
	{
		if (num % i == 0)
		{
			num = num / i;
			f = i;
		}
	}
	printf("%d", f);
	return (0);
}
