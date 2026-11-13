#include "main.h"

/* Find character c from string *s */
char *_strchr/* For betty */(char *s, char c)
{
	while (*s) /* While not at the end (NULL) of string */
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return ('\0');
}
