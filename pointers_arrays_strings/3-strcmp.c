#include "main.h"

int _strcmp/* Comparing ASCII value (order) */(char *s1, char *s2)
{
	unsigned char value_1;
	unsigned char value_2;
	int result;

	value_1 = 0;
	value_2 = 0;

	/*
	* While value at s1 is not null,
	* and value at s1 = value at s2.
	* Move to next position of both,
	* and continue loop.
	*/
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	/*
	* Get the comparision value.
	* Negative if lower.
	* Positive if higher.
	* 0 if even.
	*/
	value_1 = *s1;
	value_2 = *s2;
	result = value_1 - value_2;
	return (result);
}
