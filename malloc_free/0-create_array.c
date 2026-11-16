#include "main.h"

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(sizeof(char) * size);

	if (!array)
	{
		return (NULL);
	}

	index = 0;
	while (index < size)
	{
		array[index] = c;
		index++;
	}
	return (array);
}
