#include "main.h"
#include <stdio.h>

void print_array/* Print elements in an array */(int *a, int n)
{/* Array a has n elements */
	int element;

	element = 0;

	while (element < n)
	{
		if (element < n - 1) /* If not last element */
		{
			printf("%d, ", a[element]);
		}
		else
		{
			printf("%d", a[element]);
		}
		element++;
	}
	printf('\n');
}
