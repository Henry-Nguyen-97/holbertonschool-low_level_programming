#include "main.h"

void swap_int/* Swap intergers */(int *a, int *b)
{
	int origin_a;
	int origin_b;

	/* Save original nubmers */
	origin_a = *a;
	origin_b = *b;

	/* Swap the numbers */
	*a = origin_b;
	*b = origin_a;
}
