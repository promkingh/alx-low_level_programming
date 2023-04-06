#include "main.h"

/**
 * check_string - check strings for indentical characters
 * @s1: Input string 1
 * @s2: Input string 2
 * @l: index for s1
 * @m: index for s2
 * Return: 1 or 0
 */

int check_string(char *s1, char *s2, int l, int m)
{
	if (*(s1 + l) == '\0' && *(s2 + m) == '\0')
		return (1);
	else if (*(s1 + l) == *(s2 + m))
		return (check_string(s1, s2, l + 1, m + 1));
	else if (*(s1 + l) == '\0' && *(s2 + m) == '*')
		return (check_string(s1, s2, l, m + 1));
	else if (*(s2 + m) == '*')
		return (check_string(s1, s2, l + 1, m) || check_string(s1, s2, l, m + 1));
	return (0);
}

/**
 * wildcmp - compares two strings
 * @s1: Input string 1
 * @s2: Input string 2
 * Return: 1 or 0
 */

int wildcmp(char *s1, char *s2)
{
	return (check_string(s1, s2, 0, 0));
}
