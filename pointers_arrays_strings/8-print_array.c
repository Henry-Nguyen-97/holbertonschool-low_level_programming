#include "main.h"

void print_array(int *a, int n)
{
	int element;

	element = 0;

	while (element < n)
	{
		if (element < n - 1)
		{
			printf ("%d, ", a[element]);
		}
		else
		{
			printf ("%d\n", a[element]);
		}
		element++;
	}
}
