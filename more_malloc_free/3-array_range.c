#include "main.h"

/* Create an array that store values from min to max */
int *array_range/* For betty */(int min, int max)
{
	int *memory;
	int index, size, value;

	if (min > max)
	{
		return (NULL);
	}

	/* Size of the array */
	size = max - min + 1;

	memory = malloc(sizeof(int) * size);

	if (memory == 0)
	{
		return (NULL);
	}

	index = 0;
	value = min;
	while (value <= max)
	{
		memory[index] = value;
		value++;
		index++;
	}
	return (memory);
}
