#include "main.h"

char *_strstr/* For betty */(char *haystack, char *needle)
{
	int index;

	while (*haystack)
	{
		index = 0;

		while (needle[index] && haystack[index] == needle[index])
		{
			index++;
		}
		if (needle[index] == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (0);
}
