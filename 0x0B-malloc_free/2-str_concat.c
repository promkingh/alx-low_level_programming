#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: pointer to string one
 * @s2: pointer to string two
 * Return: pointer to the concatenated string or NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *scc;
	int k, l, m, n, lens1, lens2, lentot;

	if (s1 == NULL || s1[0] == '\0')
		s1 = "";
	if (s2 == NULL || s2[0] == '\0')
		s2 = "";

	for (k = 0; s1[k]; k++)
		lens1++;
	for (l = 0; s2[l]; l++)
		lens2++;

	lentot = lens1 + lens2;

	scc = malloc((lentot + 1) * sizeof(char));

	if (scc == NULL)
		return (NULL);

	for (m = 0; s1[m]; m++)
		scc[m] = s1[m];
	for (n = 0; s2[n]; n++)
	{
		scc[m] = s2[n];
		m++;
	}

	return (scc);
}
