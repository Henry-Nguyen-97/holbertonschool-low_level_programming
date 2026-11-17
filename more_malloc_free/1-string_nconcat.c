#include "main.h"

char *string_nconcat/* For betty */(char *s1, char *s2, unsigned int n)
{
	unsigned int size1, size2, index;
	char *memory;

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

	if (n < size2)
	{
		size2 = n;
	}

	memory = malloc(sizeof(char) * (size1 + size2) + 1);

	if (memory == NULL)
	{
		return (NULL);
	}

	index = 0;
	while (index < size1)
	{
		memory[index] = s1[index];
		index++;
	}

	index = 0;
	while (index < size2)
	{
		memory[index + size1] = s2[index];
		index++;
	}
	memory[index + size1] = '\0';
	return (memory);
}
