#include "dog.h"

/* Print info for dog */
void print_dog/* For betty */(struct dog *d)
{
	/*Check if input is NULL */
	if (d == NULL)
	{
		return;
	}

	/* Check if name is NULL */
	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}

	/* Age is a float so can't be NULL, just print */
	printf("Age: %f\n", d->age);

	/* Check if owner is NULL */
	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}
}
