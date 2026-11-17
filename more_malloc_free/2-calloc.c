#include "main.h"

/* Allocate memory for an array, pass 0 to all slots */
void *_calloc/* For betty */(unsigned int nmemb, unsigned int size)
{
	/* memory must be void cuz function return void */
	void *memory;
	/* void can't be operated so declare a pointer that would point to memory. Use char cuz we want to move 1 byte at a time and char is 1 byte */
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
