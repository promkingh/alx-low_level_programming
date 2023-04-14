#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * strtow - splits a string into words
 * @str: string to be spilt
 * Return: pointer to an array of strings
 */
char **strtow(char *str)
{
	int k;
	char **wds;
	char *wd;

	wds = (char **)malloc(sizeof(char *));
	wd = strtok(str, " ");
	k = 0;
	while (*wd)
	{
		wds[k] = wd;
		k++;
		wds = realloc(wds, sizeof(char *) * (k + 1));
		wd = strtok('\0', " ");
	}
	wds[k] = '\0';
	return (wds);
}
