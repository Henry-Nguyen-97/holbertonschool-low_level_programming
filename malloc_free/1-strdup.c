#include "main.h"

char *_strdup/* For betty */(char *str)
{
	int input_size;
	char *array;
	int index;

	if (str == NULL)
	{
		return (NULL);
	}

	input_size = 0;
	while (str[input_size])
	{
		input_size++;
	}

	array = malloc(sizeof(char) * input_size + 1);

	if (array == NULL)
	{
		return (NULL);
	}

	index = 0;
	while (index < input_size)
	{
		array[index] = str[index];
		index++;
	}
	array[index] = '\0';

	return (array);
}
