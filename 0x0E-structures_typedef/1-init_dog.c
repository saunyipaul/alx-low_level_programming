#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - funcion prototype
 * @d: variable
 * @name: variable
 * @age: variable
 * @owner: variable
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
