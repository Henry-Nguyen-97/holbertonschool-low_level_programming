#include <stdio.h>

void print_table/* multiplivation table */(int size)
{
	int row, col;
	size = 4;

	for (row = 1; row <= size; row++)
	{
		for (col = 1; col <= size; col++)
		{
			printf("%d ", row * col);
		}
		printf("\n");
	}
}

/* -- DO NOT Modify the code below this line -- */

int main/* Print the table */(void)
{
	print_table(4);
	return 0;
}
