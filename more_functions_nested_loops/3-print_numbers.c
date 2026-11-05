#include "main.h"

void print_numbers/* Print number from 0 to 9 */(void)
{
	int n;
	n = '0';

	while (n <= '9')
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
