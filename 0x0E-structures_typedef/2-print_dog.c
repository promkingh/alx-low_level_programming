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
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", (*d).name);

		if ((*d).age <= 0)
			printf("Age: (nil)\n");
		else
			printf("Age: %f\n", (*d).age);

		if ((*d).owner == 0)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", (*d).owner);
	}
}
