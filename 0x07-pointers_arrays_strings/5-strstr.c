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
		hs = (const char *) haystack;
		nd = (const char *) needle;

		while (*hs && *nd && (*hs == *nd))
		{
			hs++;
			nd++;
		}
		if (!*nd)
		{
			return ((char *) haystack);
			break;
		}
		haystack++;
	}
	return (NULL);
}
