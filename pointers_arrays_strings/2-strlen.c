#include "main.h"

int _strlen/* Countr string length*/(char *s)
{
	size_t length; /* Declare an int variable */
	
	while (s[length] != '\0') /* Slot each character in string into the variable to see if it's not null*/
		{ /* If it's not null */
			length++; /* Increase length value by 1*/
		}
	return (length);
}
