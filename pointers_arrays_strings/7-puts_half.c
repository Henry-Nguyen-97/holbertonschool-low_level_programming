#include "main.h"

void puts_half/* Print half of the data */(char *str)
{
	int length;
	int h2; /* "2nd half" variable */

	length = 0;

	while (str[length] != '\0') /* Get length of string */
	{
		length++;
	}

	h2 = 0;

	if (length % 2 == 0)
	{
		h2 = length / 2;
	}
	else
	{
		h2 = (length + 1) / 2;
	}

	while ( h2 <= length)
	{
		_putchar (str[h2]);
		h2++;
	}
	_putchar ('\n');
}
