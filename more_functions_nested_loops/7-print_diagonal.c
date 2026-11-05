#include "main.h"

void print_diagonal/* Print diag lines */(int n)
{
int l;

l = 0;

	if (n > 0) /* Print line if n is greater than 0 */
	{
		while (l < n) /* While l is less than n*/
		{
			int s;
			s = 0;
			while (s <= l) /* While s is less than l */
			{
				if (s != 0) /* If s is not 0 add a space than increase s */
				{
					_putchar(' ');
					s++;
				}
				else
				{
					s++;
				}
			}
			_putchar('\\');
			_putchar('\n');
			l++;
		}
	}
	else /* Otherwise go down a line */
	{
		_putchar('\n');
	}
}
