#include "main.h"

void print_most_numbers/* Print 0 to 9 except 2 4 */(void)
{
	int d;
	
	d = '0';

	while (d <= '9')
	{
		if (d != '2' && d != '4')
		{
			_putchar(d);
			d++;
		}
		else
		{
			d++;
		}
	}
	_putchar('\n');
}
