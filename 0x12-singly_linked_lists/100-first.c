#include "lists.h"

void __attribute__((constructor)) print_string(void);

const char *string1 = "You're beat! and yet, you must allow,\n";
const char *string2 = "I bore my house upon my back!\n";
/**
 * print_string - prints global string
 */

void print_string(void)
{
	printf("%s%s", string1, string2);
}
