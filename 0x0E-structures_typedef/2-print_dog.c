#include "dog.h"

/**
 * print_dog - Prints the details of the dog struct
 * @d: pointer to the dog struct
 *
 * Description: This function prints the values assigned
 *		in the main.c for name, age and owner
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if ((*d).name == NULL)
		{
			(*d).name = "(nil)";
			printf("Name: %s\n", (*d).name);
		}
		else
			printf("Name: %s\n", (*d).name);

		printf("Age: %f\n", (*d).age);

		if ((*d).owner == NULL)
		{
			(*d).owner = "(nil)";
			printf("Owner: %s\n", (*d).owner);
		}
		else
			printf("Owner: %s\n", (*d).owner);
	}
}
