#include "main.h"
#include <stdio.h>

/**
 * cap_string - capitalizes the first letter of every word
 * @s: input string
 * Return: char.
 */

char *cap_string(char *s)
{
	int d, e;
	char a[] = " \t\n,;.!?\"(){}";

	for (d = 0; s[d]; d++)
	{
		for (e = 0; a[e]; e++)
		{
			if (d == 0)
			{
				if (s[d] >= 'a' && s[d] <= 'z')
					s[d] -= 32;
			}

			else if (s[d] == a[e])
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
	}
	return (s);
}
