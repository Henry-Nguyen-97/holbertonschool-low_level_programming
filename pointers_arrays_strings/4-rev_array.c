#include "main.h"

void reverse_array/* reverse an array */(int *a, int n)
{
	int t;
	int i;

	t = 0;
	i = n - 1;

	while (i > (n / 2))
	{
		t = a[i];
		a[i] = a[(n - i - 1)];
		a[n - i - 1] = t;
		i--;
	}
}
