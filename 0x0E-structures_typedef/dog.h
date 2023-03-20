#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure for object dog
 * @name: name of object
 * @age: age of object
 * @owner: owner of the object
 * Description: long description
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;
/* Additional function prototypes */
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
