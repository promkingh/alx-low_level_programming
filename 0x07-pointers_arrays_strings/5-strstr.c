#include "main.h"

/**
 * _strstr - compare two strings haystack and needle and returns haystack
 * i needle is found in it
 * @haystack: larger string
 * @needle: substring
 * Return: haystack or Null
 */

char *_strstr(char *haystack, char *needle)
{
	const char *hs, *nd;

	while (haystack)
	{
		hs = haystack;
		nd = needle;

		while (*hs && *nd && (*hs == *nd))
		{
			hs++;
			nd++;
		}
		if (!*nd)
			return ((char *) haystack);
		haystack++;
	}
	return (NULL);
}
