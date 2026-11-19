#include "dog.h"

/* Create a new dog, store a copy of name and owner */
dog_t *new_dog/* For betty */(char *name, float age, char *owner)
{
	int name_size, owner_size, index;
	char *name_copy, *owner_copy;
	dog_t *dog_new;

	/* Check for valid name and owner input */
	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	/* Find size of name for malloc */
	name_size = 0;
	while (name[name_size])
	{
		name_size++;
	}

	name_copy = malloc(sizeof(char) * name_size + 1);
	if (name_copy == NULL)
	{
		return (NULL);
	}

	/* Find size of owner for malloc */
	owner_size = 0;
	while (owner[owner_size])
	{
		owner_size++;
	}

	owner_copy = malloc(sizeof(char) * owner_size + 1);
	if (owner_copy == NULL)
	{
		free(name_copy); /* name_copy has memory reserved at this point, needed free */
		return (NULL);
	}

	/* Copy the name and owner */
	index = 0;
	while (index < name_size)
	{
		name_copy[index] = name[index];
		index++;
	}
	name_copy[index] = '\0';

	index = 0;
	while (index < owner_size)
	{
		owner_copy[index] = owner[index];
		index++;
	}
	owner_copy[index] = '\0';

	/* Allocate memory for the struct itself */
	dog_new = malloc(sizeof(dog_t));
	if (dog_new == NULL)
	{
		/* Free reserved memory of the other 2 1st */
		free(name_copy);
		free(owner_copy);
		return (NULL);
	}

	/* Create/initialize the dog */
	dog_new->name = name_copy;
	dog_new->age = age;
	dog_new->owner = owner_copy;

	return (dog_new);
}
