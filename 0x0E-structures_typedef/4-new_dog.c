#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - create a new dog struct
 * @name: pointer to the name string
 * @age: Age parameter
 * @owner: pointer to the owner string
 *
 * Return: pointer to new dog or NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int cd;
	dog_t *nd;

	nd = malloc(sizeof(dog_t));
	if (nd == NULL)
		return (NULL);

	(*nd).name = malloc(sizeof(name) + 1);
	if ((*nd).name == NULL)
	{
		free(nd);
		return (NULL);
	}

	(*nd).owner = malloc(sizeof(owner) + 1);
	if ((*nd).owner == NULL)
	{
		free((*nd).name);
		free(nd);
		return (NULL);
	}

	for (cd = 0; name[cd]; cd++)
		(*nd).name[cd] = name[cd];
	(*nd).name = '\0';

	(*nd).age = age;

	for (cd = 0; owner[cd]; cd++)
		(*nd).owner[cd] = owner[cd];
	(*nd).owner = '\0';

	return (nd);
}
