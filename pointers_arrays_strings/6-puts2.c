#include "main.h"

void puts2/* Print every other char */(char *str)
{
	long position;

	position = 0;

	/* To avoid going over the string when number of data is odd */
	while (str[position] != '\0' && str[position] + 1 != '\0')
	/* Do only while current and next position in string is not null*/
	{
		_putchar (str[position]); /* Print data at position */
		position += 2; /* Increase position by 2*/
	}

	/* Handle the last data */
	if (str[position] != '\0') /* Check if this last position is  not null */
	{
		_putchar (str[position]); /* Print data at position */
	}
	_putchar ('\n');
}
