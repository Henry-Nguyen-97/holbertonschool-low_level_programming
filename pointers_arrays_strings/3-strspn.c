#include "main.h"

/*
* Count characters in *s that match any character in *accept
* Compare from left to right in *s
* If not match found stop, and return count immediately
*/
unsigned int _strspn/* For betty */(char *s, char *accept)
{
	unsigned int count;
	int index;
	int found;

	count = 0;

	while (*s)
	{
		found = 0;
		index = 0;

		while (accept[index] != '\0')
		{
			if (*s == accept[index])
			{
				found = 1;
				break;
			}
			index++;
		}
		if (!found)
		{
			break;
		}
		else
		{
			count++;
			s++;
		}
	}
	return (count);
}
