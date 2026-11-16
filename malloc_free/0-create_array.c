#include "main.h"

/* Create an array of size with memory allocated, then pass a value into all slots */
char *create_array/* Create array */(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	/* Check if size == 0 */
	if (size == 0)
	{
		return (NULL);
	}

	/* Allocate memory */
	array = malloc(sizeof(char) * size);

	/* Check if allocate no memory */
	if (!array)
	{
		return (NULL);
	}

	index = 0;

	/* Pass value into all slots in array */
	while (index < size)
	{
		array[index] = c;
		index++;
	}
	return (array);
}
