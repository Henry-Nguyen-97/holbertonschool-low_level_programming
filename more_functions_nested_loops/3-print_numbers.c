#include "main.h"

void print_numbers(void)
{
	int d;

	d = '0';

	while (d <= '9')
	{
		_putchar(d);
		d++;
	}
	_putchar('\n');
}
