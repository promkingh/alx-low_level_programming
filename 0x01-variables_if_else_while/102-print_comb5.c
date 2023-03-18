#include <stdio.h>

/**
 * main - Print possible combinations of two two-digit
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int td1, td2;

	for (td1 = 0; td1 < 100; td1++)
	{
		for (td2 = td1 + 1; td2 < 100; td2++)
		{
			putchar((td1 / 10) + '0');
			putchar((td1 % 10) + '0');
			putchar(' ');
			putchar((td2 / 10) + '0');
			putchar((td2 / 10) + '0');
			if (td1 == 98 && td2 == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
