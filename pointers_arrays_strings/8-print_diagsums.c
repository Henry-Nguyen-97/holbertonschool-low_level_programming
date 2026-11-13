#include "main.h"
#include <stdlib.h>

void print_diagsums/* For betty */(int *a, int size)
{
	int index;
	int sum1;
	int sum2;

	index = 0;

	while (index < (size * size))
	{
		sum1 += a[index];
		index += (size + 1);
	}

	index = size * size - size;

	while (index > 0)
	{
		sum2 += a[index];
		index -= (size - 1);
	}

	printf ("%d, %d\n", value1, value2);
}
