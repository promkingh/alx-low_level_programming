#include "main.h"
#include <stdio.h>

/**
 * leet - encode string
 * @s: input string
 * Return: char.
 */

char *leet(char *s)
{
	int i, j;
	char c[] = "AaEeLlOoTt";
	char n[] = "4433110077";

	for (i = 0; s[i]; i++)
	{
		for (j = 0; j < 9; j++)
		{
			if (s[i] == c[j])
				s[i] = n[j];
		}
	}
	return (s);
}

