#include <stdio.h>
#include <string.h>
#include "dog.h"

/**
 * init_dog - Initializes a struct dog
 * @d: Pointer to the struct dog to initialize
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Description: This function initializes a struct dog with the provided
 * name, age, and owner values.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	strncpy(d->name, name, sizeof(d->name) - 1);
	d->name[sizeof(d->name) - 1] = '\0';
	d->age = age;
	strncpy(d->owner, owner, sizeof(d->owner) - 1);
	d->owner[sizeof(d->owner) - 1] = '\0';
}
