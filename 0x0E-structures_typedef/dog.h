#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <string.h>

/**
 * struct dog - The dog's information
 * @name: first member
 * @age: second member
 * @owner: third member
 *
 * Description: This details the dogs information which are
 *		it's name, age and its' owner
 */

struct dog
{
	char name[50];
	float age;
	char owner[50];
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOH_H */
