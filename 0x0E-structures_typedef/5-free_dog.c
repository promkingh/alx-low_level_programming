#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free the dog struct
 * @d: pointer to the dog struct
 *
 * Description: This function free the parameters of the dog struct which
 *		are name, age and owner.
 *
 * Return: Void
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free((*d).owner);
		free((*d).name);
		free(d);
	}
}
