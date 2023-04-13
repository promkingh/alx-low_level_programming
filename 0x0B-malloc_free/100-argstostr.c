#include "main.h"

/**
 * argstostr - concatenates all arguments
 * @ac: number of arguments
 * @av: array of arguments (srtings)
 * Return: pointer to concatenated string or NULL
 */

char *argstostr(int ac, char **av)
{
	char *st;
	int j, k, l, len = 0;

	if (ac == 0 || *av == NULL)
		return (NULL);

	for (j = 0; j < ac; j++)
	{
		if (av[j] == NULL)
			return (NULL);
		for (k = 0; av[j][k]; k++)
			len++;
		len++;
	}

	st = malloc((len) * sizeof(char));

	if (st == NULL)
		return (NULL);

	l = 0;

	for (j = 0; j < ac; j++)
	{
		for (k = 0; av[j][k]; k++)
			st[l++] = av[j][k];
		st[l++] = '\n';
	}

	st[l] = '\0';

	return (st);
}
