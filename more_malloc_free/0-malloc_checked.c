#include "main.h"

/* Allocate memory, if fail teminate with status 98 */
void *malloc_checked/* For betty */(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);

	if (pointer == NULL)
	{
		/* Terminate with status */
		exit(98);
	}
	return (pointer);
}
