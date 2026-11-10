#include "main.h"

void print_rev/* Print in reverse */(char *s)
{
	int length;

	length = 0;

	while (s[length] != '\0') /* Find length */
	{
		length++;
	}

	int position;

	position = length - 1; /* Set position to 2nd last, avoid '\0' */

	while (position >= 0) /* Print char from position 2nd last to 1st*/
	{
		_putchar (s[position]);
		position--;
	}
	_putchar ('\n');
}
