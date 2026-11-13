#include "main.h"

/* Find character c from string *s */
char *_strchr/* For betty */(char *s, char c)
{
	while (*s) /* While not at the end ('\0') of string */
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	/* *s has reached the end at '\0'. Check if c is '\0' to return s */
	if (c == '\0')
	{
		return (s);
	}
	return ('\0');
}
