#include "main.h"

void *_calloc/* For betty */(unsigned int nmemb, unsigned int size)
{
	void *memory;
	char *ptr;
	unsigned int index;

	if (nmemb <= 0 || size <= 0)
	{
		return (NULL);
	}

	memory = malloc(nmemb * size);

	if (memory == 0)
	{
		return (NULL);
	}

	index = 0;
	ptr = memory;
	while (index < (nmemb * size))
	{
		ptr[index] = 0;
		index++;
	}
	return (memory);
}
