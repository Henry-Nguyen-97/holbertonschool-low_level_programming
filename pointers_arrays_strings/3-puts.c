#include "main.h"

void _puts/* Print string */(char *str)
{
	while (*str != '\0') /* Check if the char in string != '\0' */
	{
		_putchar (*str); /* Print the char */
		* str++; /* Move to the next char */
	}
	_putchar ('\n');
}
