#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * dog_t *new_dog - prototype
 * @name: variable
 * @age: variable
 * @owner: variable
 * function that creates a new dog
 * Return: Null if function fails
 *
 */

dog_t *new_dog(char *name, float age, char *owner)
{
		dog_t *dog = (dog_t *) malloc(sizeof(dog_t));

		if (!dog)
		{
			return (NULL);
		}
		dog->name = (char *) malloc(strlen(name) + 1);
		if (!dog->name)
		{
			free(dog);
			return (NULL);
		}
		strcpy(dog->name, name);
		dog->owner = (char *) malloc(strlen(owner) + 1);
		if (!dog->owner)
		{
			free(dog->name);
			free(dog);
			return (NULL);
		}
		strcpy(dog->owner, owner);
		dog->age = age;
		return (dog);
}
}
