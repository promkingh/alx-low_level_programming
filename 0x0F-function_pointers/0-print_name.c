#include "function_pointers.h"

/**
 * print_name - prints the name given and the content of the void funtion
 * @name: name to be printed
 * @f: pointer to funtion
 *
 * Return: Void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		(*f)(name);
}
