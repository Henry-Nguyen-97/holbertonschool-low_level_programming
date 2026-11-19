#include "dog.h"

dog_t *new_dog(char *name, float age, char *owner)
{
	int name_size, owner_size, index;
	char *name_copy, *owner_copy;
	dog_t *dog_new;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

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

	owner_size = 0;
	while (owner[owner_size])
	{
		owner_size++;
	}

	owner_copy = malloc(sizeof(char) * owner_size + 1);
	if (owner_copy == NULL)
	{
		free(name_copy);
		return (NULL);
	}

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

	dog_new = malloc(sizeof(dog_t));
	if (dog_new == NULL)
	{
		free(name_copy);
		free(owner_copy);
		return (NULL);
	}

	dog_new->name = name_copy;
	dog_new->age = age;
	dog_new->owner = owner_copy;

	return (dog_new);
}
