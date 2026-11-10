#include "main.h"

char *_strcpy/* Copy pointer's target to another */(char *dest, char *src)
{
	int position;

	position = 0;

	/* While data at current position of src is not null */
	while (src[position] != '\0')
	{
		/* Set data at current position of dest to of src */
		dest[position] = src[position];
		position++; /* Next position */
	}
	/* Set the current position of dest to null */
	dest[position] = '\0';

	return (dest); /* Return the data */
}
