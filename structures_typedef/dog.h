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

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);

#endif
