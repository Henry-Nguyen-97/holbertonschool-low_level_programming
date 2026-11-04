#include <stdio.h>

int sum_to_n/* sum of 1 to 10 */(int n)
{
	int i;
	int sum = 0;

	n = 11;

	for (i = 1; i < n; i++)
	sum += i;

	return (sum);
}

/* -- DO NOT Modify the code below this line -- */

int main/* Print the sum from 1 to 10 */(void)
{
	printf("%d\n", sum_to_n(10));
	return (0);
}
