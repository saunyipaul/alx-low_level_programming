#include <stdlib.h>
#include "dog.h"

/**
 * fre_dogs - prototype function
 * @d: variable
 * Return: void
 *
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
