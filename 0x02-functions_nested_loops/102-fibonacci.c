#include <stdio.h>

/**
 * main - Print the first 50 fibonacci numbers starting with 0 and 1
 *
 * Return: 0 Success
 */

int main(void)
{
	int i;
	long int t1, t2, nt;

	n = 50;
	t1 = 0;
	t2 = 1;

	for (i = 1; i <= n; i++)
	{
		nt = t1 + t2;
		printf("%llu", nt);
		t1 = t2;
		t2 = nt;
		nt = t1 + t2;
		if (i != n)
			printf(",");
		else
			printf("\n");
	}
	return (0);
}
