#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to struct dog
 * @owner: owner's name
 * @name: name of dog
 * @age: age of dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;
	d->owner = owner;
	d->name = name;
	d->age = age;
}
