#include <stdio.h>
/**
 * main - Printing combinations of two digits without repetion
 *
 * Return: Always 0 (Success)
 */
int main(void)
{	/* Initial first, second and third digits*/
	int fd, sd, td;

	for (fd = 0; fd < 10; fd++)
	{
		for (sd = fd + 1; sd < 10; sd++)
		{
			for (td = sd + 1; td < 10; td++)
			{
				if (fd != sd)
				{
					putchar(fd + '0');
					putchar(sd + '0');
					putchar(td + '0');
					if (fd + sd + td < 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
