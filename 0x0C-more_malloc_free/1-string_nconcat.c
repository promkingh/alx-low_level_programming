#include "main.h"

/**
 * string_nconcat - concatenates s1 and n number of bytes in s2
 * @s1: pointer to string one
 * @s2: pointer to string two
 * @n: number of bytes
 * Return: pointer to concatenated string or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *scc;
	unsigned int k, l, m, p, lentot;
	unsigned int lens1 = 0, lens2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s1[0] == '\0')
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (s2[0] == '\0')
		s2 = "";

	for (k = 0; s1[k]; k++)
		lens1++;
	for (l = 0 ; s2[l] && l < n; l++)
		lens2++;

	lentot = lens1 + lens2;

	scc = malloc(sizeof(char) * (lentot + 1));

	if (scc == NULL)
		return (NULL);

	for (m = 0; s1[m]; m++)
		scc[m] = s1[m];
	for (p = 0; p < lens2; p++)
	{
		scc[m] = s2[p];
		m++;
	}
	scc[m] = '\0';

	return (scc);
}
