#include <stdio.h>
/**
 * main - Printing combinations of two digits without repetion
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int fd, sd;

	for (fd = 0; fd < 10; fd++)
	{
		for (sd = fd + 1; sd < 10; sd++)
		{
			if (fd != sd)
			{
				putchar(fd + '0');
				putchar(sd + '0');
				if (fd + sd < 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
