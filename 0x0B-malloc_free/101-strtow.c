#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * words_count - counts the number of words in a given string
 * @str: given string
 * Return: pointer to the number
 */

int words_count(char *str)
{
	int k, l, nwrds;

	k = 0;
	nwrds = 0;

	for (l = 0; str[l]; l++)
	{
		if (str[l] == ' ')
			k = 0;
		else if (l == 0)
		{
			k = 1;
			nwrds++;
		}
	}
	if (nwrds == 0)
		return (NULL);

	return (nwrd);
}

/**
 * strtow - splits a string into words
 * @str: string to be spilt
 * Return: pointer to an array of strings
 */
char **strtow(char *str)
{
	int arr_ind, words_ct, k, l, ct,  st, nd;
	char **new_string, *temp_string;

	arr_c = 0;
	k = 0;
	l = 0;

	while (*(str + arr_ind))
		arr_ind++;

	new_string = (char **)malloc(sizeof(char *) * (words_count(*str) + 1));

	if (new_string == NULL)
		return (NULL);

	for (ct = 0; ct < arr_ind; ct++)
	{
		if (str[ct] == ' ' || str[ct] == '\0')
		{
			if (k)
			{
				nd = ct;
				temp_string = (char *)malloc(sizeof(char) * (k + 1));

				if (temp_string == NULL)
					return (NULL);
				while (st < nd)
					*tem_string++ = str[st++];
				*temp_string = '\0';
				new_string[l] = temp - k;
				l++;
				k = 0;
			}
		}
		else if (k++ == 0)
			st = ct;
	}
	new_strings[l] =  NULL;
	return (new_string);
}
