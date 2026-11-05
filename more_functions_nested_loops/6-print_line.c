#include "main.h"

void print_line/* Print line */(int n)
{
	int l;

	l = 0;

	if (n > 0) /* Print line if n is greater than 0 */
	{
		while (l <= n)
		{
			_putchar('_');
			l++;
		}
		_putchar('\n');
	}
	else /* Otherwise go down a line */
	{
		_putchar('\n');
	}
}
