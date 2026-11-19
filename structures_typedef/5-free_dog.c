#include "dog.h"

void free_dog/* For betty */(dog_t *d)
{
	/* Always check for NULL input */
	if (d == NULL)
	{
		return;
	}
	/* name_copy, owner_copy are local vars that only exist in the new_dog functiion. Their data now saved to name and owner */
	free(d->name);
	free(d->owner);
	free(d);
}
