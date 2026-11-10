#include "main.h"

void puts2/* Print every other char */(char *str)
{
	int position;

	position = 0;

	while (str[position] != '\0')
	{
		if (position % 2 == 0)
		{
			_putchar(str[position]);
		}
			position++;
	}
	_putchar('\n');
}
