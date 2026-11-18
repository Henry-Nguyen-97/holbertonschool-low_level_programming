#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
* struct dog - Declaring custom data types
* @name: The dog's name
* @age: The dog's age
* @owner: The owner's name
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
