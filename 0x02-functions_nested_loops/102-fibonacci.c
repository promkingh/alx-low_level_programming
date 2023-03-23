#include <stdio.h>

/**
 * main - Print the first 50 fibonacci numbers starting with 0 and 1
 *
 * Return: 0 Success
 */

int main(void)
{
	int n, i, t1, t2, nt;

	n = 50;
	t1 = 1;
	t2 = 2;
	nt = t1 + t2;

	printf("%d, %d, ", t1, t2);

	for (i = 1; i <= n; i++)
	{
		printf("%d", nt);
		t1 = t2;
		t2 = nt;
		nt = t1 + t2;
		if (i != n);
			printf(",");
		else
			printf("\n");
	}
	return (0);
}
