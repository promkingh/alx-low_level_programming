#include "main.h"

/**
 * _strdup - duplicate a string
 * @str: pointer to the tring to duplicate
 * Return: pointer to the duplicated string or NULL
 */

char *_strdup(char *str)
{
	unsigned int i, j, len = 0;
	char *s;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;

	s = malloc((len + 1) * sizeof(char));

	if (s == NULL)
		return (NULL);

	j = 0;

	while (j < len)
	{
		s[j] = str[j];
		j++;
	}

	return (s);
}
