#include "main.h"

void print_triangle/* Print triangle */(int size)
{
	if (size > 0) /* Do if size > 0 */
	{
		int row;

		row = 1;

		while (row <= size)
		/* While row <= size, do the commands, go down 1 line, add 1 to row*/
		{
			int col;
			int space;

			col = 1;

			space = size - row;

			while (space > 0) /* Put space untill space = 0*/
			{ /* If size 10, row 2 put 8 spaces*/
				_putchar(' ');
				space--;
			}

			while (col <= row) /* Then put # = row*/
			{ /* If row 6 then put 6 #*/
				_putchar('#');
				col++;
			}
			_putchar('\n');
			row++; /* Increase row and repeat */
		}
	}
	else /* If size <= 0 go down a line */
	{
		_putchar('\n');
	}
}
