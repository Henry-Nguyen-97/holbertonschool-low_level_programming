#include "main.h"

/* Copy n data from src point to, to what dest point to */
char *_memcpy/* For betty */(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	index = 0;

	while (index < n)
	{
		dest[index] = src[index];
		index++;
	}
	return (dest);
}
