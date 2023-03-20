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
	dog_t *new_dog(char *name, float age, char *owner) {
    // Allocate memory for the dog structure
    dog_t *dog = (dog_t *) malloc(sizeof(dog_t));
    if (!dog) {
        // Memory allocation failed, return NULL
        return NULL;
    }
    // Allocate memory for the name and copy it
    dog->name = (char *) malloc(strlen(name) + 1);
    if (!dog->name) {
        // Memory allocation failed, clean up and return NULL
        free(dog);
        return NULL;
    }
    strcpy(dog->name, name);
    // Allocate memory for the owner and copy it
    dog->owner = (char *) malloc(strlen(owner) + 1);
    if (!dog->owner) {
        // Memory allocation failed, clean up and return NULL
        free(dog->name);
        free(dog);
        return NULL;
    }
    strcpy(dog->owner, owner);
    // Set the age
    dog->age = age;
    // Return the new dog
    return;
}
}
