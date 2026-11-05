#include "main.h"

/**
 *print_numbers- prints the numbers 0 - 9 followed by a newline.
 *Return: returns nothing since its return type is void
 */

void print_numbers(void)
{
	int i;

	i = '0';

	while (i <= '9')
	{
		_putchar(i);
		i = i + 1;
	}
	_putchar('\n');
}
