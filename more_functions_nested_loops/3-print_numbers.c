#include "main.h"
#include "_putchar.c"

void print_numbers/* Print number from 0 to 9 */(void)
{
	int d;

	d = 0;

	while (d <= 9)
	{
		_putchar('0' + d);
		d++;
	}
	_putchar('\n');
}
