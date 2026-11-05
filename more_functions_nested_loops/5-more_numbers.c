#include "main.h"

void more_numbers/* Print number */(void)
{
	int d;
	int r;

	r = 1;

	while (r <= 10)
	{
		d = 0; /* needed inside so put inside */
		while (d <= 14)
		{
			if (d >= 10)
			{
				_putchar('0' + d / 10); /* Get 1st digit (befor comma after division) */
			}
			_putchar('0' + d % 10); /* Get last digit (remainder after division) */
			d++;
		}
		_putchar('\n');
		r++;
	}
}
