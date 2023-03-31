#include "main.h"
#include <stdio.h>

/**
 * cap_string - capitalizes the first letter of every word
 * @s: input string
 * Return: char.
 */

char *cap_string(char *s)
{
	int d;

	for (d = 0; s[d] != '\0'; d++)
	{
		if (d == 0)
		{
			if (s[d] >= 'a' && s[d] <= 'z')
				s[d] -= 32;
		}
		if (s[d] == ' ' || s[d] == '.' || s[d] == '!' || s[d] == '\n' || s[d] == ';')
		{
			d++;
			if (s[d] >= 'a' && s[d] <= 'z')
				s[d] -= 32;
			else
			{
				d++;
				if (s[d] >= 'a' && s[d] <= 'z')
					s[d] -= 32;
			}
		}
		else if (s[d] == ',' || s[d] == '"' || s[d] == '?' || s[d] == '\t')
		{
			d++;
			if (s[d] >= 'a' && s[d] <= 'z')
				s[d] -= 32;
			else
			{
				d++;
				if (s[d] >= 'a' && s[d] <= 'z')
					s[d] -= 32;
			}
		}
		else if (s[d] == '(' || s[d] == ')' || s[d] == '{' || s[d] == '}')
		{
			d++;
			if (s[d] >= 'a' && s[d] <= 'z')
				s[d] -= 32;
			else
			{
				d++;
				if (s[d] >= 'a' && s[d] <= 'z')
					s[d] -= 32;
			}
		}

	}

	return (s);
}
