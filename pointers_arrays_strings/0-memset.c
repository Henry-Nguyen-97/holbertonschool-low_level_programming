#include "main.h"

/* Replace data in *s with b for the first n postions */
char *_memset/* For betty */(char *s, char b, unsigned int n)
{
	/* Declare a same type of var as n for comparison */
	unsigned int index;

	index = 0;

	while (index < n)
	{
		s[index] = b;
		index++;
	}
	return (s);
}
