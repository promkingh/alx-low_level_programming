#include "dog.h"

/**
 * init_dog - Initializes a dog struct with the provided values
 * @d: pointer to the dog struct to initialize
 * @name: pointer to the name string to set in the dog struct
 * @age: age value set to dog struct
 * @owner: pointer to the owner string set to dog struct
 *
 * Description: This function initializes the fields of the dog struct pointed
 *		to by @d with @name, @age and @owner values provided
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	strcpy(d->name, name);
	d->age = age;
	strcpy(d->owner, owner);
}
