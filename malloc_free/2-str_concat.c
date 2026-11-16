#include "main.h"

/* Get 2 strings, return "" for each NULL, find size of each, allocate memory - return NULL of allocate 0, concatenate, retun result */
char *str_concat/* For betty */(char *s1, char *s2)
{
	int size1, size2, index;
	char *array;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	size1 = 0;
	while (s1[size1])
	{
		size1++;
	}

	size2 = 0;
	while (s2[size2])
	{
		size2++;
	}

	array = malloc(sizeof(char) * (size1 + size2) + 1);

	if (array == NULL)
	{
		return (NULL);
	}

	index = 0;
	while (index < size1)
	{
		array[index] = s1[index];
		index++;
	}

	index = 0;
	while (index < size2)
	{
		array[index + size1] = s2[index];
		index++;
	}
	array[index + size1] = '\0';

	return (array);
}
