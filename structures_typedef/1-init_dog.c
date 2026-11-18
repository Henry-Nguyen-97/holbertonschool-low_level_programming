#include "dog.h"

/**
* Initialize data for the struct dog.
* @d: Pointer to dog variable
* @name: Dog's name
* @age: Dog's age
* @owner: Owner's name
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
