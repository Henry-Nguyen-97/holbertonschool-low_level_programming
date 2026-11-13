#include "main.h"

/*
* Find the 1st char in *s that match any char in *accept
* Return point to that char in *s
*/
char *_strpbrk/* For betty */(char *s, char *accept)
{
	int index;

	while (*s)
	{
		index = 0;

		while (accept[index] != '\0')
		{
			if (*s == accept[index])
			{
				return (s);
			}
			index++;
		}
		s++;
	}
	return (0);
}
