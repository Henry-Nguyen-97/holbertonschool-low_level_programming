#include "main.h"

/* Change lower char to upper char */
char *string_toupper/* For betty */(char *str)
{
	char *c; /* Declare a pointer */
	/* Another method is to use int index to represent position in string */

	c = str; /* Make it point to the start of whateber str point to */

	while (*c) /* While *c != '\0' */
	{
		if (*c >= 97 && *c <= 122) /* ASCII value range of a to z */
		{
			*c = *c - 32; /* ASCII value distance between lower case and upper case letters */
		}
		c++;
	}
	return (str);
}
