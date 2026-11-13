#include "main.h"

char *_strpbrk(char *s, char *accept)
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
