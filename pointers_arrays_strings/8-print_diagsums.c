#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/*
* Get diagonal and anti diagonal sum of a table.
* Although data is not stored as a table, but a long line
* So if the table is 3x3
* That means we're not getting sum of row/col 1/1 + 2/2 + 3/3
* 3x3 table is stored as a long line of 9 indexes from 0 to 8
* We are actually getting sum of index 0, 4, 8
* reverse for the anti diag
*/
void print_diagsums/* For betty */(int *a, int size)
{
	int index;
	int sum1;
	int sum2;

	index = 0;
	sum1 = 0;
	sum2 = 0;

	/* Diag sum */
	while (index < (size * size)) /* While index has not passs max */
	{ /* Size 3 (3x3 table) means 9 indexes */
		sum1 += a[index]; /* At the value at current index to sum */
		index += (size + 1); /* Move 1 size + 1 forward to get the index equivalent to row/col 2/2*/
	}

	/* Anti diag sum */
	index = size * size - size; /* Set index to the equivalent of row/col 3/1 */

	/* Do the whole thing in reverse till index reaches 0 */
	while (index > 0)
	{
		sum2 += a[index];
		index -= (size - 1);
	}

	printf("%d, %d\n", sum1, sum2);
}
