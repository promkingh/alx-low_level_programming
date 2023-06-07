#include "main.h"
/**
 * _strlen - Prints the length of a string.
 * @s: the string to be printed
 * Return: the length of string
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}

/**
 * check_pal - check if s is palindrome.
 * @s: input string
 * @st: start index
 * @nd: end index
 * Return: 1 if s is palindrome, 0 otherwise.
 */

int check_pal(char *s, int st, int nd)
{
	if (*(s + st) == *(s + nd))
	{
		if (st > nd / 2)
			return (1);
		return (check_pal(s, st + 1, nd - 1));
	}
	return (0);
}

/**
 * is_palindrome - check if s is a palindrome
 * @s: input string
 * Return: 1 or 0
 */

int is_palindrome(char *s)
{
	int len = _strlen(s);

	if (*s == '\0')
		return (1);
	return (check_pal(s, 0, len - 1));
}
