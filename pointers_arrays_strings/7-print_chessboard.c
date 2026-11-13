#include "main.h"

void print_chessboard/* For betty */(char (*a)[8])
{
	int row;
	int col;

	row = 0;

	while (row < 8)
	{
		col = 0;

		while (col < 8)
		{
			_putchar(a[row][col]);
			col++;
		}
		_putchar('\n');
		row++;
	}
}
