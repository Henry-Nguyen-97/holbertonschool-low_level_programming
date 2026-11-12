#include "main.h"

/* Change lower char to upper char */
char *string_toupper/* For betty */(char *str)
{
	char *c;

	c = str;

	while (*c)
	{
		if (*c >= 97 && *c <= 122)
		{
			*c = *c - 32;
		}
		c++;
	}
	return (c);
}
