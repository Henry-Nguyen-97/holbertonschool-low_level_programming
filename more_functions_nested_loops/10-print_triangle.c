#include "main.h"

void print_triangle(int size)
{
	if (size > 0) /* Do if size > 0 */
	{
		int row;

		row = 1;

		while (row <= size)
		/* While row <= size, do the col commands, go down 1 line, add 1 to row*/
		{
			int col;

			col = 1;

			while (col <= size) /* While col <= size, print #, add 1 to col*/
			{
				_putchar('#');
				col++;
			}
			_putchar('\n');
			row++;
		}
	}
	else /* If size <= 0 go down a line */
	{
		_putchar('\n');
	}
}
