#include "main.h"

int *array_range/* For betty */(int min, int max)
{
	int *memory;
	int index, size, value;

	if (min > max)
	{
		return (NULL);
	}

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
